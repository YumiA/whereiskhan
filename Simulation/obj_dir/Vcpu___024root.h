// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcpu.h for the primary calling header

#ifndef VERILATED_VCPU___024ROOT_H_
#define VERILATED_VCPU___024ROOT_H_  // guard

#include "verilated.h"

class Vcpu__Syms;

class Vcpu___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_OUT8(EQOut,0,0);
    VL_OUT8(WEnOut,0,0);
    CData/*0:0*/ cpu__DOT__EQ;
    CData/*0:0*/ cpu__DOT__WEn;
    CData/*2:0*/ cpu__DOT__ALUctrl;
    CData/*0:0*/ cpu__DOT__ALUsrc;
    CData/*0:0*/ cpu__DOT__immSrc;
    CData/*0:0*/ __Vclklast__TOP__clk;
    CData/*0:0*/ __Vclklast__TOP__rst;
    SData/*11:0*/ cpu__DOT__Sec__DOT__Imm;
    VL_OUT(a0,31,0);
    IData/*31:0*/ cpu__DOT__PC;
    IData/*31:0*/ cpu__DOT__Imm;
    IData/*31:0*/ cpu__DOT__Write;
    IData/*31:0*/ cpu__DOT__instruction;
    IData/*31:0*/ cpu__DOT__RegALU__DOT__Read1;
    IData/*31:0*/ cpu__DOT__RegALU__DOT__Read2;
    IData/*31:0*/ cpu__DOT__RegALU__DOT__MuxOut;
    IData/*31:0*/ cpu__DOT__RegALU__DOT__SUM;
    IData/*31:0*/ cpu__DOT__ProgramCount__DOT__next_PC;
    VlUnpacked<IData/*31:0*/, 32> cpu__DOT__RegALU__DOT__Reg__DOT__rom_array;
    VlUnpacked<IData/*31:0*/, 256> cpu__DOT__InstrMem__DOT__rom_array;
    VlUnpacked<CData/*0:0*/, 4> __Vm_traceActivity;

    // INTERNAL VARIABLES
    Vcpu__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vcpu___024root(Vcpu__Syms* symsp, const char* name);
    ~Vcpu___024root();
    VL_UNCOPYABLE(Vcpu___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
