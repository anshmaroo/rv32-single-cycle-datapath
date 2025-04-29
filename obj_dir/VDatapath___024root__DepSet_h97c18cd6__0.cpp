// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VDatapath.h for the primary calling header

#include "VDatapath__pch.h"
#include "VDatapath___024root.h"

void VDatapath___024root___eval_act(VDatapath___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDatapath___024root___eval_act\n"); );
    VDatapath__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void VDatapath___024root___nba_sequent__TOP__0(VDatapath___024root* vlSelf);

void VDatapath___024root___eval_nba(VDatapath___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDatapath___024root___eval_nba\n"); );
    VDatapath__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VDatapath___024root___nba_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void VDatapath___024root___nba_sequent__TOP__0(VDatapath___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDatapath___024root___nba_sequent__TOP__0\n"); );
    VDatapath__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ Datapath__DOT___control_io_memReadLength;
    Datapath__DOT___control_io_memReadLength = 0;
    CData/*0:0*/ Datapath__DOT___control_io_memReadMode;
    Datapath__DOT___control_io_memReadMode = 0;
    IData/*31:0*/ Datapath__DOT____Vcellinp__ALU__io_in1;
    Datapath__DOT____Vcellinp__ALU__io_in1 = 0;
    IData/*31:0*/ Datapath__DOT____Vcellinp__ALU__io_in0;
    Datapath__DOT____Vcellinp__ALU__io_in0 = 0;
    VlWide<32>/*1023:0*/ Datapath__DOT__regfile__DOT___GEN;
    VL_ZERO_W(1024, Datapath__DOT__regfile__DOT___GEN);
    IData/*31:0*/ Datapath__DOT__ALU__DOT__v_0;
    Datapath__DOT__ALU__DOT__v_0 = 0;
    CData/*0:0*/ Datapath__DOT__DMEM__DOT___GEN_1;
    Datapath__DOT__DMEM__DOT___GEN_1 = 0;
    CData/*0:0*/ Datapath__DOT__DMEM__DOT___GEN_2;
    Datapath__DOT__DMEM__DOT___GEN_2 = 0;
    CData/*0:0*/ Datapath__DOT__DMEM__DOT___GEN_4;
    Datapath__DOT__DMEM__DOT___GEN_4 = 0;
    CData/*0:0*/ Datapath__DOT__DMEM__DOT____Vcellinp__dmem_ext__R9_en;
    Datapath__DOT__DMEM__DOT____Vcellinp__dmem_ext__R9_en = 0;
    CData/*0:0*/ Datapath__DOT__DMEM__DOT____VdfgRegularize_h771000ee_2_0;
    Datapath__DOT__DMEM__DOT____VdfgRegularize_h771000ee_2_0 = 0;
    CData/*3:0*/ Datapath__DOT__control__DOT___GEN_10;
    Datapath__DOT__control__DOT___GEN_10 = 0;
    CData/*0:0*/ Datapath__DOT__control__DOT____VdfgRegularize_h02d7027e_0_2;
    Datapath__DOT__control__DOT____VdfgRegularize_h02d7027e_0_2 = 0;
    CData/*0:0*/ Datapath__DOT__control__DOT____VdfgRegularize_h02d7027e_0_3;
    Datapath__DOT__control__DOT____VdfgRegularize_h02d7027e_0_3 = 0;
    CData/*7:0*/ __VdfgRegularize_h6171c202_0_0;
    __VdfgRegularize_h6171c202_0_0 = 0;
    CData/*7:0*/ __VdfgRegularize_h6171c202_0_1;
    __VdfgRegularize_h6171c202_0_1 = 0;
    CData/*7:0*/ __VdlyVal__Datapath__DOT__DMEM__DOT__dmem_ext__DOT__Memory__v0;
    __VdlyVal__Datapath__DOT__DMEM__DOT__dmem_ext__DOT__Memory__v0 = 0;
    SData/*9:0*/ __VdlyDim0__Datapath__DOT__DMEM__DOT__dmem_ext__DOT__Memory__v0;
    __VdlyDim0__Datapath__DOT__DMEM__DOT__dmem_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __VdlySet__Datapath__DOT__DMEM__DOT__dmem_ext__DOT__Memory__v0;
    __VdlySet__Datapath__DOT__DMEM__DOT__dmem_ext__DOT__Memory__v0 = 0;
    CData/*7:0*/ __VdlyVal__Datapath__DOT__DMEM__DOT__dmem_ext__DOT__Memory__v1;
    __VdlyVal__Datapath__DOT__DMEM__DOT__dmem_ext__DOT__Memory__v1 = 0;
    SData/*9:0*/ __VdlyDim0__Datapath__DOT__DMEM__DOT__dmem_ext__DOT__Memory__v1;
    __VdlyDim0__Datapath__DOT__DMEM__DOT__dmem_ext__DOT__Memory__v1 = 0;
    CData/*0:0*/ __VdlySet__Datapath__DOT__DMEM__DOT__dmem_ext__DOT__Memory__v1;
    __VdlySet__Datapath__DOT__DMEM__DOT__dmem_ext__DOT__Memory__v1 = 0;
    CData/*7:0*/ __VdlyVal__Datapath__DOT__DMEM__DOT__dmem_ext__DOT__Memory__v2;
    __VdlyVal__Datapath__DOT__DMEM__DOT__dmem_ext__DOT__Memory__v2 = 0;
    SData/*9:0*/ __VdlyDim0__Datapath__DOT__DMEM__DOT__dmem_ext__DOT__Memory__v2;
    __VdlyDim0__Datapath__DOT__DMEM__DOT__dmem_ext__DOT__Memory__v2 = 0;
    CData/*0:0*/ __VdlySet__Datapath__DOT__DMEM__DOT__dmem_ext__DOT__Memory__v2;
    __VdlySet__Datapath__DOT__DMEM__DOT__dmem_ext__DOT__Memory__v2 = 0;
    CData/*7:0*/ __VdlyVal__Datapath__DOT__DMEM__DOT__dmem_ext__DOT__Memory__v3;
    __VdlyVal__Datapath__DOT__DMEM__DOT__dmem_ext__DOT__Memory__v3 = 0;
    SData/*9:0*/ __VdlyDim0__Datapath__DOT__DMEM__DOT__dmem_ext__DOT__Memory__v3;
    __VdlyDim0__Datapath__DOT__DMEM__DOT__dmem_ext__DOT__Memory__v3 = 0;
    CData/*0:0*/ __VdlySet__Datapath__DOT__DMEM__DOT__dmem_ext__DOT__Memory__v3;
    __VdlySet__Datapath__DOT__DMEM__DOT__dmem_ext__DOT__Memory__v3 = 0;
    VlWide<8>/*255:0*/ __Vtemp_24;
    VlWide<16>/*511:0*/ __Vtemp_35;
    VlWide<4>/*127:0*/ __Vtemp_37;
    // Body
    __VdlySet__Datapath__DOT__DMEM__DOT__dmem_ext__DOT__Memory__v0 = 0U;
    __VdlySet__Datapath__DOT__DMEM__DOT__dmem_ext__DOT__Memory__v1 = 0U;
    __VdlySet__Datapath__DOT__DMEM__DOT__dmem_ext__DOT__Memory__v2 = 0U;
    __VdlySet__Datapath__DOT__DMEM__DOT__dmem_ext__DOT__Memory__v3 = 0U;
    if ((0x23U == (0x7fU & vlSelfRef.io_instruction))) {
        vlSelfRef.Datapath__DOT__DMEM__DOT__dmem_ext__DOT____Vlvbound_h0a982109__0 
            = (vlSelfRef.Datapath__DOT____Vcellinp__DMEM__io_wdData 
               >> 0x18U);
        if ((0x3e7U >= (0x3ffU & ((IData)(3U) + vlSelfRef.Datapath__DOT___ALU_io_out)))) {
            __VdlyVal__Datapath__DOT__DMEM__DOT__dmem_ext__DOT__Memory__v0 
                = vlSelfRef.Datapath__DOT__DMEM__DOT__dmem_ext__DOT____Vlvbound_h0a982109__0;
            __VdlyDim0__Datapath__DOT__DMEM__DOT__dmem_ext__DOT__Memory__v0 
                = (0x3ffU & ((IData)(3U) + vlSelfRef.Datapath__DOT___ALU_io_out));
            __VdlySet__Datapath__DOT__DMEM__DOT__dmem_ext__DOT__Memory__v0 = 1U;
        }
        vlSelfRef.Datapath__DOT__DMEM__DOT__dmem_ext__DOT____Vlvbound_h41b8a8af__0 
            = (0xffU & (vlSelfRef.Datapath__DOT____Vcellinp__DMEM__io_wdData 
                        >> 0x10U));
        if ((0x3e7U >= (0x3ffU & ((IData)(2U) + vlSelfRef.Datapath__DOT___ALU_io_out)))) {
            __VdlyVal__Datapath__DOT__DMEM__DOT__dmem_ext__DOT__Memory__v1 
                = vlSelfRef.Datapath__DOT__DMEM__DOT__dmem_ext__DOT____Vlvbound_h41b8a8af__0;
            __VdlyDim0__Datapath__DOT__DMEM__DOT__dmem_ext__DOT__Memory__v1 
                = (0x3ffU & ((IData)(2U) + vlSelfRef.Datapath__DOT___ALU_io_out));
            __VdlySet__Datapath__DOT__DMEM__DOT__dmem_ext__DOT__Memory__v1 = 1U;
        }
        vlSelfRef.Datapath__DOT__DMEM__DOT__dmem_ext__DOT____Vlvbound_h462a8411__0 
            = (0xffU & (vlSelfRef.Datapath__DOT____Vcellinp__DMEM__io_wdData 
                        >> 8U));
        if ((0x3e7U >= (0x3ffU & ((IData)(1U) + vlSelfRef.Datapath__DOT___ALU_io_out)))) {
            __VdlyVal__Datapath__DOT__DMEM__DOT__dmem_ext__DOT__Memory__v2 
                = vlSelfRef.Datapath__DOT__DMEM__DOT__dmem_ext__DOT____Vlvbound_h462a8411__0;
            __VdlyDim0__Datapath__DOT__DMEM__DOT__dmem_ext__DOT__Memory__v2 
                = (0x3ffU & ((IData)(1U) + vlSelfRef.Datapath__DOT___ALU_io_out));
            __VdlySet__Datapath__DOT__DMEM__DOT__dmem_ext__DOT__Memory__v2 = 1U;
        }
        vlSelfRef.Datapath__DOT__DMEM__DOT__dmem_ext__DOT____Vlvbound_h624d58fc__0 
            = (0xffU & vlSelfRef.Datapath__DOT____Vcellinp__DMEM__io_wdData);
        if ((0x3e7U >= (0x3ffU & vlSelfRef.Datapath__DOT___ALU_io_out))) {
            __VdlyVal__Datapath__DOT__DMEM__DOT__dmem_ext__DOT__Memory__v3 
                = vlSelfRef.Datapath__DOT__DMEM__DOT__dmem_ext__DOT____Vlvbound_h624d58fc__0;
            __VdlyDim0__Datapath__DOT__DMEM__DOT__dmem_ext__DOT__Memory__v3 
                = (0x3ffU & vlSelfRef.Datapath__DOT___ALU_io_out);
            __VdlySet__Datapath__DOT__DMEM__DOT__dmem_ext__DOT__Memory__v3 = 1U;
        }
    }
    if (vlSelfRef.reset) {
        vlSelfRef.Datapath__DOT__regfile__DOT__regs_1 = 0U;
        vlSelfRef.Datapath__DOT__regfile__DOT__regs_3 = 0U;
        vlSelfRef.Datapath__DOT__regfile__DOT__regs_2 = 0U;
        vlSelfRef.Datapath__DOT__regfile__DOT__regs_5 = 0U;
        vlSelfRef.Datapath__DOT__regfile__DOT__regs_4 = 0U;
        vlSelfRef.Datapath__DOT__regfile__DOT__regs_7 = 0U;
        vlSelfRef.Datapath__DOT__regfile__DOT__regs_6 = 0U;
        vlSelfRef.Datapath__DOT__regfile__DOT__regs_9 = 0U;
        vlSelfRef.Datapath__DOT__regfile__DOT__regs_8 = 0U;
        vlSelfRef.Datapath__DOT__regfile__DOT__regs_11 = 0U;
        vlSelfRef.Datapath__DOT__regfile__DOT__regs_10 = 0U;
        vlSelfRef.Datapath__DOT__regfile__DOT__regs_12 = 0U;
        vlSelfRef.Datapath__DOT__regfile__DOT__regs_13 = 0U;
        vlSelfRef.Datapath__DOT__regfile__DOT__regs_14 = 0U;
        vlSelfRef.Datapath__DOT__regfile__DOT__regs_15 = 0U;
        vlSelfRef.Datapath__DOT__regfile__DOT__regs_16 = 0U;
        vlSelfRef.Datapath__DOT__regfile__DOT__regs_17 = 0U;
        vlSelfRef.Datapath__DOT__regfile__DOT__regs_18 = 0U;
        vlSelfRef.Datapath__DOT__regfile__DOT__regs_19 = 0U;
        vlSelfRef.Datapath__DOT__regfile__DOT__regs_20 = 0U;
        vlSelfRef.Datapath__DOT__regfile__DOT__regs_21 = 0U;
        vlSelfRef.Datapath__DOT__regfile__DOT__regs_22 = 0U;
        vlSelfRef.Datapath__DOT__regfile__DOT__regs_23 = 0U;
        vlSelfRef.Datapath__DOT__regfile__DOT__regs_24 = 0U;
        vlSelfRef.Datapath__DOT__regfile__DOT__regs_25 = 0U;
        vlSelfRef.Datapath__DOT__regfile__DOT__regs_26 = 0U;
        vlSelfRef.Datapath__DOT__regfile__DOT__regs_27 = 0U;
        vlSelfRef.Datapath__DOT__regfile__DOT__regs_28 = 0U;
        vlSelfRef.Datapath__DOT__regfile__DOT__regs_29 = 0U;
        vlSelfRef.Datapath__DOT__regfile__DOT__regs_30 = 0U;
        vlSelfRef.Datapath__DOT__regfile__DOT__regs_31 = 0U;
        vlSelfRef.Datapath__DOT__pc = 0U;
    } else {
        if ((((~ (IData)(vlSelfRef.Datapath__DOT__control__DOT____VdfgRegularize_h02d7027e_0_4)) 
              & (0x80U == (0xf80U & vlSelfRef.io_instruction))) 
             & (0U != (0x1fU & (vlSelfRef.io_instruction 
                                >> 7U))))) {
            vlSelfRef.Datapath__DOT__regfile__DOT__regs_1 
                = vlSelfRef.Datapath__DOT____Vcellinp__regfile__io_wdData;
        }
        if ((((~ (IData)(vlSelfRef.Datapath__DOT__control__DOT____VdfgRegularize_h02d7027e_0_4)) 
              & (0x180U == (0xf80U & vlSelfRef.io_instruction))) 
             & (0U != (0x1fU & (vlSelfRef.io_instruction 
                                >> 7U))))) {
            vlSelfRef.Datapath__DOT__regfile__DOT__regs_3 
                = vlSelfRef.Datapath__DOT____Vcellinp__regfile__io_wdData;
        }
        if ((((~ (IData)(vlSelfRef.Datapath__DOT__control__DOT____VdfgRegularize_h02d7027e_0_4)) 
              & (0x100U == (0xf80U & vlSelfRef.io_instruction))) 
             & (0U != (0x1fU & (vlSelfRef.io_instruction 
                                >> 7U))))) {
            vlSelfRef.Datapath__DOT__regfile__DOT__regs_2 
                = vlSelfRef.Datapath__DOT____Vcellinp__regfile__io_wdData;
        }
        if ((((~ (IData)(vlSelfRef.Datapath__DOT__control__DOT____VdfgRegularize_h02d7027e_0_4)) 
              & (0x280U == (0xf80U & vlSelfRef.io_instruction))) 
             & (0U != (0x1fU & (vlSelfRef.io_instruction 
                                >> 7U))))) {
            vlSelfRef.Datapath__DOT__regfile__DOT__regs_5 
                = vlSelfRef.Datapath__DOT____Vcellinp__regfile__io_wdData;
        }
        if ((((~ (IData)(vlSelfRef.Datapath__DOT__control__DOT____VdfgRegularize_h02d7027e_0_4)) 
              & (0x200U == (0xf80U & vlSelfRef.io_instruction))) 
             & (0U != (0x1fU & (vlSelfRef.io_instruction 
                                >> 7U))))) {
            vlSelfRef.Datapath__DOT__regfile__DOT__regs_4 
                = vlSelfRef.Datapath__DOT____Vcellinp__regfile__io_wdData;
        }
        if ((((~ (IData)(vlSelfRef.Datapath__DOT__control__DOT____VdfgRegularize_h02d7027e_0_4)) 
              & (0x380U == (0xf80U & vlSelfRef.io_instruction))) 
             & (0U != (0x1fU & (vlSelfRef.io_instruction 
                                >> 7U))))) {
            vlSelfRef.Datapath__DOT__regfile__DOT__regs_7 
                = vlSelfRef.Datapath__DOT____Vcellinp__regfile__io_wdData;
        }
        if ((((~ (IData)(vlSelfRef.Datapath__DOT__control__DOT____VdfgRegularize_h02d7027e_0_4)) 
              & (0x300U == (0xf80U & vlSelfRef.io_instruction))) 
             & (0U != (0x1fU & (vlSelfRef.io_instruction 
                                >> 7U))))) {
            vlSelfRef.Datapath__DOT__regfile__DOT__regs_6 
                = vlSelfRef.Datapath__DOT____Vcellinp__regfile__io_wdData;
        }
        if ((((~ (IData)(vlSelfRef.Datapath__DOT__control__DOT____VdfgRegularize_h02d7027e_0_4)) 
              & (0x480U == (0xf80U & vlSelfRef.io_instruction))) 
             & (0U != (0x1fU & (vlSelfRef.io_instruction 
                                >> 7U))))) {
            vlSelfRef.Datapath__DOT__regfile__DOT__regs_9 
                = vlSelfRef.Datapath__DOT____Vcellinp__regfile__io_wdData;
        }
        if ((((~ (IData)(vlSelfRef.Datapath__DOT__control__DOT____VdfgRegularize_h02d7027e_0_4)) 
              & (0x400U == (0xf80U & vlSelfRef.io_instruction))) 
             & (0U != (0x1fU & (vlSelfRef.io_instruction 
                                >> 7U))))) {
            vlSelfRef.Datapath__DOT__regfile__DOT__regs_8 
                = vlSelfRef.Datapath__DOT____Vcellinp__regfile__io_wdData;
        }
        if ((((~ (IData)(vlSelfRef.Datapath__DOT__control__DOT____VdfgRegularize_h02d7027e_0_4)) 
              & (0x580U == (0xf80U & vlSelfRef.io_instruction))) 
             & (0U != (0x1fU & (vlSelfRef.io_instruction 
                                >> 7U))))) {
            vlSelfRef.Datapath__DOT__regfile__DOT__regs_11 
                = vlSelfRef.Datapath__DOT____Vcellinp__regfile__io_wdData;
        }
        if ((((~ (IData)(vlSelfRef.Datapath__DOT__control__DOT____VdfgRegularize_h02d7027e_0_4)) 
              & (0x500U == (0xf80U & vlSelfRef.io_instruction))) 
             & (0U != (0x1fU & (vlSelfRef.io_instruction 
                                >> 7U))))) {
            vlSelfRef.Datapath__DOT__regfile__DOT__regs_10 
                = vlSelfRef.Datapath__DOT____Vcellinp__regfile__io_wdData;
        }
        if ((((~ (IData)(vlSelfRef.Datapath__DOT__control__DOT____VdfgRegularize_h02d7027e_0_4)) 
              & (0x600U == (0xf80U & vlSelfRef.io_instruction))) 
             & (0U != (0x1fU & (vlSelfRef.io_instruction 
                                >> 7U))))) {
            vlSelfRef.Datapath__DOT__regfile__DOT__regs_12 
                = vlSelfRef.Datapath__DOT____Vcellinp__regfile__io_wdData;
        }
        if ((((~ (IData)(vlSelfRef.Datapath__DOT__control__DOT____VdfgRegularize_h02d7027e_0_4)) 
              & (0x680U == (0xf80U & vlSelfRef.io_instruction))) 
             & (0U != (0x1fU & (vlSelfRef.io_instruction 
                                >> 7U))))) {
            vlSelfRef.Datapath__DOT__regfile__DOT__regs_13 
                = vlSelfRef.Datapath__DOT____Vcellinp__regfile__io_wdData;
        }
        if ((((~ (IData)(vlSelfRef.Datapath__DOT__control__DOT____VdfgRegularize_h02d7027e_0_4)) 
              & (0x700U == (0xf80U & vlSelfRef.io_instruction))) 
             & (0U != (0x1fU & (vlSelfRef.io_instruction 
                                >> 7U))))) {
            vlSelfRef.Datapath__DOT__regfile__DOT__regs_14 
                = vlSelfRef.Datapath__DOT____Vcellinp__regfile__io_wdData;
        }
        if ((((~ (IData)(vlSelfRef.Datapath__DOT__control__DOT____VdfgRegularize_h02d7027e_0_4)) 
              & (0x780U == (0xf80U & vlSelfRef.io_instruction))) 
             & (0U != (0x1fU & (vlSelfRef.io_instruction 
                                >> 7U))))) {
            vlSelfRef.Datapath__DOT__regfile__DOT__regs_15 
                = vlSelfRef.Datapath__DOT____Vcellinp__regfile__io_wdData;
        }
        if ((((~ (IData)(vlSelfRef.Datapath__DOT__control__DOT____VdfgRegularize_h02d7027e_0_4)) 
              & (0x800U == (0xf80U & vlSelfRef.io_instruction))) 
             & (0U != (0x1fU & (vlSelfRef.io_instruction 
                                >> 7U))))) {
            vlSelfRef.Datapath__DOT__regfile__DOT__regs_16 
                = vlSelfRef.Datapath__DOT____Vcellinp__regfile__io_wdData;
        }
        if ((((~ (IData)(vlSelfRef.Datapath__DOT__control__DOT____VdfgRegularize_h02d7027e_0_4)) 
              & (0x880U == (0xf80U & vlSelfRef.io_instruction))) 
             & (0U != (0x1fU & (vlSelfRef.io_instruction 
                                >> 7U))))) {
            vlSelfRef.Datapath__DOT__regfile__DOT__regs_17 
                = vlSelfRef.Datapath__DOT____Vcellinp__regfile__io_wdData;
        }
        if ((((~ (IData)(vlSelfRef.Datapath__DOT__control__DOT____VdfgRegularize_h02d7027e_0_4)) 
              & (0x900U == (0xf80U & vlSelfRef.io_instruction))) 
             & (0U != (0x1fU & (vlSelfRef.io_instruction 
                                >> 7U))))) {
            vlSelfRef.Datapath__DOT__regfile__DOT__regs_18 
                = vlSelfRef.Datapath__DOT____Vcellinp__regfile__io_wdData;
        }
        if ((((~ (IData)(vlSelfRef.Datapath__DOT__control__DOT____VdfgRegularize_h02d7027e_0_4)) 
              & (0x980U == (0xf80U & vlSelfRef.io_instruction))) 
             & (0U != (0x1fU & (vlSelfRef.io_instruction 
                                >> 7U))))) {
            vlSelfRef.Datapath__DOT__regfile__DOT__regs_19 
                = vlSelfRef.Datapath__DOT____Vcellinp__regfile__io_wdData;
        }
        if ((((~ (IData)(vlSelfRef.Datapath__DOT__control__DOT____VdfgRegularize_h02d7027e_0_4)) 
              & (0xa00U == (0xf80U & vlSelfRef.io_instruction))) 
             & (0U != (0x1fU & (vlSelfRef.io_instruction 
                                >> 7U))))) {
            vlSelfRef.Datapath__DOT__regfile__DOT__regs_20 
                = vlSelfRef.Datapath__DOT____Vcellinp__regfile__io_wdData;
        }
        if ((((~ (IData)(vlSelfRef.Datapath__DOT__control__DOT____VdfgRegularize_h02d7027e_0_4)) 
              & (0xa80U == (0xf80U & vlSelfRef.io_instruction))) 
             & (0U != (0x1fU & (vlSelfRef.io_instruction 
                                >> 7U))))) {
            vlSelfRef.Datapath__DOT__regfile__DOT__regs_21 
                = vlSelfRef.Datapath__DOT____Vcellinp__regfile__io_wdData;
        }
        if ((((~ (IData)(vlSelfRef.Datapath__DOT__control__DOT____VdfgRegularize_h02d7027e_0_4)) 
              & (0xb00U == (0xf80U & vlSelfRef.io_instruction))) 
             & (0U != (0x1fU & (vlSelfRef.io_instruction 
                                >> 7U))))) {
            vlSelfRef.Datapath__DOT__regfile__DOT__regs_22 
                = vlSelfRef.Datapath__DOT____Vcellinp__regfile__io_wdData;
        }
        if ((((~ (IData)(vlSelfRef.Datapath__DOT__control__DOT____VdfgRegularize_h02d7027e_0_4)) 
              & (0xb80U == (0xf80U & vlSelfRef.io_instruction))) 
             & (0U != (0x1fU & (vlSelfRef.io_instruction 
                                >> 7U))))) {
            vlSelfRef.Datapath__DOT__regfile__DOT__regs_23 
                = vlSelfRef.Datapath__DOT____Vcellinp__regfile__io_wdData;
        }
        if ((((~ (IData)(vlSelfRef.Datapath__DOT__control__DOT____VdfgRegularize_h02d7027e_0_4)) 
              & (0xc00U == (0xf80U & vlSelfRef.io_instruction))) 
             & (0U != (0x1fU & (vlSelfRef.io_instruction 
                                >> 7U))))) {
            vlSelfRef.Datapath__DOT__regfile__DOT__regs_24 
                = vlSelfRef.Datapath__DOT____Vcellinp__regfile__io_wdData;
        }
        if ((((~ (IData)(vlSelfRef.Datapath__DOT__control__DOT____VdfgRegularize_h02d7027e_0_4)) 
              & (0xc80U == (0xf80U & vlSelfRef.io_instruction))) 
             & (0U != (0x1fU & (vlSelfRef.io_instruction 
                                >> 7U))))) {
            vlSelfRef.Datapath__DOT__regfile__DOT__regs_25 
                = vlSelfRef.Datapath__DOT____Vcellinp__regfile__io_wdData;
        }
        if ((((~ (IData)(vlSelfRef.Datapath__DOT__control__DOT____VdfgRegularize_h02d7027e_0_4)) 
              & (0xd00U == (0xf80U & vlSelfRef.io_instruction))) 
             & (0U != (0x1fU & (vlSelfRef.io_instruction 
                                >> 7U))))) {
            vlSelfRef.Datapath__DOT__regfile__DOT__regs_26 
                = vlSelfRef.Datapath__DOT____Vcellinp__regfile__io_wdData;
        }
        if ((((~ (IData)(vlSelfRef.Datapath__DOT__control__DOT____VdfgRegularize_h02d7027e_0_4)) 
              & (0xd80U == (0xf80U & vlSelfRef.io_instruction))) 
             & (0U != (0x1fU & (vlSelfRef.io_instruction 
                                >> 7U))))) {
            vlSelfRef.Datapath__DOT__regfile__DOT__regs_27 
                = vlSelfRef.Datapath__DOT____Vcellinp__regfile__io_wdData;
        }
        if ((((~ (IData)(vlSelfRef.Datapath__DOT__control__DOT____VdfgRegularize_h02d7027e_0_4)) 
              & (0xe00U == (0xf80U & vlSelfRef.io_instruction))) 
             & (0U != (0x1fU & (vlSelfRef.io_instruction 
                                >> 7U))))) {
            vlSelfRef.Datapath__DOT__regfile__DOT__regs_28 
                = vlSelfRef.Datapath__DOT____Vcellinp__regfile__io_wdData;
        }
        if ((((~ (IData)(vlSelfRef.Datapath__DOT__control__DOT____VdfgRegularize_h02d7027e_0_4)) 
              & (0xe80U == (0xf80U & vlSelfRef.io_instruction))) 
             & (0U != (0x1fU & (vlSelfRef.io_instruction 
                                >> 7U))))) {
            vlSelfRef.Datapath__DOT__regfile__DOT__regs_29 
                = vlSelfRef.Datapath__DOT____Vcellinp__regfile__io_wdData;
        }
        if ((((~ (IData)(vlSelfRef.Datapath__DOT__control__DOT____VdfgRegularize_h02d7027e_0_4)) 
              & (0xf00U == (0xf80U & vlSelfRef.io_instruction))) 
             & (0U != (0x1fU & (vlSelfRef.io_instruction 
                                >> 7U))))) {
            vlSelfRef.Datapath__DOT__regfile__DOT__regs_30 
                = vlSelfRef.Datapath__DOT____Vcellinp__regfile__io_wdData;
        }
        if ((((~ (IData)(vlSelfRef.Datapath__DOT__control__DOT____VdfgRegularize_h02d7027e_0_4)) 
              & (0xf80U == (0xf80U & vlSelfRef.io_instruction))) 
             & (0U != (0x1fU & (vlSelfRef.io_instruction 
                                >> 7U))))) {
            vlSelfRef.Datapath__DOT__regfile__DOT__regs_31 
                = vlSelfRef.Datapath__DOT____Vcellinp__regfile__io_wdData;
        }
        vlSelfRef.Datapath__DOT__pc = (((((((((IData)(vlSelfRef.Datapath__DOT__branchComparator__DOT___GEN) 
                                              << 7U) 
                                             | ((vlSelfRef.Datapath__DOT___regfile_io_rd0 
                                                 < vlSelfRef.Datapath__DOT___regfile_io_rd1) 
                                                << 6U)) 
                                            | ((VL_GTES_III(32, vlSelfRef.Datapath__DOT___regfile_io_rd0, vlSelfRef.Datapath__DOT___regfile_io_rd1) 
                                                << 5U) 
                                               | (VL_LTS_III(32, vlSelfRef.Datapath__DOT___regfile_io_rd0, vlSelfRef.Datapath__DOT___regfile_io_rd1) 
                                                  << 4U))) 
                                           | ((0xcU 
                                               & ((- (IData)((IData)(vlSelfRef.Datapath__DOT__branchComparator__DOT___GEN))) 
                                                  << 2U)) 
                                              | (((vlSelfRef.Datapath__DOT___regfile_io_rd0 
                                                   != vlSelfRef.Datapath__DOT___regfile_io_rd1) 
                                                  << 1U) 
                                                 | (vlSelfRef.Datapath__DOT___regfile_io_rd0 
                                                    == vlSelfRef.Datapath__DOT___regfile_io_rd1)))) 
                                          >> (7U & 
                                              (vlSelfRef.io_instruction 
                                               >> 0xcU))) 
                                         & (0x63U == 
                                            (0x7fU 
                                             & vlSelfRef.io_instruction))) 
                                        | (IData)(vlSelfRef.Datapath__DOT___control_io_unconditionalJump))
                                        ? vlSelfRef.Datapath__DOT___ALU_io_out
                                        : ((IData)(vlSelfRef.reset)
                                            ? 0U : vlSelfRef.Datapath__DOT___pc_T));
    }
    if (__VdlySet__Datapath__DOT__DMEM__DOT__dmem_ext__DOT__Memory__v0) {
        vlSelfRef.Datapath__DOT__DMEM__DOT__dmem_ext__DOT__Memory[__VdlyDim0__Datapath__DOT__DMEM__DOT__dmem_ext__DOT__Memory__v0] 
            = __VdlyVal__Datapath__DOT__DMEM__DOT__dmem_ext__DOT__Memory__v0;
    }
    if (__VdlySet__Datapath__DOT__DMEM__DOT__dmem_ext__DOT__Memory__v1) {
        vlSelfRef.Datapath__DOT__DMEM__DOT__dmem_ext__DOT__Memory[__VdlyDim0__Datapath__DOT__DMEM__DOT__dmem_ext__DOT__Memory__v1] 
            = __VdlyVal__Datapath__DOT__DMEM__DOT__dmem_ext__DOT__Memory__v1;
    }
    if (__VdlySet__Datapath__DOT__DMEM__DOT__dmem_ext__DOT__Memory__v2) {
        vlSelfRef.Datapath__DOT__DMEM__DOT__dmem_ext__DOT__Memory[__VdlyDim0__Datapath__DOT__DMEM__DOT__dmem_ext__DOT__Memory__v2] 
            = __VdlyVal__Datapath__DOT__DMEM__DOT__dmem_ext__DOT__Memory__v2;
    }
    if (__VdlySet__Datapath__DOT__DMEM__DOT__dmem_ext__DOT__Memory__v3) {
        vlSelfRef.Datapath__DOT__DMEM__DOT__dmem_ext__DOT__Memory[__VdlyDim0__Datapath__DOT__DMEM__DOT__dmem_ext__DOT__Memory__v3] 
            = __VdlyVal__Datapath__DOT__DMEM__DOT__dmem_ext__DOT__Memory__v3;
    }
    vlSelfRef.io_debugRegs_1 = vlSelfRef.Datapath__DOT__regfile__DOT__regs_1;
    vlSelfRef.io_debugRegs_3 = vlSelfRef.Datapath__DOT__regfile__DOT__regs_3;
    vlSelfRef.io_debugRegs_2 = vlSelfRef.Datapath__DOT__regfile__DOT__regs_2;
    vlSelfRef.io_debugRegs_5 = vlSelfRef.Datapath__DOT__regfile__DOT__regs_5;
    vlSelfRef.io_debugRegs_4 = vlSelfRef.Datapath__DOT__regfile__DOT__regs_4;
    vlSelfRef.io_debugRegs_7 = vlSelfRef.Datapath__DOT__regfile__DOT__regs_7;
    vlSelfRef.io_debugRegs_6 = vlSelfRef.Datapath__DOT__regfile__DOT__regs_6;
    vlSelfRef.io_debugRegs_9 = vlSelfRef.Datapath__DOT__regfile__DOT__regs_9;
    vlSelfRef.io_debugRegs_8 = vlSelfRef.Datapath__DOT__regfile__DOT__regs_8;
    vlSelfRef.io_debugRegs_11 = vlSelfRef.Datapath__DOT__regfile__DOT__regs_11;
    vlSelfRef.io_debugRegs_10 = vlSelfRef.Datapath__DOT__regfile__DOT__regs_10;
    vlSelfRef.io_debugRegs_12 = vlSelfRef.Datapath__DOT__regfile__DOT__regs_12;
    vlSelfRef.io_debugRegs_13 = vlSelfRef.Datapath__DOT__regfile__DOT__regs_13;
    vlSelfRef.io_debugRegs_14 = vlSelfRef.Datapath__DOT__regfile__DOT__regs_14;
    vlSelfRef.io_debugRegs_15 = vlSelfRef.Datapath__DOT__regfile__DOT__regs_15;
    vlSelfRef.io_debugRegs_16 = vlSelfRef.Datapath__DOT__regfile__DOT__regs_16;
    vlSelfRef.io_debugRegs_17 = vlSelfRef.Datapath__DOT__regfile__DOT__regs_17;
    vlSelfRef.io_debugRegs_18 = vlSelfRef.Datapath__DOT__regfile__DOT__regs_18;
    vlSelfRef.io_debugRegs_19 = vlSelfRef.Datapath__DOT__regfile__DOT__regs_19;
    vlSelfRef.io_debugRegs_20 = vlSelfRef.Datapath__DOT__regfile__DOT__regs_20;
    vlSelfRef.io_debugRegs_21 = vlSelfRef.Datapath__DOT__regfile__DOT__regs_21;
    vlSelfRef.io_debugRegs_22 = vlSelfRef.Datapath__DOT__regfile__DOT__regs_22;
    vlSelfRef.io_debugRegs_23 = vlSelfRef.Datapath__DOT__regfile__DOT__regs_23;
    vlSelfRef.io_debugRegs_24 = vlSelfRef.Datapath__DOT__regfile__DOT__regs_24;
    vlSelfRef.io_debugRegs_25 = vlSelfRef.Datapath__DOT__regfile__DOT__regs_25;
    vlSelfRef.io_debugRegs_26 = vlSelfRef.Datapath__DOT__regfile__DOT__regs_26;
    vlSelfRef.io_debugRegs_27 = vlSelfRef.Datapath__DOT__regfile__DOT__regs_27;
    vlSelfRef.io_debugRegs_28 = vlSelfRef.Datapath__DOT__regfile__DOT__regs_28;
    vlSelfRef.io_debugRegs_29 = vlSelfRef.Datapath__DOT__regfile__DOT__regs_29;
    vlSelfRef.io_debugRegs_30 = vlSelfRef.Datapath__DOT__regfile__DOT__regs_30;
    vlSelfRef.io_debugRegs_31 = vlSelfRef.Datapath__DOT__regfile__DOT__regs_31;
    Datapath__DOT__regfile__DOT___GEN[0U] = 0U;
    Datapath__DOT__regfile__DOT___GEN[1U] = vlSelfRef.Datapath__DOT__regfile__DOT__regs_1;
    Datapath__DOT__regfile__DOT___GEN[2U] = (IData)(
                                                    (((QData)((IData)(vlSelfRef.Datapath__DOT__regfile__DOT__regs_3)) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(vlSelfRef.Datapath__DOT__regfile__DOT__regs_2))));
    Datapath__DOT__regfile__DOT___GEN[3U] = (IData)(
                                                    ((((QData)((IData)(vlSelfRef.Datapath__DOT__regfile__DOT__regs_3)) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(vlSelfRef.Datapath__DOT__regfile__DOT__regs_2))) 
                                                     >> 0x20U));
    Datapath__DOT__regfile__DOT___GEN[4U] = vlSelfRef.Datapath__DOT__regfile__DOT__regs_4;
    Datapath__DOT__regfile__DOT___GEN[5U] = vlSelfRef.Datapath__DOT__regfile__DOT__regs_5;
    Datapath__DOT__regfile__DOT___GEN[6U] = (IData)(
                                                    (((QData)((IData)(vlSelfRef.Datapath__DOT__regfile__DOT__regs_7)) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(vlSelfRef.Datapath__DOT__regfile__DOT__regs_6))));
    Datapath__DOT__regfile__DOT___GEN[7U] = (IData)(
                                                    ((((QData)((IData)(vlSelfRef.Datapath__DOT__regfile__DOT__regs_7)) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(vlSelfRef.Datapath__DOT__regfile__DOT__regs_6))) 
                                                     >> 0x20U));
    Datapath__DOT__regfile__DOT___GEN[8U] = vlSelfRef.Datapath__DOT__regfile__DOT__regs_8;
    Datapath__DOT__regfile__DOT___GEN[9U] = vlSelfRef.Datapath__DOT__regfile__DOT__regs_9;
    Datapath__DOT__regfile__DOT___GEN[0xaU] = (IData)(
                                                      (((QData)((IData)(vlSelfRef.Datapath__DOT__regfile__DOT__regs_11)) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(vlSelfRef.Datapath__DOT__regfile__DOT__regs_10))));
    Datapath__DOT__regfile__DOT___GEN[0xbU] = (IData)(
                                                      ((((QData)((IData)(vlSelfRef.Datapath__DOT__regfile__DOT__regs_11)) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(vlSelfRef.Datapath__DOT__regfile__DOT__regs_10))) 
                                                       >> 0x20U));
    Datapath__DOT__regfile__DOT___GEN[0xcU] = vlSelfRef.Datapath__DOT__regfile__DOT__regs_12;
    Datapath__DOT__regfile__DOT___GEN[0xdU] = vlSelfRef.Datapath__DOT__regfile__DOT__regs_13;
    Datapath__DOT__regfile__DOT___GEN[0xeU] = (IData)(
                                                      (((QData)((IData)(vlSelfRef.Datapath__DOT__regfile__DOT__regs_15)) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(vlSelfRef.Datapath__DOT__regfile__DOT__regs_14))));
    Datapath__DOT__regfile__DOT___GEN[0xfU] = (IData)(
                                                      ((((QData)((IData)(vlSelfRef.Datapath__DOT__regfile__DOT__regs_15)) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(vlSelfRef.Datapath__DOT__regfile__DOT__regs_14))) 
                                                       >> 0x20U));
    Datapath__DOT__regfile__DOT___GEN[0x10U] = vlSelfRef.Datapath__DOT__regfile__DOT__regs_16;
    Datapath__DOT__regfile__DOT___GEN[0x11U] = vlSelfRef.Datapath__DOT__regfile__DOT__regs_17;
    Datapath__DOT__regfile__DOT___GEN[0x12U] = (IData)(
                                                       (((QData)((IData)(vlSelfRef.Datapath__DOT__regfile__DOT__regs_19)) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(vlSelfRef.Datapath__DOT__regfile__DOT__regs_18))));
    Datapath__DOT__regfile__DOT___GEN[0x13U] = (IData)(
                                                       ((((QData)((IData)(vlSelfRef.Datapath__DOT__regfile__DOT__regs_19)) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(vlSelfRef.Datapath__DOT__regfile__DOT__regs_18))) 
                                                        >> 0x20U));
    Datapath__DOT__regfile__DOT___GEN[0x14U] = vlSelfRef.Datapath__DOT__regfile__DOT__regs_20;
    Datapath__DOT__regfile__DOT___GEN[0x15U] = vlSelfRef.Datapath__DOT__regfile__DOT__regs_21;
    Datapath__DOT__regfile__DOT___GEN[0x16U] = (IData)(
                                                       (((QData)((IData)(vlSelfRef.Datapath__DOT__regfile__DOT__regs_23)) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(vlSelfRef.Datapath__DOT__regfile__DOT__regs_22))));
    Datapath__DOT__regfile__DOT___GEN[0x17U] = (IData)(
                                                       ((((QData)((IData)(vlSelfRef.Datapath__DOT__regfile__DOT__regs_23)) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(vlSelfRef.Datapath__DOT__regfile__DOT__regs_22))) 
                                                        >> 0x20U));
    Datapath__DOT__regfile__DOT___GEN[0x18U] = vlSelfRef.Datapath__DOT__regfile__DOT__regs_24;
    Datapath__DOT__regfile__DOT___GEN[0x19U] = vlSelfRef.Datapath__DOT__regfile__DOT__regs_25;
    Datapath__DOT__regfile__DOT___GEN[0x1aU] = (IData)(
                                                       (((QData)((IData)(vlSelfRef.Datapath__DOT__regfile__DOT__regs_27)) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(vlSelfRef.Datapath__DOT__regfile__DOT__regs_26))));
    Datapath__DOT__regfile__DOT___GEN[0x1bU] = (IData)(
                                                       ((((QData)((IData)(vlSelfRef.Datapath__DOT__regfile__DOT__regs_27)) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(vlSelfRef.Datapath__DOT__regfile__DOT__regs_26))) 
                                                        >> 0x20U));
    Datapath__DOT__regfile__DOT___GEN[0x1cU] = vlSelfRef.Datapath__DOT__regfile__DOT__regs_28;
    Datapath__DOT__regfile__DOT___GEN[0x1dU] = vlSelfRef.Datapath__DOT__regfile__DOT__regs_29;
    Datapath__DOT__regfile__DOT___GEN[0x1eU] = (IData)(
                                                       (((QData)((IData)(vlSelfRef.Datapath__DOT__regfile__DOT__regs_31)) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(vlSelfRef.Datapath__DOT__regfile__DOT__regs_30))));
    Datapath__DOT__regfile__DOT___GEN[0x1fU] = (IData)(
                                                       ((((QData)((IData)(vlSelfRef.Datapath__DOT__regfile__DOT__regs_31)) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(vlSelfRef.Datapath__DOT__regfile__DOT__regs_30))) 
                                                        >> 0x20U));
    vlSelfRef.io_pcOut = vlSelfRef.Datapath__DOT__pc;
    vlSelfRef.Datapath__DOT___pc_T = ((IData)(4U) + vlSelfRef.Datapath__DOT__pc);
    vlSelfRef.io_instruction = ((0x3e7U >= (0x3ffU 
                                            & (vlSelfRef.Datapath__DOT__pc 
                                               >> 2U)))
                                 ? vlSelfRef.Datapath__DOT__IMEM__DOT__imem_ext__DOT__Memory
                                [(0x3ffU & (vlSelfRef.Datapath__DOT__pc 
                                            >> 2U))]
                                 : 0U);
    Datapath__DOT__control__DOT___GEN_10 = (0xfU & 
                                            ((0x87096520U 
                                              | (((0x40000000U 
                                                   & vlSelfRef.io_instruction)
                                                   ? 4U
                                                   : 3U) 
                                                 << 0x14U)) 
                                             >> (0x1fU 
                                                 & VL_SHIFTL_III(5,5,32, 
                                                                 (7U 
                                                                  & (vlSelfRef.io_instruction 
                                                                     >> 0xcU)), 2U))));
    Datapath__DOT___control_io_memReadMode = ((0U == 
                                               (7U 
                                                & (vlSelfRef.io_instruction 
                                                   >> 0xcU))) 
                                              | (IData)(
                                                        ((0x1000U 
                                                          == 
                                                          (0x7000U 
                                                           & vlSelfRef.io_instruction)) 
                                                         & (4U 
                                                            != 
                                                            (7U 
                                                             & (vlSelfRef.io_instruction 
                                                                >> 0xcU))))));
    vlSelfRef.Datapath__DOT__control__DOT____VdfgRegularize_h02d7027e_0_4 
        = ((0x23U == (0x7fU & vlSelfRef.io_instruction)) 
           | (0x63U == (0x7fU & vlSelfRef.io_instruction)));
    Datapath__DOT___control_io_memReadLength = (((0U 
                                                  == 
                                                  (7U 
                                                   & (vlSelfRef.io_instruction 
                                                      >> 0xcU))) 
                                                 | (4U 
                                                    == 
                                                    (7U 
                                                     & (vlSelfRef.io_instruction 
                                                        >> 0xcU))))
                                                 ? 1U
                                                 : 
                                                (((1U 
                                                   == 
                                                   (7U 
                                                    & (vlSelfRef.io_instruction 
                                                       >> 0xcU))) 
                                                  | (5U 
                                                     == 
                                                     (7U 
                                                      & (vlSelfRef.io_instruction 
                                                         >> 0xcU))))
                                                  ? 2U
                                                  : 4U));
    vlSelfRef.Datapath__DOT___regfile_io_rd0 = (((0U 
                                                  == 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(10,10,32, 
                                                                   (0x1fU 
                                                                    & (vlSelfRef.io_instruction 
                                                                       >> 0xfU)), 5U)))
                                                  ? 0U
                                                  : 
                                                 (Datapath__DOT__regfile__DOT___GEN[
                                                  (((IData)(0x1fU) 
                                                    + 
                                                    (0x3ffU 
                                                     & VL_SHIFTL_III(10,10,32, 
                                                                     (0x1fU 
                                                                      & (vlSelfRef.io_instruction 
                                                                         >> 0xfU)), 5U))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_SHIFTL_III(10,10,32, 
                                                                    (0x1fU 
                                                                     & (vlSelfRef.io_instruction 
                                                                        >> 0xfU)), 5U))))) 
                                                | (Datapath__DOT__regfile__DOT___GEN[
                                                   (0x1fU 
                                                    & (VL_SHIFTL_III(10,10,32, 
                                                                     (0x1fU 
                                                                      & (vlSelfRef.io_instruction 
                                                                         >> 0xfU)), 5U) 
                                                       >> 5U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & VL_SHIFTL_III(10,10,32, 
                                                                    (0x1fU 
                                                                     & (vlSelfRef.io_instruction 
                                                                        >> 0xfU)), 5U))));
    vlSelfRef.Datapath__DOT___regfile_io_rd1 = (((0U 
                                                  == 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(10,10,32, 
                                                                   (0x1fU 
                                                                    & (vlSelfRef.io_instruction 
                                                                       >> 0x14U)), 5U)))
                                                  ? 0U
                                                  : 
                                                 (Datapath__DOT__regfile__DOT___GEN[
                                                  (((IData)(0x1fU) 
                                                    + 
                                                    (0x3ffU 
                                                     & VL_SHIFTL_III(10,10,32, 
                                                                     (0x1fU 
                                                                      & (vlSelfRef.io_instruction 
                                                                         >> 0x14U)), 5U))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_SHIFTL_III(10,10,32, 
                                                                    (0x1fU 
                                                                     & (vlSelfRef.io_instruction 
                                                                        >> 0x14U)), 5U))))) 
                                                | (Datapath__DOT__regfile__DOT___GEN[
                                                   (0x1fU 
                                                    & (VL_SHIFTL_III(10,10,32, 
                                                                     (0x1fU 
                                                                      & (vlSelfRef.io_instruction 
                                                                         >> 0x14U)), 5U) 
                                                       >> 5U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & VL_SHIFTL_III(10,10,32, 
                                                                    (0x1fU 
                                                                     & (vlSelfRef.io_instruction 
                                                                        >> 0x14U)), 5U))));
    vlSelfRef.Datapath__DOT___control_io_unconditionalJump 
        = ((0x6fU == (0x7fU & vlSelfRef.io_instruction)) 
           | (0x67U == (0x7fU & vlSelfRef.io_instruction)));
    Datapath__DOT__control__DOT____VdfgRegularize_h02d7027e_0_2 
        = ((0x33U == (0x7fU & vlSelfRef.io_instruction)) 
           | (0x13U == (0x7fU & vlSelfRef.io_instruction)));
    Datapath__DOT__control__DOT____VdfgRegularize_h02d7027e_0_3 
        = ((0x37U == (0x7fU & vlSelfRef.io_instruction)) 
           | (0x17U == (0x7fU & vlSelfRef.io_instruction)));
    Datapath__DOT__DMEM__DOT___GEN_1 = ((IData)(Datapath__DOT___control_io_memReadMode) 
                                        & ((1U != Datapath__DOT___control_io_memReadLength) 
                                           & (2U == Datapath__DOT___control_io_memReadLength)));
    Datapath__DOT__DMEM__DOT____Vcellinp__dmem_ext__R9_en 
        = ((IData)(Datapath__DOT___control_io_memReadMode) 
           & (1U == Datapath__DOT___control_io_memReadLength));
    Datapath__DOT__DMEM__DOT____VdfgRegularize_h771000ee_2_0 
        = ((IData)(Datapath__DOT___control_io_memReadMode) 
           | (1U == Datapath__DOT___control_io_memReadLength));
    Datapath__DOT____Vcellinp__ALU__io_in0 = (((0x63U 
                                                == 
                                                (0x7fU 
                                                 & vlSelfRef.io_instruction)) 
                                               | (0x6fU 
                                                  == 
                                                  (0x7fU 
                                                   & vlSelfRef.io_instruction)))
                                               ? vlSelfRef.Datapath__DOT__pc
                                               : vlSelfRef.Datapath__DOT___regfile_io_rd0);
    vlSelfRef.Datapath__DOT____Vcellinp__DMEM__io_wdData 
        = (((0U == (7U & (vlSelfRef.io_instruction 
                          >> 0xcU))) ? 0xffU : ((1U 
                                                 == 
                                                 (7U 
                                                  & (vlSelfRef.io_instruction 
                                                     >> 0xcU)))
                                                 ? 0xffffU
                                                 : 0xffffffffU)) 
           & vlSelfRef.Datapath__DOT___regfile_io_rd1);
    vlSelfRef.Datapath__DOT__branchComparator__DOT___GEN 
        = (IData)(((0x7000U == (0x7000U & vlSelfRef.io_instruction)) 
                   & (vlSelfRef.Datapath__DOT___regfile_io_rd0 
                      >= vlSelfRef.Datapath__DOT___regfile_io_rd1)));
    __Vtemp_24[0U] = (IData)((((QData)((IData)((((- (IData)(
                                                            (vlSelfRef.io_instruction 
                                                             >> 0x1fU))) 
                                                 << 0xcU) 
                                                | ((0xfe0U 
                                                    & (vlSelfRef.io_instruction 
                                                       >> 0x14U)) 
                                                   | (0x1fU 
                                                      & (vlSelfRef.io_instruction 
                                                         >> 7U)))))) 
                               << 0x20U) | (QData)((IData)(
                                                           (((- (IData)(
                                                                        (vlSelfRef.io_instruction 
                                                                         >> 0x1fU))) 
                                                             << 0xcU) 
                                                            | (vlSelfRef.io_instruction 
                                                               >> 0x14U))))));
    __Vtemp_24[1U] = (IData)(((((QData)((IData)((((- (IData)(
                                                             (vlSelfRef.io_instruction 
                                                              >> 0x1fU))) 
                                                  << 0xcU) 
                                                 | ((0xfe0U 
                                                     & (vlSelfRef.io_instruction 
                                                        >> 0x14U)) 
                                                    | (0x1fU 
                                                       & (vlSelfRef.io_instruction 
                                                          >> 7U)))))) 
                                << 0x20U) | (QData)((IData)(
                                                            (((- (IData)(
                                                                         (vlSelfRef.io_instruction 
                                                                          >> 0x1fU))) 
                                                              << 0xcU) 
                                                             | (vlSelfRef.io_instruction 
                                                                >> 0x14U))))) 
                              >> 0x20U));
    __Vtemp_24[2U] = (((- (IData)((vlSelfRef.io_instruction 
                                   >> 0x1fU))) << 0xcU) 
                      | ((0x800U & (vlSelfRef.io_instruction 
                                    << 4U)) | ((0x7e0U 
                                                & (vlSelfRef.io_instruction 
                                                   >> 0x14U)) 
                                               | (0x1eU 
                                                  & (vlSelfRef.io_instruction 
                                                     >> 7U)))));
    __Vtemp_24[3U] = (0xfffff000U & vlSelfRef.io_instruction);
    __Vtemp_24[4U] = (((- (IData)((vlSelfRef.io_instruction 
                                   >> 0x1fU))) << 0x14U) 
                      | (((0xff000U & vlSelfRef.io_instruction) 
                          | (0x800U & (vlSelfRef.io_instruction 
                                       >> 9U))) | (0x7feU 
                                                   & (vlSelfRef.io_instruction 
                                                      >> 0x14U))));
    __Vtemp_24[5U] = 0U;
    __Vtemp_24[6U] = 0U;
    __Vtemp_24[7U] = 0U;
    vlSelfRef.io_debugImmediate = (((0U == (0x1fU & 
                                            VL_SHIFTL_III(8,8,32, 
                                                          (((IData)(Datapath__DOT__control__DOT____VdfgRegularize_h02d7027e_0_2) 
                                                            | (3U 
                                                               == 
                                                               (0x7fU 
                                                                & vlSelfRef.io_instruction)))
                                                            ? 0U
                                                            : 
                                                           ((0x23U 
                                                             == 
                                                             (0x7fU 
                                                              & vlSelfRef.io_instruction))
                                                             ? 1U
                                                             : 
                                                            ((0x63U 
                                                              == 
                                                              (0x7fU 
                                                               & vlSelfRef.io_instruction))
                                                              ? 2U
                                                              : 
                                                             ((IData)(Datapath__DOT__control__DOT____VdfgRegularize_h02d7027e_0_3)
                                                               ? 3U
                                                               : 
                                                              ((0x6fU 
                                                                == 
                                                                (0x7fU 
                                                                 & vlSelfRef.io_instruction)) 
                                                               << 2U))))), 5U)))
                                     ? 0U : (__Vtemp_24[
                                             (((IData)(0x1fU) 
                                               + (0xffU 
                                                  & VL_SHIFTL_III(8,8,32, 
                                                                  (((IData)(Datapath__DOT__control__DOT____VdfgRegularize_h02d7027e_0_2) 
                                                                    | (3U 
                                                                       == 
                                                                       (0x7fU 
                                                                        & vlSelfRef.io_instruction)))
                                                                    ? 0U
                                                                    : 
                                                                   ((0x23U 
                                                                     == 
                                                                     (0x7fU 
                                                                      & vlSelfRef.io_instruction))
                                                                     ? 1U
                                                                     : 
                                                                    ((0x63U 
                                                                      == 
                                                                      (0x7fU 
                                                                       & vlSelfRef.io_instruction))
                                                                      ? 2U
                                                                      : 
                                                                     ((IData)(Datapath__DOT__control__DOT____VdfgRegularize_h02d7027e_0_3)
                                                                       ? 3U
                                                                       : 
                                                                      ((0x6fU 
                                                                        == 
                                                                        (0x7fU 
                                                                         & vlSelfRef.io_instruction)) 
                                                                       << 2U))))), 5U))) 
                                              >> 5U)] 
                                             << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_SHIFTL_III(8,8,32, 
                                                                  (((IData)(Datapath__DOT__control__DOT____VdfgRegularize_h02d7027e_0_2) 
                                                                    | (3U 
                                                                       == 
                                                                       (0x7fU 
                                                                        & vlSelfRef.io_instruction)))
                                                                    ? 0U
                                                                    : 
                                                                   ((0x23U 
                                                                     == 
                                                                     (0x7fU 
                                                                      & vlSelfRef.io_instruction))
                                                                     ? 1U
                                                                     : 
                                                                    ((0x63U 
                                                                      == 
                                                                      (0x7fU 
                                                                       & vlSelfRef.io_instruction))
                                                                      ? 2U
                                                                      : 
                                                                     ((IData)(Datapath__DOT__control__DOT____VdfgRegularize_h02d7027e_0_3)
                                                                       ? 3U
                                                                       : 
                                                                      ((0x6fU 
                                                                        == 
                                                                        (0x7fU 
                                                                         & vlSelfRef.io_instruction)) 
                                                                       << 2U))))), 5U))))) 
                                   | (__Vtemp_24[(7U 
                                                  & (VL_SHIFTL_III(8,8,32, 
                                                                   (((IData)(Datapath__DOT__control__DOT____VdfgRegularize_h02d7027e_0_2) 
                                                                     | (3U 
                                                                        == 
                                                                        (0x7fU 
                                                                         & vlSelfRef.io_instruction)))
                                                                     ? 0U
                                                                     : 
                                                                    ((0x23U 
                                                                      == 
                                                                      (0x7fU 
                                                                       & vlSelfRef.io_instruction))
                                                                      ? 1U
                                                                      : 
                                                                     ((0x63U 
                                                                       == 
                                                                       (0x7fU 
                                                                        & vlSelfRef.io_instruction))
                                                                       ? 2U
                                                                       : 
                                                                      ((IData)(Datapath__DOT__control__DOT____VdfgRegularize_h02d7027e_0_3)
                                                                        ? 3U
                                                                        : 
                                                                       ((0x6fU 
                                                                         == 
                                                                         (0x7fU 
                                                                          & vlSelfRef.io_instruction)) 
                                                                        << 2U))))), 5U) 
                                                     >> 5U))] 
                                      >> (0x1fU & VL_SHIFTL_III(8,8,32, 
                                                                (((IData)(Datapath__DOT__control__DOT____VdfgRegularize_h02d7027e_0_2) 
                                                                  | (3U 
                                                                     == 
                                                                     (0x7fU 
                                                                      & vlSelfRef.io_instruction)))
                                                                  ? 0U
                                                                  : 
                                                                 ((0x23U 
                                                                   == 
                                                                   (0x7fU 
                                                                    & vlSelfRef.io_instruction))
                                                                   ? 1U
                                                                   : 
                                                                  ((0x63U 
                                                                    == 
                                                                    (0x7fU 
                                                                     & vlSelfRef.io_instruction))
                                                                    ? 2U
                                                                    : 
                                                                   ((IData)(Datapath__DOT__control__DOT____VdfgRegularize_h02d7027e_0_3)
                                                                     ? 3U
                                                                     : 
                                                                    ((0x6fU 
                                                                      == 
                                                                      (0x7fU 
                                                                       & vlSelfRef.io_instruction)) 
                                                                     << 2U))))), 5U))));
    Datapath__DOT__DMEM__DOT___GEN_2 = ((~ (IData)(Datapath__DOT__DMEM__DOT____VdfgRegularize_h771000ee_2_0)) 
                                        & (2U == Datapath__DOT___control_io_memReadLength));
    Datapath__DOT__DMEM__DOT___GEN_4 = ((~ ((IData)(Datapath__DOT__DMEM__DOT____VdfgRegularize_h771000ee_2_0) 
                                            | (2U == Datapath__DOT___control_io_memReadLength))) 
                                        & (4U == Datapath__DOT___control_io_memReadLength));
    Datapath__DOT____Vcellinp__ALU__io_in1 = (((0x33U 
                                                != 
                                                (0x7fU 
                                                 & vlSelfRef.io_instruction)) 
                                               & ((0x13U 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelfRef.io_instruction)) 
                                                  | ((3U 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelfRef.io_instruction)) 
                                                     | ((IData)(vlSelfRef.Datapath__DOT__control__DOT____VdfgRegularize_h02d7027e_0_4) 
                                                        | ((IData)(Datapath__DOT__control__DOT____VdfgRegularize_h02d7027e_0_3) 
                                                           | (IData)(vlSelfRef.Datapath__DOT___control_io_unconditionalJump))))))
                                               ? vlSelfRef.io_debugImmediate
                                               : vlSelfRef.Datapath__DOT___regfile_io_rd1);
    Datapath__DOT__ALU__DOT__v_0 = (Datapath__DOT____Vcellinp__ALU__io_in0 
                                    + Datapath__DOT____Vcellinp__ALU__io_in1);
    __Vtemp_35[0U] = Datapath__DOT__ALU__DOT__v_0;
    __Vtemp_35[1U] = (Datapath__DOT____Vcellinp__ALU__io_in0 
                      - Datapath__DOT____Vcellinp__ALU__io_in1);
    __Vtemp_35[2U] = (Datapath__DOT____Vcellinp__ALU__io_in0 
                      << (0x1fU & Datapath__DOT____Vcellinp__ALU__io_in1));
    __Vtemp_35[3U] = (Datapath__DOT____Vcellinp__ALU__io_in0 
                      >> (0x1fU & Datapath__DOT____Vcellinp__ALU__io_in1));
    __Vtemp_35[4U] = VL_SHIFTRS_III(32,32,5, Datapath__DOT____Vcellinp__ALU__io_in0, 
                                    (0x1fU & Datapath__DOT____Vcellinp__ALU__io_in1));
    __Vtemp_35[5U] = VL_LTS_III(32, Datapath__DOT____Vcellinp__ALU__io_in0, Datapath__DOT____Vcellinp__ALU__io_in1);
    __Vtemp_35[6U] = (Datapath__DOT____Vcellinp__ALU__io_in0 
                      < Datapath__DOT____Vcellinp__ALU__io_in1);
    __Vtemp_35[7U] = (Datapath__DOT____Vcellinp__ALU__io_in0 
                      | Datapath__DOT____Vcellinp__ALU__io_in1);
    __Vtemp_35[8U] = (Datapath__DOT____Vcellinp__ALU__io_in0 
                      & Datapath__DOT____Vcellinp__ALU__io_in1);
    __Vtemp_35[9U] = (Datapath__DOT____Vcellinp__ALU__io_in0 
                      ^ Datapath__DOT____Vcellinp__ALU__io_in1);
    __Vtemp_35[0xaU] = Datapath__DOT__ALU__DOT__v_0;
    __Vtemp_35[0xbU] = Datapath__DOT__ALU__DOT__v_0;
    __Vtemp_35[0xcU] = Datapath__DOT__ALU__DOT__v_0;
    __Vtemp_35[0xdU] = Datapath__DOT__ALU__DOT__v_0;
    __Vtemp_35[0xeU] = Datapath__DOT__ALU__DOT__v_0;
    __Vtemp_35[0xfU] = Datapath__DOT__ALU__DOT__v_0;
    vlSelfRef.Datapath__DOT___ALU_io_out = (((0U == 
                                              (0x1fU 
                                               & VL_SHIFTL_III(9,9,32, 
                                                               (((3U 
                                                                  == 
                                                                  (0x7fU 
                                                                   & vlSelfRef.io_instruction)) 
                                                                 | ((0x23U 
                                                                     == 
                                                                     (0x7fU 
                                                                      & vlSelfRef.io_instruction)) 
                                                                    | ((0x63U 
                                                                        == 
                                                                        (0x7fU 
                                                                         & vlSelfRef.io_instruction)) 
                                                                       | (0x67U 
                                                                          == 
                                                                          (0x7fU 
                                                                           & vlSelfRef.io_instruction)))))
                                                                 ? 0U
                                                                 : 
                                                                ((0x33U 
                                                                  == 
                                                                  (0x7fU 
                                                                   & vlSelfRef.io_instruction))
                                                                  ? 
                                                                 ((0U 
                                                                   == 
                                                                   (7U 
                                                                    & (vlSelfRef.io_instruction 
                                                                       >> 0xcU)))
                                                                   ? 
                                                                  (1U 
                                                                   & (vlSelfRef.io_instruction 
                                                                      >> 0x1eU))
                                                                   : (IData)(Datapath__DOT__control__DOT___GEN_10))
                                                                  : 
                                                                 (((0x13U 
                                                                    != 
                                                                    (0x7fU 
                                                                     & vlSelfRef.io_instruction)) 
                                                                   | (0U 
                                                                      == 
                                                                      (7U 
                                                                       & (vlSelfRef.io_instruction 
                                                                          >> 0xcU))))
                                                                   ? 0U
                                                                   : (IData)(Datapath__DOT__control__DOT___GEN_10)))), 5U)))
                                              ? 0U : 
                                             (__Vtemp_35[
                                              (((IData)(0x1fU) 
                                                + (0x1ffU 
                                                   & VL_SHIFTL_III(9,9,32, 
                                                                   (((3U 
                                                                      == 
                                                                      (0x7fU 
                                                                       & vlSelfRef.io_instruction)) 
                                                                     | ((0x23U 
                                                                         == 
                                                                         (0x7fU 
                                                                          & vlSelfRef.io_instruction)) 
                                                                        | ((0x63U 
                                                                            == 
                                                                            (0x7fU 
                                                                             & vlSelfRef.io_instruction)) 
                                                                           | (0x67U 
                                                                              == 
                                                                              (0x7fU 
                                                                               & vlSelfRef.io_instruction)))))
                                                                     ? 0U
                                                                     : 
                                                                    ((0x33U 
                                                                      == 
                                                                      (0x7fU 
                                                                       & vlSelfRef.io_instruction))
                                                                      ? 
                                                                     ((0U 
                                                                       == 
                                                                       (7U 
                                                                        & (vlSelfRef.io_instruction 
                                                                           >> 0xcU)))
                                                                       ? 
                                                                      (1U 
                                                                       & (vlSelfRef.io_instruction 
                                                                          >> 0x1eU))
                                                                       : (IData)(Datapath__DOT__control__DOT___GEN_10))
                                                                      : 
                                                                     (((0x13U 
                                                                        != 
                                                                        (0x7fU 
                                                                         & vlSelfRef.io_instruction)) 
                                                                       | (0U 
                                                                          == 
                                                                          (7U 
                                                                           & (vlSelfRef.io_instruction 
                                                                              >> 0xcU))))
                                                                       ? 0U
                                                                       : (IData)(Datapath__DOT__control__DOT___GEN_10)))), 5U))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(9,9,32, 
                                                                   (((3U 
                                                                      == 
                                                                      (0x7fU 
                                                                       & vlSelfRef.io_instruction)) 
                                                                     | ((0x23U 
                                                                         == 
                                                                         (0x7fU 
                                                                          & vlSelfRef.io_instruction)) 
                                                                        | ((0x63U 
                                                                            == 
                                                                            (0x7fU 
                                                                             & vlSelfRef.io_instruction)) 
                                                                           | (0x67U 
                                                                              == 
                                                                              (0x7fU 
                                                                               & vlSelfRef.io_instruction)))))
                                                                     ? 0U
                                                                     : 
                                                                    ((0x33U 
                                                                      == 
                                                                      (0x7fU 
                                                                       & vlSelfRef.io_instruction))
                                                                      ? 
                                                                     ((0U 
                                                                       == 
                                                                       (7U 
                                                                        & (vlSelfRef.io_instruction 
                                                                           >> 0xcU)))
                                                                       ? 
                                                                      (1U 
                                                                       & (vlSelfRef.io_instruction 
                                                                          >> 0x1eU))
                                                                       : (IData)(Datapath__DOT__control__DOT___GEN_10))
                                                                      : 
                                                                     (((0x13U 
                                                                        != 
                                                                        (0x7fU 
                                                                         & vlSelfRef.io_instruction)) 
                                                                       | (0U 
                                                                          == 
                                                                          (7U 
                                                                           & (vlSelfRef.io_instruction 
                                                                              >> 0xcU))))
                                                                       ? 0U
                                                                       : (IData)(Datapath__DOT__control__DOT___GEN_10)))), 5U))))) 
                                            | (__Vtemp_35[
                                               (0xfU 
                                                & (VL_SHIFTL_III(9,9,32, 
                                                                 (((3U 
                                                                    == 
                                                                    (0x7fU 
                                                                     & vlSelfRef.io_instruction)) 
                                                                   | ((0x23U 
                                                                       == 
                                                                       (0x7fU 
                                                                        & vlSelfRef.io_instruction)) 
                                                                      | ((0x63U 
                                                                          == 
                                                                          (0x7fU 
                                                                           & vlSelfRef.io_instruction)) 
                                                                         | (0x67U 
                                                                            == 
                                                                            (0x7fU 
                                                                             & vlSelfRef.io_instruction)))))
                                                                   ? 0U
                                                                   : 
                                                                  ((0x33U 
                                                                    == 
                                                                    (0x7fU 
                                                                     & vlSelfRef.io_instruction))
                                                                    ? 
                                                                   ((0U 
                                                                     == 
                                                                     (7U 
                                                                      & (vlSelfRef.io_instruction 
                                                                         >> 0xcU)))
                                                                     ? 
                                                                    (1U 
                                                                     & (vlSelfRef.io_instruction 
                                                                        >> 0x1eU))
                                                                     : (IData)(Datapath__DOT__control__DOT___GEN_10))
                                                                    : 
                                                                   (((0x13U 
                                                                      != 
                                                                      (0x7fU 
                                                                       & vlSelfRef.io_instruction)) 
                                                                     | (0U 
                                                                        == 
                                                                        (7U 
                                                                         & (vlSelfRef.io_instruction 
                                                                            >> 0xcU))))
                                                                     ? 0U
                                                                     : (IData)(Datapath__DOT__control__DOT___GEN_10)))), 5U) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & VL_SHIFTL_III(9,9,32, 
                                                                   (((3U 
                                                                      == 
                                                                      (0x7fU 
                                                                       & vlSelfRef.io_instruction)) 
                                                                     | ((0x23U 
                                                                         == 
                                                                         (0x7fU 
                                                                          & vlSelfRef.io_instruction)) 
                                                                        | ((0x63U 
                                                                            == 
                                                                            (0x7fU 
                                                                             & vlSelfRef.io_instruction)) 
                                                                           | (0x67U 
                                                                              == 
                                                                              (0x7fU 
                                                                               & vlSelfRef.io_instruction)))))
                                                                     ? 0U
                                                                     : 
                                                                    ((0x33U 
                                                                      == 
                                                                      (0x7fU 
                                                                       & vlSelfRef.io_instruction))
                                                                      ? 
                                                                     ((0U 
                                                                       == 
                                                                       (7U 
                                                                        & (vlSelfRef.io_instruction 
                                                                           >> 0xcU)))
                                                                       ? 
                                                                      (1U 
                                                                       & (vlSelfRef.io_instruction 
                                                                          >> 0x1eU))
                                                                       : (IData)(Datapath__DOT__control__DOT___GEN_10))
                                                                      : 
                                                                     (((0x13U 
                                                                        != 
                                                                        (0x7fU 
                                                                         & vlSelfRef.io_instruction)) 
                                                                       | (0U 
                                                                          == 
                                                                          (7U 
                                                                           & (vlSelfRef.io_instruction 
                                                                              >> 0xcU))))
                                                                       ? 0U
                                                                       : (IData)(Datapath__DOT__control__DOT___GEN_10)))), 5U))));
    __VdfgRegularize_h6171c202_0_0 = ((0x3e7U >= (0x3ffU 
                                                  & vlSelfRef.Datapath__DOT___ALU_io_out))
                                       ? vlSelfRef.Datapath__DOT__DMEM__DOT__dmem_ext__DOT__Memory
                                      [(0x3ffU & vlSelfRef.Datapath__DOT___ALU_io_out)]
                                       : 0U);
    __VdfgRegularize_h6171c202_0_1 = ((0x3e7U >= (0x3ffU 
                                                  & ((IData)(1U) 
                                                     + vlSelfRef.Datapath__DOT___ALU_io_out)))
                                       ? vlSelfRef.Datapath__DOT__DMEM__DOT__dmem_ext__DOT__Memory
                                      [(0x3ffU & ((IData)(1U) 
                                                  + vlSelfRef.Datapath__DOT___ALU_io_out))]
                                       : 0U);
    __Vtemp_37[0U] = ((IData)(Datapath__DOT___control_io_memReadMode)
                       ? ((1U == Datapath__DOT___control_io_memReadLength)
                           ? (((- (IData)(((IData)(Datapath__DOT__DMEM__DOT____Vcellinp__dmem_ext__R9_en) 
                                           & ((IData)(__VdfgRegularize_h6171c202_0_0) 
                                              >> 7U)))) 
                               << 8U) | ((IData)(Datapath__DOT__DMEM__DOT____Vcellinp__dmem_ext__R9_en)
                                          ? (IData)(__VdfgRegularize_h6171c202_0_0)
                                          : 0U)) : 
                          ((2U == Datapath__DOT___control_io_memReadLength)
                            ? (((- (IData)(((IData)(Datapath__DOT__DMEM__DOT___GEN_1) 
                                            & ((IData)(__VdfgRegularize_h6171c202_0_1) 
                                               >> 7U)))) 
                                << 0x10U) | ((((IData)(Datapath__DOT__DMEM__DOT___GEN_1)
                                                ? (IData)(__VdfgRegularize_h6171c202_0_1)
                                                : 0U) 
                                              << 8U) 
                                             | ((IData)(Datapath__DOT__DMEM__DOT___GEN_1)
                                                 ? (IData)(__VdfgRegularize_h6171c202_0_0)
                                                 : 0U)))
                            : 0U)) : ((1U == Datapath__DOT___control_io_memReadLength)
                                       ? (((~ (IData)(Datapath__DOT___control_io_memReadMode)) 
                                           & (1U == Datapath__DOT___control_io_memReadLength))
                                           ? (IData)(__VdfgRegularize_h6171c202_0_0)
                                           : 0U) : 
                                      ((2U == Datapath__DOT___control_io_memReadLength)
                                        ? ((((IData)(Datapath__DOT__DMEM__DOT___GEN_2)
                                              ? (IData)(__VdfgRegularize_h6171c202_0_1)
                                              : 0U) 
                                            << 8U) 
                                           | ((IData)(Datapath__DOT__DMEM__DOT___GEN_2)
                                               ? (IData)(__VdfgRegularize_h6171c202_0_0)
                                               : 0U))
                                        : ((4U == Datapath__DOT___control_io_memReadLength)
                                            ? (((((IData)(Datapath__DOT__DMEM__DOT___GEN_4)
                                                   ? 
                                                  ((0x3e7U 
                                                    >= 
                                                    (0x3ffU 
                                                     & ((IData)(3U) 
                                                        + vlSelfRef.Datapath__DOT___ALU_io_out)))
                                                    ? 
                                                   vlSelfRef.Datapath__DOT__DMEM__DOT__dmem_ext__DOT__Memory
                                                   [
                                                   (0x3ffU 
                                                    & ((IData)(3U) 
                                                       + vlSelfRef.Datapath__DOT___ALU_io_out))]
                                                    : 0U)
                                                   : 0U) 
                                                 << 0x18U) 
                                                | (((IData)(Datapath__DOT__DMEM__DOT___GEN_4)
                                                     ? 
                                                    ((0x3e7U 
                                                      >= 
                                                      (0x3ffU 
                                                       & ((IData)(2U) 
                                                          + vlSelfRef.Datapath__DOT___ALU_io_out)))
                                                      ? 
                                                     vlSelfRef.Datapath__DOT__DMEM__DOT__dmem_ext__DOT__Memory
                                                     [
                                                     (0x3ffU 
                                                      & ((IData)(2U) 
                                                         + vlSelfRef.Datapath__DOT___ALU_io_out))]
                                                      : 0U)
                                                     : 0U) 
                                                   << 0x10U)) 
                                               | ((((IData)(Datapath__DOT__DMEM__DOT___GEN_4)
                                                     ? (IData)(__VdfgRegularize_h6171c202_0_1)
                                                     : 0U) 
                                                   << 8U) 
                                                  | ((IData)(Datapath__DOT__DMEM__DOT___GEN_4)
                                                      ? (IData)(__VdfgRegularize_h6171c202_0_0)
                                                      : 0U)))
                                            : 0U))));
    __Vtemp_37[1U] = vlSelfRef.Datapath__DOT___ALU_io_out;
    __Vtemp_37[2U] = (IData)((0x100000000ULL | (QData)((IData)(
                                                               ((IData)(4U) 
                                                                + vlSelfRef.Datapath__DOT__pc)))));
    __Vtemp_37[3U] = (IData)(((0x100000000ULL | (QData)((IData)(
                                                                ((IData)(4U) 
                                                                 + vlSelfRef.Datapath__DOT__pc)))) 
                              >> 0x20U));
    vlSelfRef.Datapath__DOT____Vcellinp__regfile__io_wdData 
        = (((0U == (0x1fU & VL_SHIFTL_III(7,7,32, ((IData)(Datapath__DOT__control__DOT____VdfgRegularize_h02d7027e_0_2)
                                                    ? 1U
                                                    : 
                                                   ((3U 
                                                     == 
                                                     (0x7fU 
                                                      & vlSelfRef.io_instruction))
                                                     ? 0U
                                                     : 
                                                    ((IData)(vlSelfRef.Datapath__DOT___control_io_unconditionalJump)
                                                      ? 2U
                                                      : 1U))), 5U)))
             ? 0U : (__Vtemp_37[(((IData)(0x1fU) + 
                                  (0x7fU & VL_SHIFTL_III(7,7,32, 
                                                         ((IData)(Datapath__DOT__control__DOT____VdfgRegularize_h02d7027e_0_2)
                                                           ? 1U
                                                           : 
                                                          ((3U 
                                                            == 
                                                            (0x7fU 
                                                             & vlSelfRef.io_instruction))
                                                            ? 0U
                                                            : 
                                                           ((IData)(vlSelfRef.Datapath__DOT___control_io_unconditionalJump)
                                                             ? 2U
                                                             : 1U))), 5U))) 
                                 >> 5U)] << ((IData)(0x20U) 
                                             - (0x1fU 
                                                & VL_SHIFTL_III(7,7,32, 
                                                                ((IData)(Datapath__DOT__control__DOT____VdfgRegularize_h02d7027e_0_2)
                                                                  ? 1U
                                                                  : 
                                                                 ((3U 
                                                                   == 
                                                                   (0x7fU 
                                                                    & vlSelfRef.io_instruction))
                                                                   ? 0U
                                                                   : 
                                                                  ((IData)(vlSelfRef.Datapath__DOT___control_io_unconditionalJump)
                                                                    ? 2U
                                                                    : 1U))), 5U))))) 
           | (__Vtemp_37[(3U & (VL_SHIFTL_III(7,7,32, 
                                              ((IData)(Datapath__DOT__control__DOT____VdfgRegularize_h02d7027e_0_2)
                                                ? 1U
                                                : (
                                                   (3U 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelfRef.io_instruction))
                                                    ? 0U
                                                    : 
                                                   ((IData)(vlSelfRef.Datapath__DOT___control_io_unconditionalJump)
                                                     ? 2U
                                                     : 1U))), 5U) 
                                >> 5U))] >> (0x1fU 
                                             & VL_SHIFTL_III(7,7,32, 
                                                             ((IData)(Datapath__DOT__control__DOT____VdfgRegularize_h02d7027e_0_2)
                                                               ? 1U
                                                               : 
                                                              ((3U 
                                                                == 
                                                                (0x7fU 
                                                                 & vlSelfRef.io_instruction))
                                                                ? 0U
                                                                : 
                                                               ((IData)(vlSelfRef.Datapath__DOT___control_io_unconditionalJump)
                                                                 ? 2U
                                                                 : 1U))), 5U))));
}

void VDatapath___024root___eval_triggers__act(VDatapath___024root* vlSelf);

bool VDatapath___024root___eval_phase__act(VDatapath___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDatapath___024root___eval_phase__act\n"); );
    VDatapath__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    VDatapath___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        VDatapath___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool VDatapath___024root___eval_phase__nba(VDatapath___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDatapath___024root___eval_phase__nba\n"); );
    VDatapath__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        VDatapath___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VDatapath___024root___dump_triggers__nba(VDatapath___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VDatapath___024root___dump_triggers__act(VDatapath___024root* vlSelf);
#endif  // VL_DEBUG

void VDatapath___024root___eval(VDatapath___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDatapath___024root___eval\n"); );
    VDatapath__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            VDatapath___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("generated/Datapath.sv", 734, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                VDatapath___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("generated/Datapath.sv", 734, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (VDatapath___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (VDatapath___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void VDatapath___024root___eval_debug_assertions(VDatapath___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDatapath___024root___eval_debug_assertions\n"); );
    VDatapath__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clock & 0xfeU)))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY(((vlSelfRef.reset & 0xfeU)))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
