// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___initial__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___initial__TOP__0\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_h83ebf4d4__0;
    // Body
    VL_READMEM_N(true, 24, 256, 0, std::string("test.txt")
                 ,  &(vlSelf->top__DOT__dut__DOT__bram_NTT__DOT__ram)
                 , 0, ~0ULL);
    VL_READMEM_N(true, 24, 256, 0, std::string("test.txt")
                 ,  &(vlSelf->top__DOT__dut__DOT__bram_INTT__DOT__ram)
                 , 0, ~0ULL);
    __Vtemp_h83ebf4d4__0[0U] = 0x2e747874U;
    __Vtemp_h83ebf4d4__0[1U] = 0x64646c65U;
    __Vtemp_h83ebf4d4__0[2U] = 0x747769U;
    VL_READMEM_N(true, 24, 256, 0, VL_CVT_PACK_STR_NW(3, __Vtemp_h83ebf4d4__0)
                 ,  &(vlSelf->top__DOT__dut__DOT__twiddle_fac__DOT__rom)
                 , 0, ~0ULL);
    vlSelf->top__DOT__dut__DOT__agu_ins__DOT__current_state = 0U;
    vlSelf->top__DOT__dut__DOT__agu_ins__DOT__i = 0U;
    vlSelf->top__DOT__dut__DOT__agu_ins__DOT__done = 0U;
}

VL_ATTR_COLD void Vtop___024root___settle__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__0\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_h4e75c9e9__0;
    VlWide<3>/*95:0*/ __Vtemp_hc2345b77__0;
    VlWide<3>/*95:0*/ __Vtemp_h4e75c9e9__1;
    VlWide<3>/*95:0*/ __Vtemp_hb7aa02b9__0;
    VlWide<3>/*95:0*/ __Vtemp_h03d8e164__0;
    VlWide<3>/*95:0*/ __Vtemp_h4e75c9e9__2;
    VlWide<3>/*95:0*/ __Vtemp_h3f5c2142__0;
    VlWide<3>/*95:0*/ __Vtemp_h56b21dcd__0;
    VlWide<3>/*95:0*/ __Vtemp_h4e75c9e9__3;
    VlWide<3>/*95:0*/ __Vtemp_h9ffe6e96__0;
    VlWide<3>/*95:0*/ __Vtemp_h4e75c9e9__4;
    VlWide<3>/*95:0*/ __Vtemp_h52c74e9c__0;
    VlWide<3>/*95:0*/ __Vtemp_h4e75c9e9__5;
    VlWide<3>/*95:0*/ __Vtemp_hb627aba7__0;
    VlWide<3>/*95:0*/ __Vtemp_h5a4e905d__0;
    VlWide<3>/*95:0*/ __Vtemp_h4e75c9e9__6;
    VlWide<3>/*95:0*/ __Vtemp_hf8f3af10__0;
    VlWide<3>/*95:0*/ __Vtemp_hd107d3e6__0;
    VlWide<3>/*95:0*/ __Vtemp_h4e75c9e9__7;
    VlWide<3>/*95:0*/ __Vtemp_h7f87e8f8__0;
    VlWide<3>/*95:0*/ __Vtemp_h4e75c9e9__8;
    VlWide<3>/*95:0*/ __Vtemp_h391ea556__0;
    VlWide<3>/*95:0*/ __Vtemp_h4e75c9e9__9;
    VlWide<3>/*95:0*/ __Vtemp_hf4f495ff__0;
    VlWide<3>/*95:0*/ __Vtemp_h063b52f4__0;
    VlWide<3>/*95:0*/ __Vtemp_h4e75c9e9__10;
    VlWide<3>/*95:0*/ __Vtemp_hf350d2bc__0;
    VlWide<3>/*95:0*/ __Vtemp_he463dc28__0;
    VlWide<3>/*95:0*/ __Vtemp_h4e75c9e9__11;
    VlWide<3>/*95:0*/ __Vtemp_h9f10d34e__0;
    // Body
    vlSelf->ntt_done = vlSelf->top__DOT__dut__DOT__agu_ins__DOT__done;
    if (vlSelf->ntt) {
        vlSelf->top__DOT__dut__DOT__in1_bfu = vlSelf->top__DOT__dut__DOT__bram_NTT__DOT__ram
            [(0xffU & ((IData)(vlSelf->top__DOT__dut__DOT__agu_ins__DOT__i) 
                       << 1U))];
        vlSelf->top__DOT__dut__DOT__in2_bfu = vlSelf->top__DOT__dut__DOT__bram_NTT__DOT__ram
            [(0xffU & ((IData)(1U) + ((IData)(vlSelf->top__DOT__dut__DOT__agu_ins__DOT__i) 
                                      << 1U)))];
    } else {
        vlSelf->top__DOT__dut__DOT__in1_bfu = vlSelf->top__DOT__dut__DOT__bram_INTT__DOT__ram
            [vlSelf->top__DOT__dut__DOT__agu_ins__DOT__i];
        vlSelf->top__DOT__dut__DOT__in2_bfu = vlSelf->top__DOT__dut__DOT__bram_INTT__DOT__ram
            [(0xffU & ((IData)(0x80U) + (IData)(vlSelf->top__DOT__dut__DOT__agu_ins__DOT__i)))];
    }
    vlSelf->top__DOT__dut__DOT__bfu_ins__DOT__add1_ins__DOT__s 
        = (0xffffffU & (vlSelf->top__DOT__dut__DOT__in1_bfu 
                        + vlSelf->top__DOT__dut__DOT__in2_bfu));
    vlSelf->top__DOT__dut__DOT__bfu_ins__DOT__sub1_ins__DOT__d 
        = (0xffffffU & (vlSelf->top__DOT__dut__DOT__in1_bfu 
                        - vlSelf->top__DOT__dut__DOT__in2_bfu));
    vlSelf->top__DOT__dut__DOT__bfu_ins__DOT__mul_ins__DOT__z 
        = (0xffffffffffffULL & ((QData)((IData)(vlSelf->top__DOT__dut__DOT__tw)) 
                                * (QData)((IData)((0xffffffU 
                                                   & ((IData)(vlSelf->ntt)
                                                       ? vlSelf->top__DOT__dut__DOT__in2_bfu
                                                       : 
                                                      ((0x1000000U 
                                                        & (vlSelf->top__DOT__dut__DOT__in1_bfu 
                                                           - vlSelf->top__DOT__dut__DOT__in2_bfu))
                                                        ? 
                                                       ((IData)(0x7fe001U) 
                                                        + vlSelf->top__DOT__dut__DOT__bfu_ins__DOT__sub1_ins__DOT__d)
                                                        : vlSelf->top__DOT__dut__DOT__bfu_ins__DOT__sub1_ins__DOT__d)))))));
    VL_EXTEND_WQ(72,48, __Vtemp_h4e75c9e9__0, vlSelf->top__DOT__dut__DOT__bfu_ins__DOT__mul_ins__DOT__z);
    VL_SHIFTL_WWI(72,72,32, __Vtemp_hc2345b77__0, __Vtemp_h4e75c9e9__0, 0x17U);
    VL_EXTEND_WQ(72,48, __Vtemp_h4e75c9e9__1, vlSelf->top__DOT__dut__DOT__bfu_ins__DOT__mul_ins__DOT__z);
    VL_SHIFTL_WWI(72,72,32, __Vtemp_hb7aa02b9__0, __Vtemp_h4e75c9e9__1, 0xdU);
    VL_ADD_W(3, __Vtemp_h03d8e164__0, __Vtemp_hc2345b77__0, __Vtemp_hb7aa02b9__0);
    VL_EXTEND_WQ(72,48, __Vtemp_h4e75c9e9__2, vlSelf->top__DOT__dut__DOT__bfu_ins__DOT__mul_ins__DOT__z);
    VL_SHIFTL_WWI(72,72,32, __Vtemp_h3f5c2142__0, __Vtemp_h4e75c9e9__2, 3U);
    VL_ADD_W(3, __Vtemp_h56b21dcd__0, __Vtemp_h03d8e164__0, __Vtemp_h3f5c2142__0);
    VL_EXTEND_WQ(72,48, __Vtemp_h4e75c9e9__3, vlSelf->top__DOT__dut__DOT__bfu_ins__DOT__mul_ins__DOT__z);
    VL_SUB_W(3, __Vtemp_h9ffe6e96__0, __Vtemp_h56b21dcd__0, __Vtemp_h4e75c9e9__3);
    VL_EXTEND_WQ(72,48, __Vtemp_h4e75c9e9__4, vlSelf->top__DOT__dut__DOT__bfu_ins__DOT__mul_ins__DOT__z);
    VL_SHIFTL_WWI(72,72,32, __Vtemp_h52c74e9c__0, __Vtemp_h4e75c9e9__4, 0x17U);
    VL_EXTEND_WQ(72,48, __Vtemp_h4e75c9e9__5, vlSelf->top__DOT__dut__DOT__bfu_ins__DOT__mul_ins__DOT__z);
    VL_SHIFTL_WWI(72,72,32, __Vtemp_hb627aba7__0, __Vtemp_h4e75c9e9__5, 0xdU);
    VL_ADD_W(3, __Vtemp_h5a4e905d__0, __Vtemp_h52c74e9c__0, __Vtemp_hb627aba7__0);
    VL_EXTEND_WQ(72,48, __Vtemp_h4e75c9e9__6, vlSelf->top__DOT__dut__DOT__bfu_ins__DOT__mul_ins__DOT__z);
    VL_SHIFTL_WWI(72,72,32, __Vtemp_hf8f3af10__0, __Vtemp_h4e75c9e9__6, 3U);
    VL_ADD_W(3, __Vtemp_hd107d3e6__0, __Vtemp_h5a4e905d__0, __Vtemp_hf8f3af10__0);
    VL_EXTEND_WQ(72,48, __Vtemp_h4e75c9e9__7, vlSelf->top__DOT__dut__DOT__bfu_ins__DOT__mul_ins__DOT__z);
    VL_SUB_W(3, __Vtemp_h7f87e8f8__0, __Vtemp_hd107d3e6__0, __Vtemp_h4e75c9e9__7);
    VL_EXTEND_WQ(72,48, __Vtemp_h4e75c9e9__8, vlSelf->top__DOT__dut__DOT__bfu_ins__DOT__mul_ins__DOT__z);
    VL_SHIFTL_WWI(72,72,32, __Vtemp_h391ea556__0, __Vtemp_h4e75c9e9__8, 0x17U);
    VL_EXTEND_WQ(72,48, __Vtemp_h4e75c9e9__9, vlSelf->top__DOT__dut__DOT__bfu_ins__DOT__mul_ins__DOT__z);
    VL_SHIFTL_WWI(72,72,32, __Vtemp_hf4f495ff__0, __Vtemp_h4e75c9e9__9, 0xdU);
    VL_ADD_W(3, __Vtemp_h063b52f4__0, __Vtemp_h391ea556__0, __Vtemp_hf4f495ff__0);
    VL_EXTEND_WQ(72,48, __Vtemp_h4e75c9e9__10, vlSelf->top__DOT__dut__DOT__bfu_ins__DOT__mul_ins__DOT__z);
    VL_SHIFTL_WWI(72,72,32, __Vtemp_hf350d2bc__0, __Vtemp_h4e75c9e9__10, 3U);
    VL_ADD_W(3, __Vtemp_he463dc28__0, __Vtemp_h063b52f4__0, __Vtemp_hf350d2bc__0);
    VL_EXTEND_WQ(72,48, __Vtemp_h4e75c9e9__11, vlSelf->top__DOT__dut__DOT__bfu_ins__DOT__mul_ins__DOT__z);
    VL_SUB_W(3, __Vtemp_h9f10d34e__0, __Vtemp_he463dc28__0, __Vtemp_h4e75c9e9__11);
    vlSelf->top__DOT__dut__DOT__bfu_ins__DOT__mul_ins__DOT__t3 
        = (0x1ffffffU & ((IData)(vlSelf->top__DOT__dut__DOT__bfu_ins__DOT__mul_ins__DOT__z) 
                         - (((IData)((0x3ffffffffffffULL 
                                      & ((QData)((IData)(
                                                         (0x3ffffffU 
                                                          & ((0x3fc0000U 
                                                              & (__Vtemp_h9ffe6e96__0[2U] 
                                                                 << 0x12U)) 
                                                             | (__Vtemp_h9ffe6e96__0[1U] 
                                                                >> 0xeU))))) 
                                         << 0x17U))) 
                             - (IData)((0x3ffffffffffffULL 
                                        & ((QData)((IData)(
                                                           (0x3ffffffU 
                                                            & ((0x3fc0000U 
                                                                & (__Vtemp_h7f87e8f8__0[2U] 
                                                                   << 0x12U)) 
                                                               | (__Vtemp_h7f87e8f8__0[1U] 
                                                                  >> 0xeU))))) 
                                           << 0xdU)))) 
                            + (IData)((QData)((IData)(
                                                      (0x3ffffffU 
                                                       & ((0x3fc0000U 
                                                           & (__Vtemp_h9f10d34e__0[2U] 
                                                              << 0x12U)) 
                                                          | (__Vtemp_h9f10d34e__0[1U] 
                                                             >> 0xeU)))))))));
    vlSelf->top__DOT__dut__DOT__bfu_ins__DOT__out_mul 
        = (0xffffffU & ((0x1000000U & (vlSelf->top__DOT__dut__DOT__bfu_ins__DOT__mul_ins__DOT__t3 
                                       - (IData)(0x7fe001U)))
                         ? vlSelf->top__DOT__dut__DOT__bfu_ins__DOT__mul_ins__DOT__t3
                         : (0xffffffU & (vlSelf->top__DOT__dut__DOT__bfu_ins__DOT__mul_ins__DOT__t3 
                                         - (IData)(0x7fe001U)))));
    vlSelf->top__DOT__dut__DOT__bfu_ins__DOT__in_add2 
        = (0xffffffU & ((IData)(vlSelf->ntt) ? vlSelf->top__DOT__dut__DOT__in1_bfu
                         : ((1U & ((1U & ((vlSelf->top__DOT__dut__DOT__in1_bfu 
                                           + vlSelf->top__DOT__dut__DOT__in2_bfu) 
                                          >> 0x18U)) 
                                   | (~ (1U & ((vlSelf->top__DOT__dut__DOT__bfu_ins__DOT__add1_ins__DOT__s 
                                                - (IData)(0x7fe001U)) 
                                               >> 0x18U)))))
                             ? (vlSelf->top__DOT__dut__DOT__bfu_ins__DOT__add1_ins__DOT__s 
                                - (IData)(0x7fe001U))
                             : vlSelf->top__DOT__dut__DOT__bfu_ins__DOT__add1_ins__DOT__s)));
    vlSelf->top__DOT__dut__DOT__bfu_ins__DOT__add2_ins__DOT__s 
        = (0xffffffU & (vlSelf->top__DOT__dut__DOT__bfu_ins__DOT__in_add2 
                        + vlSelf->top__DOT__dut__DOT__bfu_ins__DOT__out_mul));
    vlSelf->top__DOT__dut__DOT__bfu_ins__DOT__sub2_ins__DOT__d 
        = (0xffffffU & (vlSelf->top__DOT__dut__DOT__bfu_ins__DOT__in_add2 
                        - vlSelf->top__DOT__dut__DOT__bfu_ins__DOT__out_mul));
    if (vlSelf->ntt) {
        vlSelf->top__DOT__dut__DOT__out1_bfu = (0xffffffU 
                                                & ((1U 
                                                    & ((1U 
                                                        & ((vlSelf->top__DOT__dut__DOT__bfu_ins__DOT__in_add2 
                                                            + vlSelf->top__DOT__dut__DOT__bfu_ins__DOT__out_mul) 
                                                           >> 0x18U)) 
                                                       | (~ 
                                                          (1U 
                                                           & ((vlSelf->top__DOT__dut__DOT__bfu_ins__DOT__add2_ins__DOT__s 
                                                               - (IData)(0x7fe001U)) 
                                                              >> 0x18U)))))
                                                    ? 
                                                   (vlSelf->top__DOT__dut__DOT__bfu_ins__DOT__add2_ins__DOT__s 
                                                    - (IData)(0x7fe001U))
                                                    : vlSelf->top__DOT__dut__DOT__bfu_ins__DOT__add2_ins__DOT__s));
        vlSelf->top__DOT__dut__DOT__out2_bfu = (0xffffffU 
                                                & ((0x1000000U 
                                                    & (vlSelf->top__DOT__dut__DOT__bfu_ins__DOT__in_add2 
                                                       - vlSelf->top__DOT__dut__DOT__bfu_ins__DOT__out_mul))
                                                    ? 
                                                   ((IData)(0x7fe001U) 
                                                    + vlSelf->top__DOT__dut__DOT__bfu_ins__DOT__sub2_ins__DOT__d)
                                                    : vlSelf->top__DOT__dut__DOT__bfu_ins__DOT__sub2_ins__DOT__d));
    } else {
        vlSelf->top__DOT__dut__DOT__out1_bfu = (0xffffffU 
                                                & vlSelf->top__DOT__dut__DOT__bfu_ins__DOT__in_add2);
        vlSelf->top__DOT__dut__DOT__out2_bfu = (0xffffffU 
                                                & vlSelf->top__DOT__dut__DOT__bfu_ins__DOT__out_mul);
    }
    vlSelf->even_debug_o = vlSelf->top__DOT__dut__DOT__out1_bfu;
    vlSelf->odd_debug_o = vlSelf->top__DOT__dut__DOT__out2_bfu;
}

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    // Body
    Vtop___024root___initial__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    vlSelf->__Vclklast__TOP__clk_i = vlSelf->clk_i;
}

VL_ATTR_COLD void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    // Body
    Vtop___024root___settle__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
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
    vlSelf->clk_i = VL_RAND_RESET_I(1);
    vlSelf->start = VL_RAND_RESET_I(1);
    vlSelf->ntt = VL_RAND_RESET_I(1);
    vlSelf->ntt_done = VL_RAND_RESET_I(1);
    vlSelf->even_debug_o = VL_RAND_RESET_I(24);
    vlSelf->odd_debug_o = VL_RAND_RESET_I(24);
    vlSelf->top__DOT__dut__DOT__tw = VL_RAND_RESET_I(24);
    vlSelf->top__DOT__dut__DOT__in1_bfu = VL_RAND_RESET_I(24);
    vlSelf->top__DOT__dut__DOT__in2_bfu = VL_RAND_RESET_I(24);
    vlSelf->top__DOT__dut__DOT__out1_bfu = VL_RAND_RESET_I(24);
    vlSelf->top__DOT__dut__DOT__out2_bfu = VL_RAND_RESET_I(24);
    vlSelf->top__DOT__dut__DOT__agu_ins__DOT__i = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__dut__DOT__agu_ins__DOT__done = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__agu_ins__DOT__current_state = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__agu_ins__DOT__next_state = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<256; ++__Vi0) {
        vlSelf->top__DOT__dut__DOT__bram_NTT__DOT__ram[__Vi0] = VL_RAND_RESET_I(24);
    }
    for (int __Vi0=0; __Vi0<256; ++__Vi0) {
        vlSelf->top__DOT__dut__DOT__bram_INTT__DOT__ram[__Vi0] = VL_RAND_RESET_I(24);
    }
    vlSelf->top__DOT__dut__DOT__bfu_ins__DOT__in_add2 = VL_RAND_RESET_I(24);
    vlSelf->top__DOT__dut__DOT__bfu_ins__DOT__out_mul = VL_RAND_RESET_I(24);
    vlSelf->top__DOT__dut__DOT__bfu_ins__DOT__add1_ins__DOT__s = VL_RAND_RESET_I(24);
    vlSelf->top__DOT__dut__DOT__bfu_ins__DOT__sub1_ins__DOT__d = VL_RAND_RESET_I(24);
    vlSelf->top__DOT__dut__DOT__bfu_ins__DOT__mul_ins__DOT__z = VL_RAND_RESET_Q(48);
    vlSelf->top__DOT__dut__DOT__bfu_ins__DOT__mul_ins__DOT__t3 = VL_RAND_RESET_I(25);
    vlSelf->top__DOT__dut__DOT__bfu_ins__DOT__add2_ins__DOT__s = VL_RAND_RESET_I(24);
    vlSelf->top__DOT__dut__DOT__bfu_ins__DOT__sub2_ins__DOT__d = VL_RAND_RESET_I(24);
    for (int __Vi0=0; __Vi0<256; ++__Vi0) {
        vlSelf->top__DOT__dut__DOT__twiddle_fac__DOT__rom[__Vi0] = VL_RAND_RESET_I(24);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
