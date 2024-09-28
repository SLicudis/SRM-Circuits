module regfile(
    input [31:0] din,
    input clk,
    input c_we,
    input ir_tsf,
    input sr_in,
    input sr_we,
    input ks,
    input [1:0] sr_sel,
    input [4:0] asel,
    input [4:0] bsel,
    input [4:0] csel,
    input [31:0] pc,
    output logic [31:0] aout,
    output logic [31:0] bout,
    output [31:0] ir,
    output [3:0] sr
);

reg [3:0] status = 4'b1000;
reg [31:0] memory [31:0];
always_ff @(posedge clk) begin
    if(c_we) begin
        memory[csel] <= din;
    end
    if(ir_tsf) begin
        memory[5'h1d] <= pc;
    end
end

always_ff @(posedge clk) begin
    if(sr_we && status[0]) begin
        status[sr_sel] <= sr_in;
    end
    if(ks) begin
        status[0] = 1;
    end
end

always_comb begin
    case(asel)
    5'h0: aout = 0;
    5'h1: aout = status;
    5'h2: aout = pc;
    default: aout = memory[asel];
    endcase
    case(bsel)
    5'h0: bout = 0;
    5'h1: bout = status;
    5'h2: bout = pc;
    default: bout = memory[bsel];
    endcase
end

assign ir = memory[5'h3];
assign sr = memory[5'h1];

endmodule
