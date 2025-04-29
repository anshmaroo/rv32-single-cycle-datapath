// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VDatapath.h for the primary calling header

#include "VDatapath__pch.h"
#include "VDatapath__Syms.h"
#include "VDatapath___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VDatapath___024root___dump_triggers__act(VDatapath___024root* vlSelf);
#endif  // VL_DEBUG

void VDatapath___024root___eval_triggers__act(VDatapath___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDatapath___024root___eval_triggers__act\n"); );
    VDatapath__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.setBit(0U, ((IData)(vlSelfRef.clock) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clock__0))));
    vlSelfRef.__Vtrigprevexpr___TOP__clock__0 = vlSelfRef.clock;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VDatapath___024root___dump_triggers__act(vlSelf);
    }
#endif
}
