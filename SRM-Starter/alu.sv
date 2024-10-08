module alu(
    input [31:0] a,
    input [31:0] b,
    input [3:0] op,
    output logic [31:0] res,
    output [3:0] sub_flags
);

always_comb begin
    case(op)
    4'h0: res = final_addition;
    4'h1: res = final_subtraction;
    4'h2: res = a & b;
    4'h3: res = a | b;
    4'h4: res = a ^ b;
    4'h5: res = a >> b;
    4'h6: res = a >>> b;
    4'h7: res = a << b;
    4'h8: res = {31'h0, add_carry};
    4'h9: res = {31'h0, sub_borrow};
    default: res = 0;
    endcase
end

wire [32:0] intermediate_addition = {1'b0, a} + {1'b0, b};
wire [32:0] intermediate_subtraction = {1'b0, a} - {1'b0, b};
wire sub_borrow = intermediate_subtraction[32];
wire add_carry = intermediate_addition[32];
wire [31:0] final_addition = intermediate_addition[31:0];
wire [31:0] final_subtraction = intermediate_subtraction[31:0];

assign sub_flags = {((a[31] == b[31]) && (final_subtraction[31] != a[31])), intermediate_subtraction[31], sub_borrow, {!(|(a - b))}}; //zero, borrow, sign, overflow

endmodule : alu
