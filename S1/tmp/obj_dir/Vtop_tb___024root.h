// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop_tb.h for the primary calling header

#ifndef VERILATED_VTOP_TB___024ROOT_H_
#define VERILATED_VTOP_TB___024ROOT_H_  // guard

#include "verilated.h"


class Vtop_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop_tb___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(clk_en,0,0);
    VL_IN8(sync_rst,0,0);
    CData/*3:0*/ top_tb__DOT__mask;
    CData/*4:0*/ top_tb__DOT____Vcellinp__imem__rom_addr;
    CData/*0:0*/ top_tb__DOT__cpu__DOT__ip_jmp;
    CData/*0:0*/ top_tb__DOT__cpu__DOT__fetch__DOT__init_state;
    CData/*3:0*/ top_tb__DOT__cpu__DOT__exe__DOT__alu_op;
    CData/*2:0*/ top_tb__DOT__cpu__DOT__writeback__DOT__control_word;
    CData/*0:0*/ __VstlDidInit;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __VactDidInit;
    CData/*0:0*/ __VactContinue;
    SData/*11:0*/ top_tb__DOT__cpu__DOT__decode__DOT__intermediate_control_word;
    SData/*11:0*/ top_tb__DOT__cpu__DOT__exe__DOT__control_word;
    SData/*15:0*/ top_tb__DOT__cpu__DOT__madj__DOT__adj_word;
    SData/*15:0*/ __Vtrigprevexpr___TOP__top_tb__DOT__cpu__DOT__madj__DOT__adj_word__0;
    SData/*15:0*/ __Vtrigprevexpr___TOP__top_tb__DOT__cpu__DOT__madj__DOT__adj_word__1;
    IData/*31:0*/ top_tb__DOT__data_in;
    IData/*31:0*/ top_tb__DOT__data_out;
    IData/*29:0*/ top_tb__DOT__cpu__DOT__ip_jmp_addr;
    IData/*31:0*/ top_tb__DOT__cpu__DOT__reg_din;
    IData/*31:0*/ top_tb__DOT__cpu__DOT__alu_out;
    IData/*29:0*/ top_tb__DOT__cpu__DOT__fetch__DOT__ip;
    IData/*31:0*/ top_tb__DOT__cpu__DOT__exe__DOT__rs1_buffer;
    IData/*31:0*/ top_tb__DOT__cpu__DOT__exe__DOT__rs2_buffer;
    IData/*31:0*/ top_tb__DOT__cpu__DOT__exe__DOT__inst_buffer;
    IData/*29:0*/ top_tb__DOT__cpu__DOT__exe__DOT__ip_buffer;
    IData/*31:0*/ top_tb__DOT__cpu__DOT__exe__DOT__int_rs1;
    IData/*31:0*/ top_tb__DOT__cpu__DOT__exe__DOT__int_rs2;
    IData/*31:0*/ top_tb__DOT__cpu__DOT__exe__DOT__immediate;
    IData/*31:0*/ top_tb__DOT__cpu__DOT__exe__DOT__alu_b;
    IData/*31:0*/ top_tb__DOT__cpu__DOT__writeback__DOT__inst_reg;
    IData/*31:0*/ top_tb__DOT__cpu__DOT__writeback__DOT__alu_buffer;
    IData/*29:0*/ top_tb__DOT__cpu__DOT__writeback__DOT__ip_buffer;
    IData/*31:0*/ top_tb__DOT__imem__DOT__buffer;
    IData/*31:0*/ __VactIterCount;
    QData/*32:0*/ top_tb__DOT__cpu__DOT__exe__DOT__alu_inst__DOT__intermediate_addsub;
    VlUnpacked<IData/*31:0*/, 32> top_tb__DOT__cpu__DOT__decode__DOT__rf__DOT__memory;
    VlUnpacked<CData/*0:0*/, 4> __Vm_traceActivity;
    VlTriggerVec<2> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtop_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop_tb___024root(Vtop_tb__Syms* symsp, const char* v__name);
    ~Vtop_tb___024root();
    VL_UNCOPYABLE(Vtop_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
