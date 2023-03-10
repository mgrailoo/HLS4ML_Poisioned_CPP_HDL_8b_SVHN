// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
// Version: 2020.1.1
// Copyright (C) 1986-2020 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#include "linear_ap_fixed_ap_fixed_16_6_0_0_0_linear_config15_s.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

const sc_logic linear_ap_fixed_ap_fixed_16_6_0_0_0_linear_config15_s::ap_const_logic_1 = sc_dt::Log_1;
const sc_logic linear_ap_fixed_ap_fixed_16_6_0_0_0_linear_config15_s::ap_const_logic_0 = sc_dt::Log_0;
const sc_lv<1> linear_ap_fixed_ap_fixed_16_6_0_0_0_linear_config15_s::ap_ST_fsm_state1 = "1";
const sc_lv<32> linear_ap_fixed_ap_fixed_16_6_0_0_0_linear_config15_s::ap_const_lv32_0 = "00000000000000000000000000000000";
const sc_lv<16> linear_ap_fixed_ap_fixed_16_6_0_0_0_linear_config15_s::ap_const_lv16_0 = "0000000000000000";
const sc_lv<9> linear_ap_fixed_ap_fixed_16_6_0_0_0_linear_config15_s::ap_const_lv9_0 = "000000000";
const bool linear_ap_fixed_ap_fixed_16_6_0_0_0_linear_config15_s::ap_const_boolean_1 = true;

linear_ap_fixed_ap_fixed_16_6_0_0_0_linear_config15_s::linear_ap_fixed_ap_fixed_16_6_0_0_0_linear_config15_s(sc_module_name name) : sc_module(name), mVcdFile(0) {

    SC_METHOD(thread_ap_clk_no_reset_);
    dont_initialize();
    sensitive << ( ap_clk.pos() );

    SC_METHOD(thread_ap_CS_fsm_state1);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_block_state1);
    sensitive << ( ap_start );
    sensitive << ( ap_done_reg );

    SC_METHOD(thread_ap_done);
    sensitive << ( ap_start );
    sensitive << ( ap_done_reg );
    sensitive << ( ap_CS_fsm_state1 );

    SC_METHOD(thread_ap_idle);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm_state1 );

    SC_METHOD(thread_ap_ready);
    sensitive << ( ap_start );
    sensitive << ( ap_done_reg );
    sensitive << ( ap_CS_fsm_state1 );

    SC_METHOD(thread_res_0_V);
    sensitive << ( ap_start );
    sensitive << ( ap_done_reg );
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( shl_ln_fu_196_p3 );
    sensitive << ( res_0_V_preg );

    SC_METHOD(thread_res_0_V_ap_vld);
    sensitive << ( ap_start );
    sensitive << ( ap_done_reg );
    sensitive << ( ap_CS_fsm_state1 );

    SC_METHOD(thread_res_1_V);
    sensitive << ( ap_start );
    sensitive << ( ap_done_reg );
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( shl_ln728_1_fu_205_p3 );
    sensitive << ( res_1_V_preg );

    SC_METHOD(thread_res_1_V_ap_vld);
    sensitive << ( ap_start );
    sensitive << ( ap_done_reg );
    sensitive << ( ap_CS_fsm_state1 );

    SC_METHOD(thread_res_2_V);
    sensitive << ( ap_start );
    sensitive << ( ap_done_reg );
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( shl_ln728_2_fu_214_p3 );
    sensitive << ( res_2_V_preg );

    SC_METHOD(thread_res_2_V_ap_vld);
    sensitive << ( ap_start );
    sensitive << ( ap_done_reg );
    sensitive << ( ap_CS_fsm_state1 );

    SC_METHOD(thread_res_3_V);
    sensitive << ( ap_start );
    sensitive << ( ap_done_reg );
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( shl_ln728_3_fu_223_p3 );
    sensitive << ( res_3_V_preg );

    SC_METHOD(thread_res_3_V_ap_vld);
    sensitive << ( ap_start );
    sensitive << ( ap_done_reg );
    sensitive << ( ap_CS_fsm_state1 );

    SC_METHOD(thread_res_4_V);
    sensitive << ( ap_start );
    sensitive << ( ap_done_reg );
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( shl_ln728_4_fu_232_p3 );
    sensitive << ( res_4_V_preg );

    SC_METHOD(thread_res_4_V_ap_vld);
    sensitive << ( ap_start );
    sensitive << ( ap_done_reg );
    sensitive << ( ap_CS_fsm_state1 );

    SC_METHOD(thread_res_5_V);
    sensitive << ( ap_start );
    sensitive << ( ap_done_reg );
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( shl_ln728_5_fu_241_p3 );
    sensitive << ( res_5_V_preg );

    SC_METHOD(thread_res_5_V_ap_vld);
    sensitive << ( ap_start );
    sensitive << ( ap_done_reg );
    sensitive << ( ap_CS_fsm_state1 );

    SC_METHOD(thread_res_6_V);
    sensitive << ( ap_start );
    sensitive << ( ap_done_reg );
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( shl_ln728_6_fu_250_p3 );
    sensitive << ( res_6_V_preg );

    SC_METHOD(thread_res_6_V_ap_vld);
    sensitive << ( ap_start );
    sensitive << ( ap_done_reg );
    sensitive << ( ap_CS_fsm_state1 );

    SC_METHOD(thread_res_7_V);
    sensitive << ( ap_start );
    sensitive << ( ap_done_reg );
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( shl_ln728_7_fu_259_p3 );
    sensitive << ( res_7_V_preg );

    SC_METHOD(thread_res_7_V_ap_vld);
    sensitive << ( ap_start );
    sensitive << ( ap_done_reg );
    sensitive << ( ap_CS_fsm_state1 );

    SC_METHOD(thread_res_8_V);
    sensitive << ( ap_start );
    sensitive << ( ap_done_reg );
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( shl_ln728_8_fu_268_p3 );
    sensitive << ( res_8_V_preg );

    SC_METHOD(thread_res_8_V_ap_vld);
    sensitive << ( ap_start );
    sensitive << ( ap_done_reg );
    sensitive << ( ap_CS_fsm_state1 );

    SC_METHOD(thread_res_9_V);
    sensitive << ( ap_start );
    sensitive << ( ap_done_reg );
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( shl_ln728_9_fu_277_p3 );
    sensitive << ( res_9_V_preg );

    SC_METHOD(thread_res_9_V_ap_vld);
    sensitive << ( ap_start );
    sensitive << ( ap_done_reg );
    sensitive << ( ap_CS_fsm_state1 );

    SC_METHOD(thread_shl_ln728_1_fu_205_p3);
    sensitive << ( data_1_V );

    SC_METHOD(thread_shl_ln728_2_fu_214_p3);
    sensitive << ( data_2_V );

    SC_METHOD(thread_shl_ln728_3_fu_223_p3);
    sensitive << ( data_3_V );

    SC_METHOD(thread_shl_ln728_4_fu_232_p3);
    sensitive << ( data_4_V );

    SC_METHOD(thread_shl_ln728_5_fu_241_p3);
    sensitive << ( data_5_V );

    SC_METHOD(thread_shl_ln728_6_fu_250_p3);
    sensitive << ( data_6_V );

    SC_METHOD(thread_shl_ln728_7_fu_259_p3);
    sensitive << ( data_7_V );

    SC_METHOD(thread_shl_ln728_8_fu_268_p3);
    sensitive << ( data_8_V );

    SC_METHOD(thread_shl_ln728_9_fu_277_p3);
    sensitive << ( data_9_V );

    SC_METHOD(thread_shl_ln_fu_196_p3);
    sensitive << ( data_0_V );

    SC_METHOD(thread_ap_NS_fsm);
    sensitive << ( ap_start );
    sensitive << ( ap_done_reg );
    sensitive << ( ap_CS_fsm );
    sensitive << ( ap_CS_fsm_state1 );

    ap_done_reg = SC_LOGIC_0;
    ap_CS_fsm = "1";
    res_0_V_preg = "0000000000000000";
    res_1_V_preg = "0000000000000000";
    res_2_V_preg = "0000000000000000";
    res_3_V_preg = "0000000000000000";
    res_4_V_preg = "0000000000000000";
    res_5_V_preg = "0000000000000000";
    res_6_V_preg = "0000000000000000";
    res_7_V_preg = "0000000000000000";
    res_8_V_preg = "0000000000000000";
    res_9_V_preg = "0000000000000000";
    static int apTFileNum = 0;
    stringstream apTFilenSS;
    apTFilenSS << "linear_ap_fixed_ap_fixed_16_6_0_0_0_linear_config15_s_sc_trace_" << apTFileNum ++;
    string apTFn = apTFilenSS.str();
    mVcdFile = sc_create_vcd_trace_file(apTFn.c_str());
    mVcdFile->set_time_unit(1, SC_PS);
    if (1) {
#ifdef __HLS_TRACE_LEVEL_PORT_HIER__
    sc_trace(mVcdFile, ap_clk, "(port)ap_clk");
    sc_trace(mVcdFile, ap_rst, "(port)ap_rst");
    sc_trace(mVcdFile, ap_start, "(port)ap_start");
    sc_trace(mVcdFile, ap_done, "(port)ap_done");
    sc_trace(mVcdFile, ap_continue, "(port)ap_continue");
    sc_trace(mVcdFile, ap_idle, "(port)ap_idle");
    sc_trace(mVcdFile, ap_ready, "(port)ap_ready");
    sc_trace(mVcdFile, data_0_V, "(port)data_0_V");
    sc_trace(mVcdFile, data_1_V, "(port)data_1_V");
    sc_trace(mVcdFile, data_2_V, "(port)data_2_V");
    sc_trace(mVcdFile, data_3_V, "(port)data_3_V");
    sc_trace(mVcdFile, data_4_V, "(port)data_4_V");
    sc_trace(mVcdFile, data_5_V, "(port)data_5_V");
    sc_trace(mVcdFile, data_6_V, "(port)data_6_V");
    sc_trace(mVcdFile, data_7_V, "(port)data_7_V");
    sc_trace(mVcdFile, data_8_V, "(port)data_8_V");
    sc_trace(mVcdFile, data_9_V, "(port)data_9_V");
    sc_trace(mVcdFile, res_0_V, "(port)res_0_V");
    sc_trace(mVcdFile, res_0_V_ap_vld, "(port)res_0_V_ap_vld");
    sc_trace(mVcdFile, res_1_V, "(port)res_1_V");
    sc_trace(mVcdFile, res_1_V_ap_vld, "(port)res_1_V_ap_vld");
    sc_trace(mVcdFile, res_2_V, "(port)res_2_V");
    sc_trace(mVcdFile, res_2_V_ap_vld, "(port)res_2_V_ap_vld");
    sc_trace(mVcdFile, res_3_V, "(port)res_3_V");
    sc_trace(mVcdFile, res_3_V_ap_vld, "(port)res_3_V_ap_vld");
    sc_trace(mVcdFile, res_4_V, "(port)res_4_V");
    sc_trace(mVcdFile, res_4_V_ap_vld, "(port)res_4_V_ap_vld");
    sc_trace(mVcdFile, res_5_V, "(port)res_5_V");
    sc_trace(mVcdFile, res_5_V_ap_vld, "(port)res_5_V_ap_vld");
    sc_trace(mVcdFile, res_6_V, "(port)res_6_V");
    sc_trace(mVcdFile, res_6_V_ap_vld, "(port)res_6_V_ap_vld");
    sc_trace(mVcdFile, res_7_V, "(port)res_7_V");
    sc_trace(mVcdFile, res_7_V_ap_vld, "(port)res_7_V_ap_vld");
    sc_trace(mVcdFile, res_8_V, "(port)res_8_V");
    sc_trace(mVcdFile, res_8_V_ap_vld, "(port)res_8_V_ap_vld");
    sc_trace(mVcdFile, res_9_V, "(port)res_9_V");
    sc_trace(mVcdFile, res_9_V_ap_vld, "(port)res_9_V_ap_vld");
#endif
#ifdef __HLS_TRACE_LEVEL_INT__
    sc_trace(mVcdFile, ap_done_reg, "ap_done_reg");
    sc_trace(mVcdFile, ap_CS_fsm, "ap_CS_fsm");
    sc_trace(mVcdFile, ap_CS_fsm_state1, "ap_CS_fsm_state1");
    sc_trace(mVcdFile, ap_block_state1, "ap_block_state1");
    sc_trace(mVcdFile, shl_ln_fu_196_p3, "shl_ln_fu_196_p3");
    sc_trace(mVcdFile, res_0_V_preg, "res_0_V_preg");
    sc_trace(mVcdFile, shl_ln728_1_fu_205_p3, "shl_ln728_1_fu_205_p3");
    sc_trace(mVcdFile, res_1_V_preg, "res_1_V_preg");
    sc_trace(mVcdFile, shl_ln728_2_fu_214_p3, "shl_ln728_2_fu_214_p3");
    sc_trace(mVcdFile, res_2_V_preg, "res_2_V_preg");
    sc_trace(mVcdFile, shl_ln728_3_fu_223_p3, "shl_ln728_3_fu_223_p3");
    sc_trace(mVcdFile, res_3_V_preg, "res_3_V_preg");
    sc_trace(mVcdFile, shl_ln728_4_fu_232_p3, "shl_ln728_4_fu_232_p3");
    sc_trace(mVcdFile, res_4_V_preg, "res_4_V_preg");
    sc_trace(mVcdFile, shl_ln728_5_fu_241_p3, "shl_ln728_5_fu_241_p3");
    sc_trace(mVcdFile, res_5_V_preg, "res_5_V_preg");
    sc_trace(mVcdFile, shl_ln728_6_fu_250_p3, "shl_ln728_6_fu_250_p3");
    sc_trace(mVcdFile, res_6_V_preg, "res_6_V_preg");
    sc_trace(mVcdFile, shl_ln728_7_fu_259_p3, "shl_ln728_7_fu_259_p3");
    sc_trace(mVcdFile, res_7_V_preg, "res_7_V_preg");
    sc_trace(mVcdFile, shl_ln728_8_fu_268_p3, "shl_ln728_8_fu_268_p3");
    sc_trace(mVcdFile, res_8_V_preg, "res_8_V_preg");
    sc_trace(mVcdFile, shl_ln728_9_fu_277_p3, "shl_ln728_9_fu_277_p3");
    sc_trace(mVcdFile, res_9_V_preg, "res_9_V_preg");
    sc_trace(mVcdFile, ap_NS_fsm, "ap_NS_fsm");
#endif

    }
}

linear_ap_fixed_ap_fixed_16_6_0_0_0_linear_config15_s::~linear_ap_fixed_ap_fixed_16_6_0_0_0_linear_config15_s() {
    if (mVcdFile) 
        sc_close_vcd_trace_file(mVcdFile);

}

void linear_ap_fixed_ap_fixed_16_6_0_0_0_linear_config15_s::thread_ap_clk_no_reset_() {
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_CS_fsm = ap_ST_fsm_state1;
    } else {
        ap_CS_fsm = ap_NS_fsm.read();
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_done_reg = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_continue.read())) {
            ap_done_reg = ap_const_logic_0;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                    !(esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1)))) {
            ap_done_reg = ap_const_logic_1;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        res_0_V_preg = ap_const_lv16_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
             !(esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1)))) {
            res_0_V_preg = shl_ln_fu_196_p3.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        res_1_V_preg = ap_const_lv16_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
             !(esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1)))) {
            res_1_V_preg = shl_ln728_1_fu_205_p3.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        res_2_V_preg = ap_const_lv16_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
             !(esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1)))) {
            res_2_V_preg = shl_ln728_2_fu_214_p3.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        res_3_V_preg = ap_const_lv16_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
             !(esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1)))) {
            res_3_V_preg = shl_ln728_3_fu_223_p3.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        res_4_V_preg = ap_const_lv16_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
             !(esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1)))) {
            res_4_V_preg = shl_ln728_4_fu_232_p3.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        res_5_V_preg = ap_const_lv16_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
             !(esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1)))) {
            res_5_V_preg = shl_ln728_5_fu_241_p3.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        res_6_V_preg = ap_const_lv16_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
             !(esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1)))) {
            res_6_V_preg = shl_ln728_6_fu_250_p3.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        res_7_V_preg = ap_const_lv16_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
             !(esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1)))) {
            res_7_V_preg = shl_ln728_7_fu_259_p3.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        res_8_V_preg = ap_const_lv16_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
             !(esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1)))) {
            res_8_V_preg = shl_ln728_8_fu_268_p3.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        res_9_V_preg = ap_const_lv16_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
             !(esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1)))) {
            res_9_V_preg = shl_ln728_9_fu_277_p3.read();
        }
    }
}

void linear_ap_fixed_ap_fixed_16_6_0_0_0_linear_config15_s::thread_ap_CS_fsm_state1() {
    ap_CS_fsm_state1 = ap_CS_fsm.read()[0];
}

void linear_ap_fixed_ap_fixed_16_6_0_0_0_linear_config15_s::thread_ap_block_state1() {
    ap_block_state1 = (esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1));
}

void linear_ap_fixed_ap_fixed_16_6_0_0_0_linear_config15_s::thread_ap_done() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1)))) {
        ap_done = ap_const_logic_1;
    } else {
        ap_done = ap_done_reg.read();
    }
}

void linear_ap_fixed_ap_fixed_16_6_0_0_0_linear_config15_s::thread_ap_idle() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()))) {
        ap_idle = ap_const_logic_1;
    } else {
        ap_idle = ap_const_logic_0;
    }
}

void linear_ap_fixed_ap_fixed_16_6_0_0_0_linear_config15_s::thread_ap_ready() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1)))) {
        ap_ready = ap_const_logic_1;
    } else {
        ap_ready = ap_const_logic_0;
    }
}

void linear_ap_fixed_ap_fixed_16_6_0_0_0_linear_config15_s::thread_res_0_V() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1)))) {
        res_0_V = shl_ln_fu_196_p3.read();
    } else {
        res_0_V = res_0_V_preg.read();
    }
}

void linear_ap_fixed_ap_fixed_16_6_0_0_0_linear_config15_s::thread_res_0_V_ap_vld() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1)))) {
        res_0_V_ap_vld = ap_const_logic_1;
    } else {
        res_0_V_ap_vld = ap_const_logic_0;
    }
}

void linear_ap_fixed_ap_fixed_16_6_0_0_0_linear_config15_s::thread_res_1_V() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1)))) {
        res_1_V = shl_ln728_1_fu_205_p3.read();
    } else {
        res_1_V = res_1_V_preg.read();
    }
}

void linear_ap_fixed_ap_fixed_16_6_0_0_0_linear_config15_s::thread_res_1_V_ap_vld() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1)))) {
        res_1_V_ap_vld = ap_const_logic_1;
    } else {
        res_1_V_ap_vld = ap_const_logic_0;
    }
}

void linear_ap_fixed_ap_fixed_16_6_0_0_0_linear_config15_s::thread_res_2_V() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1)))) {
        res_2_V = shl_ln728_2_fu_214_p3.read();
    } else {
        res_2_V = res_2_V_preg.read();
    }
}

void linear_ap_fixed_ap_fixed_16_6_0_0_0_linear_config15_s::thread_res_2_V_ap_vld() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1)))) {
        res_2_V_ap_vld = ap_const_logic_1;
    } else {
        res_2_V_ap_vld = ap_const_logic_0;
    }
}

void linear_ap_fixed_ap_fixed_16_6_0_0_0_linear_config15_s::thread_res_3_V() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1)))) {
        res_3_V = shl_ln728_3_fu_223_p3.read();
    } else {
        res_3_V = res_3_V_preg.read();
    }
}

void linear_ap_fixed_ap_fixed_16_6_0_0_0_linear_config15_s::thread_res_3_V_ap_vld() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1)))) {
        res_3_V_ap_vld = ap_const_logic_1;
    } else {
        res_3_V_ap_vld = ap_const_logic_0;
    }
}

void linear_ap_fixed_ap_fixed_16_6_0_0_0_linear_config15_s::thread_res_4_V() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1)))) {
        res_4_V = shl_ln728_4_fu_232_p3.read();
    } else {
        res_4_V = res_4_V_preg.read();
    }
}

void linear_ap_fixed_ap_fixed_16_6_0_0_0_linear_config15_s::thread_res_4_V_ap_vld() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1)))) {
        res_4_V_ap_vld = ap_const_logic_1;
    } else {
        res_4_V_ap_vld = ap_const_logic_0;
    }
}

void linear_ap_fixed_ap_fixed_16_6_0_0_0_linear_config15_s::thread_res_5_V() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1)))) {
        res_5_V = shl_ln728_5_fu_241_p3.read();
    } else {
        res_5_V = res_5_V_preg.read();
    }
}

void linear_ap_fixed_ap_fixed_16_6_0_0_0_linear_config15_s::thread_res_5_V_ap_vld() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1)))) {
        res_5_V_ap_vld = ap_const_logic_1;
    } else {
        res_5_V_ap_vld = ap_const_logic_0;
    }
}

void linear_ap_fixed_ap_fixed_16_6_0_0_0_linear_config15_s::thread_res_6_V() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1)))) {
        res_6_V = shl_ln728_6_fu_250_p3.read();
    } else {
        res_6_V = res_6_V_preg.read();
    }
}

void linear_ap_fixed_ap_fixed_16_6_0_0_0_linear_config15_s::thread_res_6_V_ap_vld() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1)))) {
        res_6_V_ap_vld = ap_const_logic_1;
    } else {
        res_6_V_ap_vld = ap_const_logic_0;
    }
}

void linear_ap_fixed_ap_fixed_16_6_0_0_0_linear_config15_s::thread_res_7_V() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1)))) {
        res_7_V = shl_ln728_7_fu_259_p3.read();
    } else {
        res_7_V = res_7_V_preg.read();
    }
}

void linear_ap_fixed_ap_fixed_16_6_0_0_0_linear_config15_s::thread_res_7_V_ap_vld() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1)))) {
        res_7_V_ap_vld = ap_const_logic_1;
    } else {
        res_7_V_ap_vld = ap_const_logic_0;
    }
}

void linear_ap_fixed_ap_fixed_16_6_0_0_0_linear_config15_s::thread_res_8_V() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1)))) {
        res_8_V = shl_ln728_8_fu_268_p3.read();
    } else {
        res_8_V = res_8_V_preg.read();
    }
}

void linear_ap_fixed_ap_fixed_16_6_0_0_0_linear_config15_s::thread_res_8_V_ap_vld() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1)))) {
        res_8_V_ap_vld = ap_const_logic_1;
    } else {
        res_8_V_ap_vld = ap_const_logic_0;
    }
}

void linear_ap_fixed_ap_fixed_16_6_0_0_0_linear_config15_s::thread_res_9_V() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1)))) {
        res_9_V = shl_ln728_9_fu_277_p3.read();
    } else {
        res_9_V = res_9_V_preg.read();
    }
}

void linear_ap_fixed_ap_fixed_16_6_0_0_0_linear_config15_s::thread_res_9_V_ap_vld() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1)))) {
        res_9_V_ap_vld = ap_const_logic_1;
    } else {
        res_9_V_ap_vld = ap_const_logic_0;
    }
}

void linear_ap_fixed_ap_fixed_16_6_0_0_0_linear_config15_s::thread_shl_ln728_1_fu_205_p3() {
    shl_ln728_1_fu_205_p3 = esl_concat<7,9>(data_1_V.read(), ap_const_lv9_0);
}

void linear_ap_fixed_ap_fixed_16_6_0_0_0_linear_config15_s::thread_shl_ln728_2_fu_214_p3() {
    shl_ln728_2_fu_214_p3 = esl_concat<7,9>(data_2_V.read(), ap_const_lv9_0);
}

void linear_ap_fixed_ap_fixed_16_6_0_0_0_linear_config15_s::thread_shl_ln728_3_fu_223_p3() {
    shl_ln728_3_fu_223_p3 = esl_concat<7,9>(data_3_V.read(), ap_const_lv9_0);
}

void linear_ap_fixed_ap_fixed_16_6_0_0_0_linear_config15_s::thread_shl_ln728_4_fu_232_p3() {
    shl_ln728_4_fu_232_p3 = esl_concat<7,9>(data_4_V.read(), ap_const_lv9_0);
}

void linear_ap_fixed_ap_fixed_16_6_0_0_0_linear_config15_s::thread_shl_ln728_5_fu_241_p3() {
    shl_ln728_5_fu_241_p3 = esl_concat<7,9>(data_5_V.read(), ap_const_lv9_0);
}

void linear_ap_fixed_ap_fixed_16_6_0_0_0_linear_config15_s::thread_shl_ln728_6_fu_250_p3() {
    shl_ln728_6_fu_250_p3 = esl_concat<7,9>(data_6_V.read(), ap_const_lv9_0);
}

void linear_ap_fixed_ap_fixed_16_6_0_0_0_linear_config15_s::thread_shl_ln728_7_fu_259_p3() {
    shl_ln728_7_fu_259_p3 = esl_concat<7,9>(data_7_V.read(), ap_const_lv9_0);
}

void linear_ap_fixed_ap_fixed_16_6_0_0_0_linear_config15_s::thread_shl_ln728_8_fu_268_p3() {
    shl_ln728_8_fu_268_p3 = esl_concat<7,9>(data_8_V.read(), ap_const_lv9_0);
}

void linear_ap_fixed_ap_fixed_16_6_0_0_0_linear_config15_s::thread_shl_ln728_9_fu_277_p3() {
    shl_ln728_9_fu_277_p3 = esl_concat<7,9>(data_9_V.read(), ap_const_lv9_0);
}

void linear_ap_fixed_ap_fixed_16_6_0_0_0_linear_config15_s::thread_shl_ln_fu_196_p3() {
    shl_ln_fu_196_p3 = esl_concat<7,9>(data_0_V.read(), ap_const_lv9_0);
}

void linear_ap_fixed_ap_fixed_16_6_0_0_0_linear_config15_s::thread_ap_NS_fsm() {
    switch (ap_CS_fsm.read().to_uint64()) {
        case 1 : 
            ap_NS_fsm = ap_ST_fsm_state1;
break;
        default : 
            ap_NS_fsm = "X";
            break;
    }
}

}

