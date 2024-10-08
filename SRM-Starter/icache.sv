module icache(
    input clk,
    input req,
    input we,
    input [23:0] addr,
    input [23:0] dw_addr,
    input [31:0] din,
    input jmp,
    input [23:0] jmp_addr,
    output [23:0] addr_out,
    output reg [31:0] dout,
    output fetch
);

reg [14:0] tag [15:0];
reg [31:0] cache [255:0];
logic miss;
logic [7:0] cache_addr;
reg [3:0] low_pointer = 0;
reg stall;
logic cache_we;

initial begin
    dout = 0;
end
reg jms = 0;

always_ff @(posedge clk) begin
    if(!stall) jms <= jmp;
    if(jmp || fetch) dout <= cache[cache_addr];
    else dout <= cache[cache_addr + 1];
    if(cache_we) begin
        cache[cache_addr] <= din;
    end
end

always_comb begin
    cache_we = miss;
    if({1'b1, addr[23:10]} == tag[addr[9:6]]) begin
        miss = 0;
    end else begin
        miss = req && 1;
    end
    if(miss) cache_addr = {((jmp || jms) ? jmp_addr[9:6] : addr[9:6]), low_pointer};
    else cache_addr = jmp ? jmp_addr[9:2] : addr[9:2];
end

always_ff @(posedge clk) begin
    stall <= miss;
    if(miss) begin
        low_pointer <= low_pointer + 1;
        if(low_pointer == 15) begin
            tag[jmp ? jmp_addr : addr[9:6]] <= {1'b1, ((jmp || jms) ? jmp_addr[23:10] : addr[23:10])};
        end
    end
    if(!req && we && !miss) begin
        tag[dw_addr[9:6]] <= 0;
    end
end

assign addr_out = {addr[23:6], low_pointer, 2'b00};
assign fetch = miss || stall;

endmodule
