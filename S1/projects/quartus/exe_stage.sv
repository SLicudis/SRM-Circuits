module exe_stage(
    input clk, forward, clk_en,
    input [4:0] rd_addr,
    input [31:0] rs1, rs2, inst_in, write_in,
    input [29:0] ip_in,
    input [11:0] control_word_in,
    output [31:0] alu_out, to_mem, inst_out,
    output logic [29:0] to_ip, ip_buffer_out,
    output [2:0] write_back_lines,
    output jmp, mem_req, mem_we
);
    reg [31:0] rs1_buffer = 0;
    reg [31:0] rs2_buffer = 0;
    reg [31:0] inst_buffer = 0;
    reg [29:0] ip_buffer = 0;
    reg [11:0] control_word = 0;

    always_ff @(posedge clk) begin : BufferInputs
        if(clk_en) begin
            rs1_buffer <= rs1;
            rs2_buffer <= rs2;
            ip_buffer <= ip_in;
            control_word <= control_word_in;
            inst_buffer <= inst_in;
        end
    end

    logic [31:0] int_rs1;
    always_comb begin : intRS1_mux  //Includes forwarding
        case((forward && (rd_addr == inst_buffer[20:16]) && (rd_addr != 0)))
        1'b0: int_rs1 = rs1_buffer;
        1'b1: int_rs1 = write_in;
        endcase
    end

    logic [31:0] int_rs2;
    always_comb begin : intRS2_mux  //Includes forwarding
        case((forward && (rd_addr == inst_buffer[11:7]) && (rd_addr != 0)))
        1'b0: int_rs2 = rs2_buffer;
        1'b1: int_rs2 = write_in;
        endcase
    end

    logic [31:0] immediate;
    always_comb begin : ImmSel
        case(control_word[1])
        1'b0: immediate = {{20{inst_buffer[11]}}, inst_buffer[11:0]}; //DSI
        1'b1: immediate = {{20{inst_buffer[25]}}, inst_buffer[25:21], inst_buffer[6:0]}; //SSI
        endcase
    end
    
    logic [31:0] alu_b;
    always_comb begin : AluBsel //ALU_BSEL: RS2, IMM
        case(control_word[0])
        1'b0: alu_b = int_rs2; //RS2
        1'b1: alu_b = immediate; //IMM
        endcase
    end

    logic [3:0] alu_op;
    always_comb begin : AluModSel //ALU_MODSEL: FN4, 0
        case(control_word[2])
        1'b0: alu_op = inst_buffer[15:12]; //FN4
        1'b1: alu_op = 4'h0; //0
        endcase
    end

    always_comb begin : PcSel
        case(control_word[6:5])
        2'h0: to_ip = ip_buffer + {{20{inst_buffer[25]}}, inst_buffer[25:21], inst_buffer[6:2]}; //SSI
        2'h1: to_ip = ip_buffer + {{11{inst_buffer[20]}}, inst_buffer[20:2]}; //DI
        2'h2: to_ip = ip_buffer + int_rs1[31:2] + {{20{inst_buffer[11]}}, inst_buffer[11:2]}; //DSI
        2'h3: to_ip = 0;
        endcase
    end
    assign inst_out = inst_buffer;
    assign jmp = control_word[3] || (control_word[4] && brh_flag); //JMP Pin
    assign to_mem = int_rs2; //Output to MEM
    assign mem_we = control_word[7];
    assign mem_req = control_word[8];
    assign write_back_lines = control_word[11:9];
    assign ip_buffer_out = ip_buffer;

    logic brh_flag;
    always_comb begin : branchCompareAndSel
        case(inst_buffer[13:12])
        2'h0: brh_flag = inst_buffer[14] ^ (rs1_buffer == rs2_buffer);
        2'h1: brh_flag = inst_buffer[14] ^ (rs1_buffer < rs2_buffer);
        2'h2: brh_flag = inst_buffer[14] ^ ($signed(rs1_buffer) < $signed(rs2_buffer));
        default: brh_flag = 0;
        endcase
    end

    alu alu_inst(
        .a(int_rs1), .b(alu_b),
        .op(alu_op),
        .res(alu_out)
    );

endmodule : exe_stage
