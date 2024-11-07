module mem_adj(
    input [31:0] from_mem, from_reg,
    input [3:0] fn4,
    input [1:0] addr_low,
    output logic [31:0] to_reg, to_mem,
    output logic [3:0] mask
);

logic [7:0] adj_byte;
logic [15:0] adj_word;
wire [1:0] size = fn4[1:0];

always_comb begin : Word_And_Byte_Adj
    case(addr_low)
    2'h0: begin adj_byte = from_mem[31:24]; adj_word = from_mem[31:16]; end
    2'h1: begin adj_byte = from_mem[23:16]; adj_word = from_mem[31:16]; end
    2'h2: begin adj_byte = from_mem[15:8]; adj_word = from_mem[15:0]; end
    2'h3: begin adj_byte = from_mem[7:0]; adj_word = from_mem[15:0]; end
    endcase
end

always_comb begin : Input_Format_Sel
    case(size)
    2'h0: to_reg = {{16{adj_word[15] & fn4[3]}}, adj_word};
    2'h1: to_reg = {{16{adj_word[15] & fn4[3]}}, adj_word};
    2'h2: to_reg = from_mem;
    2'h3: to_reg = from_mem;
    endcase
end

always_comb begin : OutputAdj_and_Mask
    to_mem = 32'h0;
    mask = 4'h0;
    if(fn4 == 0) begin
        case(addr_low)
        2'h0: begin to_mem = {from_reg[7:0], 24'h0}; mask = 4'b1000; end
        2'h1: begin to_mem = {8'h0, from_reg[7:0], 16'h0}; mask = 4'b0100; end
        2'h2: begin to_mem = {16'h0, from_reg[7:0], 8'h0}; mask = 4'b0010; end
        2'h3: begin to_mem = {24'h0, from_reg[7:0]}; mask = 4'b0001; end
        endcase
    end else if(fn4 == 1) begin
        case(addr_low)
        2'h0, 2'h1: begin to_mem = {from_reg[15:0], 16'h0}; mask = 4'b1100; end
        2'h2, 2'h3: begin to_mem = {16'h0, from_reg[15:0]}; mask = 4'b0011; end
        endcase
    end else if((fn4 == 2) || (fn4 == 3)) begin to_mem = from_reg; mask = 4'b1111; end;
end

endmodule : mem_adj

//Note: Use negedge flip flop in Word_and_Byte adj to prevent circling problems
