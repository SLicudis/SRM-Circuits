module connections(
    input [14:0] control_lines,
    input [31:0] inst_bus,
    input [31:0] din,
    input [31:0] alu_res,
    input [31:0] reg_bout,
    input [31:0] reg_aout,
    input [31:0] pc,
    input [31:0] ir,
    //Control lines
    output reg_c_we,
    output jmp,
    output sr_we,
    output mem_we,
    output ks,
    output ir_tsf,
    output mem_req,
    //Control buses
    output [3:0] fn1,
    output sr_in,
    output [4:0] reg_asel,
    output [4:0] reg_bsel,
    output [4:0] reg_csel,
    output [1:0] sr_sel,
    //Data buses
    output [31:0] alu_b_in,
    output logic [31:0] reg_din,
    output logic [31:0] pc_din,
    output logic [31:0] d_addr,
    output logic [31:0] dout,
    //
    output [1:0] fn_1_low,
    output [7:0] byteadj_out
);
assign fn_1_low = reg_in_sel;
assign byteadj_out = adjusted_din;

assign reg_c_we = control_lines[0];
assign jmp = control_lines[2];
assign sr_we = control_lines[3];
assign mem_we = control_lines[4];
assign ks = control_lines[5];
assign ir_tsf = control_lines[13];
assign mem_req = control_lines[14];

assign fn1 = inst_bus[16:13];
assign sr_in = inst_bus[22];
assign reg_asel = inst_bus[21:17];
assign reg_csel = inst_bus[26:22];
assign reg_bsel = inst_bus[12:8];
assign sr_sel = inst_bus[26:23];

assign alu_b_in = control_lines[1] ? {19'h0, inst_bus[12:0]} : reg_bout;

wire [1:0] reg_in_sel = control_lines[10:9];
wire [2:0] pc_in_sel = control_lines[8:6];
wire [1:0] daddr_sel = control_lines[12:11];
logic [31:0] store_addr;
logic [31:0] load_addr;
logic [31:0] adjusted_din;

logic [7:0] byte_in;
logic [15:0] word_in;
logic [7:0] byte_adj_out;
logic [15:0] word_adj_out;

wire [1:0] addr_byte_sel = d_addr[1:0];
wire addr_word_sel = d_addr[1];

wire [1:0] low_fn1 = fn1[1:0];


always_comb begin
    case(reg_in_sel)            //Reg in sel
    2'b00: reg_din = alu_res;
    2'b01: reg_din = inst_bus[21:0] << 10;
    2'b10: reg_din = adjusted_din;
    2'b11: reg_din = adjusted_din;
    endcase
    case(pc_in_sel)             //PC in sel
    3'b000: pc_din = pc + {{5{inst_bus[26]}}, inst_bus[26:0]};
    3'b001: pc_din = pc + {{19{inst_bus[26]}}, inst_bus[26:22], inst_bus[7:0]};
    3'b010: pc_din = reg_aout + {{19{inst_bus[26]}}, inst_bus[26:22], inst_bus[16:0]};
    3'b011: pc_din = din;
    3'b100: pc_din = ir;
    default: pc_din = 0;
    endcase
    case(daddr_sel)             //Addr sel
    2'b00: d_addr = store_addr;
    2'b01: d_addr = load_addr;
    2'b10: d_addr = 0;
    2'b11: d_addr = 4;
    endcase
    case(low_fn1)               //Address alignment
    2'h0: begin
        store_addr = reg_aout + {{19{inst_bus[26]}}, inst_bus[26:22], inst_bus[7:0]};
        load_addr = reg_aout + {{19{inst_bus[12]}}, inst_bus[12:0]};
    end
    2'h1: begin
        store_addr = reg_aout + {{19{inst_bus[26]}}, inst_bus[26:22], inst_bus[7:1], 1'b0};
        load_addr = reg_aout + {{19{inst_bus[12]}}, inst_bus[12:1], 1'b0};
    end
    2'h2: begin
        store_addr = reg_aout + {{19{inst_bus[26]}}, inst_bus[26:22], inst_bus[7:2], 2'b0};
        load_addr = reg_aout + {{19{inst_bus[12]}}, inst_bus[12:2], 2'b0};
    end
    default: begin
        store_addr = 0;
        load_addr = 0;
    end
    endcase
    case(addr_byte_sel)         //Adjust byte din
    2'b00: byte_in = din[31:24];
    2'b01: byte_in = din[23:16];
    2'b10: byte_in = din[15:8];
    2'b11: byte_in = din[7:0];
    endcase
    case(addr_word_sel)         //Adjust word din
    1'b0: word_in = din[31:16];
    1'b1: word_in = din[15:0];
    endcase
    case(low_fn1)               //Select data in type
    2'b00: adjusted_din = {24'b0, byte_in};
    2'b01: adjusted_din = {16'b0, word_in};
    2'b10: adjusted_din = din;
    default: adjusted_din = 0;
    endcase
    case(addr_byte_sel)         //Adjust data out with bytes
    2'b00: byte_adj_out = {reg_bout[7:0], din[23:0]};
    2'b01: byte_adj_out = {din[31:24], reg_bout[7:0], din[15:0]};
    2'b10: byte_adj_out = {din[31:16], reg_bout[7:0], din[7:0]};
    2'b11: byte_adj_out = {din[31:8], reg_bout[7:0]};
    endcase
    case(addr_word_sel)
    1'b0: word_adj_out = {reg_bout[15:0], din[15:0]};
    1'b1: word_adj_out = {din[23:16], reg_bout[15:0]};
    endcase
    case(low_fn1)
    2'b00: dout = byte_adj_out;
    2'b01: dout = word_adj_out;
    2'b10: dout = reg_bout;
    2'b11: dout = 0;
    endcase
end

endmodule

//FIX PROBLEM WITH MEMORY LOAD ACCESS DIN, WRONG LDW ADDR, EMPTY LDD ADDR

//0. C_WE
//1. ALU_Bsel
//2. PC_JMP
//3. SR_WE
//4. MEM_WE
//5. KS
//6-8. PC_IN: JMP, COND_JMP, IJR, DB_In, IRD
//9-10. REG_IN: ALU, UPPER_IMM, MEM
//11-12. MEM_ADDR: Store, Load, S_INT, H_INT
//13. IR_tsf
//14. Mem_REQ