module matrix_video(
    input [29:0] address,
    input [31:0] data_in,
    input clk, we,
    output [15:0] to_matrix,
    output [3:0] matrix_col_sel
);
    reg [15:0] buffer [15:0];
    reg [15:0] vmem [15:0];
    reg [3:0] cpointer = 0;
    int i;
    always_ff @(posedge clk) begin
        if(we) begin
            if((address[3])) begin
                for(i = 0; i <= 32; i = i + 1) vmem[i] <= buffer[i];
            end else begin buffer[{address[2:0], 1'b0}] <= data_in[31:16]; buffer[{address[2:0], 1'b1}] <= data_in[15:0]; end
        end
    end

    always_ff @(posedge clk) begin
        cpointer <= cpointer + 1;
    end
    assign matrix_col_sel = cpointer;
    assign to_matrix = {
        vmem[15][15-cpointer],
        vmem[14][15-cpointer],
        vmem[13][15-cpointer],
        vmem[12][15-cpointer],
        vmem[11][15-cpointer],
        vmem[10][15-cpointer],
        vmem[9][15-cpointer],
        vmem[8][15-cpointer],
        vmem[7][15-cpointer],
        vmem[6][15-cpointer],
        vmem[5][15-cpointer],
        vmem[4][15-cpointer],
        vmem[3][15-cpointer],
        vmem[2][15-cpointer],
        vmem[1][15-cpointer],
        vmem[0][15-cpointer]
    };

endmodule : matrix_video