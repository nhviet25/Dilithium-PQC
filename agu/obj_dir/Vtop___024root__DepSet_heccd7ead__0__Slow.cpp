// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___initial__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___initial__TOP__0\n"); );
    // Body
    vlSelf->top__DOT__dut__DOT__current_state = 0U;
    vlSelf->top__DOT__dut__DOT__i = 0U;
    vlSelf->top__DOT__dut__DOT__done = 0U;
}

VL_ATTR_COLD void Vtop___024root___settle__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__0\n"); );
    // Body
    vlSelf->wren_o = (1U & (~ (IData)(vlSelf->top__DOT__dut__DOT__done)));
    vlSelf->ntt_done = vlSelf->top__DOT__dut__DOT__done;
    vlSelf->ntt_addr_rd1_o = (0xffU & ((IData)(vlSelf->top__DOT__dut__DOT__i) 
                                       << 1U));
    vlSelf->ntt_addr_rd2_o = (0xffU & ((IData)(1U) 
                                       + ((IData)(vlSelf->top__DOT__dut__DOT__i) 
                                          << 1U)));
    vlSelf->intt_addr_rd1_o = vlSelf->top__DOT__dut__DOT__i;
    vlSelf->intt_addr_rd2_o = (0xffU & ((IData)(0x80U) 
                                        + (IData)(vlSelf->top__DOT__dut__DOT__i)));
    vlSelf->twiddle_addr = vlSelf->top__DOT__dut__DOT__i;
}

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk_i = vlSelf->clk_i;
    Vtop___024root___initial__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    // Body
    Vtop___024root___settle__TOP__0(vlSelf);
}

VL_ATTR_COLD void Vtop___024root___final(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___final\n"); );
}

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk_i = VL_RAND_RESET_I(1);
    vlSelf->start_ntt = VL_RAND_RESET_I(1);
    vlSelf->twiddle_addr = VL_RAND_RESET_I(8);
    vlSelf->ntt_done = VL_RAND_RESET_I(1);
    vlSelf->wren_o = VL_RAND_RESET_I(1);
    vlSelf->ntt_addr_rd1_o = VL_RAND_RESET_I(8);
    vlSelf->ntt_addr_rd2_o = VL_RAND_RESET_I(8);
    vlSelf->intt_addr_rd1_o = VL_RAND_RESET_I(8);
    vlSelf->intt_addr_rd2_o = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__dut__DOT__i = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__dut__DOT__done = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__current_state = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__next_state = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
