// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VDatapath__pch.h"
#include "VDatapath.h"
#include "VDatapath___024root.h"
#include "VDatapath___024unit.h"

// FUNCTIONS
VDatapath__Syms::~VDatapath__Syms()
{
}

VDatapath__Syms::VDatapath__Syms(VerilatedContext* contextp, const char* namep, VDatapath* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
        // Check resources
        Verilated::stackCheck(1130);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
}
