// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop_tb.h for the primary calling header

#include "Vtop_tb__pch.h"
#include "Vtop_tb___024root.h"

void Vtop_tb___024root___ico_sequent__TOP__0(Vtop_tb___024root* vlSelf);

void Vtop_tb___024root___eval_ico(Vtop_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___eval_ico\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Vtop_tb___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vtop_tb___024root___ico_sequent__TOP__0(Vtop_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___ico_sequent__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.top_tb__DOT____Vcellinp__imem__rom_addr 
        = ((1U & ((~ (IData)(vlSelfRef.top_tb__DOT__cpu__DOT__fetch__DOT__init_state)) 
                  | (IData)(vlSelfRef.sync_rst))) ? 0U
            : (0x1fU & ((IData)(vlSelfRef.top_tb__DOT__cpu__DOT__ip_jmp)
                         ? vlSelfRef.top_tb__DOT__cpu__DOT__ip_jmp_addr
                         : ((IData)(1U) + vlSelfRef.top_tb__DOT__cpu__DOT__fetch__DOT__ip))));
}

void Vtop_tb___024root___eval_triggers__ico(Vtop_tb___024root* vlSelf);

bool Vtop_tb___024root___eval_phase__ico(Vtop_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___eval_phase__ico\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vtop_tb___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelfRef.__VicoTriggered.any();
    if (__VicoExecute) {
        Vtop_tb___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vtop_tb___024root___act_sequent__TOP__0(Vtop_tb___024root* vlSelf);

void Vtop_tb___024root___eval_act(Vtop_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___eval_act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vtop_tb___024root___act_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
}

VL_INLINE_OPT void Vtop_tb___024root___act_sequent__TOP__0(Vtop_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___act_sequent__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.top_tb__DOT__cpu__DOT__reg_din = ((4U 
                                                 & (IData)(vlSelfRef.top_tb__DOT__cpu__DOT__writeback__DOT__control_word))
                                                 ? 
                                                ((2U 
                                                  & (IData)(vlSelfRef.top_tb__DOT__cpu__DOT__writeback__DOT__control_word))
                                                  ? 
                                                 (((IData)(1U) 
                                                   + vlSelfRef.top_tb__DOT__cpu__DOT__writeback__DOT__ip_buffer) 
                                                  << 2U)
                                                  : 
                                                 ((0x2000U 
                                                   & vlSelfRef.top_tb__DOT__cpu__DOT__exe__DOT__inst_buffer)
                                                   ? vlSelfRef.top_tb__DOT__data_in
                                                   : 
                                                  ((0x1000U 
                                                    & vlSelfRef.top_tb__DOT__cpu__DOT__exe__DOT__inst_buffer)
                                                    ? 
                                                   (((- (IData)((IData)(
                                                                        (((IData)(vlSelfRef.top_tb__DOT__cpu__DOT__madj__DOT__adj_word) 
                                                                          >> 0xfU) 
                                                                         & (vlSelfRef.top_tb__DOT__cpu__DOT__exe__DOT__inst_buffer 
                                                                            >> 0xfU))))) 
                                                     << 0x10U) 
                                                    | (IData)(vlSelfRef.top_tb__DOT__cpu__DOT__madj__DOT__adj_word))
                                                    : 
                                                   (((- (IData)((IData)(
                                                                        (((IData)(vlSelfRef.top_tb__DOT__cpu__DOT__madj__DOT__adj_word) 
                                                                          >> 0xfU) 
                                                                         & (vlSelfRef.top_tb__DOT__cpu__DOT__exe__DOT__inst_buffer 
                                                                            >> 0xfU))))) 
                                                     << 0x10U) 
                                                    | (IData)(vlSelfRef.top_tb__DOT__cpu__DOT__madj__DOT__adj_word)))))
                                                 : 
                                                ((2U 
                                                  & (IData)(vlSelfRef.top_tb__DOT__cpu__DOT__writeback__DOT__control_word))
                                                  ? 
                                                 (vlSelfRef.top_tb__DOT__cpu__DOT__writeback__DOT__inst_reg 
                                                  << 0xbU)
                                                  : vlSelfRef.top_tb__DOT__cpu__DOT__writeback__DOT__alu_buffer));
    if ((((IData)(vlSelfRef.top_tb__DOT__cpu__DOT__writeback__DOT__control_word) 
          & ((0x1fU & (vlSelfRef.top_tb__DOT__cpu__DOT__writeback__DOT__inst_reg 
                       >> 0x15U)) == (0x1fU & (vlSelfRef.top_tb__DOT__cpu__DOT__exe__DOT__inst_buffer 
                                               >> 7U)))) 
         & (0U != (0x1fU & (vlSelfRef.top_tb__DOT__cpu__DOT__writeback__DOT__inst_reg 
                            >> 0x15U))))) {
        if ((((IData)(vlSelfRef.top_tb__DOT__cpu__DOT__writeback__DOT__control_word) 
              & ((0x1fU & (vlSelfRef.top_tb__DOT__cpu__DOT__writeback__DOT__inst_reg 
                           >> 0x15U)) == (0x1fU & (vlSelfRef.top_tb__DOT__cpu__DOT__exe__DOT__inst_buffer 
                                                   >> 7U)))) 
             & (0U != (0x1fU & (vlSelfRef.top_tb__DOT__cpu__DOT__writeback__DOT__inst_reg 
                                >> 0x15U))))) {
            vlSelfRef.top_tb__DOT__cpu__DOT__exe__DOT__int_rs2 
                = vlSelfRef.top_tb__DOT__cpu__DOT__reg_din;
        }
    } else {
        vlSelfRef.top_tb__DOT__cpu__DOT__exe__DOT__int_rs2 
            = vlSelfRef.top_tb__DOT__cpu__DOT__exe__DOT__rs2_buffer;
    }
    if ((((IData)(vlSelfRef.top_tb__DOT__cpu__DOT__writeback__DOT__control_word) 
          & ((0x1fU & (vlSelfRef.top_tb__DOT__cpu__DOT__writeback__DOT__inst_reg 
                       >> 0x15U)) == (0x1fU & (vlSelfRef.top_tb__DOT__cpu__DOT__exe__DOT__inst_buffer 
                                               >> 0x10U)))) 
         & (0U != (0x1fU & (vlSelfRef.top_tb__DOT__cpu__DOT__writeback__DOT__inst_reg 
                            >> 0x15U))))) {
        if ((((IData)(vlSelfRef.top_tb__DOT__cpu__DOT__writeback__DOT__control_word) 
              & ((0x1fU & (vlSelfRef.top_tb__DOT__cpu__DOT__writeback__DOT__inst_reg 
                           >> 0x15U)) == (0x1fU & (vlSelfRef.top_tb__DOT__cpu__DOT__exe__DOT__inst_buffer 
                                                   >> 0x10U)))) 
             & (0U != (0x1fU & (vlSelfRef.top_tb__DOT__cpu__DOT__writeback__DOT__inst_reg 
                                >> 0x15U))))) {
            vlSelfRef.top_tb__DOT__cpu__DOT__exe__DOT__int_rs1 
                = vlSelfRef.top_tb__DOT__cpu__DOT__reg_din;
        }
    } else {
        vlSelfRef.top_tb__DOT__cpu__DOT__exe__DOT__int_rs1 
            = vlSelfRef.top_tb__DOT__cpu__DOT__exe__DOT__rs1_buffer;
    }
    if ((1U & (IData)(vlSelfRef.top_tb__DOT__cpu__DOT__exe__DOT__control_word))) {
        if ((1U & (IData)(vlSelfRef.top_tb__DOT__cpu__DOT__exe__DOT__control_word))) {
            vlSelfRef.top_tb__DOT__cpu__DOT__exe__DOT__alu_b 
                = vlSelfRef.top_tb__DOT__cpu__DOT__exe__DOT__immediate;
        }
    } else {
        vlSelfRef.top_tb__DOT__cpu__DOT__exe__DOT__alu_b 
            = vlSelfRef.top_tb__DOT__cpu__DOT__exe__DOT__int_rs2;
    }
    vlSelfRef.top_tb__DOT__cpu__DOT__ip_jmp_addr = 
        (0x3fffffffU & ((0x40U & (IData)(vlSelfRef.top_tb__DOT__cpu__DOT__exe__DOT__control_word))
                         ? ((0x20U & (IData)(vlSelfRef.top_tb__DOT__cpu__DOT__exe__DOT__control_word))
                             ? 0U : ((vlSelfRef.top_tb__DOT__cpu__DOT__exe__DOT__ip_buffer 
                                      + (vlSelfRef.top_tb__DOT__cpu__DOT__exe__DOT__int_rs1 
                                         >> 2U)) + 
                                     ((0x3ffffc00U 
                                       & ((- (IData)(
                                                     (1U 
                                                      & (vlSelfRef.top_tb__DOT__cpu__DOT__exe__DOT__inst_buffer 
                                                         >> 0xbU)))) 
                                          << 0xaU)) 
                                      | (0x3ffU & (vlSelfRef.top_tb__DOT__cpu__DOT__exe__DOT__inst_buffer 
                                                   >> 2U)))))
                         : ((0x20U & (IData)(vlSelfRef.top_tb__DOT__cpu__DOT__exe__DOT__control_word))
                             ? (vlSelfRef.top_tb__DOT__cpu__DOT__exe__DOT__ip_buffer 
                                + ((0x3ff80000U & (
                                                   (- (IData)(
                                                              (1U 
                                                               & (vlSelfRef.top_tb__DOT__cpu__DOT__exe__DOT__inst_buffer 
                                                                  >> 0x14U)))) 
                                                   << 0x13U)) 
                                   | (0x7ffffU & (vlSelfRef.top_tb__DOT__cpu__DOT__exe__DOT__inst_buffer 
                                                  >> 2U))))
                             : (vlSelfRef.top_tb__DOT__cpu__DOT__exe__DOT__ip_buffer 
                                + ((0x3ffffc00U & (
                                                   (- (IData)(
                                                              (1U 
                                                               & (vlSelfRef.top_tb__DOT__cpu__DOT__exe__DOT__inst_buffer 
                                                                  >> 0x19U)))) 
                                                   << 0xaU)) 
                                   | ((0x3e0U & (vlSelfRef.top_tb__DOT__cpu__DOT__exe__DOT__inst_buffer 
                                                 >> 0x10U)) 
                                      | (0x1fU & (vlSelfRef.top_tb__DOT__cpu__DOT__exe__DOT__inst_buffer 
                                                  >> 2U))))))));
    vlSelfRef.top_tb__DOT__cpu__DOT__exe__DOT__alu_inst__DOT__intermediate_addsub 
        = (0x1ffffffffULL & ((QData)((IData)(vlSelfRef.top_tb__DOT__cpu__DOT__exe__DOT__int_rs1)) 
                             + ((QData)((IData)((vlSelfRef.top_tb__DOT__cpu__DOT__exe__DOT__alu_b 
                                                 ^ 
                                                 (- (IData)(
                                                            (1U 
                                                             & (IData)(vlSelfRef.top_tb__DOT__cpu__DOT__exe__DOT__alu_op))))))) 
                                + (QData)((IData)((1U 
                                                   & (IData)(vlSelfRef.top_tb__DOT__cpu__DOT__exe__DOT__alu_op)))))));
    vlSelfRef.top_tb__DOT____Vcellinp__imem__rom_addr 
        = ((1U & ((~ (IData)(vlSelfRef.top_tb__DOT__cpu__DOT__fetch__DOT__init_state)) 
                  | (IData)(vlSelfRef.sync_rst))) ? 0U
            : (0x1fU & ((IData)(vlSelfRef.top_tb__DOT__cpu__DOT__ip_jmp)
                         ? vlSelfRef.top_tb__DOT__cpu__DOT__ip_jmp_addr
                         : ((IData)(1U) + vlSelfRef.top_tb__DOT__cpu__DOT__fetch__DOT__ip))));
    vlSelfRef.top_tb__DOT__cpu__DOT__alu_out = ((4U 
                                                 & (IData)(vlSelfRef.top_tb__DOT__cpu__DOT__exe__DOT__alu_op))
                                                 ? 
                                                ((2U 
                                                  & (IData)(vlSelfRef.top_tb__DOT__cpu__DOT__exe__DOT__alu_op))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.top_tb__DOT__cpu__DOT__exe__DOT__alu_op))
                                                   ? 
                                                  VL_SHIFTL_III(32,32,32, vlSelfRef.top_tb__DOT__cpu__DOT__exe__DOT__int_rs1, vlSelfRef.top_tb__DOT__cpu__DOT__exe__DOT__alu_b)
                                                   : 
                                                  VL_SHIFTRS_III(32,32,5, vlSelfRef.top_tb__DOT__cpu__DOT__exe__DOT__int_rs1, 
                                                                 (0x1fU 
                                                                  & vlSelfRef.top_tb__DOT__cpu__DOT__exe__DOT__alu_b)))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.top_tb__DOT__cpu__DOT__exe__DOT__alu_op))
                                                   ? 
                                                  (vlSelfRef.top_tb__DOT__cpu__DOT__exe__DOT__int_rs1 
                                                   >> 
                                                   (0x1fU 
                                                    & vlSelfRef.top_tb__DOT__cpu__DOT__exe__DOT__alu_b))
                                                   : 
                                                  (vlSelfRef.top_tb__DOT__cpu__DOT__exe__DOT__int_rs1 
                                                   ^ vlSelfRef.top_tb__DOT__cpu__DOT__exe__DOT__alu_b)))
                                                 : 
                                                ((2U 
                                                  & (IData)(vlSelfRef.top_tb__DOT__cpu__DOT__exe__DOT__alu_op))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.top_tb__DOT__cpu__DOT__exe__DOT__alu_op))
                                                   ? 
                                                  (vlSelfRef.top_tb__DOT__cpu__DOT__exe__DOT__int_rs1 
                                                   | vlSelfRef.top_tb__DOT__cpu__DOT__exe__DOT__alu_b)
                                                   : 
                                                  (vlSelfRef.top_tb__DOT__cpu__DOT__exe__DOT__int_rs1 
                                                   & vlSelfRef.top_tb__DOT__cpu__DOT__exe__DOT__alu_b))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.top_tb__DOT__cpu__DOT__exe__DOT__alu_op))
                                                   ? 
                                                  ((8U 
                                                    & (IData)(vlSelfRef.top_tb__DOT__cpu__DOT__exe__DOT__alu_op))
                                                    ? 
                                                   (1U 
                                                    & (~ (IData)(
                                                                 (vlSelfRef.top_tb__DOT__cpu__DOT__exe__DOT__alu_inst__DOT__intermediate_addsub 
                                                                  >> 0x20U))))
                                                    : (IData)(vlSelfRef.top_tb__DOT__cpu__DOT__exe__DOT__alu_inst__DOT__intermediate_addsub))
                                                   : 
                                                  ((8U 
                                                    & (IData)(vlSelfRef.top_tb__DOT__cpu__DOT__exe__DOT__alu_op))
                                                    ? 
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelfRef.top_tb__DOT__cpu__DOT__exe__DOT__alu_inst__DOT__intermediate_addsub 
                                                               >> 0x20U)))
                                                    : (IData)(vlSelfRef.top_tb__DOT__cpu__DOT__exe__DOT__alu_inst__DOT__intermediate_addsub)))));
    vlSelfRef.top_tb__DOT__cpu__DOT__madj__DOT__adj_word 
        = (0xffffU & ((8U & vlSelfRef.top_tb__DOT__cpu__DOT__alu_out)
                       ? vlSelfRef.top_tb__DOT__data_in
                       : ((4U & vlSelfRef.top_tb__DOT__cpu__DOT__alu_out)
                           ? (vlSelfRef.top_tb__DOT__data_in 
                              >> 0x10U) : (vlSelfRef.top_tb__DOT__data_in 
                                           >> 0x10U))));
    vlSelfRef.top_tb__DOT__mask = 0U;
    vlSelfRef.top_tb__DOT__data_out = 0U;
    if ((0U == (0xfU & (vlSelfRef.top_tb__DOT__cpu__DOT__exe__DOT__inst_buffer 
                        >> 0xcU)))) {
        if ((8U & vlSelfRef.top_tb__DOT__cpu__DOT__alu_out)) {
            if ((4U & vlSelfRef.top_tb__DOT__cpu__DOT__alu_out)) {
                vlSelfRef.top_tb__DOT__mask = 1U;
                vlSelfRef.top_tb__DOT__data_out = (0xffU 
                                                   & vlSelfRef.top_tb__DOT__cpu__DOT__exe__DOT__int_rs2);
            } else {
                vlSelfRef.top_tb__DOT__mask = 2U;
                vlSelfRef.top_tb__DOT__data_out = (0xff00U 
                                                   & (vlSelfRef.top_tb__DOT__cpu__DOT__exe__DOT__int_rs2 
                                                      << 8U));
            }
        } else if ((4U & vlSelfRef.top_tb__DOT__cpu__DOT__alu_out)) {
            vlSelfRef.top_tb__DOT__mask = 4U;
            vlSelfRef.top_tb__DOT__data_out = (0xff0000U 
                                               & (vlSelfRef.top_tb__DOT__cpu__DOT__exe__DOT__int_rs2 
                                                  << 0x10U));
        } else {
            vlSelfRef.top_tb__DOT__mask = 8U;
            vlSelfRef.top_tb__DOT__data_out = (vlSelfRef.top_tb__DOT__cpu__DOT__exe__DOT__int_rs2 
                                               << 0x18U);
        }
    } else if ((1U == (0xfU & (vlSelfRef.top_tb__DOT__cpu__DOT__exe__DOT__inst_buffer 
                               >> 0xcU)))) {
        if ((8U & vlSelfRef.top_tb__DOT__cpu__DOT__alu_out)) {
            vlSelfRef.top_tb__DOT__mask = 3U;
            vlSelfRef.top_tb__DOT__data_out = (0xffffU 
                                               & vlSelfRef.top_tb__DOT__cpu__DOT__exe__DOT__int_rs2);
        } else {
            vlSelfRef.top_tb__DOT__mask = 0xcU;
            vlSelfRef.top_tb__DOT__data_out = (vlSelfRef.top_tb__DOT__cpu__DOT__exe__DOT__int_rs2 
                                               << 0x10U);
        }
    } else if (((2U == (0xfU & (vlSelfRef.top_tb__DOT__cpu__DOT__exe__DOT__inst_buffer 
                                >> 0xcU))) | (3U == 
                                              (0xfU 
                                               & (vlSelfRef.top_tb__DOT__cpu__DOT__exe__DOT__inst_buffer 
                                                  >> 0xcU))))) {
        vlSelfRef.top_tb__DOT__mask = 0xfU;
        vlSelfRef.top_tb__DOT__data_out = vlSelfRef.top_tb__DOT__cpu__DOT__exe__DOT__int_rs2;
    }
}

void Vtop_tb___024root___nba_sequent__TOP__0(Vtop_tb___024root* vlSelf);
void Vtop_tb___024root___nba_comb__TOP__0(Vtop_tb___024root* vlSelf);

void Vtop_tb___024root___eval_nba(Vtop_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___eval_nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop_tb___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop_tb___024root___nba_comb__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
    }
}

extern const VlUnpacked<SData/*11:0*/, 8> Vtop_tb__ConstPool__TABLE_h42cb7dd2_0;

VL_INLINE_OPT void Vtop_tb___024root___nba_sequent__TOP__0(Vtop_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___nba_sequent__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*2:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    IData/*29:0*/ __Vdly__top_tb__DOT__cpu__DOT__fetch__DOT__ip;
    __Vdly__top_tb__DOT__cpu__DOT__fetch__DOT__ip = 0;
    IData/*31:0*/ __VdlyVal__top_tb__DOT__cpu__DOT__decode__DOT__rf__DOT__memory__v0;
    __VdlyVal__top_tb__DOT__cpu__DOT__decode__DOT__rf__DOT__memory__v0 = 0;
    CData/*4:0*/ __VdlyDim0__top_tb__DOT__cpu__DOT__decode__DOT__rf__DOT__memory__v0;
    __VdlyDim0__top_tb__DOT__cpu__DOT__decode__DOT__rf__DOT__memory__v0 = 0;
    CData/*0:0*/ __VdlySet__top_tb__DOT__cpu__DOT__decode__DOT__rf__DOT__memory__v0;
    __VdlySet__top_tb__DOT__cpu__DOT__decode__DOT__rf__DOT__memory__v0 = 0;
    // Body
    __Vdly__top_tb__DOT__cpu__DOT__fetch__DOT__ip = vlSelfRef.top_tb__DOT__cpu__DOT__fetch__DOT__ip;
    __VdlySet__top_tb__DOT__cpu__DOT__decode__DOT__rf__DOT__memory__v0 = 0U;
    if (((IData)(vlSelfRef.top_tb__DOT__cpu__DOT__writeback__DOT__control_word) 
         & (IData)(vlSelfRef.clk_en))) {
        __VdlyVal__top_tb__DOT__cpu__DOT__decode__DOT__rf__DOT__memory__v0 
            = vlSelfRef.top_tb__DOT__cpu__DOT__reg_din;
        __VdlyDim0__top_tb__DOT__cpu__DOT__decode__DOT__rf__DOT__memory__v0 
            = (0x1fU & (vlSelfRef.top_tb__DOT__cpu__DOT__writeback__DOT__inst_reg 
                        >> 0x15U));
        __VdlySet__top_tb__DOT__cpu__DOT__decode__DOT__rf__DOT__memory__v0 = 1U;
    }
    if (vlSelfRef.clk_en) {
        __Vdly__top_tb__DOT__cpu__DOT__fetch__DOT__ip 
            = ((1U & ((IData)(vlSelfRef.sync_rst) | 
                      (~ (IData)(vlSelfRef.top_tb__DOT__cpu__DOT__fetch__DOT__init_state))))
                ? 0U : (0x3fffffffU & ((IData)(vlSelfRef.top_tb__DOT__cpu__DOT__ip_jmp)
                                        ? vlSelfRef.top_tb__DOT__cpu__DOT__ip_jmp_addr
                                        : ((IData)(1U) 
                                           + vlSelfRef.top_tb__DOT__cpu__DOT__fetch__DOT__ip))));
        vlSelfRef.top_tb__DOT__cpu__DOT__writeback__DOT__alu_buffer 
            = vlSelfRef.top_tb__DOT__cpu__DOT__alu_out;
        vlSelfRef.top_tb__DOT__cpu__DOT__writeback__DOT__ip_buffer 
            = vlSelfRef.top_tb__DOT__cpu__DOT__exe__DOT__ip_buffer;
        vlSelfRef.top_tb__DOT__cpu__DOT__exe__DOT__rs2_buffer 
            = ((0U == (0x1fU & (vlSelfRef.top_tb__DOT__imem__DOT__buffer 
                                >> 7U))) ? 0U : (((IData)(vlSelfRef.top_tb__DOT__cpu__DOT__writeback__DOT__control_word) 
                                                  & ((0x1fU 
                                                      & (vlSelfRef.top_tb__DOT__cpu__DOT__writeback__DOT__inst_reg 
                                                         >> 0x15U)) 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelfRef.top_tb__DOT__imem__DOT__buffer 
                                                         >> 7U))))
                                                  ? vlSelfRef.top_tb__DOT__cpu__DOT__reg_din
                                                  : 
                                                 vlSelfRef.top_tb__DOT__cpu__DOT__decode__DOT__rf__DOT__memory
                                                 [(0x1fU 
                                                   & (vlSelfRef.top_tb__DOT__imem__DOT__buffer 
                                                      >> 7U))]));
        vlSelfRef.top_tb__DOT__cpu__DOT__exe__DOT__rs1_buffer 
            = ((0U == (0x1fU & (vlSelfRef.top_tb__DOT__imem__DOT__buffer 
                                >> 0x15U))) ? 0U : 
               (((IData)(vlSelfRef.top_tb__DOT__cpu__DOT__writeback__DOT__control_word) 
                 & ((0x1fU & (vlSelfRef.top_tb__DOT__cpu__DOT__writeback__DOT__inst_reg 
                              >> 0x15U)) == (0x1fU 
                                             & (vlSelfRef.top_tb__DOT__imem__DOT__buffer 
                                                >> 0x15U))))
                 ? vlSelfRef.top_tb__DOT__cpu__DOT__reg_din
                 : vlSelfRef.top_tb__DOT__cpu__DOT__decode__DOT__rf__DOT__memory
                [(0x1fU & (vlSelfRef.top_tb__DOT__imem__DOT__buffer 
                           >> 0x15U))]));
        vlSelfRef.top_tb__DOT__cpu__DOT__fetch__DOT__init_state 
            = (1U & (~ (IData)(vlSelfRef.sync_rst)));
        vlSelfRef.top_tb__DOT__cpu__DOT__exe__DOT__ip_buffer 
            = vlSelfRef.top_tb__DOT__cpu__DOT__fetch__DOT__ip;
        vlSelfRef.top_tb__DOT__cpu__DOT__writeback__DOT__control_word 
            = (7U & ((IData)(vlSelfRef.top_tb__DOT__cpu__DOT__exe__DOT__control_word) 
                     >> 9U));
        vlSelfRef.top_tb__DOT__cpu__DOT__writeback__DOT__inst_reg 
            = vlSelfRef.top_tb__DOT__cpu__DOT__exe__DOT__inst_buffer;
        vlSelfRef.top_tb__DOT__cpu__DOT__exe__DOT__control_word 
            = ((IData)(vlSelfRef.top_tb__DOT__cpu__DOT__ip_jmp)
                ? 0U : (IData)(vlSelfRef.top_tb__DOT__cpu__DOT__decode__DOT__intermediate_control_word));
        vlSelfRef.top_tb__DOT__cpu__DOT__exe__DOT__inst_buffer 
            = vlSelfRef.top_tb__DOT__imem__DOT__buffer;
    }
    if (__VdlySet__top_tb__DOT__cpu__DOT__decode__DOT__rf__DOT__memory__v0) {
        vlSelfRef.top_tb__DOT__cpu__DOT__decode__DOT__rf__DOT__memory[__VdlyDim0__top_tb__DOT__cpu__DOT__decode__DOT__rf__DOT__memory__v0] 
            = __VdlyVal__top_tb__DOT__cpu__DOT__decode__DOT__rf__DOT__memory__v0;
    }
    vlSelfRef.top_tb__DOT__cpu__DOT__fetch__DOT__ip 
        = __Vdly__top_tb__DOT__cpu__DOT__fetch__DOT__ip;
    vlSelfRef.top_tb__DOT__imem__DOT__buffer = ((0U 
                                                 == (IData)(vlSelfRef.top_tb__DOT____Vcellinp__imem__rom_addr))
                                                 ? 0x7e00002U
                                                 : 
                                                ((1U 
                                                  == (IData)(vlSelfRef.top_tb__DOT____Vcellinp__imem__rom_addr))
                                                  ? 0x7ff0001U
                                                  : 
                                                 ((2U 
                                                   == (IData)(vlSelfRef.top_tb__DOT____Vcellinp__imem__rom_addr))
                                                   ? 0x141ffffcU
                                                   : 0U)));
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
    __Vtableidx1 = (7U & (vlSelfRef.top_tb__DOT__imem__DOT__buffer 
                          >> 0x1aU));
    vlSelfRef.top_tb__DOT__cpu__DOT__decode__DOT__intermediate_control_word 
        = Vtop_tb__ConstPool__TABLE_h42cb7dd2_0[__Vtableidx1];
}

VL_INLINE_OPT void Vtop_tb___024root___nba_comb__TOP__0(Vtop_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___nba_comb__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.top_tb__DOT__cpu__DOT__reg_din = ((4U 
                                                 & (IData)(vlSelfRef.top_tb__DOT__cpu__DOT__writeback__DOT__control_word))
                                                 ? 
                                                ((2U 
                                                  & (IData)(vlSelfRef.top_tb__DOT__cpu__DOT__writeback__DOT__control_word))
                                                  ? 
                                                 (((IData)(1U) 
                                                   + vlSelfRef.top_tb__DOT__cpu__DOT__writeback__DOT__ip_buffer) 
                                                  << 2U)
                                                  : 
                                                 ((0x2000U 
                                                   & vlSelfRef.top_tb__DOT__cpu__DOT__exe__DOT__inst_buffer)
                                                   ? vlSelfRef.top_tb__DOT__data_in
                                                   : 
                                                  ((0x1000U 
                                                    & vlSelfRef.top_tb__DOT__cpu__DOT__exe__DOT__inst_buffer)
                                                    ? 
                                                   (((- (IData)((IData)(
                                                                        (((IData)(vlSelfRef.top_tb__DOT__cpu__DOT__madj__DOT__adj_word) 
                                                                          >> 0xfU) 
                                                                         & (vlSelfRef.top_tb__DOT__cpu__DOT__exe__DOT__inst_buffer 
                                                                            >> 0xfU))))) 
                                                     << 0x10U) 
                                                    | (IData)(vlSelfRef.top_tb__DOT__cpu__DOT__madj__DOT__adj_word))
                                                    : 
                                                   (((- (IData)((IData)(
                                                                        (((IData)(vlSelfRef.top_tb__DOT__cpu__DOT__madj__DOT__adj_word) 
                                                                          >> 0xfU) 
                                                                         & (vlSelfRef.top_tb__DOT__cpu__DOT__exe__DOT__inst_buffer 
                                                                            >> 0xfU))))) 
                                                     << 0x10U) 
                                                    | (IData)(vlSelfRef.top_tb__DOT__cpu__DOT__madj__DOT__adj_word)))))
                                                 : 
                                                ((2U 
                                                  & (IData)(vlSelfRef.top_tb__DOT__cpu__DOT__writeback__DOT__control_word))
                                                  ? 
                                                 (vlSelfRef.top_tb__DOT__cpu__DOT__writeback__DOT__inst_reg 
                                                  << 0xbU)
                                                  : vlSelfRef.top_tb__DOT__cpu__DOT__writeback__DOT__alu_buffer));
    if ((((IData)(vlSelfRef.top_tb__DOT__cpu__DOT__writeback__DOT__control_word) 
          & ((0x1fU & (vlSelfRef.top_tb__DOT__cpu__DOT__writeback__DOT__inst_reg 
                       >> 0x15U)) == (0x1fU & (vlSelfRef.top_tb__DOT__cpu__DOT__exe__DOT__inst_buffer 
                                               >> 7U)))) 
         & (0U != (0x1fU & (vlSelfRef.top_tb__DOT__cpu__DOT__writeback__DOT__inst_reg 
                            >> 0x15U))))) {
        if ((((IData)(vlSelfRef.top_tb__DOT__cpu__DOT__writeback__DOT__control_word) 
              & ((0x1fU & (vlSelfRef.top_tb__DOT__cpu__DOT__writeback__DOT__inst_reg 
                           >> 0x15U)) == (0x1fU & (vlSelfRef.top_tb__DOT__cpu__DOT__exe__DOT__inst_buffer 
                                                   >> 7U)))) 
             & (0U != (0x1fU & (vlSelfRef.top_tb__DOT__cpu__DOT__writeback__DOT__inst_reg 
                                >> 0x15U))))) {
            vlSelfRef.top_tb__DOT__cpu__DOT__exe__DOT__int_rs2 
                = vlSelfRef.top_tb__DOT__cpu__DOT__reg_din;
        }
    } else {
        vlSelfRef.top_tb__DOT__cpu__DOT__exe__DOT__int_rs2 
            = vlSelfRef.top_tb__DOT__cpu__DOT__exe__DOT__rs2_buffer;
    }
    if ((((IData)(vlSelfRef.top_tb__DOT__cpu__DOT__writeback__DOT__control_word) 
          & ((0x1fU & (vlSelfRef.top_tb__DOT__cpu__DOT__writeback__DOT__inst_reg 
                       >> 0x15U)) == (0x1fU & (vlSelfRef.top_tb__DOT__cpu__DOT__exe__DOT__inst_buffer 
                                               >> 0x10U)))) 
         & (0U != (0x1fU & (vlSelfRef.top_tb__DOT__cpu__DOT__writeback__DOT__inst_reg 
                            >> 0x15U))))) {
        if ((((IData)(vlSelfRef.top_tb__DOT__cpu__DOT__writeback__DOT__control_word) 
              & ((0x1fU & (vlSelfRef.top_tb__DOT__cpu__DOT__writeback__DOT__inst_reg 
                           >> 0x15U)) == (0x1fU & (vlSelfRef.top_tb__DOT__cpu__DOT__exe__DOT__inst_buffer 
                                                   >> 0x10U)))) 
             & (0U != (0x1fU & (vlSelfRef.top_tb__DOT__cpu__DOT__writeback__DOT__inst_reg 
                                >> 0x15U))))) {
            vlSelfRef.top_tb__DOT__cpu__DOT__exe__DOT__int_rs1 
                = vlSelfRef.top_tb__DOT__cpu__DOT__reg_din;
        }
    } else {
        vlSelfRef.top_tb__DOT__cpu__DOT__exe__DOT__int_rs1 
            = vlSelfRef.top_tb__DOT__cpu__DOT__exe__DOT__rs1_buffer;
    }
    if ((1U & (IData)(vlSelfRef.top_tb__DOT__cpu__DOT__exe__DOT__control_word))) {
        if ((1U & (IData)(vlSelfRef.top_tb__DOT__cpu__DOT__exe__DOT__control_word))) {
            vlSelfRef.top_tb__DOT__cpu__DOT__exe__DOT__alu_b 
                = vlSelfRef.top_tb__DOT__cpu__DOT__exe__DOT__immediate;
        }
    } else {
        vlSelfRef.top_tb__DOT__cpu__DOT__exe__DOT__alu_b 
            = vlSelfRef.top_tb__DOT__cpu__DOT__exe__DOT__int_rs2;
    }
    vlSelfRef.top_tb__DOT__cpu__DOT__ip_jmp_addr = 
        (0x3fffffffU & ((0x40U & (IData)(vlSelfRef.top_tb__DOT__cpu__DOT__exe__DOT__control_word))
                         ? ((0x20U & (IData)(vlSelfRef.top_tb__DOT__cpu__DOT__exe__DOT__control_word))
                             ? 0U : ((vlSelfRef.top_tb__DOT__cpu__DOT__exe__DOT__ip_buffer 
                                      + (vlSelfRef.top_tb__DOT__cpu__DOT__exe__DOT__int_rs1 
                                         >> 2U)) + 
                                     ((0x3ffffc00U 
                                       & ((- (IData)(
                                                     (1U 
                                                      & (vlSelfRef.top_tb__DOT__cpu__DOT__exe__DOT__inst_buffer 
                                                         >> 0xbU)))) 
                                          << 0xaU)) 
                                      | (0x3ffU & (vlSelfRef.top_tb__DOT__cpu__DOT__exe__DOT__inst_buffer 
                                                   >> 2U)))))
                         : ((0x20U & (IData)(vlSelfRef.top_tb__DOT__cpu__DOT__exe__DOT__control_word))
                             ? (vlSelfRef.top_tb__DOT__cpu__DOT__exe__DOT__ip_buffer 
                                + ((0x3ff80000U & (
                                                   (- (IData)(
                                                              (1U 
                                                               & (vlSelfRef.top_tb__DOT__cpu__DOT__exe__DOT__inst_buffer 
                                                                  >> 0x14U)))) 
                                                   << 0x13U)) 
                                   | (0x7ffffU & (vlSelfRef.top_tb__DOT__cpu__DOT__exe__DOT__inst_buffer 
                                                  >> 2U))))
                             : (vlSelfRef.top_tb__DOT__cpu__DOT__exe__DOT__ip_buffer 
                                + ((0x3ffffc00U & (
                                                   (- (IData)(
                                                              (1U 
                                                               & (vlSelfRef.top_tb__DOT__cpu__DOT__exe__DOT__inst_buffer 
                                                                  >> 0x19U)))) 
                                                   << 0xaU)) 
                                   | ((0x3e0U & (vlSelfRef.top_tb__DOT__cpu__DOT__exe__DOT__inst_buffer 
                                                 >> 0x10U)) 
                                      | (0x1fU & (vlSelfRef.top_tb__DOT__cpu__DOT__exe__DOT__inst_buffer 
                                                  >> 2U))))))));
    vlSelfRef.top_tb__DOT__cpu__DOT__exe__DOT__alu_inst__DOT__intermediate_addsub 
        = (0x1ffffffffULL & ((QData)((IData)(vlSelfRef.top_tb__DOT__cpu__DOT__exe__DOT__int_rs1)) 
                             + ((QData)((IData)((vlSelfRef.top_tb__DOT__cpu__DOT__exe__DOT__alu_b 
                                                 ^ 
                                                 (- (IData)(
                                                            (1U 
                                                             & (IData)(vlSelfRef.top_tb__DOT__cpu__DOT__exe__DOT__alu_op))))))) 
                                + (QData)((IData)((1U 
                                                   & (IData)(vlSelfRef.top_tb__DOT__cpu__DOT__exe__DOT__alu_op)))))));
    vlSelfRef.top_tb__DOT____Vcellinp__imem__rom_addr 
        = ((1U & ((~ (IData)(vlSelfRef.top_tb__DOT__cpu__DOT__fetch__DOT__init_state)) 
                  | (IData)(vlSelfRef.sync_rst))) ? 0U
            : (0x1fU & ((IData)(vlSelfRef.top_tb__DOT__cpu__DOT__ip_jmp)
                         ? vlSelfRef.top_tb__DOT__cpu__DOT__ip_jmp_addr
                         : ((IData)(1U) + vlSelfRef.top_tb__DOT__cpu__DOT__fetch__DOT__ip))));
    vlSelfRef.top_tb__DOT__cpu__DOT__alu_out = ((4U 
                                                 & (IData)(vlSelfRef.top_tb__DOT__cpu__DOT__exe__DOT__alu_op))
                                                 ? 
                                                ((2U 
                                                  & (IData)(vlSelfRef.top_tb__DOT__cpu__DOT__exe__DOT__alu_op))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.top_tb__DOT__cpu__DOT__exe__DOT__alu_op))
                                                   ? 
                                                  VL_SHIFTL_III(32,32,32, vlSelfRef.top_tb__DOT__cpu__DOT__exe__DOT__int_rs1, vlSelfRef.top_tb__DOT__cpu__DOT__exe__DOT__alu_b)
                                                   : 
                                                  VL_SHIFTRS_III(32,32,5, vlSelfRef.top_tb__DOT__cpu__DOT__exe__DOT__int_rs1, 
                                                                 (0x1fU 
                                                                  & vlSelfRef.top_tb__DOT__cpu__DOT__exe__DOT__alu_b)))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.top_tb__DOT__cpu__DOT__exe__DOT__alu_op))
                                                   ? 
                                                  (vlSelfRef.top_tb__DOT__cpu__DOT__exe__DOT__int_rs1 
                                                   >> 
                                                   (0x1fU 
                                                    & vlSelfRef.top_tb__DOT__cpu__DOT__exe__DOT__alu_b))
                                                   : 
                                                  (vlSelfRef.top_tb__DOT__cpu__DOT__exe__DOT__int_rs1 
                                                   ^ vlSelfRef.top_tb__DOT__cpu__DOT__exe__DOT__alu_b)))
                                                 : 
                                                ((2U 
                                                  & (IData)(vlSelfRef.top_tb__DOT__cpu__DOT__exe__DOT__alu_op))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.top_tb__DOT__cpu__DOT__exe__DOT__alu_op))
                                                   ? 
                                                  (vlSelfRef.top_tb__DOT__cpu__DOT__exe__DOT__int_rs1 
                                                   | vlSelfRef.top_tb__DOT__cpu__DOT__exe__DOT__alu_b)
                                                   : 
                                                  (vlSelfRef.top_tb__DOT__cpu__DOT__exe__DOT__int_rs1 
                                                   & vlSelfRef.top_tb__DOT__cpu__DOT__exe__DOT__alu_b))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.top_tb__DOT__cpu__DOT__exe__DOT__alu_op))
                                                   ? 
                                                  ((8U 
                                                    & (IData)(vlSelfRef.top_tb__DOT__cpu__DOT__exe__DOT__alu_op))
                                                    ? 
                                                   (1U 
                                                    & (~ (IData)(
                                                                 (vlSelfRef.top_tb__DOT__cpu__DOT__exe__DOT__alu_inst__DOT__intermediate_addsub 
                                                                  >> 0x20U))))
                                                    : (IData)(vlSelfRef.top_tb__DOT__cpu__DOT__exe__DOT__alu_inst__DOT__intermediate_addsub))
                                                   : 
                                                  ((8U 
                                                    & (IData)(vlSelfRef.top_tb__DOT__cpu__DOT__exe__DOT__alu_op))
                                                    ? 
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelfRef.top_tb__DOT__cpu__DOT__exe__DOT__alu_inst__DOT__intermediate_addsub 
                                                               >> 0x20U)))
                                                    : (IData)(vlSelfRef.top_tb__DOT__cpu__DOT__exe__DOT__alu_inst__DOT__intermediate_addsub)))));
    vlSelfRef.top_tb__DOT__mask = 0U;
    vlSelfRef.top_tb__DOT__cpu__DOT__madj__DOT__adj_word 
        = (0xffffU & ((8U & vlSelfRef.top_tb__DOT__cpu__DOT__alu_out)
                       ? vlSelfRef.top_tb__DOT__data_in
                       : ((4U & vlSelfRef.top_tb__DOT__cpu__DOT__alu_out)
                           ? (vlSelfRef.top_tb__DOT__data_in 
                              >> 0x10U) : (vlSelfRef.top_tb__DOT__data_in 
                                           >> 0x10U))));
    vlSelfRef.top_tb__DOT__data_out = 0U;
    if ((0U == (0xfU & (vlSelfRef.top_tb__DOT__cpu__DOT__exe__DOT__inst_buffer 
                        >> 0xcU)))) {
        if ((8U & vlSelfRef.top_tb__DOT__cpu__DOT__alu_out)) {
            if ((4U & vlSelfRef.top_tb__DOT__cpu__DOT__alu_out)) {
                vlSelfRef.top_tb__DOT__mask = 1U;
                vlSelfRef.top_tb__DOT__data_out = (0xffU 
                                                   & vlSelfRef.top_tb__DOT__cpu__DOT__exe__DOT__int_rs2);
            } else {
                vlSelfRef.top_tb__DOT__mask = 2U;
                vlSelfRef.top_tb__DOT__data_out = (0xff00U 
                                                   & (vlSelfRef.top_tb__DOT__cpu__DOT__exe__DOT__int_rs2 
                                                      << 8U));
            }
        } else if ((4U & vlSelfRef.top_tb__DOT__cpu__DOT__alu_out)) {
            vlSelfRef.top_tb__DOT__mask = 4U;
            vlSelfRef.top_tb__DOT__data_out = (0xff0000U 
                                               & (vlSelfRef.top_tb__DOT__cpu__DOT__exe__DOT__int_rs2 
                                                  << 0x10U));
        } else {
            vlSelfRef.top_tb__DOT__mask = 8U;
            vlSelfRef.top_tb__DOT__data_out = (vlSelfRef.top_tb__DOT__cpu__DOT__exe__DOT__int_rs2 
                                               << 0x18U);
        }
    } else if ((1U == (0xfU & (vlSelfRef.top_tb__DOT__cpu__DOT__exe__DOT__inst_buffer 
                               >> 0xcU)))) {
        if ((8U & vlSelfRef.top_tb__DOT__cpu__DOT__alu_out)) {
            vlSelfRef.top_tb__DOT__mask = 3U;
            vlSelfRef.top_tb__DOT__data_out = (0xffffU 
                                               & vlSelfRef.top_tb__DOT__cpu__DOT__exe__DOT__int_rs2);
        } else {
            vlSelfRef.top_tb__DOT__mask = 0xcU;
            vlSelfRef.top_tb__DOT__data_out = (vlSelfRef.top_tb__DOT__cpu__DOT__exe__DOT__int_rs2 
                                               << 0x10U);
        }
    } else if (((2U == (0xfU & (vlSelfRef.top_tb__DOT__cpu__DOT__exe__DOT__inst_buffer 
                                >> 0xcU))) | (3U == 
                                              (0xfU 
                                               & (vlSelfRef.top_tb__DOT__cpu__DOT__exe__DOT__inst_buffer 
                                                  >> 0xcU))))) {
        vlSelfRef.top_tb__DOT__mask = 0xfU;
        vlSelfRef.top_tb__DOT__data_out = vlSelfRef.top_tb__DOT__cpu__DOT__exe__DOT__int_rs2;
    }
}

void Vtop_tb___024root___eval_triggers__act(Vtop_tb___024root* vlSelf);

bool Vtop_tb___024root___eval_phase__act(Vtop_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___eval_phase__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtop_tb___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vtop_tb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtop_tb___024root___eval_phase__nba(Vtop_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___eval_phase__nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtop_tb___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop_tb___024root___dump_triggers__ico(Vtop_tb___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop_tb___024root___dump_triggers__nba(Vtop_tb___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop_tb___024root___dump_triggers__act(Vtop_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop_tb___024root___eval(Vtop_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___eval\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelfRef.__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY((0x64U < __VicoIterCount))) {
#ifdef VL_DEBUG
            Vtop_tb___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("../rtl/../rtl/testbench/top_tb.sv", 1, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vtop_tb___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelfRef.__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vtop_tb___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("../rtl/../rtl/testbench/top_tb.sv", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelfRef.__VactIterCount))) {
#ifdef VL_DEBUG
                Vtop_tb___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("../rtl/../rtl/testbench/top_tb.sv", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vtop_tb___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vtop_tb___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtop_tb___024root___eval_debug_assertions(Vtop_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___eval_debug_assertions\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY((vlSelfRef.clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelfRef.clk_en & 0xfeU))) {
        Verilated::overWidthError("clk_en");}
    if (VL_UNLIKELY((vlSelfRef.sync_rst & 0xfeU))) {
        Verilated::overWidthError("sync_rst");}
}
#endif  // VL_DEBUG
