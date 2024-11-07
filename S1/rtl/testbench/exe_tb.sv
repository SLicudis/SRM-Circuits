module exe_tb(
    input clk, clk_en, sync_rst
);
    initial begin
        rs1 = 2;
        rs2 = 4;
        inst_in = 32'b000000_00000_0000_00000_0000100;
        control_word_in = 12'b00_0_0_0_01_0_1_0_0_0;
    end

    logic forward = 0;
    logic [4:0] rd_addr = 0;
    logic [31:0] rs1 = 0;
    logic [31:0] rs2 = 0;
    logic [31:0] inst_in = 0;
    logic [31:0] write_in = 0;
    logic [29:0] pc_in = 0;
    logic [11:0] control_word_in = 0;

    wire [31:0] alu_out;
    wire [31:0] to_mem;
    wire [31:0] inst_out;
    wire [29:0] to_pc;
    wire [29:0] ip_buffer_out;
    wire [2:0] write_back_lines;
    wire jmp;
    wire mem_req;
    wire mem_we;

    exe_stage tb_inst(
        .clk(clk), .forward(forward), .clk_en(clk_en),
        .rd_addr(rd_addr), .rs1(rs1), .rs2(rs2), .inst_in(inst_in),
        .write_in(write_in), .pc_in(pc_in), .control_word_in(control_word_in),
        .alu_out(alu_out), .to_mem(to_mem), .to_pc(to_pc), .ip_buffer_out(ip_buffer_out),
        .write_back_lines(write_back_lines), .jmp(jmp), .mem_req(mem_req), .mem_we(mem_we), .inst_out(inst_out)
    );

endmodule : exe_tb
