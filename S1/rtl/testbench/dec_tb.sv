module dec_tb(
    input clk_en, clk, sync_rst
);

    wire invalid = 1;
    wire reg_we = 0;
    wire [31:0] inst_in = 32'b000000_00000000000000000000000000;
    wire [31:0] reg_din = 0;
    wire [4:0] rd_addr = 0;
    
    wire [11:0] control_word;
    wire [31:0] inst_out;
    wire [31:0] rs1_out;
    wire [31:0] rs2_out;

    decode_stage tb_inst(
        .clk(clk), .clk_en(clk_en),
        .invalid(invalid), .reg_we(reg_we),
        .inst_in(inst_in), .reg_din(reg_din),
        .rd_addr(rd_addr), .control_word(control_word),
        .inst_out(inst_out), .rs1_out(rs1_out), .rs2_out(rs2_out)
    );

endmodule : dec_tb