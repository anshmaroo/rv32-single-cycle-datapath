// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VDatapath.h for the primary calling header

#ifndef VERILATED_VDATAPATH___024ROOT_H_
#define VERILATED_VDATAPATH___024ROOT_H_  // guard

#include "verilated.h"


class VDatapath__Syms;

class alignas(VL_CACHE_LINE_BYTES) VDatapath___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clock,0,0);
        VL_IN8(reset,0,0);
        CData/*0:0*/ Datapath__DOT___control_io_unconditionalJump;
        CData/*0:0*/ Datapath__DOT__branchComparator__DOT___GEN;
        CData/*7:0*/ Datapath__DOT__DMEM__DOT__dmem_ext__DOT____Vlvbound_h0a982109__0;
        CData/*7:0*/ Datapath__DOT__DMEM__DOT__dmem_ext__DOT____Vlvbound_h41b8a8af__0;
        CData/*7:0*/ Datapath__DOT__DMEM__DOT__dmem_ext__DOT____Vlvbound_h462a8411__0;
        CData/*7:0*/ Datapath__DOT__DMEM__DOT__dmem_ext__DOT____Vlvbound_h624d58fc__0;
        CData/*0:0*/ Datapath__DOT__control__DOT____VdfgRegularize_h02d7027e_0_4;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__clock__0;
        CData/*0:0*/ __VactContinue;
        VL_OUT(io_pcOut,31,0);
        VL_OUT(io_debugRegs_0,31,0);
        VL_OUT(io_debugRegs_1,31,0);
        VL_OUT(io_debugRegs_2,31,0);
        VL_OUT(io_debugRegs_3,31,0);
        VL_OUT(io_debugRegs_4,31,0);
        VL_OUT(io_debugRegs_5,31,0);
        VL_OUT(io_debugRegs_6,31,0);
        VL_OUT(io_debugRegs_7,31,0);
        VL_OUT(io_debugRegs_8,31,0);
        VL_OUT(io_debugRegs_9,31,0);
        VL_OUT(io_debugRegs_10,31,0);
        VL_OUT(io_debugRegs_11,31,0);
        VL_OUT(io_debugRegs_12,31,0);
        VL_OUT(io_debugRegs_13,31,0);
        VL_OUT(io_debugRegs_14,31,0);
        VL_OUT(io_debugRegs_15,31,0);
        VL_OUT(io_debugRegs_16,31,0);
        VL_OUT(io_debugRegs_17,31,0);
        VL_OUT(io_debugRegs_18,31,0);
        VL_OUT(io_debugRegs_19,31,0);
        VL_OUT(io_debugRegs_20,31,0);
        VL_OUT(io_debugRegs_21,31,0);
        VL_OUT(io_debugRegs_22,31,0);
        VL_OUT(io_debugRegs_23,31,0);
        VL_OUT(io_debugRegs_24,31,0);
        VL_OUT(io_debugRegs_25,31,0);
        VL_OUT(io_debugRegs_26,31,0);
        VL_OUT(io_debugRegs_27,31,0);
        VL_OUT(io_debugRegs_28,31,0);
        VL_OUT(io_debugRegs_29,31,0);
        VL_OUT(io_debugRegs_30,31,0);
        VL_OUT(io_debugRegs_31,31,0);
        VL_OUT(io_debugImmediate,31,0);
        VL_OUT(io_instruction,31,0);
        IData/*31:0*/ Datapath__DOT___ALU_io_out;
        IData/*31:0*/ Datapath__DOT___regfile_io_rd0;
        IData/*31:0*/ Datapath__DOT___regfile_io_rd1;
        IData/*31:0*/ Datapath__DOT__pc;
        IData/*31:0*/ Datapath__DOT___pc_T;
        IData/*31:0*/ Datapath__DOT____Vcellinp__regfile__io_wdData;
        IData/*31:0*/ Datapath__DOT____Vcellinp__DMEM__io_wdData;
        IData/*31:0*/ Datapath__DOT__regfile__DOT__regs_1;
        IData/*31:0*/ Datapath__DOT__regfile__DOT__regs_2;
        IData/*31:0*/ Datapath__DOT__regfile__DOT__regs_3;
        IData/*31:0*/ Datapath__DOT__regfile__DOT__regs_4;
        IData/*31:0*/ Datapath__DOT__regfile__DOT__regs_5;
        IData/*31:0*/ Datapath__DOT__regfile__DOT__regs_6;
        IData/*31:0*/ Datapath__DOT__regfile__DOT__regs_7;
        IData/*31:0*/ Datapath__DOT__regfile__DOT__regs_8;
        IData/*31:0*/ Datapath__DOT__regfile__DOT__regs_9;
        IData/*31:0*/ Datapath__DOT__regfile__DOT__regs_10;
    };
    struct {
        IData/*31:0*/ Datapath__DOT__regfile__DOT__regs_11;
        IData/*31:0*/ Datapath__DOT__regfile__DOT__regs_12;
        IData/*31:0*/ Datapath__DOT__regfile__DOT__regs_13;
        IData/*31:0*/ Datapath__DOT__regfile__DOT__regs_14;
        IData/*31:0*/ Datapath__DOT__regfile__DOT__regs_15;
        IData/*31:0*/ Datapath__DOT__regfile__DOT__regs_16;
        IData/*31:0*/ Datapath__DOT__regfile__DOT__regs_17;
        IData/*31:0*/ Datapath__DOT__regfile__DOT__regs_18;
        IData/*31:0*/ Datapath__DOT__regfile__DOT__regs_19;
        IData/*31:0*/ Datapath__DOT__regfile__DOT__regs_20;
        IData/*31:0*/ Datapath__DOT__regfile__DOT__regs_21;
        IData/*31:0*/ Datapath__DOT__regfile__DOT__regs_22;
        IData/*31:0*/ Datapath__DOT__regfile__DOT__regs_23;
        IData/*31:0*/ Datapath__DOT__regfile__DOT__regs_24;
        IData/*31:0*/ Datapath__DOT__regfile__DOT__regs_25;
        IData/*31:0*/ Datapath__DOT__regfile__DOT__regs_26;
        IData/*31:0*/ Datapath__DOT__regfile__DOT__regs_27;
        IData/*31:0*/ Datapath__DOT__regfile__DOT__regs_28;
        IData/*31:0*/ Datapath__DOT__regfile__DOT__regs_29;
        IData/*31:0*/ Datapath__DOT__regfile__DOT__regs_30;
        IData/*31:0*/ Datapath__DOT__regfile__DOT__regs_31;
        IData/*31:0*/ __VactIterCount;
        VlUnpacked<IData/*31:0*/, 1000> Datapath__DOT__IMEM__DOT__imem_ext__DOT__Memory;
        VlUnpacked<CData/*7:0*/, 1000> Datapath__DOT__DMEM__DOT__dmem_ext__DOT__Memory;
    };
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    VDatapath__Syms* const vlSymsp;

    // CONSTRUCTORS
    VDatapath___024root(VDatapath__Syms* symsp, const char* v__name);
    ~VDatapath___024root();
    VL_UNCOPYABLE(VDatapath___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
