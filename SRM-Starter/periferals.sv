module periferals(
    input clk,
    input req,
    input [31:0] din,
    input [21:0] addr,
    input we,
    input [31:0] rom_in,
    input [7:0] tty_in,
    output reg [31:0] dout,
    output [20:0] rom_addr,
    output [7:0] tty_out,
    output tty_str,
    output tty_rd
);

assign rom_addr = addr[20:0];
reg [31:0] memory [4194303:0];

always_ff @(posedge clk) begin
    if(we) begin
        if((addr >= 22'b1000000000000000000000) && (addr <= 22'b1111111111111111111110)) memory[addr] <= din;
    end
end

always_ff @(posedge clk) begin
    if((addr >= 22'b0) && (addr <= 22'h1fffff)) dout <= rom_in;
    else if(addr == 22'h3fffff) dout <= {24'h0, tty_in};
    else dout <= memory[addr];
end

assign tty_out = din[31:24];
assign tty_str = (addr == 22'b1111111111111111111111) && we;
assign tty_rd = (addr == 22'b1111111111111111111111) && req;

endmodule