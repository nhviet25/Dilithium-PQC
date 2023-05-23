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
    tracep->declBit(c+48,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+49,"start",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+50,"ntt",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+51,"ntt_done",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+52,"even_debug_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 23,0);
    tracep->declBus(c+53,"odd_debug_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 23,0);
    tracep->pushNamePrefix("top ");
    tracep->declBit(c+48,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+49,"start",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+50,"ntt",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+51,"ntt_done",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+52,"even_debug_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 23,0);
    tracep->declBus(c+53,"odd_debug_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 23,0);
    tracep->pushNamePrefix("dut ");
    tracep->declBit(c+48,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+49,"start",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+50,"ntt",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+51,"ntt_done",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+52,"even_debug_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 23,0);
    tracep->declBus(c+53,"odd_debug_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 23,0);
    tracep->declBus(c+1,"tw",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 23,0);
    tracep->declBus(c+14,"in1_bfu",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 23,0);
    tracep->declBus(c+15,"in2_bfu",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 23,0);
    tracep->declBus(c+16,"out1_bfu",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 23,0);
    tracep->declBus(c+17,"out2_bfu",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 23,0);
    tracep->declBus(c+2,"ntt_out1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 23,0);
    tracep->declBus(c+3,"ntt_out2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 23,0);
    tracep->declBus(c+4,"intt_out1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 23,0);
    tracep->declBus(c+5,"intt_out2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 23,0);
    tracep->declBus(c+6,"ntt_addr1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBus(c+7,"ntt_addr2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBus(c+8,"intt_addr1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBus(c+9,"intt_addr2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBus(c+8,"tw_addr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBit(c+54,"intt_wren",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+55,"ntt_wren",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+10,"wren",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->pushNamePrefix("agu_ins ");
    tracep->declBit(c+48,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+49,"start_ntt",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+8,"twiddle_addr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBit(c+51,"ntt_done",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+10,"wren_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+6,"ntt_addr_rd1_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+7,"ntt_addr_rd2_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+8,"intt_addr_rd1_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+9,"intt_addr_rd2_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+8,"i",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBit(c+11,"done",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    {
        const char* __VenumItemNames[]
        = {"IDLE", "COUNTER"};
        const char* __VenumItemValues[]
        = {"0", "1"};
        tracep->declDTypeEnum(1, "agu.state_e", 2, 1, __VenumItemNames, __VenumItemValues);
    }
    tracep->declBit(c+12,"current_state",1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+13,"next_state",1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("bfu_ins ");
    tracep->declBus(c+14,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 23,0);
    tracep->declBus(c+15,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 23,0);
    tracep->declBus(c+1,"w_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 23,0);
    tracep->declBit(c+50,"CT_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+16,"even_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 23,0);
    tracep->declBus(c+17,"odd_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 23,0);
    tracep->declBus(c+18,"gs_add",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 23,0);
    tracep->declBus(c+19,"gs_sub",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 23,0);
    tracep->declBus(c+20,"in_add2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 23,0);
    tracep->declBus(c+56,"in_mul",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 23,0);
    tracep->declBus(c+21,"out_mul",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 23,0);
    tracep->declBus(c+22,"out_add2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 23,0);
    tracep->declBus(c+23,"out_sub2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 23,0);
    tracep->pushNamePrefix("add1_ins ");
    tracep->declBus(c+58,"q",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+14,"x_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 23,0);
    tracep->declBus(c+15,"y_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 23,0);
    tracep->declBus(c+18,"z_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 23,0);
    tracep->declBus(c+24,"s",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 23,0);
    tracep->declBus(c+25,"d",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 23,0);
    tracep->declBit(c+26,"c",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+27,"b",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("add2_ins ");
    tracep->declBus(c+58,"q",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+20,"x_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 23,0);
    tracep->declBus(c+21,"y_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 23,0);
    tracep->declBus(c+22,"z_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 23,0);
    tracep->declBus(c+28,"s",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 23,0);
    tracep->declBus(c+29,"d",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 23,0);
    tracep->declBit(c+30,"c",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+31,"b",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mul_ins ");
    tracep->declBus(c+58,"q",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+1,"x_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 23,0);
    tracep->declBus(c+56,"y_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 23,0);
    tracep->declBus(c+21,"z_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 23,0);
    tracep->declQuad(c+32,"z",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 47,0);
    tracep->declArray(c+34,"t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 71,0);
    tracep->declBus(c+37,"t1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 25,0);
    tracep->declQuad(c+38,"t2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 49,0);
    tracep->declBus(c+40,"t3",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 24,0);
    tracep->declBus(c+41,"sub_tmp",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 24,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mux_a ");
    tracep->declBus(c+59,"WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+18,"data0_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 23,0);
    tracep->declBus(c+14,"data1_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 23,0);
    tracep->declBit(c+50,"sel_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+20,"data_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 23,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mux_a_2 ");
    tracep->declBus(c+59,"WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+20,"data0_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 23,0);
    tracep->declBus(c+22,"data1_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 23,0);
    tracep->declBit(c+50,"sel_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+16,"data_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 23,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mux_b ");
    tracep->declBus(c+59,"WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+19,"data0_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 23,0);
    tracep->declBus(c+15,"data1_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 23,0);
    tracep->declBit(c+50,"sel_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+56,"data_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 23,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mux_b_2 ");
    tracep->declBus(c+59,"WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+21,"data0_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 23,0);
    tracep->declBus(c+23,"data1_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 23,0);
    tracep->declBit(c+50,"sel_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+17,"data_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 23,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sub1_ins ");
    tracep->declBus(c+58,"q",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+14,"x_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 23,0);
    tracep->declBus(c+15,"y_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 23,0);
    tracep->declBus(c+19,"z_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 23,0);
    tracep->declBus(c+42,"d",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 23,0);
    tracep->declBus(c+43,"s",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 23,0);
    tracep->declBit(c+44,"b",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sub2_ins ");
    tracep->declBus(c+58,"q",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+20,"x_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 23,0);
    tracep->declBus(c+21,"y_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 23,0);
    tracep->declBus(c+23,"z_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 23,0);
    tracep->declBus(c+45,"d",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 23,0);
    tracep->declBus(c+46,"s",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 23,0);
    tracep->declBit(c+47,"b",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("bram_INTT ");
    tracep->declBus(c+16,"data_wr1_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 23,0);
    tracep->declBus(c+17,"data_wr2_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 23,0);
    tracep->declBus(c+8,"addr1_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+9,"addr2_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBit(c+54,"wren_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+48,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+4,"data1_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 23,0);
    tracep->declBus(c+5,"data2_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 23,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("bram_NTT ");
    tracep->declBus(c+16,"data_wr1_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 23,0);
    tracep->declBus(c+17,"data_wr2_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 23,0);
    tracep->declBus(c+6,"addr1_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+7,"addr2_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBit(c+55,"wren_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+48,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+2,"data1_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 23,0);
    tracep->declBus(c+3,"data2_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 23,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sel_in1_bfu ");
    tracep->declBus(c+59,"WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+2,"data0_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 23,0);
    tracep->declBus(c+4,"data1_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 23,0);
    tracep->declBit(c+57,"sel_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+14,"data_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 23,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sel_in2_bfu ");
    tracep->declBus(c+59,"WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3,"data0_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 23,0);
    tracep->declBus(c+5,"data1_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 23,0);
    tracep->declBit(c+57,"sel_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+15,"data_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 23,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("twiddle_fac ");
    tracep->declBus(c+8,"addr_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBit(c+48,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1,"data_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 23,0);
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
    VlWide<3>/*95:0*/ __Vtemp_h6a7049e9__0;
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
    VlWide<3>/*95:0*/ __Vtemp_h4e75c9e9__12;
    VlWide<3>/*95:0*/ __Vtemp_h9364e799__0;
    VlWide<3>/*95:0*/ __Vtemp_h4e75c9e9__13;
    VlWide<3>/*95:0*/ __Vtemp_hb21e83f5__0;
    VlWide<3>/*95:0*/ __Vtemp_hba35f3b1__0;
    VlWide<3>/*95:0*/ __Vtemp_h4e75c9e9__14;
    VlWide<3>/*95:0*/ __Vtemp_h42bf6306__0;
    VlWide<3>/*95:0*/ __Vtemp_hb1a6d89d__0;
    VlWide<3>/*95:0*/ __Vtemp_h4e75c9e9__15;
    VlWide<3>/*95:0*/ __Vtemp_h5df8ea9a__0;
    VlWide<3>/*95:0*/ __Vtemp_h4e75c9e9__16;
    VlWide<3>/*95:0*/ __Vtemp_h74c44c33__0;
    VlWide<3>/*95:0*/ __Vtemp_h4e75c9e9__17;
    VlWide<3>/*95:0*/ __Vtemp_hfe763c47__0;
    VlWide<3>/*95:0*/ __Vtemp_hcce62988__0;
    VlWide<3>/*95:0*/ __Vtemp_h4e75c9e9__18;
    VlWide<3>/*95:0*/ __Vtemp_h6aec7fe6__0;
    VlWide<3>/*95:0*/ __Vtemp_h7ebee027__0;
    VlWide<3>/*95:0*/ __Vtemp_h4e75c9e9__19;
    VlWide<3>/*95:0*/ __Vtemp_hc96b973b__0;
    // Body
    bufp->fullIData(oldp+1,(vlSelf->top__DOT__dut__DOT__tw),24);
    bufp->fullIData(oldp+2,(vlSelf->top__DOT__dut__DOT__bram_NTT__DOT__ram
                            [(0xffU & ((IData)(vlSelf->top__DOT__dut__DOT__agu_ins__DOT__i) 
                                       << 1U))]),24);
    bufp->fullIData(oldp+3,(vlSelf->top__DOT__dut__DOT__bram_NTT__DOT__ram
                            [(0xffU & ((IData)(1U) 
                                       + ((IData)(vlSelf->top__DOT__dut__DOT__agu_ins__DOT__i) 
                                          << 1U)))]),24);
    bufp->fullIData(oldp+4,(vlSelf->top__DOT__dut__DOT__bram_INTT__DOT__ram
                            [vlSelf->top__DOT__dut__DOT__agu_ins__DOT__i]),24);
    bufp->fullIData(oldp+5,(vlSelf->top__DOT__dut__DOT__bram_INTT__DOT__ram
                            [(0xffU & ((IData)(0x80U) 
                                       + (IData)(vlSelf->top__DOT__dut__DOT__agu_ins__DOT__i)))]),24);
    bufp->fullCData(oldp+6,((0xffU & ((IData)(vlSelf->top__DOT__dut__DOT__agu_ins__DOT__i) 
                                      << 1U))),8);
    bufp->fullCData(oldp+7,((0xffU & ((IData)(1U) + 
                                      ((IData)(vlSelf->top__DOT__dut__DOT__agu_ins__DOT__i) 
                                       << 1U)))),8);
    bufp->fullCData(oldp+8,(vlSelf->top__DOT__dut__DOT__agu_ins__DOT__i),8);
    bufp->fullCData(oldp+9,((0xffU & ((IData)(0x80U) 
                                      + (IData)(vlSelf->top__DOT__dut__DOT__agu_ins__DOT__i)))),8);
    bufp->fullBit(oldp+10,((1U & (~ (IData)(vlSelf->top__DOT__dut__DOT__agu_ins__DOT__done)))));
    bufp->fullBit(oldp+11,(vlSelf->top__DOT__dut__DOT__agu_ins__DOT__done));
    bufp->fullBit(oldp+12,(vlSelf->top__DOT__dut__DOT__agu_ins__DOT__current_state));
    bufp->fullBit(oldp+13,(vlSelf->top__DOT__dut__DOT__agu_ins__DOT__next_state));
    bufp->fullIData(oldp+14,(vlSelf->top__DOT__dut__DOT__in1_bfu),24);
    bufp->fullIData(oldp+15,(vlSelf->top__DOT__dut__DOT__in2_bfu),24);
    bufp->fullIData(oldp+16,(vlSelf->top__DOT__dut__DOT__out1_bfu),24);
    bufp->fullIData(oldp+17,(vlSelf->top__DOT__dut__DOT__out2_bfu),24);
    bufp->fullIData(oldp+18,((0xffffffU & ((1U & ((1U 
                                                   & ((vlSelf->top__DOT__dut__DOT__in1_bfu 
                                                       + vlSelf->top__DOT__dut__DOT__in2_bfu) 
                                                      >> 0x18U)) 
                                                  | (~ 
                                                     (1U 
                                                      & ((vlSelf->top__DOT__dut__DOT__bfu_ins__DOT__add1_ins__DOT__s 
                                                          - (IData)(0x7fe001U)) 
                                                         >> 0x18U)))))
                                            ? (vlSelf->top__DOT__dut__DOT__bfu_ins__DOT__add1_ins__DOT__s 
                                               - (IData)(0x7fe001U))
                                            : vlSelf->top__DOT__dut__DOT__bfu_ins__DOT__add1_ins__DOT__s))),24);
    bufp->fullIData(oldp+19,((0xffffffU & ((0x1000000U 
                                            & (vlSelf->top__DOT__dut__DOT__in1_bfu 
                                               - vlSelf->top__DOT__dut__DOT__in2_bfu))
                                            ? ((IData)(0x7fe001U) 
                                               + vlSelf->top__DOT__dut__DOT__bfu_ins__DOT__sub1_ins__DOT__d)
                                            : vlSelf->top__DOT__dut__DOT__bfu_ins__DOT__sub1_ins__DOT__d))),24);
    bufp->fullIData(oldp+20,(vlSelf->top__DOT__dut__DOT__bfu_ins__DOT__in_add2),24);
    bufp->fullIData(oldp+21,(vlSelf->top__DOT__dut__DOT__bfu_ins__DOT__out_mul),24);
    bufp->fullIData(oldp+22,((0xffffffU & ((1U & ((1U 
                                                   & ((vlSelf->top__DOT__dut__DOT__bfu_ins__DOT__in_add2 
                                                       + vlSelf->top__DOT__dut__DOT__bfu_ins__DOT__out_mul) 
                                                      >> 0x18U)) 
                                                  | (~ 
                                                     (1U 
                                                      & ((vlSelf->top__DOT__dut__DOT__bfu_ins__DOT__add2_ins__DOT__s 
                                                          - (IData)(0x7fe001U)) 
                                                         >> 0x18U)))))
                                            ? (vlSelf->top__DOT__dut__DOT__bfu_ins__DOT__add2_ins__DOT__s 
                                               - (IData)(0x7fe001U))
                                            : vlSelf->top__DOT__dut__DOT__bfu_ins__DOT__add2_ins__DOT__s))),24);
    bufp->fullIData(oldp+23,((0xffffffU & ((0x1000000U 
                                            & (vlSelf->top__DOT__dut__DOT__bfu_ins__DOT__in_add2 
                                               - vlSelf->top__DOT__dut__DOT__bfu_ins__DOT__out_mul))
                                            ? ((IData)(0x7fe001U) 
                                               + vlSelf->top__DOT__dut__DOT__bfu_ins__DOT__sub2_ins__DOT__d)
                                            : vlSelf->top__DOT__dut__DOT__bfu_ins__DOT__sub2_ins__DOT__d))),24);
    bufp->fullIData(oldp+24,(vlSelf->top__DOT__dut__DOT__bfu_ins__DOT__add1_ins__DOT__s),24);
    bufp->fullIData(oldp+25,((0xffffffU & (vlSelf->top__DOT__dut__DOT__bfu_ins__DOT__add1_ins__DOT__s 
                                           - (IData)(0x7fe001U)))),24);
    bufp->fullBit(oldp+26,((1U & ((vlSelf->top__DOT__dut__DOT__in1_bfu 
                                   + vlSelf->top__DOT__dut__DOT__in2_bfu) 
                                  >> 0x18U))));
    bufp->fullBit(oldp+27,((1U & ((vlSelf->top__DOT__dut__DOT__bfu_ins__DOT__add1_ins__DOT__s 
                                   - (IData)(0x7fe001U)) 
                                  >> 0x18U))));
    bufp->fullIData(oldp+28,(vlSelf->top__DOT__dut__DOT__bfu_ins__DOT__add2_ins__DOT__s),24);
    bufp->fullIData(oldp+29,((0xffffffU & (vlSelf->top__DOT__dut__DOT__bfu_ins__DOT__add2_ins__DOT__s 
                                           - (IData)(0x7fe001U)))),24);
    bufp->fullBit(oldp+30,((1U & ((vlSelf->top__DOT__dut__DOT__bfu_ins__DOT__in_add2 
                                   + vlSelf->top__DOT__dut__DOT__bfu_ins__DOT__out_mul) 
                                  >> 0x18U))));
    bufp->fullBit(oldp+31,((1U & ((vlSelf->top__DOT__dut__DOT__bfu_ins__DOT__add2_ins__DOT__s 
                                   - (IData)(0x7fe001U)) 
                                  >> 0x18U))));
    bufp->fullQData(oldp+32,(vlSelf->top__DOT__dut__DOT__bfu_ins__DOT__mul_ins__DOT__z),48);
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
    __Vtemp_h6a7049e9__0[0U] = __Vtemp_h9ffe6e96__0[0U];
    __Vtemp_h6a7049e9__0[1U] = __Vtemp_h9ffe6e96__0[1U];
    __Vtemp_h6a7049e9__0[2U] = (0xffU & __Vtemp_h9ffe6e96__0[2U]);
    bufp->fullWData(oldp+34,(__Vtemp_h6a7049e9__0),72);
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
    bufp->fullIData(oldp+37,((0x3ffffffU & ((0x3fc0000U 
                                             & (__Vtemp_h7f87e8f8__0[2U] 
                                                << 0x12U)) 
                                            | (__Vtemp_h7f87e8f8__0[1U] 
                                               >> 0xeU)))),26);
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
    VL_EXTEND_WQ(72,48, __Vtemp_h4e75c9e9__12, vlSelf->top__DOT__dut__DOT__bfu_ins__DOT__mul_ins__DOT__z);
    VL_SHIFTL_WWI(72,72,32, __Vtemp_h9364e799__0, __Vtemp_h4e75c9e9__12, 0x17U);
    VL_EXTEND_WQ(72,48, __Vtemp_h4e75c9e9__13, vlSelf->top__DOT__dut__DOT__bfu_ins__DOT__mul_ins__DOT__z);
    VL_SHIFTL_WWI(72,72,32, __Vtemp_hb21e83f5__0, __Vtemp_h4e75c9e9__13, 0xdU);
    VL_ADD_W(3, __Vtemp_hba35f3b1__0, __Vtemp_h9364e799__0, __Vtemp_hb21e83f5__0);
    VL_EXTEND_WQ(72,48, __Vtemp_h4e75c9e9__14, vlSelf->top__DOT__dut__DOT__bfu_ins__DOT__mul_ins__DOT__z);
    VL_SHIFTL_WWI(72,72,32, __Vtemp_h42bf6306__0, __Vtemp_h4e75c9e9__14, 3U);
    VL_ADD_W(3, __Vtemp_hb1a6d89d__0, __Vtemp_hba35f3b1__0, __Vtemp_h42bf6306__0);
    VL_EXTEND_WQ(72,48, __Vtemp_h4e75c9e9__15, vlSelf->top__DOT__dut__DOT__bfu_ins__DOT__mul_ins__DOT__z);
    VL_SUB_W(3, __Vtemp_h5df8ea9a__0, __Vtemp_hb1a6d89d__0, __Vtemp_h4e75c9e9__15);
    VL_EXTEND_WQ(72,48, __Vtemp_h4e75c9e9__16, vlSelf->top__DOT__dut__DOT__bfu_ins__DOT__mul_ins__DOT__z);
    VL_SHIFTL_WWI(72,72,32, __Vtemp_h74c44c33__0, __Vtemp_h4e75c9e9__16, 0x17U);
    VL_EXTEND_WQ(72,48, __Vtemp_h4e75c9e9__17, vlSelf->top__DOT__dut__DOT__bfu_ins__DOT__mul_ins__DOT__z);
    VL_SHIFTL_WWI(72,72,32, __Vtemp_hfe763c47__0, __Vtemp_h4e75c9e9__17, 0xdU);
    VL_ADD_W(3, __Vtemp_hcce62988__0, __Vtemp_h74c44c33__0, __Vtemp_hfe763c47__0);
    VL_EXTEND_WQ(72,48, __Vtemp_h4e75c9e9__18, vlSelf->top__DOT__dut__DOT__bfu_ins__DOT__mul_ins__DOT__z);
    VL_SHIFTL_WWI(72,72,32, __Vtemp_h6aec7fe6__0, __Vtemp_h4e75c9e9__18, 3U);
    VL_ADD_W(3, __Vtemp_h7ebee027__0, __Vtemp_hcce62988__0, __Vtemp_h6aec7fe6__0);
    VL_EXTEND_WQ(72,48, __Vtemp_h4e75c9e9__19, vlSelf->top__DOT__dut__DOT__bfu_ins__DOT__mul_ins__DOT__z);
    VL_SUB_W(3, __Vtemp_hc96b973b__0, __Vtemp_h7ebee027__0, __Vtemp_h4e75c9e9__19);
    bufp->fullQData(oldp+38,((0x3ffffffffffffULL & 
                              ((((QData)((IData)((0x3ffffffU 
                                                  & ((0x3fc0000U 
                                                      & (__Vtemp_h9f10d34e__0[2U] 
                                                         << 0x12U)) 
                                                     | (__Vtemp_h9f10d34e__0[1U] 
                                                        >> 0xeU))))) 
                                 << 0x17U) - ((QData)((IData)(
                                                              (0x3ffffffU 
                                                               & ((0x3fc0000U 
                                                                   & (__Vtemp_h5df8ea9a__0[2U] 
                                                                      << 0x12U)) 
                                                                  | (__Vtemp_h5df8ea9a__0[1U] 
                                                                     >> 0xeU))))) 
                                              << 0xdU)) 
                               + (QData)((IData)((0x3ffffffU 
                                                  & ((0x3fc0000U 
                                                      & (__Vtemp_hc96b973b__0[2U] 
                                                         << 0x12U)) 
                                                     | (__Vtemp_hc96b973b__0[1U] 
                                                        >> 0xeU)))))))),50);
    bufp->fullIData(oldp+40,(vlSelf->top__DOT__dut__DOT__bfu_ins__DOT__mul_ins__DOT__t3),25);
    bufp->fullIData(oldp+41,((0x1ffffffU & (vlSelf->top__DOT__dut__DOT__bfu_ins__DOT__mul_ins__DOT__t3 
                                            - (IData)(0x7fe001U)))),25);
    bufp->fullIData(oldp+42,(vlSelf->top__DOT__dut__DOT__bfu_ins__DOT__sub1_ins__DOT__d),24);
    bufp->fullIData(oldp+43,((0xffffffU & ((IData)(0x7fe001U) 
                                           + vlSelf->top__DOT__dut__DOT__bfu_ins__DOT__sub1_ins__DOT__d))),24);
    bufp->fullBit(oldp+44,((1U & ((vlSelf->top__DOT__dut__DOT__in1_bfu 
                                   - vlSelf->top__DOT__dut__DOT__in2_bfu) 
                                  >> 0x18U))));
    bufp->fullIData(oldp+45,(vlSelf->top__DOT__dut__DOT__bfu_ins__DOT__sub2_ins__DOT__d),24);
    bufp->fullIData(oldp+46,((0xffffffU & ((IData)(0x7fe001U) 
                                           + vlSelf->top__DOT__dut__DOT__bfu_ins__DOT__sub2_ins__DOT__d))),24);
    bufp->fullBit(oldp+47,((1U & ((vlSelf->top__DOT__dut__DOT__bfu_ins__DOT__in_add2 
                                   - vlSelf->top__DOT__dut__DOT__bfu_ins__DOT__out_mul) 
                                  >> 0x18U))));
    bufp->fullBit(oldp+48,(vlSelf->clk_i));
    bufp->fullBit(oldp+49,(vlSelf->start));
    bufp->fullBit(oldp+50,(vlSelf->ntt));
    bufp->fullBit(oldp+51,(vlSelf->ntt_done));
    bufp->fullIData(oldp+52,(vlSelf->even_debug_o),24);
    bufp->fullIData(oldp+53,(vlSelf->odd_debug_o),24);
    bufp->fullBit(oldp+54,(((~ (IData)(vlSelf->top__DOT__dut__DOT__agu_ins__DOT__done)) 
                            & (IData)(vlSelf->ntt))));
    bufp->fullBit(oldp+55,((1U & ((~ (IData)(vlSelf->top__DOT__dut__DOT__agu_ins__DOT__done)) 
                                  & (~ (IData)(vlSelf->ntt))))));
    bufp->fullIData(oldp+56,((0xffffffU & ((IData)(vlSelf->ntt)
                                            ? vlSelf->top__DOT__dut__DOT__in2_bfu
                                            : ((0x1000000U 
                                                & (vlSelf->top__DOT__dut__DOT__in1_bfu 
                                                   - vlSelf->top__DOT__dut__DOT__in2_bfu))
                                                ? ((IData)(0x7fe001U) 
                                                   + vlSelf->top__DOT__dut__DOT__bfu_ins__DOT__sub1_ins__DOT__d)
                                                : vlSelf->top__DOT__dut__DOT__bfu_ins__DOT__sub1_ins__DOT__d)))),24);
    bufp->fullBit(oldp+57,((1U & (~ (IData)(vlSelf->ntt)))));
    bufp->fullIData(oldp+58,(0x7fe001U),32);
    bufp->fullIData(oldp+59,(0x18U),32);
}
