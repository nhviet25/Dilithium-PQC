// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop___024root.h"

VL_INLINE_OPT void Vtop___024root___sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__0\n"); );
    // Body
    vlSelf->data2_o = vlSelf->top__DOT__dut__DOT__ram
        [vlSelf->addr2_i];
    vlSelf->data1_o = vlSelf->top__DOT__dut__DOT__ram
        [vlSelf->addr1_i];
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__1\n"); );
    // Init
    CData/*7:0*/ __Vdlyvdim0__top__DOT__dut__DOT__ram__v0;
    IData/*23:0*/ __Vdlyvval__top__DOT__dut__DOT__ram__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__dut__DOT__ram__v0;
    CData/*7:0*/ __Vdlyvdim0__top__DOT__dut__DOT__ram__v1;
    IData/*23:0*/ __Vdlyvval__top__DOT__dut__DOT__ram__v1;
    // Body
    __Vdlyvset__top__DOT__dut__DOT__ram__v0 = 0U;
    if (vlSelf->wren_i) {
        __Vdlyvval__top__DOT__dut__DOT__ram__v0 = vlSelf->data_wr1_i;
        __Vdlyvset__top__DOT__dut__DOT__ram__v0 = 1U;
        __Vdlyvdim0__top__DOT__dut__DOT__ram__v0 = vlSelf->addr1_i;
        __Vdlyvval__top__DOT__dut__DOT__ram__v1 = vlSelf->data_wr2_i;
        __Vdlyvdim0__top__DOT__dut__DOT__ram__v1 = vlSelf->addr2_i;
    }
    if (__Vdlyvset__top__DOT__dut__DOT__ram__v0) {
        vlSelf->top__DOT__dut__DOT__ram[__Vdlyvdim0__top__DOT__dut__DOT__ram__v0] 
            = __Vdlyvval__top__DOT__dut__DOT__ram__v0;
        vlSelf->top__DOT__dut__DOT__ram[__Vdlyvdim0__top__DOT__dut__DOT__ram__v1] 
            = __Vdlyvval__top__DOT__dut__DOT__ram__v1;
    }
}

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk_i) & (~ (IData)(vlSelf->__Vclklast__TOP__clk_i)))) {
        Vtop___024root___sequent__TOP__0(vlSelf);
    }
    if (((~ (IData)(vlSelf->clk_i)) & (IData)(vlSelf->__Vclklast__TOP__clk_i))) {
        Vtop___024root___sequent__TOP__1(vlSelf);
    }
    // Final
    vlSelf->__Vclklast__TOP__clk_i = vlSelf->clk_i;
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->data_wr1_i & 0xff000000U))) {
        Verilated::overWidthError("data_wr1_i");}
    if (VL_UNLIKELY((vlSelf->data_wr2_i & 0xff000000U))) {
        Verilated::overWidthError("data_wr2_i");}
    if (VL_UNLIKELY((vlSelf->wren_i & 0xfeU))) {
        Verilated::overWidthError("wren_i");}
    if (VL_UNLIKELY((vlSelf->clk_i & 0xfeU))) {
        Verilated::overWidthError("clk_i");}
}
#endif  // VL_DEBUG
