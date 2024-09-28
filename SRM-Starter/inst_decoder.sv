module inst_decoder(
    input en,
    input int_en,
    input [4:0] opcode,
    input [3:0] sub_flags,
    input [3:0] func_1,
    input hardware_int,
    output [14:0] control_lines
);
wire [7:0] cond = {~sub_flags, sub_flags};
wire [1:0] fsel = func_1[1:0];
wire fout = cond[{func_1[2:0]}];
logic [14:0] intermediate_lines;
always_comb begin
    if(!(hardware_int && int_en)) begin
        case(opcode)
        5'h0: intermediate_lines = 15'b000000000000001; //ALU
        5'h1: intermediate_lines = 15'b000000000000011; //ALUI
        5'h2: intermediate_lines = 15'b000001000000001; //LUI
        5'h3: intermediate_lines = 15'b000000000010000; //Store
        5'h4: intermediate_lines = 15'b100110000000001; //Load
        5'h5: intermediate_lines = 15'b000000010000100; //IJR
        5'h6: intermediate_lines = 15'b000000000000100; //JMP
        5'h7: intermediate_lines = {12'b000000001000, fout, 2'b00}; //COND JMP
        5'h8: intermediate_lines = 15'b101000011100100; //SYSCALL
        5'h9: intermediate_lines = 15'b000000000001000; //SSB-CSB
        default: intermediate_lines = 0;
        endcase
    end else begin
        intermediate_lines = 15'b111100011100100;
    end
end
assign control_lines = (en) ? intermediate_lines : 0;
endmodule
//0. C_WE
//1. ALU_Bsel
//2. PC_JMP
//3. SR_WE
//4. MEM_WE
//5. KS
//6-8. PC_IN: JMP, COND_JMP, IJR, DB_In, IRD
//9-10. REG_IN: ALU, UPPER_IMM, MEM
//11-12. MEM_ADDR: Store, Load, S_INT, H_INT
//13. IRD_tsf
//14. Mem_REQ