module writeback_stage(
    input [2:0] lines_in,
    input clk, clk_en,
    input [29:0] ip_in,
    input [31:0] alu_in, from_mem, inst_in,
    output reg_we,
    output logic [31:0] to_reg,
    output [4:0] rd_addr
);
    reg [31:0] inst_reg = 0;
    reg [2:0] control_word = 0;
    reg [31:0] alu_buffer = 0;
    reg [29:0] ip_buffer = 0;

    assign rd_addr = inst_reg[25:21];

    always_ff @(posedge clk) begin
        if(clk_en) begin
            inst_reg <= inst_in;
            control_word <= lines_in;
            alu_buffer <= alu_in;
            ip_buffer <= ip_in;
        end
    end

    assign reg_we = control_word[0];
    always_comb begin : MultiplexToReg
        case(control_word[2:1])
        2'h0: to_reg = alu_buffer;
        2'h1: to_reg = {inst_reg[20:0], 11'h0};
        2'h2: to_reg = from_mem;
        2'h3: to_reg = {{ip_buffer+1'b1}, 2'h0};
        endcase
    end

endmodule : writeback_stage
