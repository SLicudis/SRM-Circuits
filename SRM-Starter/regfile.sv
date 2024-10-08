module regfile(
    input [31:0] din,
    input clk,
    input c_we,
    input ir_tsf,
    input ks,
    input [4:0] asel,
    input [4:0] bsel,
    input [4:0] csel,
    input [31:0] pc,
    output logic [31:0] aout,
    output logic [31:0] bout,
    output [31:0] ir,
    output int_en
);

initial memory[1] = 1;

reg [31:0] memory [31:0];
always_ff @(posedge clk) begin
    if(c_we) begin
        if(csel == 1) begin
            if(memory[1][0]) memory[1] <= din;
        end else memory[csel] <= din;
    end
    if(ir_tsf) memory[3] <= pc;
end

always_ff @(posedge clk) begin
    if(ks) begin
        memory[1][0] <= 1;
    end
end

always_comb begin
    case(asel)
    5'h0: aout = 0;
    5'h2: aout = pc;
    default: aout = memory[asel];
    endcase
    case(bsel)
    5'h0: bout = 0;
    5'h2: bout = pc;
    default: bout = memory[bsel];
    endcase
end

assign ir = memory[3];
assign int_en = memory[1][1];

endmodule
