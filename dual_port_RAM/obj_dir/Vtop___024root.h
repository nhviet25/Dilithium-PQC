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
    VL_IN8(clk_i,0,0);
    VL_IN8(addr1_i,7,0);
    VL_IN8(addr2_i,7,0);
    VL_IN8(wren_i,0,0);
    CData/*0:0*/ __Vclklast__TOP__clk_i;
    VL_IN(data_wr1_i,23,0);
    VL_IN(data_wr2_i,23,0);
    VL_OUT(data1_o,23,0);
    VL_OUT(data2_o,23,0);
    VlUnpacked<IData/*23:0*/, 256> top__DOT__dut__DOT__ram;

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
