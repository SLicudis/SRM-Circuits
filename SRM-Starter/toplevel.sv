
module DIG_D_FF_1bit
#(
    parameter Default = 0
)
(
   input d,
   input c,
   output q,
   output nq
);
    reg state;

    assign q = state;
    assign nq = ~state;

    always_ff @(posedge c) begin
        state <= d;
    end

    initial begin
        state = Default;
    end
endmodule



module DIG_Register_BUS #(
    parameter Bits = 1
)
(
    input c,
    input en,
    input [(Bits - 1):0]d,
    output [(Bits - 1):0]q
);

    reg [(Bits - 1):0] state = 'h0;

    assign q = state;

    always @ (posedge C) begin
        if (en)
            state <= d;
   end
endmodule

module Mux_2x1_NBits #(
    parameter Bits = 2
)
(
    input [0:0] sel,
    input [(Bits - 1):0] in_0,
    input [(Bits - 1):0] in_1,
    output reg [(Bits - 1):0] out
);
    always @ (*) begin
        case (sel)
            1'h0: out = in_0;
            1'h1: out = in_1;
            default:
                out = 'h0;
        endcase
    end
endmodule


module toplevel (
  input Res,
  input H_int,
  input En,
  input [31:0] D_in,
  input clk,
  output [31:0] D_out,
  output mr,
  output [21:0] Address,
  output clk2,
  output mem_we,
  output Int_en
);
  wire s0;
  wire [31:0] cache_out;
  wire m_req;
  wire mem_we_temp;
  wire [21:0] d_addr;
  wire [21:0] i_addr;
  wire jmp;
  wire [21:0] s1;
  wire [23:0] s2;
  wire [23:0] s3;
  wire [23:0] s4;
  wire [23:0] cache_addr;
  wire [31:0] s5;
  wire Cache_fetch;
  wire [21:0] s6;
  wire [31:0] s7;
  wire s8;
  SRM_core SRM_core_i0 (
    .clk( clk ),
    .En( s0 ),
    .Res( Res ),
    .H_int( H_int ),
    .D_in( D_in ),
    .I_in( cache_out ),
    .clk2( clk2 ),
    .MEM_req( m_req ),
    .MEM_we( mem_we_temp ),
    .D_Addr( d_addr ),
    .D_out( D_out ),
    .I_Addr( i_addr ),
    .jmp( jmp ),
    .int_en( Int_en ),
    .next_jmp( s1 )
  );
  // icache
  icache icache_i1 (
    .clk( clk ),
    .req( En ),
    .we( mem_we_temp ),
    .addr( s2 ),
    .dw_addr( s3 ),
    .din( D_in ),
    .jmp( jmp ),
    .jmp_addr( s4 ),
    .addr_out( cache_addr ),
    .dout( s5 ),
    .fetch( Cache_fetch )
  );
  assign s0 = (En & ~ Cache_fetch);
  DIG_Register_BUS #(
    .Bits(32)
  )
  DIG_Register_BUS_i2 (
    .D( s5 ),
    .C( clk ),
    .en( s8 ),
    .Q( s7 )
  );
  assign mr = (m_req | Cache_fetch);
  assign s2[1:0] = 2'b0;
  assign s2[23:2] = i_addr;
  assign s3[1:0] = 2'b0;
  assign s3[23:2] = d_addr;
  Mux_2x1_NBits #(
    .Bits(32)
  )
  Mux_2x1_NBits_i3 (
    .sel( mem_we_temp ),
    .in_0( s5 ),
    .in_1( s7 ),
    .out( cache_out )
  );
  assign s8 = ~ mem_we_temp;
  assign s4[1:0] = 2'b0;
  assign s4[23:2] = s1;
  assign s6 = cache_addr[23:2];
  Mux_2x1_NBits #(
    .Bits(22)
  )
  Mux_2x1_NBits_i4 (
    .sel( Cache_fetch ),
    .in_0( d_addr ),
    .in_1( s6 ),
    .out( Address )
  );
  assign mem_we = mem_we_temp;
endmodule
