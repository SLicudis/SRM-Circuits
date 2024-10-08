module int_wait(
    input h_int,
    input clk,
    input av,
    output int_mode
);

reg state = 0;
reg [2:0] wait_ctr = 0;

always_ff @(posedge clk) begin
    if(av) begin
        if(h_int) wait_ctr <= wait_ctr + 1;
        else wait_ctr <= 0;
        if(wait_ctr == 7) state <= h_int;
        else state <= 0;
    end
end

assign int_mode = state && av;

endmodule