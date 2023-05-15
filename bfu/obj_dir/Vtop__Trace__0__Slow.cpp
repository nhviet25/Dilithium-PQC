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
    tracep->declBus(c+27,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 23,0);
    tracep->declBus(c+28,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 23,0);
    tracep->declBus(c+29,"w_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 23,0);
    tracep->declBit(c+30,"CT_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+31,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+32,"even_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 23,0);
    tracep->declBus(c+33,"odd_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 23,0);
    tracep->pushNamePrefix("top ");
    tracep->declBus(c+27,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 23,0);
    tracep->declBus(c+28,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 23,0);
    tracep->declBus(c+29,"w_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 23,0);
    tracep->declBit(c+30,"CT_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+31,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+32,"even_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 23,0);
    tracep->declBus(c+33,"odd_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 23,0);
    tracep->pushNamePrefix("dut ");
    tracep->declBus(c+27,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 23,0);
    tracep->declBus(c+28,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 23,0);
    tracep->declBus(c+29,"w_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 23,0);
    tracep->declBit(c+30,"CT_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+32,"even_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 23,0);
    tracep->declBus(c+33,"odd_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 23,0);
    tracep->declBus(c+34,"gs_add",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 23,0);
    tracep->declBus(c+35,"gs_sub",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 23,0);
    tracep->declBus(c+1,"in_add2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 23,0);
    tracep->declBus(c+36,"in_mul",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 23,0);
    tracep->declBus(c+2,"out_mul",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 23,0);
    tracep->declBus(c+3,"out_add2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 23,0);
    tracep->declBus(c+4,"out_sub2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 23,0);
    tracep->pushNamePrefix("add1_ins ");
    tracep->declBus(c+39,"q",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+27,"x_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 23,0);
    tracep->declBus(c+28,"y_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 23,0);
    tracep->declBus(c+34,"z_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 23,0);
    tracep->declBus(c+5,"s",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 23,0);
    tracep->declBus(c+6,"d",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 23,0);
    tracep->declBit(c+37,"c",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+7,"b",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("add2_ins ");
    tracep->declBus(c+39,"q",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+1,"x_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 23,0);
    tracep->declBus(c+2,"y_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 23,0);
    tracep->declBus(c+3,"z_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 23,0);
    tracep->declBus(c+8,"s",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 23,0);
    tracep->declBus(c+9,"d",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 23,0);
    tracep->declBit(c+10,"c",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+11,"b",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mul_ins ");
    tracep->declBus(c+39,"q",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+29,"x_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 23,0);
    tracep->declBus(c+36,"y_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 23,0);
    tracep->declBus(c+2,"z_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 23,0);
    tracep->declQuad(c+12,"z",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 47,0);
    tracep->declArray(c+14,"t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 71,0);
    tracep->declBus(c+17,"t1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 25,0);
    tracep->declQuad(c+18,"t2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 49,0);
    tracep->declBus(c+20,"t3",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 24,0);
    tracep->declBus(c+21,"sub_tmp",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 24,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mux_a ");
    tracep->declBus(c+40,"WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+34,"data0_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 23,0);
    tracep->declBus(c+27,"data1_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 23,0);
    tracep->declBit(c+30,"sel_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1,"data_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 23,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mux_a_2 ");
    tracep->declBus(c+40,"WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+1,"data0_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 23,0);
    tracep->declBus(c+3,"data1_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 23,0);
    tracep->declBit(c+30,"sel_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+32,"data_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 23,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mux_b ");
    tracep->declBus(c+40,"WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+35,"data0_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 23,0);
    tracep->declBus(c+28,"data1_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 23,0);
    tracep->declBit(c+30,"sel_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+36,"data_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 23,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mux_b_2 ");
    tracep->declBus(c+40,"WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+2,"data0_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 23,0);
    tracep->declBus(c+4,"data1_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 23,0);
    tracep->declBit(c+30,"sel_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+33,"data_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 23,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sub1_ins ");
    tracep->declBus(c+39,"q",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+27,"x_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 23,0);
    tracep->declBus(c+28,"y_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 23,0);
    tracep->declBus(c+35,"z_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 23,0);
    tracep->declBus(c+22,"d",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 23,0);
    tracep->declBus(c+23,"s",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 23,0);
    tracep->declBit(c+38,"b",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sub2_ins ");
    tracep->declBus(c+39,"q",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+1,"x_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 23,0);
    tracep->declBus(c+2,"y_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 23,0);
    tracep->declBus(c+4,"z_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 23,0);
    tracep->declBus(c+24,"d",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 23,0);
    tracep->declBus(c+25,"s",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 23,0);
    tracep->declBit(c+26,"b",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(3);
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
    bufp->fullIData(oldp+1,(vlSelf->top__DOT__dut__DOT__in_add2),24);
    bufp->fullIData(oldp+2,(vlSelf->top__DOT__dut__DOT__out_mul),24);
    bufp->fullIData(oldp+3,((0xffffffU & ((1U & ((1U 
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
    bufp->fullIData(oldp+4,((0xffffffU & ((0x1000000U 
                                           & (vlSelf->top__DOT__dut__DOT__in_add2 
                                              - vlSelf->top__DOT__dut__DOT__out_mul))
                                           ? ((IData)(0x7fe001U) 
                                              + vlSelf->top__DOT__dut__DOT__sub2_ins__DOT__d)
                                           : vlSelf->top__DOT__dut__DOT__sub2_ins__DOT__d))),24);
    bufp->fullIData(oldp+5,(vlSelf->top__DOT__dut__DOT__add1_ins__DOT__s),24);
    bufp->fullIData(oldp+6,((0xffffffU & (vlSelf->top__DOT__dut__DOT__add1_ins__DOT__s 
                                          - (IData)(0x7fe001U)))),24);
    bufp->fullBit(oldp+7,((1U & ((vlSelf->top__DOT__dut__DOT__add1_ins__DOT__s 
                                  - (IData)(0x7fe001U)) 
                                 >> 0x18U))));
    bufp->fullIData(oldp+8,(vlSelf->top__DOT__dut__DOT__add2_ins__DOT__s),24);
    bufp->fullIData(oldp+9,((0xffffffU & (vlSelf->top__DOT__dut__DOT__add2_ins__DOT__s 
                                          - (IData)(0x7fe001U)))),24);
    bufp->fullBit(oldp+10,((1U & ((vlSelf->top__DOT__dut__DOT__in_add2 
                                   + vlSelf->top__DOT__dut__DOT__out_mul) 
                                  >> 0x18U))));
    bufp->fullBit(oldp+11,((1U & ((vlSelf->top__DOT__dut__DOT__add2_ins__DOT__s 
                                   - (IData)(0x7fe001U)) 
                                  >> 0x18U))));
    bufp->fullQData(oldp+12,(vlSelf->top__DOT__dut__DOT__mul_ins__DOT__z),48);
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
    bufp->fullWData(oldp+14,(__Vtemp_h5f9b4f26__0),72);
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
    bufp->fullIData(oldp+17,((0x3ffffffU & ((0x3fc0000U 
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
    bufp->fullQData(oldp+18,((0x3ffffffffffffULL & 
                              ((((QData)((IData)((0x3ffffffU 
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
                               + (QData)((IData)((0x3ffffffU 
                                                  & ((0x3fc0000U 
                                                      & (__Vtemp_h85b73d55__0[2U] 
                                                         << 0x12U)) 
                                                     | (__Vtemp_h85b73d55__0[1U] 
                                                        >> 0xeU)))))))),50);
    bufp->fullIData(oldp+20,(vlSelf->top__DOT__dut__DOT__mul_ins__DOT__t3),25);
    bufp->fullIData(oldp+21,((0x1ffffffU & (vlSelf->top__DOT__dut__DOT__mul_ins__DOT__t3 
                                            - (IData)(0x7fe001U)))),25);
    bufp->fullIData(oldp+22,(vlSelf->top__DOT__dut__DOT__sub1_ins__DOT__d),24);
    bufp->fullIData(oldp+23,((0xffffffU & ((IData)(0x7fe001U) 
                                           + vlSelf->top__DOT__dut__DOT__sub1_ins__DOT__d))),24);
    bufp->fullIData(oldp+24,(vlSelf->top__DOT__dut__DOT__sub2_ins__DOT__d),24);
    bufp->fullIData(oldp+25,((0xffffffU & ((IData)(0x7fe001U) 
                                           + vlSelf->top__DOT__dut__DOT__sub2_ins__DOT__d))),24);
    bufp->fullBit(oldp+26,((1U & ((vlSelf->top__DOT__dut__DOT__in_add2 
                                   - vlSelf->top__DOT__dut__DOT__out_mul) 
                                  >> 0x18U))));
    bufp->fullIData(oldp+27,(vlSelf->a_i),24);
    bufp->fullIData(oldp+28,(vlSelf->b_i),24);
    bufp->fullIData(oldp+29,(vlSelf->w_i),24);
    bufp->fullBit(oldp+30,(vlSelf->CT_i));
    bufp->fullBit(oldp+31,(vlSelf->clk_i));
    bufp->fullIData(oldp+32,(vlSelf->even_o),24);
    bufp->fullIData(oldp+33,(vlSelf->odd_o),24);
    bufp->fullIData(oldp+34,((0xffffffU & ((1U & ((1U 
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
    bufp->fullIData(oldp+35,((0xffffffU & ((0x1000000U 
                                            & (vlSelf->a_i 
                                               - vlSelf->b_i))
                                            ? ((IData)(0x7fe001U) 
                                               + vlSelf->top__DOT__dut__DOT__sub1_ins__DOT__d)
                                            : vlSelf->top__DOT__dut__DOT__sub1_ins__DOT__d))),24);
    bufp->fullIData(oldp+36,((0xffffffU & ((IData)(vlSelf->CT_i)
                                            ? vlSelf->b_i
                                            : ((0x1000000U 
                                                & (vlSelf->a_i 
                                                   - vlSelf->b_i))
                                                ? ((IData)(0x7fe001U) 
                                                   + vlSelf->top__DOT__dut__DOT__sub1_ins__DOT__d)
                                                : vlSelf->top__DOT__dut__DOT__sub1_ins__DOT__d)))),24);
    bufp->fullBit(oldp+37,((1U & ((vlSelf->a_i + vlSelf->b_i) 
                                  >> 0x18U))));
    bufp->fullBit(oldp+38,((1U & ((vlSelf->a_i - vlSelf->b_i) 
                                  >> 0x18U))));
    bufp->fullIData(oldp+39,(0x7fe001U),32);
    bufp->fullIData(oldp+40,(0x18U),32);
}
