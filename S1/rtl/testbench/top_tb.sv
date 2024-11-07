module top_tb(
    input clk, clk_en, sync_rst
);

    wire [31:0] inst_in;
    wire [31:0] data_in;

    wire mem_we;
    wire mem_req;
    wire [3:0] mask;
    wire [31:0] data_out;
    wire [29:0] inst_addr;
    wire [29:0] data_addr;

    toplevel cpu(
        .clk(clk), .clk_en(clk_en), .rst(sync_rst),
        .inst_in(inst_in), .data_in(data_in), .mem_we(mem_we),
        .mem_req(mem_req), .mask(mask), .data_out(data_out),
        .inst_addr(inst_addr), .data_addr(data_addr)
    );

    tb_inst_mem imem(
        .clk(clk), .rom_addr(inst_addr[4:0]), .inst_out(inst_in)
    );

endmodule : top_tb

module tb_inst_mem(
    input clk,
    input [4:0] rom_addr,
    output [31:0] inst_out
);
    reg [31:0] buffer = 0;
    always_ff @(posedge clk) buffer <= current_data;
    logic [31:0] current_data;
    assign inst_out = buffer;
    always_comb begin
        case(rom_addr)
        5'h0: current_data = 32'b000001_11111_00000_0000_000000000010;
        5'h1: current_data = 32'b000001_11111_11111_0000_000000000001;
        5'h2: current_data = 32'h141ffffc;
        default: current_data = 0;
        endcase
    end

endmodule : tb_inst_mem