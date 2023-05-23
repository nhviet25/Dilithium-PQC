// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop___024root.h"

VL_INLINE_OPT void Vtop___024root___sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ __Vdly__top__DOT__dut__DOT__next_state;
    // Body
    __Vdly__top__DOT__dut__DOT__next_state = vlSelf->top__DOT__dut__DOT__next_state;
    if (vlSelf->top__DOT__dut__DOT__current_state) {
        if (vlSelf->top__DOT__dut__DOT__current_state) {
            if ((0x7fU == (IData)(vlSelf->top__DOT__dut__DOT__i))) {
                __Vdly__top__DOT__dut__DOT__next_state = 0U;
                vlSelf->top__DOT__dut__DOT__done = 1U;
            } else {
                vlSelf->top__DOT__dut__DOT__i = (0xffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->top__DOT__dut__DOT__i)));
                __Vdly__top__DOT__dut__DOT__next_state = 1U;
                vlSelf->top__DOT__dut__DOT__done = 0U;
            }
        } else {
            __Vdly__top__DOT__dut__DOT__next_state = 0U;
        }
    } else if (vlSelf->start_ntt) {
        vlSelf->top__DOT__dut__DOT__i = 0U;
        __Vdly__top__DOT__dut__DOT__next_state = 1U;
        vlSelf->top__DOT__dut__DOT__done = 0U;
    }
    vlSelf->wren_o = (1U & (~ (IData)(vlSelf->top__DOT__dut__DOT__done)));
    vlSelf->ntt_done = vlSelf->top__DOT__dut__DOT__done;
    vlSelf->top__DOT__dut__DOT__current_state = vlSelf->top__DOT__dut__DOT__next_state;
    vlSelf->ntt_addr_rd1_o = (0xffU & ((IData)(vlSelf->top__DOT__dut__DOT__i) 
                                       << 1U));
    vlSelf->ntt_addr_rd2_o = (0xffU & ((IData)(1U) 
                                       + ((IData)(vlSelf->top__DOT__dut__DOT__i) 
                                          << 1U)));
    vlSelf->intt_addr_rd1_o = vlSelf->top__DOT__dut__DOT__i;
    vlSelf->intt_addr_rd2_o = (0xffU & ((IData)(0x80U) 
                                        + (IData)(vlSelf->top__DOT__dut__DOT__i)));
    vlSelf->twiddle_addr = vlSelf->top__DOT__dut__DOT__i;
    vlSelf->top__DOT__dut__DOT__next_state = __Vdly__top__DOT__dut__DOT__next_state;
}

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk_i) & (~ (IData)(vlSelf->__Vclklast__TOP__clk_i)))) {
        Vtop___024root___sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
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
    if (VL_UNLIKELY((vlSelf->clk_i & 0xfeU))) {
        Verilated::overWidthError("clk_i");}
    if (VL_UNLIKELY((vlSelf->start_ntt & 0xfeU))) {
        Verilated::overWidthError("start_ntt");}
}
#endif  // VL_DEBUG
