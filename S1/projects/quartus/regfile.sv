module regfile(
    input clk, we, clk_en,
    input [31:0] din,
    input [4:0] rs1_addr, rs2_addr, rd_addr,
    output [31:0] rs1, rs2
);
    reg [31:0] memory [31:0];

    always_ff @(posedge clk) if(we && clk_en) memory[rd_addr] <= din;
    assign rs1 = (rs1_addr != 0) ? ((we && (rd_addr == rs1_addr)) ? din : memory[rs1_addr]) : 32'h0;
    assign rs2 = (rs2_addr != 0) ? ((we && (rd_addr == rs2_addr)) ? din : memory[rs2_addr]) : 32'h0;
endmodule : regfile