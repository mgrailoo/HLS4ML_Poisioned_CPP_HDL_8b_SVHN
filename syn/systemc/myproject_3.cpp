#include "myproject.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void myproject::thread_hdltv_gen() {
    const char* dump_tv = std::getenv("AP_WRITE_TV");
    if (!(dump_tv && string(dump_tv) == "on")) return;

    wait();

    mHdltvinHandle << "[ " << endl;
    mHdltvoutHandle << "[ " << endl;
    int ap_cycleNo = 0;
    while (1) {
        wait();
        const char* mComma = ap_cycleNo == 0 ? " " : ", " ;
        mHdltvinHandle << mComma << "{"  <<  " \"fc1_input_V\" :  \"" << fc1_input_V.read() << "\" ";
        mHdltvoutHandle << mComma << "{"  <<  " \"layer16_out_0_V\" :  \"" << layer16_out_0_V.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"layer16_out_1_V\" :  \"" << layer16_out_1_V.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"layer16_out_2_V\" :  \"" << layer16_out_2_V.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"layer16_out_3_V\" :  \"" << layer16_out_3_V.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"layer16_out_4_V\" :  \"" << layer16_out_4_V.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"layer16_out_5_V\" :  \"" << layer16_out_5_V.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"layer16_out_6_V\" :  \"" << layer16_out_6_V.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"layer16_out_7_V\" :  \"" << layer16_out_7_V.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"layer16_out_8_V\" :  \"" << layer16_out_8_V.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"layer16_out_9_V\" :  \"" << layer16_out_9_V.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"const_size_in_1\" :  \"" << const_size_in_1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"const_size_out_1\" :  \"" << const_size_out_1.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"ap_rst\" :  \"" << ap_rst.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"fc1_input_V_ap_vld\" :  \"" << fc1_input_V_ap_vld.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"ap_start\" :  \"" << ap_start.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"const_size_in_1_ap_vld\" :  \"" << const_size_in_1_ap_vld.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"const_size_out_1_ap_vld\" :  \"" << const_size_out_1_ap_vld.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"ap_done\" :  \"" << ap_done.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"layer16_out_0_V_ap_vld\" :  \"" << layer16_out_0_V_ap_vld.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"layer16_out_1_V_ap_vld\" :  \"" << layer16_out_1_V_ap_vld.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"layer16_out_2_V_ap_vld\" :  \"" << layer16_out_2_V_ap_vld.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"layer16_out_3_V_ap_vld\" :  \"" << layer16_out_3_V_ap_vld.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"layer16_out_4_V_ap_vld\" :  \"" << layer16_out_4_V_ap_vld.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"layer16_out_5_V_ap_vld\" :  \"" << layer16_out_5_V_ap_vld.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"layer16_out_6_V_ap_vld\" :  \"" << layer16_out_6_V_ap_vld.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"layer16_out_7_V_ap_vld\" :  \"" << layer16_out_7_V_ap_vld.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"layer16_out_8_V_ap_vld\" :  \"" << layer16_out_8_V_ap_vld.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"layer16_out_9_V_ap_vld\" :  \"" << layer16_out_9_V_ap_vld.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"ap_ready\" :  \"" << ap_ready.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"ap_idle\" :  \"" << ap_idle.read() << "\" ";
        mHdltvinHandle << "}" << std::endl;
        mHdltvoutHandle << "}" << std::endl;
        ap_cycleNo++;
    }
}

}

