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
    VlWide<3>/*95:0*/ __Vtemp_h6fa3b1e3__0;
    VlWide<3>/*95:0*/ __Vtemp_hc45937c3__0;
    VlWide<3>/*95:0*/ __Vtemp_h6fa3b1e3__1;
    VlWide<3>/*95:0*/ __Vtemp_h681fe34c__0;
    VlWide<3>/*95:0*/ __Vtemp_hba616de2__0;
    VlWide<3>/*95:0*/ __Vtemp_h6fa3b1e3__2;
    VlWide<3>/*95:0*/ __Vtemp_h0cda0355__0;
    VlWide<3>/*95:0*/ __Vtemp_h197f115e__0;
    VlWide<3>/*95:0*/ __Vtemp_h6fa3b1e3__3;
    VlWide<3>/*95:0*/ __Vtemp_he5dd0a75__0;
    VlWide<3>/*95:0*/ __Vtemp_h41f8554e__0;
    VlWide<3>/*95:0*/ __Vtemp_h4b0bb3f4__0;
    VlWide<3>/*95:0*/ __Vtemp_h6fa3b1e3__4;
    VlWide<3>/*95:0*/ __Vtemp_h7a0fe0d9__0;
    VlWide<3>/*95:0*/ __Vtemp_h6fa3b1e3__5;
    VlWide<3>/*95:0*/ __Vtemp_hdbf514c5__0;
    VlWide<3>/*95:0*/ __Vtemp_hb278b102__0;
    VlWide<3>/*95:0*/ __Vtemp_h6fa3b1e3__6;
    VlWide<3>/*95:0*/ __Vtemp_h0c8b5317__0;
    VlWide<3>/*95:0*/ __Vtemp_hdb32c636__0;
    VlWide<3>/*95:0*/ __Vtemp_h6fa3b1e3__7;
    VlWide<3>/*95:0*/ __Vtemp_h2886e437__0;
    VlWide<3>/*95:0*/ __Vtemp_hb3eb569c__0;
    VlWide<3>/*95:0*/ __Vtemp_hccd80c10__0;
    VlWide<3>/*95:0*/ __Vtemp_h6fa3b1e3__8;
    VlWide<3>/*95:0*/ __Vtemp_h604f2f8c__0;
    VlWide<3>/*95:0*/ __Vtemp_h6fa3b1e3__9;
    VlWide<3>/*95:0*/ __Vtemp_h1092ac07__0;
    VlWide<3>/*95:0*/ __Vtemp_ha22cd428__0;
    VlWide<3>/*95:0*/ __Vtemp_h6fa3b1e3__10;
    VlWide<3>/*95:0*/ __Vtemp_hc9967ec0__0;
    VlWide<3>/*95:0*/ __Vtemp_hc47b12d6__0;
    VlWide<3>/*95:0*/ __Vtemp_h6fa3b1e3__11;
    VlWide<3>/*95:0*/ __Vtemp_hf4759da5__0;
    VlWide<3>/*95:0*/ __Vtemp_ha39c8bec__0;
    VlWide<3>/*95:0*/ __Vtemp_h8774a74c__0;
    // Body
    vlSelf->top__DOT__dut__DOT__z = (0xffffffffffffULL 
                                     & ((QData)((IData)(vlSelf->x_i)) 
                                        * (QData)((IData)(vlSelf->y_i))));
    VL_EXTEND_WQ(72,48, __Vtemp_h6fa3b1e3__0, vlSelf->top__DOT__dut__DOT__z);
    VL_SHIFTL_WWI(72,72,32, __Vtemp_hc45937c3__0, __Vtemp_h6fa3b1e3__0, 0x17U);
    VL_EXTEND_WQ(72,48, __Vtemp_h6fa3b1e3__1, vlSelf->top__DOT__dut__DOT__z);
    VL_SHIFTL_WWI(72,72,32, __Vtemp_h681fe34c__0, __Vtemp_h6fa3b1e3__1, 0xdU);
    VL_ADD_W(3, __Vtemp_hba616de2__0, __Vtemp_hc45937c3__0, __Vtemp_h681fe34c__0);
    VL_EXTEND_WQ(72,48, __Vtemp_h6fa3b1e3__2, vlSelf->top__DOT__dut__DOT__z);
    VL_SHIFTL_WWI(72,72,32, __Vtemp_h0cda0355__0, __Vtemp_h6fa3b1e3__2, 3U);
    VL_ADD_W(3, __Vtemp_h197f115e__0, __Vtemp_hba616de2__0, __Vtemp_h0cda0355__0);
    VL_EXTEND_WQ(72,48, __Vtemp_h6fa3b1e3__3, vlSelf->top__DOT__dut__DOT__z);
    VL_SUB_W(3, __Vtemp_he5dd0a75__0, __Vtemp_h197f115e__0, __Vtemp_h6fa3b1e3__3);
    __Vtemp_h41f8554e__0[0U] = __Vtemp_he5dd0a75__0[0U];
    __Vtemp_h41f8554e__0[1U] = __Vtemp_he5dd0a75__0[1U];
    __Vtemp_h41f8554e__0[2U] = (0xffU & __Vtemp_he5dd0a75__0[2U]);
    VL_SHIFTR_WWI(72,72,32, __Vtemp_h4b0bb3f4__0, __Vtemp_h41f8554e__0, 0x2eU);
    VL_EXTEND_WQ(72,48, __Vtemp_h6fa3b1e3__4, vlSelf->top__DOT__dut__DOT__z);
    VL_SHIFTL_WWI(72,72,32, __Vtemp_h7a0fe0d9__0, __Vtemp_h6fa3b1e3__4, 0x17U);
    VL_EXTEND_WQ(72,48, __Vtemp_h6fa3b1e3__5, vlSelf->top__DOT__dut__DOT__z);
    VL_SHIFTL_WWI(72,72,32, __Vtemp_hdbf514c5__0, __Vtemp_h6fa3b1e3__5, 0xdU);
    VL_ADD_W(3, __Vtemp_hb278b102__0, __Vtemp_h7a0fe0d9__0, __Vtemp_hdbf514c5__0);
    VL_EXTEND_WQ(72,48, __Vtemp_h6fa3b1e3__6, vlSelf->top__DOT__dut__DOT__z);
    VL_SHIFTL_WWI(72,72,32, __Vtemp_h0c8b5317__0, __Vtemp_h6fa3b1e3__6, 3U);
    VL_ADD_W(3, __Vtemp_hdb32c636__0, __Vtemp_hb278b102__0, __Vtemp_h0c8b5317__0);
    VL_EXTEND_WQ(72,48, __Vtemp_h6fa3b1e3__7, vlSelf->top__DOT__dut__DOT__z);
    VL_SUB_W(3, __Vtemp_h2886e437__0, __Vtemp_hdb32c636__0, __Vtemp_h6fa3b1e3__7);
    __Vtemp_hb3eb569c__0[0U] = __Vtemp_h2886e437__0[0U];
    __Vtemp_hb3eb569c__0[1U] = __Vtemp_h2886e437__0[1U];
    __Vtemp_hb3eb569c__0[2U] = (0xffU & __Vtemp_h2886e437__0[2U]);
    VL_SHIFTR_WWI(72,72,32, __Vtemp_hccd80c10__0, __Vtemp_hb3eb569c__0, 0x2eU);
    VL_EXTEND_WQ(72,48, __Vtemp_h6fa3b1e3__8, vlSelf->top__DOT__dut__DOT__z);
    VL_SHIFTL_WWI(72,72,32, __Vtemp_h604f2f8c__0, __Vtemp_h6fa3b1e3__8, 0x17U);
    VL_EXTEND_WQ(72,48, __Vtemp_h6fa3b1e3__9, vlSelf->top__DOT__dut__DOT__z);
    VL_SHIFTL_WWI(72,72,32, __Vtemp_h1092ac07__0, __Vtemp_h6fa3b1e3__9, 0xdU);
    VL_ADD_W(3, __Vtemp_ha22cd428__0, __Vtemp_h604f2f8c__0, __Vtemp_h1092ac07__0);
    VL_EXTEND_WQ(72,48, __Vtemp_h6fa3b1e3__10, vlSelf->top__DOT__dut__DOT__z);
    VL_SHIFTL_WWI(72,72,32, __Vtemp_hc9967ec0__0, __Vtemp_h6fa3b1e3__10, 3U);
    VL_ADD_W(3, __Vtemp_hc47b12d6__0, __Vtemp_ha22cd428__0, __Vtemp_hc9967ec0__0);
    VL_EXTEND_WQ(72,48, __Vtemp_h6fa3b1e3__11, vlSelf->top__DOT__dut__DOT__z);
    VL_SUB_W(3, __Vtemp_hf4759da5__0, __Vtemp_hc47b12d6__0, __Vtemp_h6fa3b1e3__11);
    __Vtemp_ha39c8bec__0[0U] = __Vtemp_hf4759da5__0[0U];
    __Vtemp_ha39c8bec__0[1U] = __Vtemp_hf4759da5__0[1U];
    __Vtemp_ha39c8bec__0[2U] = (0xffU & __Vtemp_hf4759da5__0[2U]);
    VL_SHIFTR_WWI(72,72,32, __Vtemp_h8774a74c__0, __Vtemp_ha39c8bec__0, 0x2eU);
    vlSelf->top__DOT__dut__DOT__t3 = (0xffffffffffffULL 
                                      & (vlSelf->top__DOT__dut__DOT__z 
                                         - (((((QData)((IData)(
                                                               __Vtemp_h4b0bb3f4__0[1U])) 
                                               << 0x37U) 
                                              | ((QData)((IData)(
                                                                 __Vtemp_h4b0bb3f4__0[0U])) 
                                                 << 0x17U)) 
                                             - (((QData)((IData)(
                                                                 __Vtemp_hccd80c10__0[1U])) 
                                                 << 0x2dU) 
                                                | ((QData)((IData)(
                                                                   __Vtemp_hccd80c10__0[0U])) 
                                                   << 0xdU))) 
                                            + (((QData)((IData)(
                                                                __Vtemp_h8774a74c__0[1U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 __Vtemp_h8774a74c__0[0U]))))));
    vlSelf->z_o = (0xffffffU & (IData)(((0x1000000U 
                                         & ((IData)(vlSelf->top__DOT__dut__DOT__t3) 
                                            - (IData)(0x7fe001U)))
                                         ? vlSelf->top__DOT__dut__DOT__t3
                                         : (QData)((IData)(
                                                           (0xffffffU 
                                                            & ((IData)(vlSelf->top__DOT__dut__DOT__t3) 
                                                               - (IData)(0x7fe001U))))))));
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
    if (VL_UNLIKELY((vlSelf->x_i & 0xff000000U))) {
        Verilated::overWidthError("x_i");}
    if (VL_UNLIKELY((vlSelf->y_i & 0xff000000U))) {
        Verilated::overWidthError("y_i");}
    if (VL_UNLIKELY((vlSelf->clk_i & 0xfeU))) {
        Verilated::overWidthError("clk_i");}
}
#endif  // VL_DEBUG
