// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VDatapath.h for the primary calling header

#include "VDatapath__pch.h"
#include "VDatapath__Syms.h"
#include "VDatapath___024unit.h"

void VDatapath___024unit___ctor_var_reset(VDatapath___024unit* vlSelf);

VDatapath___024unit::VDatapath___024unit(VDatapath__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VDatapath___024unit___ctor_var_reset(this);
}

void VDatapath___024unit::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

VDatapath___024unit::~VDatapath___024unit() {
}
