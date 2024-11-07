module decode_stage(
    input clk, clk_en, invalid, reg_we,
    input [31:0] inst_in, reg_din,
    input [29:0] ip_in,
    input [4:0] rd_addr,
    output [11:0] control_word,
    output [31:0] inst_out, rs1_out, rs2_out
);

wire [11:0] intermediate_control_word;

assign inst_out = inst_in;
assign control_word = (invalid) ? 12'h0 : intermediate_control_word;

inst_rom irom(
    .opcode(inst_in[28:26]),
    .control_word(intermediate_control_word)
);
regfile rf(
    .clk(clk), .clk_en(clk_en), .we(reg_we),
    .din(reg_din), .rs1_addr(inst_in[25:21]), .rs2_addr(inst_in[11:7]), .rd_addr(rd_addr),
    .rs1(rs1_out), .rs2(rs2_out)
);

endmodule : decode_stage


/*
0. ALU_BSEL: REG, IMM
1. IMM_SEL: DSI, SSI
2. ALU_MODSEL: FN4, 0
3. JMP
4. BRH
5-6. PC_SEL: SSI, DI, DSI
7. MEM_WE
8. MEM_REQ
9. REG_WE
10-11. REG_INSEL: ALU, UPPER_IMM, MEM, PC+4
*/
