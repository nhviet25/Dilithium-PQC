// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__trace_chg_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp);

void Vtop___024root__trace_chg_top_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_top_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtop___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vtop___024root__trace_chg_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
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
    VlWide<3>/*95:0*/ __Vtemp_h5f9b4f26__0;
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
    VlWide<3>/*95:0*/ __Vtemp_h651b66b8__12;
    VlWide<3>/*95:0*/ __Vtemp_h52137a1e__0;
    VlWide<3>/*95:0*/ __Vtemp_h651b66b8__13;
    VlWide<3>/*95:0*/ __Vtemp_hb7efe26c__0;
    VlWide<3>/*95:0*/ __Vtemp_h3e69b50a__0;
    VlWide<3>/*95:0*/ __Vtemp_h651b66b8__14;
    VlWide<3>/*95:0*/ __Vtemp_h1e0167b9__0;
    VlWide<3>/*95:0*/ __Vtemp_h7732cf51__0;
    VlWide<3>/*95:0*/ __Vtemp_h651b66b8__15;
    VlWide<3>/*95:0*/ __Vtemp_h2a7c5cfe__0;
    VlWide<3>/*95:0*/ __Vtemp_h651b66b8__16;
    VlWide<3>/*95:0*/ __Vtemp_h099f119d__0;
    VlWide<3>/*95:0*/ __Vtemp_h651b66b8__17;
    VlWide<3>/*95:0*/ __Vtemp_h9a9f1b56__0;
    VlWide<3>/*95:0*/ __Vtemp_hb2fa876f__0;
    VlWide<3>/*95:0*/ __Vtemp_h651b66b8__18;
    VlWide<3>/*95:0*/ __Vtemp_he3359817__0;
    VlWide<3>/*95:0*/ __Vtemp_h130b4007__0;
    VlWide<3>/*95:0*/ __Vtemp_h651b66b8__19;
    VlWide<3>/*95:0*/ __Vtemp_h85b73d55__0;
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+0,(vlSelf->top__DOT__dut__DOT__in_add2),24);
        bufp->chgIData(oldp+1,(vlSelf->top__DOT__dut__DOT__out_mul),24);
        bufp->chgIData(oldp+2,((0xffffffU & ((1U & 
                                              ((1U 
                                                & ((vlSelf->top__DOT__dut__DOT__in_add2 
                                                    + vlSelf->top__DOT__dut__DOT__out_mul) 
                                                   >> 0x18U)) 
                                               | (~ 
                                                  (1U 
                                                   & ((vlSelf->top__DOT__dut__DOT__add2_ins__DOT__s 
                                                       - (IData)(0x7fe001U)) 
                                                      >> 0x18U)))))
                                              ? (vlSelf->top__DOT__dut__DOT__add2_ins__DOT__s 
                                                 - (IData)(0x7fe001U))
                                              : vlSelf->top__DOT__dut__DOT__add2_ins__DOT__s))),24);
        bufp->chgIData(oldp+3,((0xffffffU & ((0x1000000U 
                                              & (vlSelf->top__DOT__dut__DOT__in_add2 
                                                 - vlSelf->top__DOT__dut__DOT__out_mul))
                                              ? ((IData)(0x7fe001U) 
                                                 + vlSelf->top__DOT__dut__DOT__sub2_ins__DOT__d)
                                              : vlSelf->top__DOT__dut__DOT__sub2_ins__DOT__d))),24);
        bufp->chgIData(oldp+4,(vlSelf->top__DOT__dut__DOT__add1_ins__DOT__s),24);
        bufp->chgIData(oldp+5,((0xffffffU & (vlSelf->top__DOT__dut__DOT__add1_ins__DOT__s 
                                             - (IData)(0x7fe001U)))),24);
        bufp->chgBit(oldp+6,((1U & ((vlSelf->top__DOT__dut__DOT__add1_ins__DOT__s 
                                     - (IData)(0x7fe001U)) 
                                    >> 0x18U))));
        bufp->chgIData(oldp+7,(vlSelf->top__DOT__dut__DOT__add2_ins__DOT__s),24);
        bufp->chgIData(oldp+8,((0xffffffU & (vlSelf->top__DOT__dut__DOT__add2_ins__DOT__s 
                                             - (IData)(0x7fe001U)))),24);
        bufp->chgBit(oldp+9,((1U & ((vlSelf->top__DOT__dut__DOT__in_add2 
                                     + vlSelf->top__DOT__dut__DOT__out_mul) 
                                    >> 0x18U))));
        bufp->chgBit(oldp+10,((1U & ((vlSelf->top__DOT__dut__DOT__add2_ins__DOT__s 
                                      - (IData)(0x7fe001U)) 
                                     >> 0x18U))));
        bufp->chgQData(oldp+11,(vlSelf->top__DOT__dut__DOT__mul_ins__DOT__z),48);
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
        __Vtemp_h5f9b4f26__0[0U] = __Vtemp_he3c2280b__0[0U];
        __Vtemp_h5f9b4f26__0[1U] = __Vtemp_he3c2280b__0[1U];
        __Vtemp_h5f9b4f26__0[2U] = (0xffU & __Vtemp_he3c2280b__0[2U]);
        bufp->chgWData(oldp+13,(__Vtemp_h5f9b4f26__0),72);
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
        bufp->chgIData(oldp+16,((0x3ffffffU & ((0x3fc0000U 
                                                & (__Vtemp_h71a98556__0[2U] 
                                                   << 0x12U)) 
                                               | (__Vtemp_h71a98556__0[1U] 
                                                  >> 0xeU)))),26);
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
        VL_EXTEND_WQ(72,48, __Vtemp_h651b66b8__12, vlSelf->top__DOT__dut__DOT__mul_ins__DOT__z);
        VL_SHIFTL_WWI(72,72,32, __Vtemp_h52137a1e__0, __Vtemp_h651b66b8__12, 0x17U);
        VL_EXTEND_WQ(72,48, __Vtemp_h651b66b8__13, vlSelf->top__DOT__dut__DOT__mul_ins__DOT__z);
        VL_SHIFTL_WWI(72,72,32, __Vtemp_hb7efe26c__0, __Vtemp_h651b66b8__13, 0xdU);
        VL_ADD_W(3, __Vtemp_h3e69b50a__0, __Vtemp_h52137a1e__0, __Vtemp_hb7efe26c__0);
        VL_EXTEND_WQ(72,48, __Vtemp_h651b66b8__14, vlSelf->top__DOT__dut__DOT__mul_ins__DOT__z);
        VL_SHIFTL_WWI(72,72,32, __Vtemp_h1e0167b9__0, __Vtemp_h651b66b8__14, 3U);
        VL_ADD_W(3, __Vtemp_h7732cf51__0, __Vtemp_h3e69b50a__0, __Vtemp_h1e0167b9__0);
        VL_EXTEND_WQ(72,48, __Vtemp_h651b66b8__15, vlSelf->top__DOT__dut__DOT__mul_ins__DOT__z);
        VL_SUB_W(3, __Vtemp_h2a7c5cfe__0, __Vtemp_h7732cf51__0, __Vtemp_h651b66b8__15);
        VL_EXTEND_WQ(72,48, __Vtemp_h651b66b8__16, vlSelf->top__DOT__dut__DOT__mul_ins__DOT__z);
        VL_SHIFTL_WWI(72,72,32, __Vtemp_h099f119d__0, __Vtemp_h651b66b8__16, 0x17U);
        VL_EXTEND_WQ(72,48, __Vtemp_h651b66b8__17, vlSelf->top__DOT__dut__DOT__mul_ins__DOT__z);
        VL_SHIFTL_WWI(72,72,32, __Vtemp_h9a9f1b56__0, __Vtemp_h651b66b8__17, 0xdU);
        VL_ADD_W(3, __Vtemp_hb2fa876f__0, __Vtemp_h099f119d__0, __Vtemp_h9a9f1b56__0);
        VL_EXTEND_WQ(72,48, __Vtemp_h651b66b8__18, vlSelf->top__DOT__dut__DOT__mul_ins__DOT__z);
        VL_SHIFTL_WWI(72,72,32, __Vtemp_he3359817__0, __Vtemp_h651b66b8__18, 3U);
        VL_ADD_W(3, __Vtemp_h130b4007__0, __Vtemp_hb2fa876f__0, __Vtemp_he3359817__0);
        VL_EXTEND_WQ(72,48, __Vtemp_h651b66b8__19, vlSelf->top__DOT__dut__DOT__mul_ins__DOT__z);
        VL_SUB_W(3, __Vtemp_h85b73d55__0, __Vtemp_h130b4007__0, __Vtemp_h651b66b8__19);
        bufp->chgQData(oldp+17,((0x3ffffffffffffULL 
                                 & ((((QData)((IData)(
                                                      (0x3ffffffU 
                                                       & ((0x3fc0000U 
                                                           & (__Vtemp_h4a23af2f__0[2U] 
                                                              << 0x12U)) 
                                                          | (__Vtemp_h4a23af2f__0[1U] 
                                                             >> 0xeU))))) 
                                      << 0x17U) - ((QData)((IData)(
                                                                   (0x3ffffffU 
                                                                    & ((0x3fc0000U 
                                                                        & (__Vtemp_h2a7c5cfe__0[2U] 
                                                                           << 0x12U)) 
                                                                       | (__Vtemp_h2a7c5cfe__0[1U] 
                                                                          >> 0xeU))))) 
                                                   << 0xdU)) 
                                    + (QData)((IData)(
                                                      (0x3ffffffU 
                                                       & ((0x3fc0000U 
                                                           & (__Vtemp_h85b73d55__0[2U] 
                                                              << 0x12U)) 
                                                          | (__Vtemp_h85b73d55__0[1U] 
                                                             >> 0xeU)))))))),50);
        bufp->chgIData(oldp+19,(vlSelf->top__DOT__dut__DOT__mul_ins__DOT__t3),25);
        bufp->chgIData(oldp+20,((0x1ffffffU & (vlSelf->top__DOT__dut__DOT__mul_ins__DOT__t3 
                                               - (IData)(0x7fe001U)))),25);
        bufp->chgIData(oldp+21,(vlSelf->top__DOT__dut__DOT__sub1_ins__DOT__d),24);
        bufp->chgIData(oldp+22,((0xffffffU & ((IData)(0x7fe001U) 
                                              + vlSelf->top__DOT__dut__DOT__sub1_ins__DOT__d))),24);
        bufp->chgIData(oldp+23,(vlSelf->top__DOT__dut__DOT__sub2_ins__DOT__d),24);
        bufp->chgIData(oldp+24,((0xffffffU & ((IData)(0x7fe001U) 
                                              + vlSelf->top__DOT__dut__DOT__sub2_ins__DOT__d))),24);
        bufp->chgBit(oldp+25,((1U & ((vlSelf->top__DOT__dut__DOT__in_add2 
                                      - vlSelf->top__DOT__dut__DOT__out_mul) 
                                     >> 0x18U))));
    }
    bufp->chgIData(oldp+26,(vlSelf->a_i),24);
    bufp->chgIData(oldp+27,(vlSelf->b_i),24);
    bufp->chgIData(oldp+28,(vlSelf->w_i),24);
    bufp->chgBit(oldp+29,(vlSelf->CT_i));
    bufp->chgBit(oldp+30,(vlSelf->clk_i));
    bufp->chgIData(oldp+31,(vlSelf->even_o),24);
    bufp->chgIData(oldp+32,(vlSelf->odd_o),24);
    bufp->chgIData(oldp+33,((0xffffffU & ((1U & ((1U 
                                                  & ((vlSelf->a_i 
                                                      + vlSelf->b_i) 
                                                     >> 0x18U)) 
                                                 | (~ 
                                                    (1U 
                                                     & ((vlSelf->top__DOT__dut__DOT__add1_ins__DOT__s 
                                                         - (IData)(0x7fe001U)) 
                                                        >> 0x18U)))))
                                           ? (vlSelf->top__DOT__dut__DOT__add1_ins__DOT__s 
                                              - (IData)(0x7fe001U))
                                           : vlSelf->top__DOT__dut__DOT__add1_ins__DOT__s))),24);
    bufp->chgIData(oldp+34,((0xffffffU & ((0x1000000U 
                                           & (vlSelf->a_i 
                                              - vlSelf->b_i))
                                           ? ((IData)(0x7fe001U) 
                                              + vlSelf->top__DOT__dut__DOT__sub1_ins__DOT__d)
                                           : vlSelf->top__DOT__dut__DOT__sub1_ins__DOT__d))),24);
    bufp->chgIData(oldp+35,((0xffffffU & ((IData)(vlSelf->CT_i)
                                           ? vlSelf->b_i
                                           : ((0x1000000U 
                                               & (vlSelf->a_i 
                                                  - vlSelf->b_i))
                                               ? ((IData)(0x7fe001U) 
                                                  + vlSelf->top__DOT__dut__DOT__sub1_ins__DOT__d)
                                               : vlSelf->top__DOT__dut__DOT__sub1_ins__DOT__d)))),24);
    bufp->chgBit(oldp+36,((1U & ((vlSelf->a_i + vlSelf->b_i) 
                                 >> 0x18U))));
    bufp->chgBit(oldp+37,((1U & ((vlSelf->a_i - vlSelf->b_i) 
                                 >> 0x18U))));
}

void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_cleanup\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
