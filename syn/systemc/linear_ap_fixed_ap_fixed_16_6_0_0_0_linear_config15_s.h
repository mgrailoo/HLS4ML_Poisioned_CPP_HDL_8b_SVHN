// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
// Version: 2020.1.1
// Copyright (C) 1986-2020 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _linear_ap_fixed_ap_fixed_16_6_0_0_0_linear_config15_s_HH_
#define _linear_ap_fixed_ap_fixed_16_6_0_0_0_linear_config15_s_HH_

#include "systemc.h"
#include "AESL_pkg.h"


namespace ap_rtl {

struct linear_ap_fixed_ap_fixed_16_6_0_0_0_linear_config15_s : public sc_module {
    // Port declarations 37
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_in< sc_logic > ap_continue;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_in< sc_lv<7> > data_0_V;
    sc_in< sc_lv<7> > data_1_V;
    sc_in< sc_lv<7> > data_2_V;
    sc_in< sc_lv<7> > data_3_V;
    sc_in< sc_lv<7> > data_4_V;
    sc_in< sc_lv<7> > data_5_V;
    sc_in< sc_lv<7> > data_6_V;
    sc_in< sc_lv<7> > data_7_V;
    sc_in< sc_lv<7> > data_8_V;
    sc_in< sc_lv<7> > data_9_V;
    sc_out< sc_lv<16> > res_0_V;
    sc_out< sc_logic > res_0_V_ap_vld;
    sc_out< sc_lv<16> > res_1_V;
    sc_out< sc_logic > res_1_V_ap_vld;
    sc_out< sc_lv<16> > res_2_V;
    sc_out< sc_logic > res_2_V_ap_vld;
    sc_out< sc_lv<16> > res_3_V;
    sc_out< sc_logic > res_3_V_ap_vld;
    sc_out< sc_lv<16> > res_4_V;
    sc_out< sc_logic > res_4_V_ap_vld;
    sc_out< sc_lv<16> > res_5_V;
    sc_out< sc_logic > res_5_V_ap_vld;
    sc_out< sc_lv<16> > res_6_V;
    sc_out< sc_logic > res_6_V_ap_vld;
    sc_out< sc_lv<16> > res_7_V;
    sc_out< sc_logic > res_7_V_ap_vld;
    sc_out< sc_lv<16> > res_8_V;
    sc_out< sc_logic > res_8_V_ap_vld;
    sc_out< sc_lv<16> > res_9_V;
    sc_out< sc_logic > res_9_V_ap_vld;


    // Module declarations
    linear_ap_fixed_ap_fixed_16_6_0_0_0_linear_config15_s(sc_module_name name);
    SC_HAS_PROCESS(linear_ap_fixed_ap_fixed_16_6_0_0_0_linear_config15_s);

    ~linear_ap_fixed_ap_fixed_16_6_0_0_0_linear_config15_s();

    sc_trace_file* mVcdFile;

    sc_signal< sc_logic > ap_done_reg;
    sc_signal< sc_lv<1> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< bool > ap_block_state1;
    sc_signal< sc_lv<16> > shl_ln_fu_196_p3;
    sc_signal< sc_lv<16> > res_0_V_preg;
    sc_signal< sc_lv<16> > shl_ln728_1_fu_205_p3;
    sc_signal< sc_lv<16> > res_1_V_preg;
    sc_signal< sc_lv<16> > shl_ln728_2_fu_214_p3;
    sc_signal< sc_lv<16> > res_2_V_preg;
    sc_signal< sc_lv<16> > shl_ln728_3_fu_223_p3;
    sc_signal< sc_lv<16> > res_3_V_preg;
    sc_signal< sc_lv<16> > shl_ln728_4_fu_232_p3;
    sc_signal< sc_lv<16> > res_4_V_preg;
    sc_signal< sc_lv<16> > shl_ln728_5_fu_241_p3;
    sc_signal< sc_lv<16> > res_5_V_preg;
    sc_signal< sc_lv<16> > shl_ln728_6_fu_250_p3;
    sc_signal< sc_lv<16> > res_6_V_preg;
    sc_signal< sc_lv<16> > shl_ln728_7_fu_259_p3;
    sc_signal< sc_lv<16> > res_7_V_preg;
    sc_signal< sc_lv<16> > shl_ln728_8_fu_268_p3;
    sc_signal< sc_lv<16> > res_8_V_preg;
    sc_signal< sc_lv<16> > shl_ln728_9_fu_277_p3;
    sc_signal< sc_lv<16> > res_9_V_preg;
    sc_signal< sc_lv<1> > ap_NS_fsm;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<1> ap_ST_fsm_state1;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<16> ap_const_lv16_0;
    static const sc_lv<9> ap_const_lv9_0;
    static const bool ap_const_boolean_1;
    // Thread declarations
    void thread_ap_clk_no_reset_();
    void thread_ap_CS_fsm_state1();
    void thread_ap_block_state1();
    void thread_ap_done();
    void thread_ap_idle();
    void thread_ap_ready();
    void thread_res_0_V();
    void thread_res_0_V_ap_vld();
    void thread_res_1_V();
    void thread_res_1_V_ap_vld();
    void thread_res_2_V();
    void thread_res_2_V_ap_vld();
    void thread_res_3_V();
    void thread_res_3_V_ap_vld();
    void thread_res_4_V();
    void thread_res_4_V_ap_vld();
    void thread_res_5_V();
    void thread_res_5_V_ap_vld();
    void thread_res_6_V();
    void thread_res_6_V_ap_vld();
    void thread_res_7_V();
    void thread_res_7_V_ap_vld();
    void thread_res_8_V();
    void thread_res_8_V_ap_vld();
    void thread_res_9_V();
    void thread_res_9_V_ap_vld();
    void thread_shl_ln728_1_fu_205_p3();
    void thread_shl_ln728_2_fu_214_p3();
    void thread_shl_ln728_3_fu_223_p3();
    void thread_shl_ln728_4_fu_232_p3();
    void thread_shl_ln728_5_fu_241_p3();
    void thread_shl_ln728_6_fu_250_p3();
    void thread_shl_ln728_7_fu_259_p3();
    void thread_shl_ln728_8_fu_268_p3();
    void thread_shl_ln728_9_fu_277_p3();
    void thread_shl_ln_fu_196_p3();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif
