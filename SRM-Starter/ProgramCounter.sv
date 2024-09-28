module ProgramCounter(
    input wire [31:0] din,
    input wire we,
    input wire clk,
    input wire jmp,
    input wire rst,
    output wire [31:0] dout
    
);

reg [31:0] pc = 8;
always_ff @(posedge clk) begin
    if(we) begin
        if(!jmp && !rst) begin
            pc <= pc + 4;
        end
        if(jmp && !rst) begin
            pc <= din;
        end
        if(rst) begin
            pc <= 0;
        end
    end
end

assign dout = pc;

endmodule