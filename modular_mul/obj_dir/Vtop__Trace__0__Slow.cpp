// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vtop__Syms.h"


VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+13,"x_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 23,0);
    tracep->declBus(c+14,"y_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 23,0);
    tracep->declBit(c+15,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+16,"z_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 23,0);
    tracep->pushNamePrefix("top ");
    tracep->declBus(c+13,"x_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 23,0);
    tracep->declBus(c+14,"y_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 23,0);
    tracep->declBit(c+15,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+16,"z_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 23,0);
    tracep->pushNamePrefix("dut ");
    tracep->declBus(c+17,"q",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+13,"x_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 23,0);
    tracep->declBus(c+14,"y_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 23,0);
    tracep->declBus(c+16,"z_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 23,0);
    tracep->declQuad(c+1,"z",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 47,0);
    tracep->declArray(c+3,"t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 71,0);
    tracep->declQuad(c+6,"t1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 47,0);
    tracep->declQuad(c+8,"t2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 47,0);
    tracep->declQuad(c+10,"t3",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 47,0);
    tracep->declBus(c+12,"sub_tmp",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 24,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vtop___024root__trace_init_top(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_top\n"); );
    // Body
    Vtop___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vtop___024root__trace_chg_top_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/);

VL_ATTR_COLD void Vtop___024root__trace_register(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vtop___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vtop___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vtop___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_top_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtop___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
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
    VlWide<3>/*95:0*/ __Vtemp_h57d1875e__0;
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
    VlWide<3>/*95:0*/ __Vtemp_h7b25b28d__0;
    VlWide<3>/*95:0*/ __Vtemp_h3b016bb3__0;
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
    VlWide<3>/*95:0*/ __Vtemp_h886439f6__0;
    VlWide<3>/*95:0*/ __Vtemp_hbeba20cc__0;
    VlWide<3>/*95:0*/ __Vtemp_h6fa3b1e3__12;
    VlWide<3>/*95:0*/ __Vtemp_haa7b2504__0;
    VlWide<3>/*95:0*/ __Vtemp_h6fa3b1e3__13;
    VlWide<3>/*95:0*/ __Vtemp_hbe900803__0;
    VlWide<3>/*95:0*/ __Vtemp_h9ce46f4f__0;
    VlWide<3>/*95:0*/ __Vtemp_h6fa3b1e3__14;
    VlWide<3>/*95:0*/ __Vtemp_h337ff239__0;
    VlWide<3>/*95:0*/ __Vtemp_hb32ab356__0;
    VlWide<3>/*95:0*/ __Vtemp_h6fa3b1e3__15;
    VlWide<3>/*95:0*/ __Vtemp_hf691e445__0;
    VlWide<3>/*95:0*/ __Vtemp_he718b042__0;
    VlWide<3>/*95:0*/ __Vtemp_he2a9b917__0;
    VlWide<3>/*95:0*/ __Vtemp_h6fa3b1e3__16;
    VlWide<3>/*95:0*/ __Vtemp_h4b132e75__0;
    VlWide<3>/*95:0*/ __Vtemp_h6fa3b1e3__17;
    VlWide<3>/*95:0*/ __Vtemp_h190ba2ba__0;
    VlWide<3>/*95:0*/ __Vtemp_ha9b1e571__0;
    VlWide<3>/*95:0*/ __Vtemp_h6fa3b1e3__18;
    VlWide<3>/*95:0*/ __Vtemp_h14e5fb94__0;
    VlWide<3>/*95:0*/ __Vtemp_ha47d2c86__0;
    VlWide<3>/*95:0*/ __Vtemp_h6fa3b1e3__19;
    VlWide<3>/*95:0*/ __Vtemp_h39bf2533__0;
    VlWide<3>/*95:0*/ __Vtemp_h26433e2b__0;
    VlWide<3>/*95:0*/ __Vtemp_hc1eeb7f6__0;
    // Body
    bufp->fullQData(oldp+1,(vlSelf->top__DOT__dut__DOT__z),48);
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
    __Vtemp_h57d1875e__0[0U] = __Vtemp_he5dd0a75__0[0U];
    __Vtemp_h57d1875e__0[1U] = __Vtemp_he5dd0a75__0[1U];
    __Vtemp_h57d1875e__0[2U] = (0xffU & __Vtemp_he5dd0a75__0[2U]);
    bufp->fullWData(oldp+3,(__Vtemp_h57d1875e__0),72);
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
    __Vtemp_h7b25b28d__0[0U] = __Vtemp_h2886e437__0[0U];
    __Vtemp_h7b25b28d__0[1U] = __Vtemp_h2886e437__0[1U];
    __Vtemp_h7b25b28d__0[2U] = (0xffU & __Vtemp_h2886e437__0[2U]);
    VL_SHIFTR_WWI(72,72,32, __Vtemp_h3b016bb3__0, __Vtemp_h7b25b28d__0, 0x2eU);
    bufp->fullQData(oldp+6,((0xffffffffffffULL & (((QData)((IData)(
                                                                   __Vtemp_h3b016bb3__0[1U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    __Vtemp_h3b016bb3__0[0U]))))),48);
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
    __Vtemp_h886439f6__0[0U] = __Vtemp_hf4759da5__0[0U];
    __Vtemp_h886439f6__0[1U] = __Vtemp_hf4759da5__0[1U];
    __Vtemp_h886439f6__0[2U] = (0xffU & __Vtemp_hf4759da5__0[2U]);
    VL_SHIFTR_WWI(72,72,32, __Vtemp_hbeba20cc__0, __Vtemp_h886439f6__0, 0x2eU);
    VL_EXTEND_WQ(72,48, __Vtemp_h6fa3b1e3__12, vlSelf->top__DOT__dut__DOT__z);
    VL_SHIFTL_WWI(72,72,32, __Vtemp_haa7b2504__0, __Vtemp_h6fa3b1e3__12, 0x17U);
    VL_EXTEND_WQ(72,48, __Vtemp_h6fa3b1e3__13, vlSelf->top__DOT__dut__DOT__z);
    VL_SHIFTL_WWI(72,72,32, __Vtemp_hbe900803__0, __Vtemp_h6fa3b1e3__13, 0xdU);
    VL_ADD_W(3, __Vtemp_h9ce46f4f__0, __Vtemp_haa7b2504__0, __Vtemp_hbe900803__0);
    VL_EXTEND_WQ(72,48, __Vtemp_h6fa3b1e3__14, vlSelf->top__DOT__dut__DOT__z);
    VL_SHIFTL_WWI(72,72,32, __Vtemp_h337ff239__0, __Vtemp_h6fa3b1e3__14, 3U);
    VL_ADD_W(3, __Vtemp_hb32ab356__0, __Vtemp_h9ce46f4f__0, __Vtemp_h337ff239__0);
    VL_EXTEND_WQ(72,48, __Vtemp_h6fa3b1e3__15, vlSelf->top__DOT__dut__DOT__z);
    VL_SUB_W(3, __Vtemp_hf691e445__0, __Vtemp_hb32ab356__0, __Vtemp_h6fa3b1e3__15);
    __Vtemp_he718b042__0[0U] = __Vtemp_hf691e445__0[0U];
    __Vtemp_he718b042__0[1U] = __Vtemp_hf691e445__0[1U];
    __Vtemp_he718b042__0[2U] = (0xffU & __Vtemp_hf691e445__0[2U]);
    VL_SHIFTR_WWI(72,72,32, __Vtemp_he2a9b917__0, __Vtemp_he718b042__0, 0x2eU);
    VL_EXTEND_WQ(72,48, __Vtemp_h6fa3b1e3__16, vlSelf->top__DOT__dut__DOT__z);
    VL_SHIFTL_WWI(72,72,32, __Vtemp_h4b132e75__0, __Vtemp_h6fa3b1e3__16, 0x17U);
    VL_EXTEND_WQ(72,48, __Vtemp_h6fa3b1e3__17, vlSelf->top__DOT__dut__DOT__z);
    VL_SHIFTL_WWI(72,72,32, __Vtemp_h190ba2ba__0, __Vtemp_h6fa3b1e3__17, 0xdU);
    VL_ADD_W(3, __Vtemp_ha9b1e571__0, __Vtemp_h4b132e75__0, __Vtemp_h190ba2ba__0);
    VL_EXTEND_WQ(72,48, __Vtemp_h6fa3b1e3__18, vlSelf->top__DOT__dut__DOT__z);
    VL_SHIFTL_WWI(72,72,32, __Vtemp_h14e5fb94__0, __Vtemp_h6fa3b1e3__18, 3U);
    VL_ADD_W(3, __Vtemp_ha47d2c86__0, __Vtemp_ha9b1e571__0, __Vtemp_h14e5fb94__0);
    VL_EXTEND_WQ(72,48, __Vtemp_h6fa3b1e3__19, vlSelf->top__DOT__dut__DOT__z);
    VL_SUB_W(3, __Vtemp_h39bf2533__0, __Vtemp_ha47d2c86__0, __Vtemp_h6fa3b1e3__19);
    __Vtemp_h26433e2b__0[0U] = __Vtemp_h39bf2533__0[0U];
    __Vtemp_h26433e2b__0[1U] = __Vtemp_h39bf2533__0[1U];
    __Vtemp_h26433e2b__0[2U] = (0xffU & __Vtemp_h39bf2533__0[2U]);
    VL_SHIFTR_WWI(72,72,32, __Vtemp_hc1eeb7f6__0, __Vtemp_h26433e2b__0, 0x2eU);
    bufp->fullQData(oldp+8,((0xffffffffffffULL & ((
                                                   (((QData)((IData)(
                                                                     __Vtemp_hbeba20cc__0[1U])) 
                                                     << 0x37U) 
                                                    | ((QData)((IData)(
                                                                       __Vtemp_hbeba20cc__0[0U])) 
                                                       << 0x17U)) 
                                                   - 
                                                   (((QData)((IData)(
                                                                     __Vtemp_he2a9b917__0[1U])) 
                                                     << 0x2dU) 
                                                    | ((QData)((IData)(
                                                                       __Vtemp_he2a9b917__0[0U])) 
                                                       << 0xdU))) 
                                                  + 
                                                  (((QData)((IData)(
                                                                    __Vtemp_hc1eeb7f6__0[1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     __Vtemp_hc1eeb7f6__0[0U])))))),48);
    bufp->fullQData(oldp+10,(vlSelf->top__DOT__dut__DOT__t3),48);
    bufp->fullIData(oldp+12,((0x1ffffffU & ((IData)(vlSelf->top__DOT__dut__DOT__t3) 
                                            - (IData)(0x7fe001U)))),25);
    bufp->fullIData(oldp+13,(vlSelf->x_i),24);
    bufp->fullIData(oldp+14,(vlSelf->y_i),24);
    bufp->fullBit(oldp+15,(vlSelf->clk_i));
    bufp->fullIData(oldp+16,(vlSelf->z_o),24);
    bufp->fullIData(oldp+17,(0x7fe001U),32);
}
