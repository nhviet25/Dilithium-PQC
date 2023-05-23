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
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgCData(oldp+0,(vlSelf->top__DOT__dut__DOT__i),8);
        bufp->chgBit(oldp+1,(vlSelf->top__DOT__dut__DOT__done));
        bufp->chgBit(oldp+2,(vlSelf->top__DOT__dut__DOT__current_state));
        bufp->chgBit(oldp+3,(vlSelf->top__DOT__dut__DOT__next_state));
    }
    bufp->chgBit(oldp+4,(vlSelf->clk_i));
    bufp->chgBit(oldp+5,(vlSelf->start_ntt));
    bufp->chgCData(oldp+6,(vlSelf->twiddle_addr),8);
    bufp->chgBit(oldp+7,(vlSelf->ntt_done));
    bufp->chgBit(oldp+8,(vlSelf->wren_o));
    bufp->chgCData(oldp+9,(vlSelf->ntt_addr_rd1_o),8);
    bufp->chgCData(oldp+10,(vlSelf->ntt_addr_rd2_o),8);
    bufp->chgCData(oldp+11,(vlSelf->intt_addr_rd1_o),8);
    bufp->chgCData(oldp+12,(vlSelf->intt_addr_rd2_o),8);
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
