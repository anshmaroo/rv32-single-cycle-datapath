// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VDatapath.h for the primary calling header

#include "VDatapath__pch.h"
#include "VDatapath__Syms.h"
#include "VDatapath___024root.h"

void VDatapath___024root___ctor_var_reset(VDatapath___024root* vlSelf);

VDatapath___024root::VDatapath___024root(VDatapath__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VDatapath___024root___ctor_var_reset(this);
}

void VDatapath___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

VDatapath___024root::~VDatapath___024root() {
}
