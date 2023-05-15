// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated.h"

class Vtop__Syms;

class Vtop___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(CT_i,0,0);
    VL_IN8(clk_i,0,0);
    VL_IN(a_i,23,0);
    VL_IN(b_i,23,0);
    VL_IN(w_i,23,0);
    VL_OUT(even_o,23,0);
    VL_OUT(odd_o,23,0);
    IData/*23:0*/ top__DOT__dut__DOT__in_add2;
    IData/*23:0*/ top__DOT__dut__DOT__out_mul;
    IData/*23:0*/ top__DOT__dut__DOT__add1_ins__DOT__s;
    IData/*23:0*/ top__DOT__dut__DOT__sub1_ins__DOT__d;
    IData/*24:0*/ top__DOT__dut__DOT__mul_ins__DOT__t3;
    IData/*23:0*/ top__DOT__dut__DOT__add2_ins__DOT__s;
    IData/*23:0*/ top__DOT__dut__DOT__sub2_ins__DOT__d;
    QData/*47:0*/ top__DOT__dut__DOT__mul_ins__DOT__z;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop___024root(Vtop__Syms* symsp, const char* name);
    ~Vtop___024root();
    VL_UNCOPYABLE(Vtop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
