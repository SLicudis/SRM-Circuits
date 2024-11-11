module video(
    input [29:0] address,
    input [31:0] data_in,
    input clk, we,
    output to_vram,
    output [7:0] vram_addr
);
    reg [15:0] buffer [15:0];
    reg [15:0] vmem [15:0];
    reg [7:0] pointer = 0;
    int i;
    always_ff @(posedge clk) begin
        if(we) begin
            if((address[3])) begin
                for(i = 0; i <= 32; i = i + 1) vmem[i] <= buffer[i];
            end else begin buffer[{address[2:0], 1'b0}] <= data_in[31:16]; buffer[{address[2:0], 1'b1}] <= data_in[15:0]; end
        end
    end

    always_ff @(posedge clk) begin
        pointer <= pointer + 1;
    end
    assign vram_addr = pointer;
    assign to_vram = vmem[pointer[7:4]][15-pointer[3:0]];

endmodule : video