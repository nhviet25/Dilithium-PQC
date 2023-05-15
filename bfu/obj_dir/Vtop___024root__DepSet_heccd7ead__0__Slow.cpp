// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
}

void Vtop___024root___combo__TOP__0(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    // Body
    Vtop___024root___combo__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
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
    vlSelf->a_i = VL_RAND_RESET_I(24);
    vlSelf->b_i = VL_RAND_RESET_I(24);
    vlSelf->w_i = VL_RAND_RESET_I(24);
    vlSelf->CT_i = VL_RAND_RESET_I(1);
    vlSelf->clk_i = VL_RAND_RESET_I(1);
    vlSelf->even_o = VL_RAND_RESET_I(24);
    vlSelf->odd_o = VL_RAND_RESET_I(24);
    vlSelf->top__DOT__dut__DOT__in_add2 = VL_RAND_RESET_I(24);
    vlSelf->top__DOT__dut__DOT__out_mul = VL_RAND_RESET_I(24);
    vlSelf->top__DOT__dut__DOT__add1_ins__DOT__s = VL_RAND_RESET_I(24);
    vlSelf->top__DOT__dut__DOT__sub1_ins__DOT__d = VL_RAND_RESET_I(24);
    vlSelf->top__DOT__dut__DOT__mul_ins__DOT__z = VL_RAND_RESET_Q(48);
    vlSelf->top__DOT__dut__DOT__mul_ins__DOT__t3 = VL_RAND_RESET_I(25);
    vlSelf->top__DOT__dut__DOT__add2_ins__DOT__s = VL_RAND_RESET_I(24);
    vlSelf->top__DOT__dut__DOT__sub2_ins__DOT__d = VL_RAND_RESET_I(24);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
