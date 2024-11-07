module alu_tb(
    input clk, clk_en, sync_rst
);
    reg [31:0] a = 0;
    reg [31:0] b = 0;
    reg [3:0] op = 0;
    wire [31:0] res;
    reg [31:0] timer = 0;

    always_ff @(edge clk) begin
        timer <= timer + 1;
        if(timer == 0) begin //Addition test: Expects 7
            a <= 2;
            b <= 5;
            op <= 0;
        end else if(timer == 1) begin //Subtraction test: Expects -3
            op <= 1;
        end else if(timer == 2) begin //AND test: expects 32'b0000_0000_1111_0000_0000_0000_0000_0000
            a <= 32'b0000_0000_1111_0000_0000_0000_0000_1111;
            b <= 32'b1111_0000_1111_0000_0000_0000_0000_0000;
            op <= 2;
        end else if(timer == 3) begin //OR test: expects 3
            a <= 1;
            b <= 2;
            op <= 3;
        end else if(timer == 4) begin //XOR: expects 1
            a <= 3;
            b <= 2;
            op <= 4;
        end else if(timer == 5) begin //SHR: expects 8
            a <= 32;
            b <= 2;
            op <= 5;
        end else if(timer == 6) begin //ASR: expects 32'b1110_0000_0000_0000_0000_0000_0000_0000
            a <= 32'b1000_0000_0000_0000_0000_0000_0000_0000;
            b <= 2;
            op <= 6;
        end else if(timer == 7) begin //SHL: expects 128
            a <= 32;
            b <= 2;
            op <= 7;
        end else if(timer == 8) begin //CCH: expects 1
            a <= 32'hffffffff;
            b <= 2;
            op <= 8;
        end else if(timer == 9) begin //BCH: expects 1
            a <= 1;
            b <= 2;
            op <= 9;
        end
    end


    alu alu_inst(
        .a(a), .b(b), .op(op), .res(res)
    );
endmodule : alu_tb
