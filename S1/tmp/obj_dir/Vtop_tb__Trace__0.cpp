// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop_tb__Syms.h"


void Vtop_tb___024root__trace_chg_0_sub_0(Vtop_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtop_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root__trace_chg_0\n"); );
    // Init
    Vtop_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop_tb___024root*>(voidSelf);
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtop_tb___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtop_tb___024root__trace_chg_0_sub_0(Vtop_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root__trace_chg_0_sub_0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U] 
                     | vlSelfRef.__Vm_traceActivity
                     [3U]))) {
        bufp->chgCData(oldp+0,(vlSelfRef.top_tb__DOT__mask),4);
        bufp->chgIData(oldp+1,(vlSelfRef.top_tb__DOT__data_out),32);
        bufp->chgIData(oldp+2,((vlSelfRef.top_tb__DOT__cpu__DOT__alu_out 
                                >> 2U)),30);
        bufp->chgIData(oldp+3,(vlSelfRef.top_tb__DOT__cpu__DOT__ip_jmp_addr),30);
        bufp->chgIData(oldp+4,(vlSelfRef.top_tb__DOT__cpu__DOT__reg_din),32);
        bufp->chgIData(oldp+5,(vlSelfRef.top_tb__DOT__cpu__DOT__alu_out),32);
        bufp->chgIData(oldp+6,(vlSelfRef.top_tb__DOT__cpu__DOT__exe__DOT__int_rs2),32);
        bufp->chgIData(oldp+7,(vlSelfRef.top_tb__DOT__cpu__DOT__exe__DOT__int_rs1),32);
        bufp->chgIData(oldp+8,(vlSelfRef.top_tb__DOT__cpu__DOT__exe__DOT__alu_b),32);
        bufp->chgQData(oldp+9,(vlSelfRef.top_tb__DOT__cpu__DOT__exe__DOT__alu_inst__DOT__intermediate_addsub),33);
        bufp->chgIData(oldp+11,(VL_SHIFTRS_III(32,32,5, vlSelfRef.top_tb__DOT__cpu__DOT__exe__DOT__int_rs1, 
                                               (0x1fU 
                                                & vlSelfRef.top_tb__DOT__cpu__DOT__exe__DOT__alu_b))),32);
        bufp->chgCData(oldp+12,((3U & (vlSelfRef.top_tb__DOT__cpu__DOT__alu_out 
                                       >> 2U))),2);
        bufp->chgCData(oldp+13,((0xffU & ((8U & vlSelfRef.top_tb__DOT__cpu__DOT__alu_out)
                                           ? ((4U & vlSelfRef.top_tb__DOT__cpu__DOT__alu_out)
                                               ? vlSelfRef.top_tb__DOT__data_in
                                               : (vlSelfRef.top_tb__DOT__data_in 
                                                  >> 8U))
                                           : ((4U & vlSelfRef.top_tb__DOT__cpu__DOT__alu_out)
                                               ? (vlSelfRef.top_tb__DOT__data_in 
                                                  >> 0x10U)
                                               : (vlSelfRef.top_tb__DOT__data_in 
                                                  >> 0x18U))))),8);
        bufp->chgSData(oldp+14,(vlSelfRef.top_tb__DOT__cpu__DOT__madj__DOT__adj_word),16);
    }
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[2U])) {
        bufp->chgIData(oldp+15,(vlSelfRef.top_tb__DOT__imem__DOT__buffer),32);
        bufp->chgBit(oldp+16,(vlSelfRef.top_tb__DOT__cpu__DOT__ip_jmp));
        bufp->chgIData(oldp+17,(vlSelfRef.top_tb__DOT__cpu__DOT__fetch__DOT__ip),30);
        bufp->chgBit(oldp+18,((1U & (IData)(vlSelfRef.top_tb__DOT__cpu__DOT__writeback__DOT__control_word))));
        bufp->chgCData(oldp+19,((0x1fU & (vlSelfRef.top_tb__DOT__cpu__DOT__writeback__DOT__inst_reg 
                                          >> 0x15U))),5);
        bufp->chgSData(oldp+20,(((IData)(vlSelfRef.top_tb__DOT__cpu__DOT__ip_jmp)
                                  ? 0U : (IData)(vlSelfRef.top_tb__DOT__cpu__DOT__decode__DOT__intermediate_control_word))),12);
        bufp->chgIData(oldp+21,(vlSelfRef.top_tb__DOT__cpu__DOT__exe__DOT__inst_buffer),32);
        bufp->chgIData(oldp+22,(vlSelfRef.top_tb__DOT__cpu__DOT__exe__DOT__ip_buffer),30);
        bufp->chgCData(oldp+23,((7U & ((IData)(vlSelfRef.top_tb__DOT__cpu__DOT__exe__DOT__control_word) 
                                       >> 9U))),3);
        bufp->chgBit(oldp+24,((1U & ((IData)(vlSelfRef.top_tb__DOT__cpu__DOT__exe__DOT__control_word) 
                                     >> 8U))));
        bufp->chgBit(oldp+25,((1U & ((IData)(vlSelfRef.top_tb__DOT__cpu__DOT__exe__DOT__control_word) 
                                     >> 7U))));
        bufp->chgSData(oldp+26,(vlSelfRef.top_tb__DOT__cpu__DOT__decode__DOT__intermediate_control_word),12);
        bufp->chgCData(oldp+27,((7U & (vlSelfRef.top_tb__DOT__imem__DOT__buffer 
                                       >> 0x1aU))),3);
        bufp->chgCData(oldp+28,((0x1fU & (vlSelfRef.top_tb__DOT__imem__DOT__buffer 
                                          >> 0x15U))),5);
        bufp->chgCData(oldp+29,((0x1fU & (vlSelfRef.top_tb__DOT__imem__DOT__buffer 
                                          >> 7U))),5);
        bufp->chgIData(oldp+30,(vlSelfRef.top_tb__DOT__cpu__DOT__decode__DOT__rf__DOT__memory[0]),32);
        bufp->chgIData(oldp+31,(vlSelfRef.top_tb__DOT__cpu__DOT__decode__DOT__rf__DOT__memory[1]),32);
        bufp->chgIData(oldp+32,(vlSelfRef.top_tb__DOT__cpu__DOT__decode__DOT__rf__DOT__memory[2]),32);
        bufp->chgIData(oldp+33,(vlSelfRef.top_tb__DOT__cpu__DOT__decode__DOT__rf__DOT__memory[3]),32);
        bufp->chgIData(oldp+34,(vlSelfRef.top_tb__DOT__cpu__DOT__decode__DOT__rf__DOT__memory[4]),32);
        bufp->chgIData(oldp+35,(vlSelfRef.top_tb__DOT__cpu__DOT__decode__DOT__rf__DOT__memory[5]),32);
        bufp->chgIData(oldp+36,(vlSelfRef.top_tb__DOT__cpu__DOT__decode__DOT__rf__DOT__memory[6]),32);
        bufp->chgIData(oldp+37,(vlSelfRef.top_tb__DOT__cpu__DOT__decode__DOT__rf__DOT__memory[7]),32);
        bufp->chgIData(oldp+38,(vlSelfRef.top_tb__DOT__cpu__DOT__decode__DOT__rf__DOT__memory[8]),32);
        bufp->chgIData(oldp+39,(vlSelfRef.top_tb__DOT__cpu__DOT__decode__DOT__rf__DOT__memory[9]),32);
        bufp->chgIData(oldp+40,(vlSelfRef.top_tb__DOT__cpu__DOT__decode__DOT__rf__DOT__memory[10]),32);
        bufp->chgIData(oldp+41,(vlSelfRef.top_tb__DOT__cpu__DOT__decode__DOT__rf__DOT__memory[11]),32);
        bufp->chgIData(oldp+42,(vlSelfRef.top_tb__DOT__cpu__DOT__decode__DOT__rf__DOT__memory[12]),32);
        bufp->chgIData(oldp+43,(vlSelfRef.top_tb__DOT__cpu__DOT__decode__DOT__rf__DOT__memory[13]),32);
        bufp->chgIData(oldp+44,(vlSelfRef.top_tb__DOT__cpu__DOT__decode__DOT__rf__DOT__memory[14]),32);
        bufp->chgIData(oldp+45,(vlSelfRef.top_tb__DOT__cpu__DOT__decode__DOT__rf__DOT__memory[15]),32);
        bufp->chgIData(oldp+46,(vlSelfRef.top_tb__DOT__cpu__DOT__decode__DOT__rf__DOT__memory[16]),32);
        bufp->chgIData(oldp+47,(vlSelfRef.top_tb__DOT__cpu__DOT__decode__DOT__rf__DOT__memory[17]),32);
        bufp->chgIData(oldp+48,(vlSelfRef.top_tb__DOT__cpu__DOT__decode__DOT__rf__DOT__memory[18]),32);
        bufp->chgIData(oldp+49,(vlSelfRef.top_tb__DOT__cpu__DOT__decode__DOT__rf__DOT__memory[19]),32);
        bufp->chgIData(oldp+50,(vlSelfRef.top_tb__DOT__cpu__DOT__decode__DOT__rf__DOT__memory[20]),32);
        bufp->chgIData(oldp+51,(vlSelfRef.top_tb__DOT__cpu__DOT__decode__DOT__rf__DOT__memory[21]),32);
        bufp->chgIData(oldp+52,(vlSelfRef.top_tb__DOT__cpu__DOT__decode__DOT__rf__DOT__memory[22]),32);
        bufp->chgIData(oldp+53,(vlSelfRef.top_tb__DOT__cpu__DOT__decode__DOT__rf__DOT__memory[23]),32);
        bufp->chgIData(oldp+54,(vlSelfRef.top_tb__DOT__cpu__DOT__decode__DOT__rf__DOT__memory[24]),32);
        bufp->chgIData(oldp+55,(vlSelfRef.top_tb__DOT__cpu__DOT__decode__DOT__rf__DOT__memory[25]),32);
        bufp->chgIData(oldp+56,(vlSelfRef.top_tb__DOT__cpu__DOT__decode__DOT__rf__DOT__memory[26]),32);
        bufp->chgIData(oldp+57,(vlSelfRef.top_tb__DOT__cpu__DOT__decode__DOT__rf__DOT__memory[27]),32);
        bufp->chgIData(oldp+58,(vlSelfRef.top_tb__DOT__cpu__DOT__decode__DOT__rf__DOT__memory[28]),32);
        bufp->chgIData(oldp+59,(vlSelfRef.top_tb__DOT__cpu__DOT__decode__DOT__rf__DOT__memory[29]),32);
        bufp->chgIData(oldp+60,(vlSelfRef.top_tb__DOT__cpu__DOT__decode__DOT__rf__DOT__memory[30]),32);
        bufp->chgIData(oldp+61,(vlSelfRef.top_tb__DOT__cpu__DOT__decode__DOT__rf__DOT__memory[31]),32);
        bufp->chgIData(oldp+62,(vlSelfRef.top_tb__DOT__cpu__DOT__exe__DOT__rs1_buffer),32);
        bufp->chgIData(oldp+63,(vlSelfRef.top_tb__DOT__cpu__DOT__exe__DOT__rs2_buffer),32);
        bufp->chgSData(oldp+64,(vlSelfRef.top_tb__DOT__cpu__DOT__exe__DOT__control_word),12);
        bufp->chgIData(oldp+65,(vlSelfRef.top_tb__DOT__cpu__DOT__exe__DOT__immediate),32);
        bufp->chgCData(oldp+66,(vlSelfRef.top_tb__DOT__cpu__DOT__exe__DOT__alu_op),4);
        bufp->chgBit(oldp+67,((1U & ((0U == (3U & (vlSelfRef.top_tb__DOT__cpu__DOT__exe__DOT__inst_buffer 
                                                   >> 0xcU)))
                                      ? ((vlSelfRef.top_tb__DOT__cpu__DOT__exe__DOT__inst_buffer 
                                          >> 0xeU) 
                                         ^ (vlSelfRef.top_tb__DOT__cpu__DOT__exe__DOT__rs1_buffer 
                                            == vlSelfRef.top_tb__DOT__cpu__DOT__exe__DOT__rs2_buffer))
                                      : ((1U == (3U 
                                                 & (vlSelfRef.top_tb__DOT__cpu__DOT__exe__DOT__inst_buffer 
                                                    >> 0xcU)))
                                          ? ((vlSelfRef.top_tb__DOT__cpu__DOT__exe__DOT__inst_buffer 
                                              >> 0xeU) 
                                             ^ (vlSelfRef.top_tb__DOT__cpu__DOT__exe__DOT__rs1_buffer 
                                                < vlSelfRef.top_tb__DOT__cpu__DOT__exe__DOT__rs2_buffer))
                                          : ((2U == 
                                              (3U & 
                                               (vlSelfRef.top_tb__DOT__cpu__DOT__exe__DOT__inst_buffer 
                                                >> 0xcU))) 
                                             && (1U 
                                                 & ((vlSelfRef.top_tb__DOT__cpu__DOT__exe__DOT__inst_buffer 
                                                     >> 0xeU) 
                                                    ^ 
                                                    VL_LTS_III(32, vlSelfRef.top_tb__DOT__cpu__DOT__exe__DOT__rs1_buffer, vlSelfRef.top_tb__DOT__cpu__DOT__exe__DOT__rs2_buffer)))))))));
        bufp->chgBit(oldp+68,(vlSelfRef.top_tb__DOT__cpu__DOT__fetch__DOT__init_state));
        bufp->chgCData(oldp+69,((0xfU & (vlSelfRef.top_tb__DOT__cpu__DOT__exe__DOT__inst_buffer 
                                         >> 0xcU))),4);
        bufp->chgCData(oldp+70,((3U & (vlSelfRef.top_tb__DOT__cpu__DOT__exe__DOT__inst_buffer 
                                       >> 0xcU))),2);
        bufp->chgIData(oldp+71,(vlSelfRef.top_tb__DOT__cpu__DOT__writeback__DOT__inst_reg),32);
        bufp->chgCData(oldp+72,(vlSelfRef.top_tb__DOT__cpu__DOT__writeback__DOT__control_word),3);
        bufp->chgIData(oldp+73,(vlSelfRef.top_tb__DOT__cpu__DOT__writeback__DOT__alu_buffer),32);
        bufp->chgIData(oldp+74,(vlSelfRef.top_tb__DOT__cpu__DOT__writeback__DOT__ip_buffer),30);
    }
    bufp->chgBit(oldp+75,(vlSelfRef.clk));
    bufp->chgBit(oldp+76,(vlSelfRef.clk_en));
    bufp->chgBit(oldp+77,(vlSelfRef.sync_rst));
    bufp->chgBit(oldp+78,(((IData)(vlSelfRef.clk_en) 
                           & ((IData)(vlSelfRef.top_tb__DOT__cpu__DOT__exe__DOT__control_word) 
                              >> 7U))));
    bufp->chgBit(oldp+79,(((IData)(vlSelfRef.clk_en) 
                           & ((IData)(vlSelfRef.top_tb__DOT__cpu__DOT__exe__DOT__control_word) 
                              >> 8U))));
    bufp->chgIData(oldp+80,(((1U & ((~ (IData)(vlSelfRef.top_tb__DOT__cpu__DOT__fetch__DOT__init_state)) 
                                    | (IData)(vlSelfRef.sync_rst)))
                              ? 0U : (0x3fffffffU & 
                                      ((IData)(vlSelfRef.top_tb__DOT__cpu__DOT__ip_jmp)
                                        ? vlSelfRef.top_tb__DOT__cpu__DOT__ip_jmp_addr
                                        : ((IData)(1U) 
                                           + vlSelfRef.top_tb__DOT__cpu__DOT__fetch__DOT__ip))))),30);
    bufp->chgIData(oldp+81,(((0U == (0x1fU & (vlSelfRef.top_tb__DOT__imem__DOT__buffer 
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
    bufp->chgIData(oldp+82,(((0U == (0x1fU & (vlSelfRef.top_tb__DOT__imem__DOT__buffer 
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
    bufp->chgIData(oldp+83,(((0x2000U & vlSelfRef.top_tb__DOT__cpu__DOT__exe__DOT__inst_buffer)
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
    bufp->chgCData(oldp+84,(vlSelfRef.top_tb__DOT____Vcellinp__imem__rom_addr),5);
    bufp->chgIData(oldp+85,(((0U == (IData)(vlSelfRef.top_tb__DOT____Vcellinp__imem__rom_addr))
                              ? 0x7e00002U : ((1U == (IData)(vlSelfRef.top_tb__DOT____Vcellinp__imem__rom_addr))
                                               ? 0x7ff0001U
                                               : ((2U 
                                                   == (IData)(vlSelfRef.top_tb__DOT____Vcellinp__imem__rom_addr))
                                                   ? 0x141ffffcU
                                                   : 0U)))),32);
}

void Vtop_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root__trace_cleanup\n"); );
    // Init
    Vtop_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop_tb___024root*>(voidSelf);
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
}
