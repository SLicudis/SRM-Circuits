module fetch_stage(
    input clk, rst, jmp, clk_en,
    input [29:0] jmp_in,
    output [29:0] inst_addr, to_pipe,
);

reg init_state = 0;
reg [29:0] ip = 0;
assign inst_addr = (!init_state || rst) ? 29'h0 : (jmp ? jmp_in : ip+1);
assign to_pipe = ip;

always_ff @(posedge clk) begin
    if(clk_en) begin
        init_state <= !rst;
        if(rst || !init_state) ip <= 0;
        else if(jmp) ip <= jmp_in;
        else ip <= ip + 1;
    end
end

endmodule : fetch_stage
