// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VDATAPATH__SYMS_H_
#define VERILATED_VDATAPATH__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "VDatapath.h"

// INCLUDE MODULE CLASSES
#include "VDatapath___024root.h"
#include "VDatapath___024unit.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)VDatapath__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VDatapath* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VDatapath___024root            TOP;

    // CONSTRUCTORS
    VDatapath__Syms(VerilatedContext* contextp, const char* namep, VDatapath* modelp);
    ~VDatapath__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
