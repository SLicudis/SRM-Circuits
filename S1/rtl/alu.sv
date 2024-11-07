module alu(
    input [31:0] a, b,
    input [3:0] op,
    output logic [31:0] res
);

    wire [32:0] intermediate_addsub = a + {(b^{32{op[0]}})} + {31'b0, op[0]};
    logic signed [31:0] int_asr = $signed(a) >>> b[4:0];
    always_comb begin : operation
        case(op[2:0])
        3'h0: res = op[3] ? {31'b0, intermediate_addsub[32]} : intermediate_addsub[31:0];
        3'h1: res = op[3] ? {31'b0, !intermediate_addsub[32]} : intermediate_addsub[31:0];
        3'h2: res = a & b;
        3'h3: res = a | b;
        3'h4: res = a ^ b;
        3'h5: res = a >> b[4:0];
        3'h6: res = int_asr;
        3'h7: res = a << b;
        endcase
    end
endmodule : alu
