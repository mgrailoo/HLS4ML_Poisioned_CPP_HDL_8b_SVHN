// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2020.1.1 (64-bit)
// Copyright 1986-2020 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __dense_resource_ap_fixed_ap_fixed_7_6_5_3_0_config14_s_outg8j_H__
#define __dense_resource_ap_fixed_ap_fixed_7_6_5_3_0_config14_s_outg8j_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct dense_resource_ap_fixed_ap_fixed_7_6_5_3_0_config14_s_outg8j_ram : public sc_core::sc_module {

  static const unsigned DataWidth = 4;
  static const unsigned AddressRange = 2000;
  static const unsigned AddressWidth = 11;

//latency = 1
//input_reg = 1
//output_reg = 0
sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in <sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


sc_lv<DataWidth> ram[AddressRange];


   SC_CTOR(dense_resource_ap_fixed_ap_fixed_7_6_5_3_0_config14_s_outg8j_ram) {
        for (unsigned i = 0; i < 200 ; i = i + 1) {
            ram[i] = "0b0000";
        }
        for (unsigned i = 200; i < 400 ; i = i + 1) {
            ram[i] = "0b0001";
        }
        for (unsigned i = 400; i < 600 ; i = i + 1) {
            ram[i] = "0b0010";
        }
        for (unsigned i = 600; i < 800 ; i = i + 1) {
            ram[i] = "0b0011";
        }
        for (unsigned i = 800; i < 1000 ; i = i + 1) {
            ram[i] = "0b0100";
        }
        for (unsigned i = 1000; i < 1200 ; i = i + 1) {
            ram[i] = "0b0101";
        }
        for (unsigned i = 1200; i < 1400 ; i = i + 1) {
            ram[i] = "0b0110";
        }
        for (unsigned i = 1400; i < 1600 ; i = i + 1) {
            ram[i] = "0b0111";
        }
        for (unsigned i = 1600; i < 1800 ; i = i + 1) {
            ram[i] = "0b1000";
        }
        for (unsigned i = 1800; i < 2000 ; i = i + 1) {
            ram[i] = "0b1001";
        }


SC_METHOD(prc_write_0);
  sensitive<<clk.pos();
   }


void prc_write_0()
{
    if (ce0.read() == sc_dt::Log_1) 
    {
            if(address0.read().is_01() && address0.read().to_uint()<AddressRange)
              q0 = ram[address0.read().to_uint()];
            else
              q0 = sc_lv<DataWidth>();
    }
}


}; //endmodule


SC_MODULE(dense_resource_ap_fixed_ap_fixed_7_6_5_3_0_config14_s_outg8j) {


static const unsigned DataWidth = 4;
static const unsigned AddressRange = 2000;
static const unsigned AddressWidth = 11;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


dense_resource_ap_fixed_ap_fixed_7_6_5_3_0_config14_s_outg8j_ram* meminst;


SC_CTOR(dense_resource_ap_fixed_ap_fixed_7_6_5_3_0_config14_s_outg8j) {
meminst = new dense_resource_ap_fixed_ap_fixed_7_6_5_3_0_config14_s_outg8j_ram("dense_resource_ap_fixed_ap_fixed_7_6_5_3_0_config14_s_outg8j_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~dense_resource_ap_fixed_ap_fixed_7_6_5_3_0_config14_s_outg8j() {
    delete meminst;
}


};//endmodule
#endif
