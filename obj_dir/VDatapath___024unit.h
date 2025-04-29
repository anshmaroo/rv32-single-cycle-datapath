// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VDatapath.h for the primary calling header

#ifndef VERILATED_VDATAPATH___024UNIT_H_
#define VERILATED_VDATAPATH___024UNIT_H_  // guard

#include "verilated.h"


class VDatapath__Syms;

class alignas(VL_CACHE_LINE_BYTES) VDatapath___024unit final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    VDatapath__Syms* const vlSymsp;

    // CONSTRUCTORS
    VDatapath___024unit(VDatapath__Syms* symsp, const char* v__name);
    ~VDatapath___024unit();
    VL_UNCOPYABLE(VDatapath___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
