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
        .clk(clk), .rom_addr(inst_addr[9:0]), .inst_out(inst_in)
    );

    tb_dmem dmem(
        .address(data_addr[9:0]), .din(data_out), .dout(data_in), .clk(clk), .req(mem_req), .we(mem_we), .mask(mask)
    );

endmodule : top_tb

module tb_inst_mem(
    input clk,
    input [9:0] rom_addr,
    output [31:0] inst_out
);
    reg [31:0] buffer = 0;
    reg [31:0] memory [1023:0];
    always_ff @(posedge clk) buffer <= memory[rom_addr];
    assign inst_out = buffer;

    integer file;
    initial begin
        $readmemh("/mnt/e/Pogramacion/SystemVerilog/SRM/S1/rtl/rom_start.hex", memory);
    end

endmodule : tb_inst_mem

module tb_dmem(
    input [9:0] address,
    input [31:0] din,
    input [3:0] mask,
    input we, req, clk,
    output [31:0] dout
);
    reg [7:0] byte0 [1023:0];
    reg [7:0] byte1 [1023:0];
    reg [7:0] byte2 [1023:0];
    reg [7:0] byte3 [1023:0];
    reg [31:0] out_reg = 0;
    wire [31:0] debug = {byte3[1], byte2[1], byte1[1], byte0[1]};
    always_ff @(posedge clk) begin : Write
        if(we) begin
            if(mask[0]) byte0[address] <= din[7:0];
            if(mask[1]) byte1[address] <= din[15:8];
            if(mask[2]) byte2[address] <= din[23:16];
            if(mask[3]) byte3[address] <= din[31:24];
        end
    end
    assign dout = out_reg;
    always_ff @(posedge clk) if(req) out_reg <= {byte3[address], byte2[address], byte1[address], byte0[address]};

endmodule : tb_dmem