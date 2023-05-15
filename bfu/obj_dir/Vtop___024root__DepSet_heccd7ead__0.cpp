// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop___024root.h"

VL_INLINE_OPT void Vtop___024root___combo__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___combo__TOP__0\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_h651b66b8__0;
    VlWide<3>/*95:0*/ __Vtemp_h5962284e__0;
    VlWide<3>/*95:0*/ __Vtemp_h651b66b8__1;
    VlWide<3>/*95:0*/ __Vtemp_h81746d6e__0;
    VlWide<3>/*95:0*/ __Vtemp_h98b29ee8__0;
    VlWide<3>/*95:0*/ __Vtemp_h651b66b8__2;
    VlWide<3>/*95:0*/ __Vtemp_h4be143cf__0;
    VlWide<3>/*95:0*/ __Vtemp_h4199e932__0;
    VlWide<3>/*95:0*/ __Vtemp_h651b66b8__3;
    VlWide<3>/*95:0*/ __Vtemp_he3c2280b__0;
    VlWide<3>/*95:0*/ __Vtemp_h651b66b8__4;
    VlWide<3>/*95:0*/ __Vtemp_h8d3fae1e__0;
    VlWide<3>/*95:0*/ __Vtemp_h651b66b8__5;
    VlWide<3>/*95:0*/ __Vtemp_h327affb7__0;
    VlWide<3>/*95:0*/ __Vtemp_hb08ddc4e__0;
    VlWide<3>/*95:0*/ __Vtemp_h651b66b8__6;
    VlWide<3>/*95:0*/ __Vtemp_h1a773c55__0;
    VlWide<3>/*95:0*/ __Vtemp_h47eef8b8__0;
    VlWide<3>/*95:0*/ __Vtemp_h651b66b8__7;
    VlWide<3>/*95:0*/ __Vtemp_h71a98556__0;
    VlWide<3>/*95:0*/ __Vtemp_h651b66b8__8;
    VlWide<3>/*95:0*/ __Vtemp_h7dca04db__0;
    VlWide<3>/*95:0*/ __Vtemp_h651b66b8__9;
    VlWide<3>/*95:0*/ __Vtemp_h256a2372__0;
    VlWide<3>/*95:0*/ __Vtemp_h04651c23__0;
    VlWide<3>/*95:0*/ __Vtemp_h651b66b8__10;
    VlWide<3>/*95:0*/ __Vtemp_h31b98bdf__0;
    VlWide<3>/*95:0*/ __Vtemp_ha49279cb__0;
    VlWide<3>/*95:0*/ __Vtemp_h651b66b8__11;
    VlWide<3>/*95:0*/ __Vtemp_h4a23af2f__0;
    // Body
    vlSelf->top__DOT__dut__DOT__add1_ins__DOT__s = 
        (0xffffffU & (vlSelf->a_i + vlSelf->b_i));
    vlSelf->top__DOT__dut__DOT__sub1_ins__DOT__d = 
        (0xffffffU & (vlSelf->a_i - vlSelf->b_i));
    vlSelf->top__DOT__dut__DOT__mul_ins__DOT__z = (0xffffffffffffULL 
                                                   & ((QData)((IData)(vlSelf->w_i)) 
                                                      * (QData)((IData)(
                                                                        (0xffffffU 
                                                                         & ((IData)(vlSelf->CT_i)
                                                                             ? vlSelf->b_i
                                                                             : 
                                                                            ((0x1000000U 
                                                                              & (vlSelf->a_i 
                                                                                - vlSelf->b_i))
                                                                              ? 
                                                                             ((IData)(0x7fe001U) 
                                                                              + vlSelf->top__DOT__dut__DOT__sub1_ins__DOT__d)
                                                                              : vlSelf->top__DOT__dut__DOT__sub1_ins__DOT__d)))))));
    VL_EXTEND_WQ(72,48, __Vtemp_h651b66b8__0, vlSelf->top__DOT__dut__DOT__mul_ins__DOT__z);
    VL_SHIFTL_WWI(72,72,32, __Vtemp_h5962284e__0, __Vtemp_h651b66b8__0, 0x17U);
    VL_EXTEND_WQ(72,48, __Vtemp_h651b66b8__1, vlSelf->top__DOT__dut__DOT__mul_ins__DOT__z);
    VL_SHIFTL_WWI(72,72,32, __Vtemp_h81746d6e__0, __Vtemp_h651b66b8__1, 0xdU);
    VL_ADD_W(3, __Vtemp_h98b29ee8__0, __Vtemp_h5962284e__0, __Vtemp_h81746d6e__0);
    VL_EXTEND_WQ(72,48, __Vtemp_h651b66b8__2, vlSelf->top__DOT__dut__DOT__mul_ins__DOT__z);
    VL_SHIFTL_WWI(72,72,32, __Vtemp_h4be143cf__0, __Vtemp_h651b66b8__2, 3U);
    VL_ADD_W(3, __Vtemp_h4199e932__0, __Vtemp_h98b29ee8__0, __Vtemp_h4be143cf__0);
    VL_EXTEND_WQ(72,48, __Vtemp_h651b66b8__3, vlSelf->top__DOT__dut__DOT__mul_ins__DOT__z);
    VL_SUB_W(3, __Vtemp_he3c2280b__0, __Vtemp_h4199e932__0, __Vtemp_h651b66b8__3);
    VL_EXTEND_WQ(72,48, __Vtemp_h651b66b8__4, vlSelf->top__DOT__dut__DOT__mul_ins__DOT__z);
    VL_SHIFTL_WWI(72,72,32, __Vtemp_h8d3fae1e__0, __Vtemp_h651b66b8__4, 0x17U);
    VL_EXTEND_WQ(72,48, __Vtemp_h651b66b8__5, vlSelf->top__DOT__dut__DOT__mul_ins__DOT__z);
    VL_SHIFTL_WWI(72,72,32, __Vtemp_h327affb7__0, __Vtemp_h651b66b8__5, 0xdU);
    VL_ADD_W(3, __Vtemp_hb08ddc4e__0, __Vtemp_h8d3fae1e__0, __Vtemp_h327affb7__0);
    VL_EXTEND_WQ(72,48, __Vtemp_h651b66b8__6, vlSelf->top__DOT__dut__DOT__mul_ins__DOT__z);
    VL_SHIFTL_WWI(72,72,32, __Vtemp_h1a773c55__0, __Vtemp_h651b66b8__6, 3U);
    VL_ADD_W(3, __Vtemp_h47eef8b8__0, __Vtemp_hb08ddc4e__0, __Vtemp_h1a773c55__0);
    VL_EXTEND_WQ(72,48, __Vtemp_h651b66b8__7, vlSelf->top__DOT__dut__DOT__mul_ins__DOT__z);
    VL_SUB_W(3, __Vtemp_h71a98556__0, __Vtemp_h47eef8b8__0, __Vtemp_h651b66b8__7);
    VL_EXTEND_WQ(72,48, __Vtemp_h651b66b8__8, vlSelf->top__DOT__dut__DOT__mul_ins__DOT__z);
    VL_SHIFTL_WWI(72,72,32, __Vtemp_h7dca04db__0, __Vtemp_h651b66b8__8, 0x17U);
    VL_EXTEND_WQ(72,48, __Vtemp_h651b66b8__9, vlSelf->top__DOT__dut__DOT__mul_ins__DOT__z);
    VL_SHIFTL_WWI(72,72,32, __Vtemp_h256a2372__0, __Vtemp_h651b66b8__9, 0xdU);
    VL_ADD_W(3, __Vtemp_h04651c23__0, __Vtemp_h7dca04db__0, __Vtemp_h256a2372__0);
    VL_EXTEND_WQ(72,48, __Vtemp_h651b66b8__10, vlSelf->top__DOT__dut__DOT__mul_ins__DOT__z);
    VL_SHIFTL_WWI(72,72,32, __Vtemp_h31b98bdf__0, __Vtemp_h651b66b8__10, 3U);
    VL_ADD_W(3, __Vtemp_ha49279cb__0, __Vtemp_h04651c23__0, __Vtemp_h31b98bdf__0);
    VL_EXTEND_WQ(72,48, __Vtemp_h651b66b8__11, vlSelf->top__DOT__dut__DOT__mul_ins__DOT__z);
    VL_SUB_W(3, __Vtemp_h4a23af2f__0, __Vtemp_ha49279cb__0, __Vtemp_h651b66b8__11);
    vlSelf->top__DOT__dut__DOT__mul_ins__DOT__t3 = 
        (0x1ffffffU & ((IData)(vlSelf->top__DOT__dut__DOT__mul_ins__DOT__z) 
                       - (((IData)((0x3ffffffffffffULL 
                                    & ((QData)((IData)(
                                                       (0x3ffffffU 
                                                        & ((0x3fc0000U 
                                                            & (__Vtemp_he3c2280b__0[2U] 
                                                               << 0x12U)) 
                                                           | (__Vtemp_he3c2280b__0[1U] 
                                                              >> 0xeU))))) 
                                       << 0x17U))) 
                           - (IData)((0x3ffffffffffffULL 
                                      & ((QData)((IData)(
                                                         (0x3ffffffU 
                                                          & ((0x3fc0000U 
                                                              & (__Vtemp_h71a98556__0[2U] 
                                                                 << 0x12U)) 
                                                             | (__Vtemp_h71a98556__0[1U] 
                                                                >> 0xeU))))) 
                                         << 0xdU)))) 
                          + (IData)((QData)((IData)(
                                                    (0x3ffffffU 
                                                     & ((0x3fc0000U 
                                                         & (__Vtemp_h4a23af2f__0[2U] 
                                                            << 0x12U)) 
                                                        | (__Vtemp_h4a23af2f__0[1U] 
                                                           >> 0xeU)))))))));
    vlSelf->top__DOT__dut__DOT__out_mul = (0xffffffU 
                                           & ((0x1000000U 
                                               & (vlSelf->top__DOT__dut__DOT__mul_ins__DOT__t3 
                                                  - (IData)(0x7fe001U)))
                                               ? vlSelf->top__DOT__dut__DOT__mul_ins__DOT__t3
                                               : (0xffffffU 
                                                  & (vlSelf->top__DOT__dut__DOT__mul_ins__DOT__t3 
                                                     - (IData)(0x7fe001U)))));
    vlSelf->top__DOT__dut__DOT__in_add2 = (0xffffffU 
                                           & ((IData)(vlSelf->CT_i)
                                               ? vlSelf->a_i
                                               : ((1U 
                                                   & ((1U 
                                                       & ((vlSelf->a_i 
                                                           + vlSelf->b_i) 
                                                          >> 0x18U)) 
                                                      | (~ 
                                                         (1U 
                                                          & ((vlSelf->top__DOT__dut__DOT__add1_ins__DOT__s 
                                                              - (IData)(0x7fe001U)) 
                                                             >> 0x18U)))))
                                                   ? 
                                                  (vlSelf->top__DOT__dut__DOT__add1_ins__DOT__s 
                                                   - (IData)(0x7fe001U))
                                                   : vlSelf->top__DOT__dut__DOT__add1_ins__DOT__s)));
    vlSelf->top__DOT__dut__DOT__add2_ins__DOT__s = 
        (0xffffffU & (vlSelf->top__DOT__dut__DOT__in_add2 
                      + vlSelf->top__DOT__dut__DOT__out_mul));
    vlSelf->top__DOT__dut__DOT__sub2_ins__DOT__d = 
        (0xffffffU & (vlSelf->top__DOT__dut__DOT__in_add2 
                      - vlSelf->top__DOT__dut__DOT__out_mul));
    if (vlSelf->CT_i) {
        vlSelf->even_o = (0xffffffU & ((1U & ((1U & 
                                               ((vlSelf->top__DOT__dut__DOT__in_add2 
                                                 + vlSelf->top__DOT__dut__DOT__out_mul) 
                                                >> 0x18U)) 
                                              | (~ 
                                                 (1U 
                                                  & ((vlSelf->top__DOT__dut__DOT__add2_ins__DOT__s 
                                                      - (IData)(0x7fe001U)) 
                                                     >> 0x18U)))))
                                        ? (vlSelf->top__DOT__dut__DOT__add2_ins__DOT__s 
                                           - (IData)(0x7fe001U))
                                        : vlSelf->top__DOT__dut__DOT__add2_ins__DOT__s));
        vlSelf->odd_o = (0xffffffU & ((0x1000000U & 
                                       (vlSelf->top__DOT__dut__DOT__in_add2 
                                        - vlSelf->top__DOT__dut__DOT__out_mul))
                                       ? ((IData)(0x7fe001U) 
                                          + vlSelf->top__DOT__dut__DOT__sub2_ins__DOT__d)
                                       : vlSelf->top__DOT__dut__DOT__sub2_ins__DOT__d));
    } else {
        vlSelf->even_o = (0xffffffU & vlSelf->top__DOT__dut__DOT__in_add2);
        vlSelf->odd_o = (0xffffffU & vlSelf->top__DOT__dut__DOT__out_mul);
    }
}

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Body
    Vtop___024root___combo__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->a_i & 0xff000000U))) {
        Verilated::overWidthError("a_i");}
    if (VL_UNLIKELY((vlSelf->b_i & 0xff000000U))) {
        Verilated::overWidthError("b_i");}
    if (VL_UNLIKELY((vlSelf->w_i & 0xff000000U))) {
        Verilated::overWidthError("w_i");}
    if (VL_UNLIKELY((vlSelf->CT_i & 0xfeU))) {
        Verilated::overWidthError("CT_i");}
    if (VL_UNLIKELY((vlSelf->clk_i & 0xfeU))) {
        Verilated::overWidthError("clk_i");}
}
#endif  // VL_DEBUG
