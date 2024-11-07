// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop_tb__Syms.h"


VL_ATTR_COLD void Vtop_tb___024root__trace_init_sub__TOP__0(Vtop_tb___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root__trace_init_sub__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+76,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+77,0,"clk_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+78,0,"sync_rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("top_tb", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+76,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+77,0,"clk_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+78,0,"sync_rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+16,0,"inst_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+87,0,"data_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+79,0,"mem_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+80,0,"mem_req",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1,0,"mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+2,0,"data_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+81,0,"inst_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 29,0);
    tracep->declBus(c+3,0,"data_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 29,0);
    tracep->pushPrefix("cpu", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+76,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+77,0,"clk_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+78,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+16,0,"inst_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+87,0,"data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+79,0,"mem_we",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+80,0,"mem_req",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1,0,"mask",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+2,0,"data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+81,0,"inst_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 29,0);
    tracep->declBus(c+3,0,"data_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 29,0);
    tracep->declBit(c+17,0,"ip_jmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+4,0,"ip_jmp_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 29,0);
    tracep->declBus(c+18,0,"ip_to_pipe",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 29,0);
    tracep->declBit(c+19,0,"reg_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+5,0,"reg_din",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+20,0,"rd_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+21,0,"control_word",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+16,0,"inst_to_exe",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+82,0,"rs1_to_exe",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+83,0,"rs2_to_exe",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+6,0,"alu_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+7,0,"to_mem",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+22,0,"inst_to_writeback",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+23,0,"ip_to_writeback",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 29,0);
    tracep->declBus(c+24,0,"write_back_lines",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+25,0,"int_mreq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+26,0,"int_mwe",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+84,0,"mem_to_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("decode", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+76,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+77,0,"clk_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17,0,"invalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+19,0,"reg_we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+16,0,"inst_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+5,0,"reg_din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+18,0,"ip_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 29,0);
    tracep->declBus(c+20,0,"rd_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+21,0,"control_word",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+16,0,"inst_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+82,0,"rs1_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+83,0,"rs2_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+27,0,"intermediate_control_word",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->pushPrefix("irom", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+28,0,"opcode",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+27,0,"control_word",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->popPrefix();
    tracep->pushPrefix("rf", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+76,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+19,0,"we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+77,0,"clk_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+5,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+29,0,"rs1_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+30,0,"rs2_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+20,0,"rd_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+82,0,"rs1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+83,0,"rs2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("memory", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+31+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("exe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+76,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+19,0,"forward",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+77,0,"clk_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+20,0,"rd_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+82,0,"rs1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+83,0,"rs2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+16,0,"inst_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+5,0,"write_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+18,0,"ip_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 29,0);
    tracep->declBus(c+21,0,"control_word_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+6,0,"alu_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+7,0,"to_mem",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+22,0,"inst_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+4,0,"to_ip",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 29,0);
    tracep->declBus(c+23,0,"ip_buffer_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 29,0);
    tracep->declBus(c+24,0,"write_back_lines",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+17,0,"jmp",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+25,0,"mem_req",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+26,0,"mem_we",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+63,0,"rs1_buffer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+64,0,"rs2_buffer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+22,0,"inst_buffer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+23,0,"ip_buffer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 29,0);
    tracep->declBus(c+65,0,"control_word",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+8,0,"int_rs1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+7,0,"int_rs2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+66,0,"immediate",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+9,0,"alu_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+67,0,"alu_op",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+68,0,"brh_flag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("alu_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+8,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+9,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+67,0,"op",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+6,0,"res",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+10,0,"intermediate_addsub",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declBus(c+12,0,"int_asr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("fetch", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+76,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+78,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17,0,"jmp",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+77,0,"clk_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+4,0,"jmp_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 29,0);
    tracep->declBus(c+81,0,"inst_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 29,0);
    tracep->declBus(c+18,0,"to_pipe",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 29,0);
    tracep->declBit(c+69,0,"init_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+18,0,"ip",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 29,0);
    tracep->popPrefix();
    tracep->pushPrefix("madj", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+87,0,"from_mem",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+7,0,"from_reg",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+70,0,"fn4",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+13,0,"addr_low",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+84,0,"to_reg",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2,0,"to_mem",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1,0,"mask",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+14,0,"adj_byte",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+15,0,"adj_word",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+71,0,"size",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->pushPrefix("writeback", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+24,0,"lines_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+76,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+77,0,"clk_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+23,0,"ip_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 29,0);
    tracep->declBus(c+6,0,"alu_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+84,0,"from_mem",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+22,0,"inst_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+19,0,"reg_we",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+5,0,"to_reg",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+20,0,"rd_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+72,0,"inst_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+73,0,"control_word",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+74,0,"alu_buffer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+75,0,"ip_buffer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 29,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("imem", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+76,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+85,0,"rom_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+16,0,"inst_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+16,0,"buffer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+86,0,"current_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtop_tb___024root__trace_init_top(Vtop_tb___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root__trace_init_top\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtop_tb___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtop_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vtop_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtop_tb___024root__trace_register(Vtop_tb___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root__trace_register\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vtop_tb___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vtop_tb___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vtop_tb___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vtop_tb___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtop_tb___024root__trace_const_0_sub_0(Vtop_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtop_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root__trace_const_0\n"); );
    // Init
    Vtop_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop_tb___024root*>(voidSelf);
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtop_tb___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtop_tb___024root__trace_const_0_sub_0(Vtop_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root__trace_const_0_sub_0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+87,(vlSelfRef.top_tb__DOT__data_in),32);
}

VL_ATTR_COLD void Vtop_tb___024root__trace_full_0_sub_0(Vtop_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtop_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root__trace_full_0\n"); );
    // Init
    Vtop_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop_tb___024root*>(voidSelf);
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtop_tb___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtop_tb___024root__trace_full_0_sub_0(Vtop_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root__trace_full_0_sub_0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+1,(vlSelfRef.top_tb__DOT__mask),4);
    bufp->fullIData(oldp+2,(vlSelfRef.top_tb__DOT__data_out),32);
    bufp->fullIData(oldp+3,((vlSelfRef.top_tb__DOT__cpu__DOT__alu_out 
                             >> 2U)),30);
    bufp->fullIData(oldp+4,(vlSelfRef.top_tb__DOT__cpu__DOT__ip_jmp_addr),30);
    bufp->fullIData(oldp+5,(vlSelfRef.top_tb__DOT__cpu__DOT__reg_din),32);
    bufp->fullIData(oldp+6,(vlSelfRef.top_tb__DOT__cpu__DOT__alu_out),32);
    bufp->fullIData(oldp+7,(vlSelfRef.top_tb__DOT__cpu__DOT__exe__DOT__int_rs2),32);
    bufp->fullIData(oldp+8,(vlSelfRef.top_tb__DOT__cpu__DOT__exe__DOT__int_rs1),32);
    bufp->fullIData(oldp+9,(vlSelfRef.top_tb__DOT__cpu__DOT__exe__DOT__alu_b),32);
    bufp->fullQData(oldp+10,(vlSelfRef.top_tb__DOT__cpu__DOT__exe__DOT__alu_inst__DOT__intermediate_addsub),33);
    bufp->fullIData(oldp+12,(VL_SHIFTRS_III(32,32,5, vlSelfRef.top_tb__DOT__cpu__DOT__exe__DOT__int_rs1, 
                                            (0x1fU 
                                             & vlSelfRef.top_tb__DOT__cpu__DOT__exe__DOT__alu_b))),32);
    bufp->fullCData(oldp+13,((3U & (vlSelfRef.top_tb__DOT__cpu__DOT__alu_out 
                                    >> 2U))),2);
    bufp->fullCData(oldp+14,((0xffU & ((8U & vlSelfRef.top_tb__DOT__cpu__DOT__alu_out)
                                        ? ((4U & vlSelfRef.top_tb__DOT__cpu__DOT__alu_out)
                                            ? vlSelfRef.top_tb__DOT__data_in
                                            : (vlSelfRef.top_tb__DOT__data_in 
                                               >> 8U))
                                        : ((4U & vlSelfRef.top_tb__DOT__cpu__DOT__alu_out)
                                            ? (vlSelfRef.top_tb__DOT__data_in 
                                               >> 0x10U)
                                            : (vlSelfRef.top_tb__DOT__data_in 
                                               >> 0x18U))))),8);
    bufp->fullSData(oldp+15,(vlSelfRef.top_tb__DOT__cpu__DOT__madj__DOT__adj_word),16);
    bufp->fullIData(oldp+16,(vlSelfRef.top_tb__DOT__imem__DOT__buffer),32);
    bufp->fullBit(oldp+17,(vlSelfRef.top_tb__DOT__cpu__DOT__ip_jmp));
    bufp->fullIData(oldp+18,(vlSelfRef.top_tb__DOT__cpu__DOT__fetch__DOT__ip),30);
    bufp->fullBit(oldp+19,((1U & (IData)(vlSelfRef.top_tb__DOT__cpu__DOT__writeback__DOT__control_word))));
    bufp->fullCData(oldp+20,((0x1fU & (vlSelfRef.top_tb__DOT__cpu__DOT__writeback__DOT__inst_reg 
                                       >> 0x15U))),5);
    bufp->fullSData(oldp+21,(((IData)(vlSelfRef.top_tb__DOT__cpu__DOT__ip_jmp)
                               ? 0U : (IData)(vlSelfRef.top_tb__DOT__cpu__DOT__decode__DOT__intermediate_control_word))),12);
    bufp->fullIData(oldp+22,(vlSelfRef.top_tb__DOT__cpu__DOT__exe__DOT__inst_buffer),32);
    bufp->fullIData(oldp+23,(vlSelfRef.top_tb__DOT__cpu__DOT__exe__DOT__ip_buffer),30);
    bufp->fullCData(oldp+24,((7U & ((IData)(vlSelfRef.top_tb__DOT__cpu__DOT__exe__DOT__control_word) 
                                    >> 9U))),3);
    bufp->fullBit(oldp+25,((1U & ((IData)(vlSelfRef.top_tb__DOT__cpu__DOT__exe__DOT__control_word) 
                                  >> 8U))));
    bufp->fullBit(oldp+26,((1U & ((IData)(vlSelfRef.top_tb__DOT__cpu__DOT__exe__DOT__control_word) 
                                  >> 7U))));
    bufp->fullSData(oldp+27,(vlSelfRef.top_tb__DOT__cpu__DOT__decode__DOT__intermediate_control_word),12);
    bufp->fullCData(oldp+28,((7U & (vlSelfRef.top_tb__DOT__imem__DOT__buffer 
                                    >> 0x1aU))),3);
    bufp->fullCData(oldp+29,((0x1fU & (vlSelfRef.top_tb__DOT__imem__DOT__buffer 
                                       >> 0x15U))),5);
    bufp->fullCData(oldp+30,((0x1fU & (vlSelfRef.top_tb__DOT__imem__DOT__buffer 
                                       >> 7U))),5);
    bufp->fullIData(oldp+31,(vlSelfRef.top_tb__DOT__cpu__DOT__decode__DOT__rf__DOT__memory[0]),32);
    bufp->fullIData(oldp+32,(vlSelfRef.top_tb__DOT__cpu__DOT__decode__DOT__rf__DOT__memory[1]),32);
    bufp->fullIData(oldp+33,(vlSelfRef.top_tb__DOT__cpu__DOT__decode__DOT__rf__DOT__memory[2]),32);
    bufp->fullIData(oldp+34,(vlSelfRef.top_tb__DOT__cpu__DOT__decode__DOT__rf__DOT__memory[3]),32);
    bufp->fullIData(oldp+35,(vlSelfRef.top_tb__DOT__cpu__DOT__decode__DOT__rf__DOT__memory[4]),32);
    bufp->fullIData(oldp+36,(vlSelfRef.top_tb__DOT__cpu__DOT__decode__DOT__rf__DOT__memory[5]),32);
    bufp->fullIData(oldp+37,(vlSelfRef.top_tb__DOT__cpu__DOT__decode__DOT__rf__DOT__memory[6]),32);
    bufp->fullIData(oldp+38,(vlSelfRef.top_tb__DOT__cpu__DOT__decode__DOT__rf__DOT__memory[7]),32);
    bufp->fullIData(oldp+39,(vlSelfRef.top_tb__DOT__cpu__DOT__decode__DOT__rf__DOT__memory[8]),32);
    bufp->fullIData(oldp+40,(vlSelfRef.top_tb__DOT__cpu__DOT__decode__DOT__rf__DOT__memory[9]),32);
    bufp->fullIData(oldp+41,(vlSelfRef.top_tb__DOT__cpu__DOT__decode__DOT__rf__DOT__memory[10]),32);
    bufp->fullIData(oldp+42,(vlSelfRef.top_tb__DOT__cpu__DOT__decode__DOT__rf__DOT__memory[11]),32);
    bufp->fullIData(oldp+43,(vlSelfRef.top_tb__DOT__cpu__DOT__decode__DOT__rf__DOT__memory[12]),32);
    bufp->fullIData(oldp+44,(vlSelfRef.top_tb__DOT__cpu__DOT__decode__DOT__rf__DOT__memory[13]),32);
    bufp->fullIData(oldp+45,(vlSelfRef.top_tb__DOT__cpu__DOT__decode__DOT__rf__DOT__memory[14]),32);
    bufp->fullIData(oldp+46,(vlSelfRef.top_tb__DOT__cpu__DOT__decode__DOT__rf__DOT__memory[15]),32);
    bufp->fullIData(oldp+47,(vlSelfRef.top_tb__DOT__cpu__DOT__decode__DOT__rf__DOT__memory[16]),32);
    bufp->fullIData(oldp+48,(vlSelfRef.top_tb__DOT__cpu__DOT__decode__DOT__rf__DOT__memory[17]),32);
    bufp->fullIData(oldp+49,(vlSelfRef.top_tb__DOT__cpu__DOT__decode__DOT__rf__DOT__memory[18]),32);
    bufp->fullIData(oldp+50,(vlSelfRef.top_tb__DOT__cpu__DOT__decode__DOT__rf__DOT__memory[19]),32);
    bufp->fullIData(oldp+51,(vlSelfRef.top_tb__DOT__cpu__DOT__decode__DOT__rf__DOT__memory[20]),32);
    bufp->fullIData(oldp+52,(vlSelfRef.top_tb__DOT__cpu__DOT__decode__DOT__rf__DOT__memory[21]),32);
    bufp->fullIData(oldp+53,(vlSelfRef.top_tb__DOT__cpu__DOT__decode__DOT__rf__DOT__memory[22]),32);
    bufp->fullIData(oldp+54,(vlSelfRef.top_tb__DOT__cpu__DOT__decode__DOT__rf__DOT__memory[23]),32);
    bufp->fullIData(oldp+55,(vlSelfRef.top_tb__DOT__cpu__DOT__decode__DOT__rf__DOT__memory[24]),32);
    bufp->fullIData(oldp+56,(vlSelfRef.top_tb__DOT__cpu__DOT__decode__DOT__rf__DOT__memory[25]),32);
    bufp->fullIData(oldp+57,(vlSelfRef.top_tb__DOT__cpu__DOT__decode__DOT__rf__DOT__memory[26]),32);
    bufp->fullIData(oldp+58,(vlSelfRef.top_tb__DOT__cpu__DOT__decode__DOT__rf__DOT__memory[27]),32);
    bufp->fullIData(oldp+59,(vlSelfRef.top_tb__DOT__cpu__DOT__decode__DOT__rf__DOT__memory[28]),32);
    bufp->fullIData(oldp+60,(vlSelfRef.top_tb__DOT__cpu__DOT__decode__DOT__rf__DOT__memory[29]),32);
    bufp->fullIData(oldp+61,(vlSelfRef.top_tb__DOT__cpu__DOT__decode__DOT__rf__DOT__memory[30]),32);
    bufp->fullIData(oldp+62,(vlSelfRef.top_tb__DOT__cpu__DOT__decode__DOT__rf__DOT__memory[31]),32);
    bufp->fullIData(oldp+63,(vlSelfRef.top_tb__DOT__cpu__DOT__exe__DOT__rs1_buffer),32);
    bufp->fullIData(oldp+64,(vlSelfRef.top_tb__DOT__cpu__DOT__exe__DOT__rs2_buffer),32);
    bufp->fullSData(oldp+65,(vlSelfRef.top_tb__DOT__cpu__DOT__exe__DOT__control_word),12);
    bufp->fullIData(oldp+66,(vlSelfRef.top_tb__DOT__cpu__DOT__exe__DOT__immediate),32);
    bufp->fullCData(oldp+67,(vlSelfRef.top_tb__DOT__cpu__DOT__exe__DOT__alu_op),4);
    bufp->fullBit(oldp+68,((1U & ((0U == (3U & (vlSelfRef.top_tb__DOT__cpu__DOT__exe__DOT__inst_buffer 
                                                >> 0xcU)))
                                   ? ((vlSelfRef.top_tb__DOT__cpu__DOT__exe__DOT__inst_buffer 
                                       >> 0xeU) ^ (vlSelfRef.top_tb__DOT__cpu__DOT__exe__DOT__rs1_buffer 
                                                   == vlSelfRef.top_tb__DOT__cpu__DOT__exe__DOT__rs2_buffer))
                                   : ((1U == (3U & 
                                              (vlSelfRef.top_tb__DOT__cpu__DOT__exe__DOT__inst_buffer 
                                               >> 0xcU)))
                                       ? ((vlSelfRef.top_tb__DOT__cpu__DOT__exe__DOT__inst_buffer 
                                           >> 0xeU) 
                                          ^ (vlSelfRef.top_tb__DOT__cpu__DOT__exe__DOT__rs1_buffer 
                                             < vlSelfRef.top_tb__DOT__cpu__DOT__exe__DOT__rs2_buffer))
                                       : ((2U == (3U 
                                                  & (vlSelfRef.top_tb__DOT__cpu__DOT__exe__DOT__inst_buffer 
                                                     >> 0xcU))) 
                                          && (1U & 
                                              ((vlSelfRef.top_tb__DOT__cpu__DOT__exe__DOT__inst_buffer 
                                                >> 0xeU) 
                                               ^ VL_LTS_III(32, vlSelfRef.top_tb__DOT__cpu__DOT__exe__DOT__rs1_buffer, vlSelfRef.top_tb__DOT__cpu__DOT__exe__DOT__rs2_buffer)))))))));
    bufp->fullBit(oldp+69,(vlSelfRef.top_tb__DOT__cpu__DOT__fetch__DOT__init_state));
    bufp->fullCData(oldp+70,((0xfU & (vlSelfRef.top_tb__DOT__cpu__DOT__exe__DOT__inst_buffer 
                                      >> 0xcU))),4);
    bufp->fullCData(oldp+71,((3U & (vlSelfRef.top_tb__DOT__cpu__DOT__exe__DOT__inst_buffer 
                                    >> 0xcU))),2);
    bufp->fullIData(oldp+72,(vlSelfRef.top_tb__DOT__cpu__DOT__writeback__DOT__inst_reg),32);
    bufp->fullCData(oldp+73,(vlSelfRef.top_tb__DOT__cpu__DOT__writeback__DOT__control_word),3);
    bufp->fullIData(oldp+74,(vlSelfRef.top_tb__DOT__cpu__DOT__writeback__DOT__alu_buffer),32);
    bufp->fullIData(oldp+75,(vlSelfRef.top_tb__DOT__cpu__DOT__writeback__DOT__ip_buffer),30);
    bufp->fullBit(oldp+76,(vlSelfRef.clk));
    bufp->fullBit(oldp+77,(vlSelfRef.clk_en));
    bufp->fullBit(oldp+78,(vlSelfRef.sync_rst));
    bufp->fullBit(oldp+79,(((IData)(vlSelfRef.clk_en) 
                            & ((IData)(vlSelfRef.top_tb__DOT__cpu__DOT__exe__DOT__control_word) 
                               >> 7U))));
    bufp->fullBit(oldp+80,(((IData)(vlSelfRef.clk_en) 
                            & ((IData)(vlSelfRef.top_tb__DOT__cpu__DOT__exe__DOT__control_word) 
                               >> 8U))));
    bufp->fullIData(oldp+81,(((1U & ((~ (IData)(vlSelfRef.top_tb__DOT__cpu__DOT__fetch__DOT__init_state)) 
                                     | (IData)(vlSelfRef.sync_rst)))
                               ? 0U : (0x3fffffffU 
                                       & ((IData)(vlSelfRef.top_tb__DOT__cpu__DOT__ip_jmp)
                                           ? vlSelfRef.top_tb__DOT__cpu__DOT__ip_jmp_addr
                                           : ((IData)(1U) 
                                              + vlSelfRef.top_tb__DOT__cpu__DOT__fetch__DOT__ip))))),30);
    bufp->fullIData(oldp+82,(((0U == (0x1fU & (vlSelfRef.top_tb__DOT__imem__DOT__buffer 
                                               >> 0x15U)))
                               ? 0U : (((IData)(vlSelfRef.top_tb__DOT__cpu__DOT__writeback__DOT__control_word) 
                                        & ((0x1fU & 
                                            (vlSelfRef.top_tb__DOT__cpu__DOT__writeback__DOT__inst_reg 
                                             >> 0x15U)) 
                                           == (0x1fU 
                                               & (vlSelfRef.top_tb__DOT__imem__DOT__buffer 
                                                  >> 0x15U))))
                                        ? vlSelfRef.top_tb__DOT__cpu__DOT__reg_din
                                        : vlSelfRef.top_tb__DOT__cpu__DOT__decode__DOT__rf__DOT__memory
                                       [(0x1fU & (vlSelfRef.top_tb__DOT__imem__DOT__buffer 
                                                  >> 0x15U))]))),32);
    bufp->fullIData(oldp+83,(((0U == (0x1fU & (vlSelfRef.top_tb__DOT__imem__DOT__buffer 
                                               >> 7U)))
                               ? 0U : (((IData)(vlSelfRef.top_tb__DOT__cpu__DOT__writeback__DOT__control_word) 
                                        & ((0x1fU & 
                                            (vlSelfRef.top_tb__DOT__cpu__DOT__writeback__DOT__inst_reg 
                                             >> 0x15U)) 
                                           == (0x1fU 
                                               & (vlSelfRef.top_tb__DOT__imem__DOT__buffer 
                                                  >> 7U))))
                                        ? vlSelfRef.top_tb__DOT__cpu__DOT__reg_din
                                        : vlSelfRef.top_tb__DOT__cpu__DOT__decode__DOT__rf__DOT__memory
                                       [(0x1fU & (vlSelfRef.top_tb__DOT__imem__DOT__buffer 
                                                  >> 7U))]))),32);
    bufp->fullIData(oldp+84,(((0x2000U & vlSelfRef.top_tb__DOT__cpu__DOT__exe__DOT__inst_buffer)
                               ? vlSelfRef.top_tb__DOT__data_in
                               : ((0x1000U & vlSelfRef.top_tb__DOT__cpu__DOT__exe__DOT__inst_buffer)
                                   ? (((- (IData)((IData)(
                                                          (((IData)(vlSelfRef.top_tb__DOT__cpu__DOT__madj__DOT__adj_word) 
                                                            >> 0xfU) 
                                                           & (vlSelfRef.top_tb__DOT__cpu__DOT__exe__DOT__inst_buffer 
                                                              >> 0xfU))))) 
                                       << 0x10U) | (IData)(vlSelfRef.top_tb__DOT__cpu__DOT__madj__DOT__adj_word))
                                   : (((- (IData)((IData)(
                                                          (((IData)(vlSelfRef.top_tb__DOT__cpu__DOT__madj__DOT__adj_word) 
                                                            >> 0xfU) 
                                                           & (vlSelfRef.top_tb__DOT__cpu__DOT__exe__DOT__inst_buffer 
                                                              >> 0xfU))))) 
                                       << 0x10U) | (IData)(vlSelfRef.top_tb__DOT__cpu__DOT__madj__DOT__adj_word))))),32);
    bufp->fullCData(oldp+85,(vlSelfRef.top_tb__DOT____Vcellinp__imem__rom_addr),5);
    bufp->fullIData(oldp+86,(((0U == (IData)(vlSelfRef.top_tb__DOT____Vcellinp__imem__rom_addr))
                               ? 0x7e00002U : ((1U 
                                                == (IData)(vlSelfRef.top_tb__DOT____Vcellinp__imem__rom_addr))
                                                ? 0x7ff0001U
                                                : (
                                                   (2U 
                                                    == (IData)(vlSelfRef.top_tb__DOT____Vcellinp__imem__rom_addr))
                                                    ? 0x141ffffcU
                                                    : 0U)))),32);
}
