// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop_tb.h for the primary calling header

#include "Vtop_tb__pch.h"
#include "Vtop_tb___024root.h"

VL_ATTR_COLD void Vtop_tb___024root___eval_static__TOP(Vtop_tb___024root* vlSelf);
VL_ATTR_COLD void Vtop_tb___024root____Vm_traceActivitySetAll(Vtop_tb___024root* vlSelf);

VL_ATTR_COLD void Vtop_tb___024root___eval_static(Vtop_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___eval_static\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtop_tb___024root___eval_static__TOP(vlSelf);
    Vtop_tb___024root____Vm_traceActivitySetAll(vlSelf);
}

VL_ATTR_COLD void Vtop_tb___024root___eval_static__TOP(Vtop_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___eval_static__TOP\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.top_tb__DOT__cpu__DOT__fetch__DOT__init_state = 0U;
    vlSelfRef.top_tb__DOT__cpu__DOT__fetch__DOT__ip = 0U;
    vlSelfRef.top_tb__DOT__cpu__DOT__exe__DOT__rs1_buffer = 0U;
    vlSelfRef.top_tb__DOT__cpu__DOT__exe__DOT__rs2_buffer = 0U;
    vlSelfRef.top_tb__DOT__cpu__DOT__exe__DOT__inst_buffer = 0U;
    vlSelfRef.top_tb__DOT__cpu__DOT__exe__DOT__ip_buffer = 0U;
    vlSelfRef.top_tb__DOT__cpu__DOT__exe__DOT__control_word = 0U;
    vlSelfRef.top_tb__DOT__cpu__DOT__writeback__DOT__inst_reg = 0U;
    vlSelfRef.top_tb__DOT__cpu__DOT__writeback__DOT__control_word = 0U;
    vlSelfRef.top_tb__DOT__cpu__DOT__writeback__DOT__alu_buffer = 0U;
    vlSelfRef.top_tb__DOT__cpu__DOT__writeback__DOT__ip_buffer = 0U;
    vlSelfRef.top_tb__DOT__imem__DOT__buffer = 0U;
}

VL_ATTR_COLD void Vtop_tb___024root___eval_initial(Vtop_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___eval_initial\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__top_tb__DOT__cpu__DOT__madj__DOT__adj_word__0 
        = vlSelfRef.top_tb__DOT__cpu__DOT__madj__DOT__adj_word;
    vlSelfRef.__Vtrigprevexpr___TOP__top_tb__DOT__cpu__DOT__madj__DOT__adj_word__1 
        = vlSelfRef.top_tb__DOT__cpu__DOT__madj__DOT__adj_word;
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
}

VL_ATTR_COLD void Vtop_tb___024root___eval_final(Vtop_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___eval_final\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop_tb___024root___dump_triggers__stl(Vtop_tb___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtop_tb___024root___eval_phase__stl(Vtop_tb___024root* vlSelf);

VL_ATTR_COLD void Vtop_tb___024root___eval_settle(Vtop_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___eval_settle\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            Vtop_tb___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("../rtl/../rtl/testbench/top_tb.sv", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtop_tb___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop_tb___024root___dump_triggers__stl(Vtop_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___dump_triggers__stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
    if ((2ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 1 is active: @([hybrid] top_tb.cpu.madj.adj_word)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop_tb___024root___stl_sequent__TOP__0(Vtop_tb___024root* vlSelf);
void Vtop_tb___024root___act_sequent__TOP__0(Vtop_tb___024root* vlSelf);

VL_ATTR_COLD void Vtop_tb___024root___eval_stl(Vtop_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___eval_stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtop_tb___024root___stl_sequent__TOP__0(vlSelf);
        Vtop_tb___024root____Vm_traceActivitySetAll(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtop_tb___024root___act_sequent__TOP__0(vlSelf);
        Vtop_tb___024root____Vm_traceActivitySetAll(vlSelf);
    }
}

extern const VlUnpacked<SData/*11:0*/, 8> Vtop_tb__ConstPool__TABLE_h42cb7dd2_0;

VL_ATTR_COLD void Vtop_tb___024root___stl_sequent__TOP__0(Vtop_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___stl_sequent__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*2:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    __Vtableidx1 = (7U & (vlSelfRef.top_tb__DOT__imem__DOT__buffer 
                          >> 0x1aU));
    vlSelfRef.top_tb__DOT__cpu__DOT__decode__DOT__intermediate_control_word 
        = Vtop_tb__ConstPool__TABLE_h42cb7dd2_0[__Vtableidx1];
    vlSelfRef.top_tb__DOT__cpu__DOT__ip_jmp = (1U & 
                                               (((IData)(vlSelfRef.top_tb__DOT__cpu__DOT__exe__DOT__control_word) 
                                                 >> 3U) 
                                                | (((IData)(vlSelfRef.top_tb__DOT__cpu__DOT__exe__DOT__control_word) 
                                                    >> 4U) 
                                                   & ((0U 
                                                       == 
                                                       (3U 
                                                        & (vlSelfRef.top_tb__DOT__cpu__DOT__exe__DOT__inst_buffer 
                                                           >> 0xcU)))
                                                       ? 
                                                      ((vlSelfRef.top_tb__DOT__cpu__DOT__exe__DOT__inst_buffer 
                                                        >> 0xeU) 
                                                       ^ 
                                                       (vlSelfRef.top_tb__DOT__cpu__DOT__exe__DOT__rs1_buffer 
                                                        == vlSelfRef.top_tb__DOT__cpu__DOT__exe__DOT__rs2_buffer))
                                                       : 
                                                      ((1U 
                                                        == 
                                                        (3U 
                                                         & (vlSelfRef.top_tb__DOT__cpu__DOT__exe__DOT__inst_buffer 
                                                            >> 0xcU)))
                                                        ? 
                                                       ((vlSelfRef.top_tb__DOT__cpu__DOT__exe__DOT__inst_buffer 
                                                         >> 0xeU) 
                                                        ^ 
                                                        (vlSelfRef.top_tb__DOT__cpu__DOT__exe__DOT__rs1_buffer 
                                                         < vlSelfRef.top_tb__DOT__cpu__DOT__exe__DOT__rs2_buffer))
                                                        : 
                                                       ((2U 
                                                         == 
                                                         (3U 
                                                          & (vlSelfRef.top_tb__DOT__cpu__DOT__exe__DOT__inst_buffer 
                                                             >> 0xcU))) 
                                                        && (1U 
                                                            & ((vlSelfRef.top_tb__DOT__cpu__DOT__exe__DOT__inst_buffer 
                                                                >> 0xeU) 
                                                               ^ 
                                                               VL_LTS_III(32, vlSelfRef.top_tb__DOT__cpu__DOT__exe__DOT__rs1_buffer, vlSelfRef.top_tb__DOT__cpu__DOT__exe__DOT__rs2_buffer)))))))));
    if ((4U & (IData)(vlSelfRef.top_tb__DOT__cpu__DOT__exe__DOT__control_word))) {
        if ((4U & (IData)(vlSelfRef.top_tb__DOT__cpu__DOT__exe__DOT__control_word))) {
            vlSelfRef.top_tb__DOT__cpu__DOT__exe__DOT__alu_op = 0U;
        }
    } else {
        vlSelfRef.top_tb__DOT__cpu__DOT__exe__DOT__alu_op 
            = (0xfU & (vlSelfRef.top_tb__DOT__cpu__DOT__exe__DOT__inst_buffer 
                       >> 0xcU));
    }
    if ((2U & (IData)(vlSelfRef.top_tb__DOT__cpu__DOT__exe__DOT__control_word))) {
        if ((2U & (IData)(vlSelfRef.top_tb__DOT__cpu__DOT__exe__DOT__control_word))) {
            vlSelfRef.top_tb__DOT__cpu__DOT__exe__DOT__immediate 
                = (((- (IData)((1U & (vlSelfRef.top_tb__DOT__cpu__DOT__exe__DOT__inst_buffer 
                                      >> 0x19U)))) 
                    << 0xcU) | ((0xf80U & (vlSelfRef.top_tb__DOT__cpu__DOT__exe__DOT__inst_buffer 
                                           >> 0xeU)) 
                                | (0x7fU & vlSelfRef.top_tb__DOT__cpu__DOT__exe__DOT__inst_buffer)));
        }
    } else {
        vlSelfRef.top_tb__DOT__cpu__DOT__exe__DOT__immediate 
            = (((- (IData)((1U & (vlSelfRef.top_tb__DOT__cpu__DOT__exe__DOT__inst_buffer 
                                  >> 0xcU)))) << 0xcU) 
               | (0xfffU & vlSelfRef.top_tb__DOT__cpu__DOT__exe__DOT__inst_buffer));
    }
}

VL_ATTR_COLD void Vtop_tb___024root___eval_triggers__stl(Vtop_tb___024root* vlSelf);

VL_ATTR_COLD bool Vtop_tb___024root___eval_phase__stl(Vtop_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___eval_phase__stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtop_tb___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vtop_tb___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop_tb___024root___dump_triggers__ico(Vtop_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___dump_triggers__ico\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VicoTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop_tb___024root___dump_triggers__act(Vtop_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___dump_triggers__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @([hybrid] top_tb.cpu.madj.adj_word)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop_tb___024root___dump_triggers__nba(Vtop_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___dump_triggers__nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @([hybrid] top_tb.cpu.madj.adj_word)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop_tb___024root____Vm_traceActivitySetAll(Vtop_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root____Vm_traceActivitySetAll\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
}

VL_ATTR_COLD void Vtop_tb___024root___ctor_var_reset(Vtop_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___ctor_var_reset\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->clk_en = VL_RAND_RESET_I(1);
    vlSelf->sync_rst = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__data_in = VL_RAND_RESET_I(32);
    vlSelf->top_tb__DOT__mask = VL_RAND_RESET_I(4);
    vlSelf->top_tb__DOT__data_out = VL_RAND_RESET_I(32);
    vlSelf->top_tb__DOT____Vcellinp__imem__rom_addr = VL_RAND_RESET_I(5);
    vlSelf->top_tb__DOT__cpu__DOT__ip_jmp = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__cpu__DOT__ip_jmp_addr = VL_RAND_RESET_I(30);
    vlSelf->top_tb__DOT__cpu__DOT__reg_din = VL_RAND_RESET_I(32);
    vlSelf->top_tb__DOT__cpu__DOT__alu_out = VL_RAND_RESET_I(32);
    vlSelf->top_tb__DOT__cpu__DOT__fetch__DOT__init_state = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__cpu__DOT__fetch__DOT__ip = VL_RAND_RESET_I(30);
    vlSelf->top_tb__DOT__cpu__DOT__decode__DOT__intermediate_control_word = VL_RAND_RESET_I(12);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->top_tb__DOT__cpu__DOT__decode__DOT__rf__DOT__memory[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top_tb__DOT__cpu__DOT__exe__DOT__rs1_buffer = VL_RAND_RESET_I(32);
    vlSelf->top_tb__DOT__cpu__DOT__exe__DOT__rs2_buffer = VL_RAND_RESET_I(32);
    vlSelf->top_tb__DOT__cpu__DOT__exe__DOT__inst_buffer = VL_RAND_RESET_I(32);
    vlSelf->top_tb__DOT__cpu__DOT__exe__DOT__ip_buffer = VL_RAND_RESET_I(30);
    vlSelf->top_tb__DOT__cpu__DOT__exe__DOT__control_word = VL_RAND_RESET_I(12);
    vlSelf->top_tb__DOT__cpu__DOT__exe__DOT__int_rs1 = VL_RAND_RESET_I(32);
    vlSelf->top_tb__DOT__cpu__DOT__exe__DOT__int_rs2 = VL_RAND_RESET_I(32);
    vlSelf->top_tb__DOT__cpu__DOT__exe__DOT__immediate = VL_RAND_RESET_I(32);
    vlSelf->top_tb__DOT__cpu__DOT__exe__DOT__alu_b = VL_RAND_RESET_I(32);
    vlSelf->top_tb__DOT__cpu__DOT__exe__DOT__alu_op = VL_RAND_RESET_I(4);
    vlSelf->top_tb__DOT__cpu__DOT__exe__DOT__alu_inst__DOT__intermediate_addsub = VL_RAND_RESET_Q(33);
    vlSelf->top_tb__DOT__cpu__DOT__madj__DOT__adj_word = VL_RAND_RESET_I(16);
    vlSelf->top_tb__DOT__cpu__DOT__writeback__DOT__inst_reg = VL_RAND_RESET_I(32);
    vlSelf->top_tb__DOT__cpu__DOT__writeback__DOT__control_word = VL_RAND_RESET_I(3);
    vlSelf->top_tb__DOT__cpu__DOT__writeback__DOT__alu_buffer = VL_RAND_RESET_I(32);
    vlSelf->top_tb__DOT__cpu__DOT__writeback__DOT__ip_buffer = VL_RAND_RESET_I(30);
    vlSelf->top_tb__DOT__imem__DOT__buffer = VL_RAND_RESET_I(32);
    vlSelf->__Vtrigprevexpr___TOP__top_tb__DOT__cpu__DOT__madj__DOT__adj_word__0 = VL_RAND_RESET_I(16);
    vlSelf->__VstlDidInit = 0;
    vlSelf->__Vtrigprevexpr___TOP__top_tb__DOT__cpu__DOT__madj__DOT__adj_word__1 = VL_RAND_RESET_I(16);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__VactDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
