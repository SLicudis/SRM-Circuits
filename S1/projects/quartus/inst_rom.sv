module inst_rom(
    input [2:0] opcode,
    output logic [11:0] control_word
);
    always_comb begin
        case(opcode)
        3'h0: control_word = 12'b00_1_0_0_00_0_0_0_0_0; //ALU
        3'h1: control_word = 12'b00_1_0_0_00_0_0_0_0_1; //ALUI
        3'h2: control_word = 12'b01_1_0_0_00_0_0_0_0_0; //LUI
        3'h3: control_word = 12'b00_0_0_1_00_0_0_1_1_1; //STORE
        3'h4: control_word = 12'b10_1_1_0_00_0_0_1_0_1; //LOAD
        3'h5: control_word = 12'b11_1_0_0_01_0_1_0_0_0; //JAL
        3'h6: control_word = 12'b11_1_0_0_10_0_1_0_0_0; //JALR
        3'h7: control_word = 12'b00_0_0_0_00_1_0_0_0_0; //COND JMP
        endcase
    end
endmodule : inst_rom