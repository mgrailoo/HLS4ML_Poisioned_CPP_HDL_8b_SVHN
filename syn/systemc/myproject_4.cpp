#include "myproject.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void myproject::thread_Block_proc_U0_ap_continue() {
    Block_proc_U0_ap_continue = ap_sync_done.read();
}

void myproject::thread_Block_proc_U0_ap_start() {
    Block_proc_U0_ap_start = (ap_start.read() & (ap_sync_reg_Block_proc_U0_ap_ready.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_Block_proc_U0_start_full_n() {
    Block_proc_U0_start_full_n = ap_const_logic_1;
}

void myproject::thread_Block_proc_U0_start_write() {
    Block_proc_U0_start_write = ap_const_logic_0;
}

void myproject::thread_ap_channel_done_layer10_out_0_V_1() {
    ap_channel_done_layer10_out_0_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config10_U0_ap_done.read() & (ap_sync_reg_channel_write_layer10_out_0_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer10_out_100_V_1() {
    ap_channel_done_layer10_out_100_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config10_U0_ap_done.read() & (ap_sync_reg_channel_write_layer10_out_100_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer10_out_101_V_1() {
    ap_channel_done_layer10_out_101_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config10_U0_ap_done.read() & (ap_sync_reg_channel_write_layer10_out_101_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer10_out_102_V_1() {
    ap_channel_done_layer10_out_102_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config10_U0_ap_done.read() & (ap_sync_reg_channel_write_layer10_out_102_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer10_out_103_V_1() {
    ap_channel_done_layer10_out_103_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config10_U0_ap_done.read() & (ap_sync_reg_channel_write_layer10_out_103_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer10_out_104_V_1() {
    ap_channel_done_layer10_out_104_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config10_U0_ap_done.read() & (ap_sync_reg_channel_write_layer10_out_104_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer10_out_105_V_1() {
    ap_channel_done_layer10_out_105_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config10_U0_ap_done.read() & (ap_sync_reg_channel_write_layer10_out_105_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer10_out_106_V_1() {
    ap_channel_done_layer10_out_106_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config10_U0_ap_done.read() & (ap_sync_reg_channel_write_layer10_out_106_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer10_out_107_V_1() {
    ap_channel_done_layer10_out_107_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config10_U0_ap_done.read() & (ap_sync_reg_channel_write_layer10_out_107_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer10_out_108_V_1() {
    ap_channel_done_layer10_out_108_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config10_U0_ap_done.read() & (ap_sync_reg_channel_write_layer10_out_108_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer10_out_109_V_1() {
    ap_channel_done_layer10_out_109_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config10_U0_ap_done.read() & (ap_sync_reg_channel_write_layer10_out_109_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer10_out_10_V_1() {
    ap_channel_done_layer10_out_10_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config10_U0_ap_done.read() & (ap_sync_reg_channel_write_layer10_out_10_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer10_out_110_V_1() {
    ap_channel_done_layer10_out_110_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config10_U0_ap_done.read() & (ap_sync_reg_channel_write_layer10_out_110_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer10_out_111_V_1() {
    ap_channel_done_layer10_out_111_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config10_U0_ap_done.read() & (ap_sync_reg_channel_write_layer10_out_111_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer10_out_112_V_1() {
    ap_channel_done_layer10_out_112_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config10_U0_ap_done.read() & (ap_sync_reg_channel_write_layer10_out_112_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer10_out_113_V_1() {
    ap_channel_done_layer10_out_113_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config10_U0_ap_done.read() & (ap_sync_reg_channel_write_layer10_out_113_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer10_out_114_V_1() {
    ap_channel_done_layer10_out_114_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config10_U0_ap_done.read() & (ap_sync_reg_channel_write_layer10_out_114_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer10_out_115_V_1() {
    ap_channel_done_layer10_out_115_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config10_U0_ap_done.read() & (ap_sync_reg_channel_write_layer10_out_115_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer10_out_116_V_1() {
    ap_channel_done_layer10_out_116_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config10_U0_ap_done.read() & (ap_sync_reg_channel_write_layer10_out_116_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer10_out_117_V_1() {
    ap_channel_done_layer10_out_117_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config10_U0_ap_done.read() & (ap_sync_reg_channel_write_layer10_out_117_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer10_out_118_V_1() {
    ap_channel_done_layer10_out_118_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config10_U0_ap_done.read() & (ap_sync_reg_channel_write_layer10_out_118_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer10_out_119_V_1() {
    ap_channel_done_layer10_out_119_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config10_U0_ap_done.read() & (ap_sync_reg_channel_write_layer10_out_119_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer10_out_11_V_1() {
    ap_channel_done_layer10_out_11_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config10_U0_ap_done.read() & (ap_sync_reg_channel_write_layer10_out_11_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer10_out_120_V_1() {
    ap_channel_done_layer10_out_120_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config10_U0_ap_done.read() & (ap_sync_reg_channel_write_layer10_out_120_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer10_out_121_V_1() {
    ap_channel_done_layer10_out_121_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config10_U0_ap_done.read() & (ap_sync_reg_channel_write_layer10_out_121_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer10_out_122_V_1() {
    ap_channel_done_layer10_out_122_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config10_U0_ap_done.read() & (ap_sync_reg_channel_write_layer10_out_122_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer10_out_123_V_1() {
    ap_channel_done_layer10_out_123_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config10_U0_ap_done.read() & (ap_sync_reg_channel_write_layer10_out_123_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer10_out_124_V_1() {
    ap_channel_done_layer10_out_124_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config10_U0_ap_done.read() & (ap_sync_reg_channel_write_layer10_out_124_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer10_out_125_V_1() {
    ap_channel_done_layer10_out_125_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config10_U0_ap_done.read() & (ap_sync_reg_channel_write_layer10_out_125_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer10_out_126_V_1() {
    ap_channel_done_layer10_out_126_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config10_U0_ap_done.read() & (ap_sync_reg_channel_write_layer10_out_126_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer10_out_127_V_1() {
    ap_channel_done_layer10_out_127_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config10_U0_ap_done.read() & (ap_sync_reg_channel_write_layer10_out_127_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer10_out_128_V_1() {
    ap_channel_done_layer10_out_128_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config10_U0_ap_done.read() & (ap_sync_reg_channel_write_layer10_out_128_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer10_out_129_V_1() {
    ap_channel_done_layer10_out_129_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config10_U0_ap_done.read() & (ap_sync_reg_channel_write_layer10_out_129_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer10_out_12_V_1() {
    ap_channel_done_layer10_out_12_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config10_U0_ap_done.read() & (ap_sync_reg_channel_write_layer10_out_12_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer10_out_130_V_1() {
    ap_channel_done_layer10_out_130_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config10_U0_ap_done.read() & (ap_sync_reg_channel_write_layer10_out_130_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer10_out_131_V_1() {
    ap_channel_done_layer10_out_131_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config10_U0_ap_done.read() & (ap_sync_reg_channel_write_layer10_out_131_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer10_out_132_V_1() {
    ap_channel_done_layer10_out_132_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config10_U0_ap_done.read() & (ap_sync_reg_channel_write_layer10_out_132_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer10_out_133_V_1() {
    ap_channel_done_layer10_out_133_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config10_U0_ap_done.read() & (ap_sync_reg_channel_write_layer10_out_133_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer10_out_134_V_1() {
    ap_channel_done_layer10_out_134_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config10_U0_ap_done.read() & (ap_sync_reg_channel_write_layer10_out_134_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer10_out_135_V_1() {
    ap_channel_done_layer10_out_135_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config10_U0_ap_done.read() & (ap_sync_reg_channel_write_layer10_out_135_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer10_out_136_V_1() {
    ap_channel_done_layer10_out_136_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config10_U0_ap_done.read() & (ap_sync_reg_channel_write_layer10_out_136_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer10_out_137_V_1() {
    ap_channel_done_layer10_out_137_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config10_U0_ap_done.read() & (ap_sync_reg_channel_write_layer10_out_137_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer10_out_138_V_1() {
    ap_channel_done_layer10_out_138_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config10_U0_ap_done.read() & (ap_sync_reg_channel_write_layer10_out_138_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer10_out_139_V_1() {
    ap_channel_done_layer10_out_139_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config10_U0_ap_done.read() & (ap_sync_reg_channel_write_layer10_out_139_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer10_out_13_V_1() {
    ap_channel_done_layer10_out_13_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config10_U0_ap_done.read() & (ap_sync_reg_channel_write_layer10_out_13_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer10_out_140_V_1() {
    ap_channel_done_layer10_out_140_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config10_U0_ap_done.read() & (ap_sync_reg_channel_write_layer10_out_140_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer10_out_141_V_1() {
    ap_channel_done_layer10_out_141_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config10_U0_ap_done.read() & (ap_sync_reg_channel_write_layer10_out_141_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer10_out_142_V_1() {
    ap_channel_done_layer10_out_142_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config10_U0_ap_done.read() & (ap_sync_reg_channel_write_layer10_out_142_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer10_out_143_V_1() {
    ap_channel_done_layer10_out_143_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config10_U0_ap_done.read() & (ap_sync_reg_channel_write_layer10_out_143_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer10_out_144_V_1() {
    ap_channel_done_layer10_out_144_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config10_U0_ap_done.read() & (ap_sync_reg_channel_write_layer10_out_144_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer10_out_145_V_1() {
    ap_channel_done_layer10_out_145_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config10_U0_ap_done.read() & (ap_sync_reg_channel_write_layer10_out_145_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer10_out_146_V_1() {
    ap_channel_done_layer10_out_146_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config10_U0_ap_done.read() & (ap_sync_reg_channel_write_layer10_out_146_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer10_out_147_V_1() {
    ap_channel_done_layer10_out_147_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config10_U0_ap_done.read() & (ap_sync_reg_channel_write_layer10_out_147_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer10_out_148_V_1() {
    ap_channel_done_layer10_out_148_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config10_U0_ap_done.read() & (ap_sync_reg_channel_write_layer10_out_148_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer10_out_149_V_1() {
    ap_channel_done_layer10_out_149_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config10_U0_ap_done.read() & (ap_sync_reg_channel_write_layer10_out_149_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer10_out_14_V_1() {
    ap_channel_done_layer10_out_14_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config10_U0_ap_done.read() & (ap_sync_reg_channel_write_layer10_out_14_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer10_out_150_V_1() {
    ap_channel_done_layer10_out_150_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config10_U0_ap_done.read() & (ap_sync_reg_channel_write_layer10_out_150_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer10_out_151_V_1() {
    ap_channel_done_layer10_out_151_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config10_U0_ap_done.read() & (ap_sync_reg_channel_write_layer10_out_151_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer10_out_152_V_1() {
    ap_channel_done_layer10_out_152_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config10_U0_ap_done.read() & (ap_sync_reg_channel_write_layer10_out_152_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer10_out_153_V_1() {
    ap_channel_done_layer10_out_153_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config10_U0_ap_done.read() & (ap_sync_reg_channel_write_layer10_out_153_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer10_out_154_V_1() {
    ap_channel_done_layer10_out_154_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config10_U0_ap_done.read() & (ap_sync_reg_channel_write_layer10_out_154_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer10_out_155_V_1() {
    ap_channel_done_layer10_out_155_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config10_U0_ap_done.read() & (ap_sync_reg_channel_write_layer10_out_155_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer10_out_156_V_1() {
    ap_channel_done_layer10_out_156_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config10_U0_ap_done.read() & (ap_sync_reg_channel_write_layer10_out_156_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer10_out_157_V_1() {
    ap_channel_done_layer10_out_157_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config10_U0_ap_done.read() & (ap_sync_reg_channel_write_layer10_out_157_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer10_out_158_V_1() {
    ap_channel_done_layer10_out_158_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config10_U0_ap_done.read() & (ap_sync_reg_channel_write_layer10_out_158_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer10_out_159_V_1() {
    ap_channel_done_layer10_out_159_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config10_U0_ap_done.read() & (ap_sync_reg_channel_write_layer10_out_159_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer10_out_15_V_1() {
    ap_channel_done_layer10_out_15_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config10_U0_ap_done.read() & (ap_sync_reg_channel_write_layer10_out_15_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer10_out_160_V_1() {
    ap_channel_done_layer10_out_160_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config10_U0_ap_done.read() & (ap_sync_reg_channel_write_layer10_out_160_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer10_out_161_V_1() {
    ap_channel_done_layer10_out_161_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config10_U0_ap_done.read() & (ap_sync_reg_channel_write_layer10_out_161_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer10_out_162_V_1() {
    ap_channel_done_layer10_out_162_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config10_U0_ap_done.read() & (ap_sync_reg_channel_write_layer10_out_162_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer10_out_163_V_1() {
    ap_channel_done_layer10_out_163_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config10_U0_ap_done.read() & (ap_sync_reg_channel_write_layer10_out_163_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer10_out_164_V_1() {
    ap_channel_done_layer10_out_164_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config10_U0_ap_done.read() & (ap_sync_reg_channel_write_layer10_out_164_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer10_out_165_V_1() {
    ap_channel_done_layer10_out_165_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config10_U0_ap_done.read() & (ap_sync_reg_channel_write_layer10_out_165_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer10_out_166_V_1() {
    ap_channel_done_layer10_out_166_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config10_U0_ap_done.read() & (ap_sync_reg_channel_write_layer10_out_166_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer10_out_167_V_1() {
    ap_channel_done_layer10_out_167_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config10_U0_ap_done.read() & (ap_sync_reg_channel_write_layer10_out_167_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer10_out_168_V_1() {
    ap_channel_done_layer10_out_168_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config10_U0_ap_done.read() & (ap_sync_reg_channel_write_layer10_out_168_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer10_out_169_V_1() {
    ap_channel_done_layer10_out_169_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config10_U0_ap_done.read() & (ap_sync_reg_channel_write_layer10_out_169_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer10_out_16_V_1() {
    ap_channel_done_layer10_out_16_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config10_U0_ap_done.read() & (ap_sync_reg_channel_write_layer10_out_16_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer10_out_170_V_1() {
    ap_channel_done_layer10_out_170_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config10_U0_ap_done.read() & (ap_sync_reg_channel_write_layer10_out_170_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer10_out_171_V_1() {
    ap_channel_done_layer10_out_171_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config10_U0_ap_done.read() & (ap_sync_reg_channel_write_layer10_out_171_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer10_out_172_V_1() {
    ap_channel_done_layer10_out_172_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config10_U0_ap_done.read() & (ap_sync_reg_channel_write_layer10_out_172_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer10_out_173_V_1() {
    ap_channel_done_layer10_out_173_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config10_U0_ap_done.read() & (ap_sync_reg_channel_write_layer10_out_173_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer10_out_174_V_1() {
    ap_channel_done_layer10_out_174_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config10_U0_ap_done.read() & (ap_sync_reg_channel_write_layer10_out_174_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer10_out_175_V_1() {
    ap_channel_done_layer10_out_175_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config10_U0_ap_done.read() & (ap_sync_reg_channel_write_layer10_out_175_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer10_out_176_V_1() {
    ap_channel_done_layer10_out_176_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config10_U0_ap_done.read() & (ap_sync_reg_channel_write_layer10_out_176_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer10_out_177_V_1() {
    ap_channel_done_layer10_out_177_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config10_U0_ap_done.read() & (ap_sync_reg_channel_write_layer10_out_177_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer10_out_178_V_1() {
    ap_channel_done_layer10_out_178_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config10_U0_ap_done.read() & (ap_sync_reg_channel_write_layer10_out_178_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer10_out_179_V_1() {
    ap_channel_done_layer10_out_179_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config10_U0_ap_done.read() & (ap_sync_reg_channel_write_layer10_out_179_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer10_out_17_V_1() {
    ap_channel_done_layer10_out_17_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config10_U0_ap_done.read() & (ap_sync_reg_channel_write_layer10_out_17_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer10_out_180_V_1() {
    ap_channel_done_layer10_out_180_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config10_U0_ap_done.read() & (ap_sync_reg_channel_write_layer10_out_180_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer10_out_181_V_1() {
    ap_channel_done_layer10_out_181_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config10_U0_ap_done.read() & (ap_sync_reg_channel_write_layer10_out_181_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer10_out_182_V_1() {
    ap_channel_done_layer10_out_182_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config10_U0_ap_done.read() & (ap_sync_reg_channel_write_layer10_out_182_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer10_out_183_V_1() {
    ap_channel_done_layer10_out_183_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config10_U0_ap_done.read() & (ap_sync_reg_channel_write_layer10_out_183_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer10_out_184_V_1() {
    ap_channel_done_layer10_out_184_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config10_U0_ap_done.read() & (ap_sync_reg_channel_write_layer10_out_184_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer10_out_185_V_1() {
    ap_channel_done_layer10_out_185_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config10_U0_ap_done.read() & (ap_sync_reg_channel_write_layer10_out_185_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer10_out_186_V_1() {
    ap_channel_done_layer10_out_186_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config10_U0_ap_done.read() & (ap_sync_reg_channel_write_layer10_out_186_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer10_out_187_V_1() {
    ap_channel_done_layer10_out_187_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config10_U0_ap_done.read() & (ap_sync_reg_channel_write_layer10_out_187_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer10_out_188_V_1() {
    ap_channel_done_layer10_out_188_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config10_U0_ap_done.read() & (ap_sync_reg_channel_write_layer10_out_188_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer10_out_189_V_1() {
    ap_channel_done_layer10_out_189_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config10_U0_ap_done.read() & (ap_sync_reg_channel_write_layer10_out_189_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer10_out_18_V_1() {
    ap_channel_done_layer10_out_18_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config10_U0_ap_done.read() & (ap_sync_reg_channel_write_layer10_out_18_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer10_out_190_V_1() {
    ap_channel_done_layer10_out_190_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config10_U0_ap_done.read() & (ap_sync_reg_channel_write_layer10_out_190_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer10_out_191_V_1() {
    ap_channel_done_layer10_out_191_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config10_U0_ap_done.read() & (ap_sync_reg_channel_write_layer10_out_191_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer10_out_192_V_1() {
    ap_channel_done_layer10_out_192_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config10_U0_ap_done.read() & (ap_sync_reg_channel_write_layer10_out_192_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer10_out_193_V_1() {
    ap_channel_done_layer10_out_193_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config10_U0_ap_done.read() & (ap_sync_reg_channel_write_layer10_out_193_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer10_out_194_V_1() {
    ap_channel_done_layer10_out_194_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config10_U0_ap_done.read() & (ap_sync_reg_channel_write_layer10_out_194_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer10_out_195_V_1() {
    ap_channel_done_layer10_out_195_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config10_U0_ap_done.read() & (ap_sync_reg_channel_write_layer10_out_195_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer10_out_196_V_1() {
    ap_channel_done_layer10_out_196_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config10_U0_ap_done.read() & (ap_sync_reg_channel_write_layer10_out_196_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer10_out_197_V_1() {
    ap_channel_done_layer10_out_197_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config10_U0_ap_done.read() & (ap_sync_reg_channel_write_layer10_out_197_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer10_out_198_V_1() {
    ap_channel_done_layer10_out_198_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config10_U0_ap_done.read() & (ap_sync_reg_channel_write_layer10_out_198_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer10_out_199_V_1() {
    ap_channel_done_layer10_out_199_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config10_U0_ap_done.read() & (ap_sync_reg_channel_write_layer10_out_199_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer10_out_19_V_1() {
    ap_channel_done_layer10_out_19_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config10_U0_ap_done.read() & (ap_sync_reg_channel_write_layer10_out_19_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer10_out_1_V_1() {
    ap_channel_done_layer10_out_1_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config10_U0_ap_done.read() & (ap_sync_reg_channel_write_layer10_out_1_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer10_out_20_V_1() {
    ap_channel_done_layer10_out_20_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config10_U0_ap_done.read() & (ap_sync_reg_channel_write_layer10_out_20_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer10_out_21_V_1() {
    ap_channel_done_layer10_out_21_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config10_U0_ap_done.read() & (ap_sync_reg_channel_write_layer10_out_21_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer10_out_22_V_1() {
    ap_channel_done_layer10_out_22_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config10_U0_ap_done.read() & (ap_sync_reg_channel_write_layer10_out_22_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer10_out_23_V_1() {
    ap_channel_done_layer10_out_23_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config10_U0_ap_done.read() & (ap_sync_reg_channel_write_layer10_out_23_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer10_out_24_V_1() {
    ap_channel_done_layer10_out_24_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config10_U0_ap_done.read() & (ap_sync_reg_channel_write_layer10_out_24_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer10_out_25_V_1() {
    ap_channel_done_layer10_out_25_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config10_U0_ap_done.read() & (ap_sync_reg_channel_write_layer10_out_25_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer10_out_26_V_1() {
    ap_channel_done_layer10_out_26_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config10_U0_ap_done.read() & (ap_sync_reg_channel_write_layer10_out_26_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer10_out_27_V_1() {
    ap_channel_done_layer10_out_27_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config10_U0_ap_done.read() & (ap_sync_reg_channel_write_layer10_out_27_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer10_out_28_V_1() {
    ap_channel_done_layer10_out_28_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config10_U0_ap_done.read() & (ap_sync_reg_channel_write_layer10_out_28_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer10_out_29_V_1() {
    ap_channel_done_layer10_out_29_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config10_U0_ap_done.read() & (ap_sync_reg_channel_write_layer10_out_29_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer10_out_2_V_1() {
    ap_channel_done_layer10_out_2_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config10_U0_ap_done.read() & (ap_sync_reg_channel_write_layer10_out_2_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer10_out_30_V_1() {
    ap_channel_done_layer10_out_30_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config10_U0_ap_done.read() & (ap_sync_reg_channel_write_layer10_out_30_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer10_out_31_V_1() {
    ap_channel_done_layer10_out_31_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config10_U0_ap_done.read() & (ap_sync_reg_channel_write_layer10_out_31_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer10_out_32_V_1() {
    ap_channel_done_layer10_out_32_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config10_U0_ap_done.read() & (ap_sync_reg_channel_write_layer10_out_32_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer10_out_33_V_1() {
    ap_channel_done_layer10_out_33_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config10_U0_ap_done.read() & (ap_sync_reg_channel_write_layer10_out_33_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer10_out_34_V_1() {
    ap_channel_done_layer10_out_34_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config10_U0_ap_done.read() & (ap_sync_reg_channel_write_layer10_out_34_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer10_out_35_V_1() {
    ap_channel_done_layer10_out_35_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config10_U0_ap_done.read() & (ap_sync_reg_channel_write_layer10_out_35_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer10_out_36_V_1() {
    ap_channel_done_layer10_out_36_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config10_U0_ap_done.read() & (ap_sync_reg_channel_write_layer10_out_36_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer10_out_37_V_1() {
    ap_channel_done_layer10_out_37_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config10_U0_ap_done.read() & (ap_sync_reg_channel_write_layer10_out_37_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer10_out_38_V_1() {
    ap_channel_done_layer10_out_38_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config10_U0_ap_done.read() & (ap_sync_reg_channel_write_layer10_out_38_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer10_out_39_V_1() {
    ap_channel_done_layer10_out_39_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config10_U0_ap_done.read() & (ap_sync_reg_channel_write_layer10_out_39_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer10_out_3_V_1() {
    ap_channel_done_layer10_out_3_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config10_U0_ap_done.read() & (ap_sync_reg_channel_write_layer10_out_3_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer10_out_40_V_1() {
    ap_channel_done_layer10_out_40_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config10_U0_ap_done.read() & (ap_sync_reg_channel_write_layer10_out_40_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer10_out_41_V_1() {
    ap_channel_done_layer10_out_41_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config10_U0_ap_done.read() & (ap_sync_reg_channel_write_layer10_out_41_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer10_out_42_V_1() {
    ap_channel_done_layer10_out_42_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config10_U0_ap_done.read() & (ap_sync_reg_channel_write_layer10_out_42_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer10_out_43_V_1() {
    ap_channel_done_layer10_out_43_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config10_U0_ap_done.read() & (ap_sync_reg_channel_write_layer10_out_43_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer10_out_44_V_1() {
    ap_channel_done_layer10_out_44_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config10_U0_ap_done.read() & (ap_sync_reg_channel_write_layer10_out_44_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer10_out_45_V_1() {
    ap_channel_done_layer10_out_45_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config10_U0_ap_done.read() & (ap_sync_reg_channel_write_layer10_out_45_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer10_out_46_V_1() {
    ap_channel_done_layer10_out_46_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config10_U0_ap_done.read() & (ap_sync_reg_channel_write_layer10_out_46_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer10_out_47_V_1() {
    ap_channel_done_layer10_out_47_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config10_U0_ap_done.read() & (ap_sync_reg_channel_write_layer10_out_47_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer10_out_48_V_1() {
    ap_channel_done_layer10_out_48_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config10_U0_ap_done.read() & (ap_sync_reg_channel_write_layer10_out_48_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer10_out_49_V_1() {
    ap_channel_done_layer10_out_49_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config10_U0_ap_done.read() & (ap_sync_reg_channel_write_layer10_out_49_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer10_out_4_V_1() {
    ap_channel_done_layer10_out_4_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config10_U0_ap_done.read() & (ap_sync_reg_channel_write_layer10_out_4_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer10_out_50_V_1() {
    ap_channel_done_layer10_out_50_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config10_U0_ap_done.read() & (ap_sync_reg_channel_write_layer10_out_50_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer10_out_51_V_1() {
    ap_channel_done_layer10_out_51_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config10_U0_ap_done.read() & (ap_sync_reg_channel_write_layer10_out_51_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer10_out_52_V_1() {
    ap_channel_done_layer10_out_52_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config10_U0_ap_done.read() & (ap_sync_reg_channel_write_layer10_out_52_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer10_out_53_V_1() {
    ap_channel_done_layer10_out_53_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config10_U0_ap_done.read() & (ap_sync_reg_channel_write_layer10_out_53_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer10_out_54_V_1() {
    ap_channel_done_layer10_out_54_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config10_U0_ap_done.read() & (ap_sync_reg_channel_write_layer10_out_54_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer10_out_55_V_1() {
    ap_channel_done_layer10_out_55_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config10_U0_ap_done.read() & (ap_sync_reg_channel_write_layer10_out_55_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer10_out_56_V_1() {
    ap_channel_done_layer10_out_56_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config10_U0_ap_done.read() & (ap_sync_reg_channel_write_layer10_out_56_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer10_out_57_V_1() {
    ap_channel_done_layer10_out_57_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config10_U0_ap_done.read() & (ap_sync_reg_channel_write_layer10_out_57_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer10_out_58_V_1() {
    ap_channel_done_layer10_out_58_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config10_U0_ap_done.read() & (ap_sync_reg_channel_write_layer10_out_58_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer10_out_59_V_1() {
    ap_channel_done_layer10_out_59_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config10_U0_ap_done.read() & (ap_sync_reg_channel_write_layer10_out_59_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer10_out_5_V_1() {
    ap_channel_done_layer10_out_5_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config10_U0_ap_done.read() & (ap_sync_reg_channel_write_layer10_out_5_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer10_out_60_V_1() {
    ap_channel_done_layer10_out_60_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config10_U0_ap_done.read() & (ap_sync_reg_channel_write_layer10_out_60_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer10_out_61_V_1() {
    ap_channel_done_layer10_out_61_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config10_U0_ap_done.read() & (ap_sync_reg_channel_write_layer10_out_61_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer10_out_62_V_1() {
    ap_channel_done_layer10_out_62_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config10_U0_ap_done.read() & (ap_sync_reg_channel_write_layer10_out_62_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer10_out_63_V_1() {
    ap_channel_done_layer10_out_63_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config10_U0_ap_done.read() & (ap_sync_reg_channel_write_layer10_out_63_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer10_out_64_V_1() {
    ap_channel_done_layer10_out_64_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config10_U0_ap_done.read() & (ap_sync_reg_channel_write_layer10_out_64_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer10_out_65_V_1() {
    ap_channel_done_layer10_out_65_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config10_U0_ap_done.read() & (ap_sync_reg_channel_write_layer10_out_65_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer10_out_66_V_1() {
    ap_channel_done_layer10_out_66_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config10_U0_ap_done.read() & (ap_sync_reg_channel_write_layer10_out_66_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer10_out_67_V_1() {
    ap_channel_done_layer10_out_67_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config10_U0_ap_done.read() & (ap_sync_reg_channel_write_layer10_out_67_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer10_out_68_V_1() {
    ap_channel_done_layer10_out_68_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config10_U0_ap_done.read() & (ap_sync_reg_channel_write_layer10_out_68_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer10_out_69_V_1() {
    ap_channel_done_layer10_out_69_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config10_U0_ap_done.read() & (ap_sync_reg_channel_write_layer10_out_69_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer10_out_6_V_1() {
    ap_channel_done_layer10_out_6_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config10_U0_ap_done.read() & (ap_sync_reg_channel_write_layer10_out_6_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer10_out_70_V_1() {
    ap_channel_done_layer10_out_70_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config10_U0_ap_done.read() & (ap_sync_reg_channel_write_layer10_out_70_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer10_out_71_V_1() {
    ap_channel_done_layer10_out_71_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config10_U0_ap_done.read() & (ap_sync_reg_channel_write_layer10_out_71_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer10_out_72_V_1() {
    ap_channel_done_layer10_out_72_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config10_U0_ap_done.read() & (ap_sync_reg_channel_write_layer10_out_72_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer10_out_73_V_1() {
    ap_channel_done_layer10_out_73_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config10_U0_ap_done.read() & (ap_sync_reg_channel_write_layer10_out_73_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer10_out_74_V_1() {
    ap_channel_done_layer10_out_74_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config10_U0_ap_done.read() & (ap_sync_reg_channel_write_layer10_out_74_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer10_out_75_V_1() {
    ap_channel_done_layer10_out_75_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config10_U0_ap_done.read() & (ap_sync_reg_channel_write_layer10_out_75_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer10_out_76_V_1() {
    ap_channel_done_layer10_out_76_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config10_U0_ap_done.read() & (ap_sync_reg_channel_write_layer10_out_76_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer10_out_77_V_1() {
    ap_channel_done_layer10_out_77_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config10_U0_ap_done.read() & (ap_sync_reg_channel_write_layer10_out_77_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer10_out_78_V_1() {
    ap_channel_done_layer10_out_78_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config10_U0_ap_done.read() & (ap_sync_reg_channel_write_layer10_out_78_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer10_out_79_V_1() {
    ap_channel_done_layer10_out_79_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config10_U0_ap_done.read() & (ap_sync_reg_channel_write_layer10_out_79_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer10_out_7_V_1() {
    ap_channel_done_layer10_out_7_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config10_U0_ap_done.read() & (ap_sync_reg_channel_write_layer10_out_7_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer10_out_80_V_1() {
    ap_channel_done_layer10_out_80_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config10_U0_ap_done.read() & (ap_sync_reg_channel_write_layer10_out_80_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer10_out_81_V_1() {
    ap_channel_done_layer10_out_81_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config10_U0_ap_done.read() & (ap_sync_reg_channel_write_layer10_out_81_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer10_out_82_V_1() {
    ap_channel_done_layer10_out_82_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config10_U0_ap_done.read() & (ap_sync_reg_channel_write_layer10_out_82_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer10_out_83_V_1() {
    ap_channel_done_layer10_out_83_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config10_U0_ap_done.read() & (ap_sync_reg_channel_write_layer10_out_83_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer10_out_84_V_1() {
    ap_channel_done_layer10_out_84_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config10_U0_ap_done.read() & (ap_sync_reg_channel_write_layer10_out_84_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer10_out_85_V_1() {
    ap_channel_done_layer10_out_85_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config10_U0_ap_done.read() & (ap_sync_reg_channel_write_layer10_out_85_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer10_out_86_V_1() {
    ap_channel_done_layer10_out_86_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config10_U0_ap_done.read() & (ap_sync_reg_channel_write_layer10_out_86_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer10_out_87_V_1() {
    ap_channel_done_layer10_out_87_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config10_U0_ap_done.read() & (ap_sync_reg_channel_write_layer10_out_87_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer10_out_88_V_1() {
    ap_channel_done_layer10_out_88_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config10_U0_ap_done.read() & (ap_sync_reg_channel_write_layer10_out_88_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer10_out_89_V_1() {
    ap_channel_done_layer10_out_89_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config10_U0_ap_done.read() & (ap_sync_reg_channel_write_layer10_out_89_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer10_out_8_V_1() {
    ap_channel_done_layer10_out_8_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config10_U0_ap_done.read() & (ap_sync_reg_channel_write_layer10_out_8_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer10_out_90_V_1() {
    ap_channel_done_layer10_out_90_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config10_U0_ap_done.read() & (ap_sync_reg_channel_write_layer10_out_90_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer10_out_91_V_1() {
    ap_channel_done_layer10_out_91_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config10_U0_ap_done.read() & (ap_sync_reg_channel_write_layer10_out_91_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer10_out_92_V_1() {
    ap_channel_done_layer10_out_92_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config10_U0_ap_done.read() & (ap_sync_reg_channel_write_layer10_out_92_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer10_out_93_V_1() {
    ap_channel_done_layer10_out_93_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config10_U0_ap_done.read() & (ap_sync_reg_channel_write_layer10_out_93_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer10_out_94_V_1() {
    ap_channel_done_layer10_out_94_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config10_U0_ap_done.read() & (ap_sync_reg_channel_write_layer10_out_94_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer10_out_95_V_1() {
    ap_channel_done_layer10_out_95_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config10_U0_ap_done.read() & (ap_sync_reg_channel_write_layer10_out_95_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer10_out_96_V_1() {
    ap_channel_done_layer10_out_96_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config10_U0_ap_done.read() & (ap_sync_reg_channel_write_layer10_out_96_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer10_out_97_V_1() {
    ap_channel_done_layer10_out_97_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config10_U0_ap_done.read() & (ap_sync_reg_channel_write_layer10_out_97_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer10_out_98_V_1() {
    ap_channel_done_layer10_out_98_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config10_U0_ap_done.read() & (ap_sync_reg_channel_write_layer10_out_98_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer10_out_99_V_1() {
    ap_channel_done_layer10_out_99_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config10_U0_ap_done.read() & (ap_sync_reg_channel_write_layer10_out_99_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer10_out_9_V_1() {
    ap_channel_done_layer10_out_9_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config10_U0_ap_done.read() & (ap_sync_reg_channel_write_layer10_out_9_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer11_out_0_V_1() {
    ap_channel_done_layer11_out_0_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config11_U0_ap_done.read() & (ap_sync_reg_channel_write_layer11_out_0_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer11_out_100_V_1() {
    ap_channel_done_layer11_out_100_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config11_U0_ap_done.read() & (ap_sync_reg_channel_write_layer11_out_100_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer11_out_101_V_1() {
    ap_channel_done_layer11_out_101_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config11_U0_ap_done.read() & (ap_sync_reg_channel_write_layer11_out_101_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer11_out_102_V_1() {
    ap_channel_done_layer11_out_102_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config11_U0_ap_done.read() & (ap_sync_reg_channel_write_layer11_out_102_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer11_out_103_V_1() {
    ap_channel_done_layer11_out_103_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config11_U0_ap_done.read() & (ap_sync_reg_channel_write_layer11_out_103_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer11_out_104_V_1() {
    ap_channel_done_layer11_out_104_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config11_U0_ap_done.read() & (ap_sync_reg_channel_write_layer11_out_104_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer11_out_105_V_1() {
    ap_channel_done_layer11_out_105_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config11_U0_ap_done.read() & (ap_sync_reg_channel_write_layer11_out_105_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer11_out_106_V_1() {
    ap_channel_done_layer11_out_106_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config11_U0_ap_done.read() & (ap_sync_reg_channel_write_layer11_out_106_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer11_out_107_V_1() {
    ap_channel_done_layer11_out_107_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config11_U0_ap_done.read() & (ap_sync_reg_channel_write_layer11_out_107_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer11_out_108_V_1() {
    ap_channel_done_layer11_out_108_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config11_U0_ap_done.read() & (ap_sync_reg_channel_write_layer11_out_108_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer11_out_109_V_1() {
    ap_channel_done_layer11_out_109_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config11_U0_ap_done.read() & (ap_sync_reg_channel_write_layer11_out_109_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer11_out_10_V_1() {
    ap_channel_done_layer11_out_10_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config11_U0_ap_done.read() & (ap_sync_reg_channel_write_layer11_out_10_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer11_out_110_V_1() {
    ap_channel_done_layer11_out_110_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config11_U0_ap_done.read() & (ap_sync_reg_channel_write_layer11_out_110_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer11_out_111_V_1() {
    ap_channel_done_layer11_out_111_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config11_U0_ap_done.read() & (ap_sync_reg_channel_write_layer11_out_111_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer11_out_112_V_1() {
    ap_channel_done_layer11_out_112_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config11_U0_ap_done.read() & (ap_sync_reg_channel_write_layer11_out_112_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer11_out_113_V_1() {
    ap_channel_done_layer11_out_113_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config11_U0_ap_done.read() & (ap_sync_reg_channel_write_layer11_out_113_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer11_out_114_V_1() {
    ap_channel_done_layer11_out_114_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config11_U0_ap_done.read() & (ap_sync_reg_channel_write_layer11_out_114_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer11_out_115_V_1() {
    ap_channel_done_layer11_out_115_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config11_U0_ap_done.read() & (ap_sync_reg_channel_write_layer11_out_115_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer11_out_116_V_1() {
    ap_channel_done_layer11_out_116_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config11_U0_ap_done.read() & (ap_sync_reg_channel_write_layer11_out_116_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer11_out_117_V_1() {
    ap_channel_done_layer11_out_117_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config11_U0_ap_done.read() & (ap_sync_reg_channel_write_layer11_out_117_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer11_out_118_V_1() {
    ap_channel_done_layer11_out_118_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config11_U0_ap_done.read() & (ap_sync_reg_channel_write_layer11_out_118_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer11_out_119_V_1() {
    ap_channel_done_layer11_out_119_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config11_U0_ap_done.read() & (ap_sync_reg_channel_write_layer11_out_119_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer11_out_11_V_1() {
    ap_channel_done_layer11_out_11_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config11_U0_ap_done.read() & (ap_sync_reg_channel_write_layer11_out_11_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer11_out_120_V_1() {
    ap_channel_done_layer11_out_120_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config11_U0_ap_done.read() & (ap_sync_reg_channel_write_layer11_out_120_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer11_out_121_V_1() {
    ap_channel_done_layer11_out_121_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config11_U0_ap_done.read() & (ap_sync_reg_channel_write_layer11_out_121_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer11_out_122_V_1() {
    ap_channel_done_layer11_out_122_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config11_U0_ap_done.read() & (ap_sync_reg_channel_write_layer11_out_122_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer11_out_123_V_1() {
    ap_channel_done_layer11_out_123_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config11_U0_ap_done.read() & (ap_sync_reg_channel_write_layer11_out_123_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer11_out_124_V_1() {
    ap_channel_done_layer11_out_124_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config11_U0_ap_done.read() & (ap_sync_reg_channel_write_layer11_out_124_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer11_out_125_V_1() {
    ap_channel_done_layer11_out_125_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config11_U0_ap_done.read() & (ap_sync_reg_channel_write_layer11_out_125_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer11_out_126_V_1() {
    ap_channel_done_layer11_out_126_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config11_U0_ap_done.read() & (ap_sync_reg_channel_write_layer11_out_126_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer11_out_127_V_1() {
    ap_channel_done_layer11_out_127_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config11_U0_ap_done.read() & (ap_sync_reg_channel_write_layer11_out_127_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer11_out_128_V_1() {
    ap_channel_done_layer11_out_128_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config11_U0_ap_done.read() & (ap_sync_reg_channel_write_layer11_out_128_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer11_out_129_V_1() {
    ap_channel_done_layer11_out_129_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config11_U0_ap_done.read() & (ap_sync_reg_channel_write_layer11_out_129_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer11_out_12_V_1() {
    ap_channel_done_layer11_out_12_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config11_U0_ap_done.read() & (ap_sync_reg_channel_write_layer11_out_12_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer11_out_130_V_1() {
    ap_channel_done_layer11_out_130_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config11_U0_ap_done.read() & (ap_sync_reg_channel_write_layer11_out_130_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer11_out_131_V_1() {
    ap_channel_done_layer11_out_131_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config11_U0_ap_done.read() & (ap_sync_reg_channel_write_layer11_out_131_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer11_out_132_V_1() {
    ap_channel_done_layer11_out_132_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config11_U0_ap_done.read() & (ap_sync_reg_channel_write_layer11_out_132_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer11_out_133_V_1() {
    ap_channel_done_layer11_out_133_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config11_U0_ap_done.read() & (ap_sync_reg_channel_write_layer11_out_133_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer11_out_134_V_1() {
    ap_channel_done_layer11_out_134_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config11_U0_ap_done.read() & (ap_sync_reg_channel_write_layer11_out_134_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer11_out_135_V_1() {
    ap_channel_done_layer11_out_135_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config11_U0_ap_done.read() & (ap_sync_reg_channel_write_layer11_out_135_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer11_out_136_V_1() {
    ap_channel_done_layer11_out_136_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config11_U0_ap_done.read() & (ap_sync_reg_channel_write_layer11_out_136_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer11_out_137_V_1() {
    ap_channel_done_layer11_out_137_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config11_U0_ap_done.read() & (ap_sync_reg_channel_write_layer11_out_137_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer11_out_138_V_1() {
    ap_channel_done_layer11_out_138_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config11_U0_ap_done.read() & (ap_sync_reg_channel_write_layer11_out_138_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer11_out_139_V_1() {
    ap_channel_done_layer11_out_139_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config11_U0_ap_done.read() & (ap_sync_reg_channel_write_layer11_out_139_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer11_out_13_V_1() {
    ap_channel_done_layer11_out_13_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config11_U0_ap_done.read() & (ap_sync_reg_channel_write_layer11_out_13_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer11_out_140_V_1() {
    ap_channel_done_layer11_out_140_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config11_U0_ap_done.read() & (ap_sync_reg_channel_write_layer11_out_140_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer11_out_141_V_1() {
    ap_channel_done_layer11_out_141_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config11_U0_ap_done.read() & (ap_sync_reg_channel_write_layer11_out_141_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer11_out_142_V_1() {
    ap_channel_done_layer11_out_142_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config11_U0_ap_done.read() & (ap_sync_reg_channel_write_layer11_out_142_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer11_out_143_V_1() {
    ap_channel_done_layer11_out_143_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config11_U0_ap_done.read() & (ap_sync_reg_channel_write_layer11_out_143_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer11_out_144_V_1() {
    ap_channel_done_layer11_out_144_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config11_U0_ap_done.read() & (ap_sync_reg_channel_write_layer11_out_144_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer11_out_145_V_1() {
    ap_channel_done_layer11_out_145_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config11_U0_ap_done.read() & (ap_sync_reg_channel_write_layer11_out_145_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer11_out_146_V_1() {
    ap_channel_done_layer11_out_146_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config11_U0_ap_done.read() & (ap_sync_reg_channel_write_layer11_out_146_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer11_out_147_V_1() {
    ap_channel_done_layer11_out_147_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config11_U0_ap_done.read() & (ap_sync_reg_channel_write_layer11_out_147_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer11_out_148_V_1() {
    ap_channel_done_layer11_out_148_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config11_U0_ap_done.read() & (ap_sync_reg_channel_write_layer11_out_148_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer11_out_149_V_1() {
    ap_channel_done_layer11_out_149_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config11_U0_ap_done.read() & (ap_sync_reg_channel_write_layer11_out_149_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer11_out_14_V_1() {
    ap_channel_done_layer11_out_14_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config11_U0_ap_done.read() & (ap_sync_reg_channel_write_layer11_out_14_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer11_out_150_V_1() {
    ap_channel_done_layer11_out_150_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config11_U0_ap_done.read() & (ap_sync_reg_channel_write_layer11_out_150_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer11_out_151_V_1() {
    ap_channel_done_layer11_out_151_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config11_U0_ap_done.read() & (ap_sync_reg_channel_write_layer11_out_151_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer11_out_152_V_1() {
    ap_channel_done_layer11_out_152_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config11_U0_ap_done.read() & (ap_sync_reg_channel_write_layer11_out_152_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer11_out_153_V_1() {
    ap_channel_done_layer11_out_153_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config11_U0_ap_done.read() & (ap_sync_reg_channel_write_layer11_out_153_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer11_out_154_V_1() {
    ap_channel_done_layer11_out_154_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config11_U0_ap_done.read() & (ap_sync_reg_channel_write_layer11_out_154_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer11_out_155_V_1() {
    ap_channel_done_layer11_out_155_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config11_U0_ap_done.read() & (ap_sync_reg_channel_write_layer11_out_155_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer11_out_156_V_1() {
    ap_channel_done_layer11_out_156_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config11_U0_ap_done.read() & (ap_sync_reg_channel_write_layer11_out_156_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer11_out_157_V_1() {
    ap_channel_done_layer11_out_157_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config11_U0_ap_done.read() & (ap_sync_reg_channel_write_layer11_out_157_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer11_out_158_V_1() {
    ap_channel_done_layer11_out_158_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config11_U0_ap_done.read() & (ap_sync_reg_channel_write_layer11_out_158_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer11_out_159_V_1() {
    ap_channel_done_layer11_out_159_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config11_U0_ap_done.read() & (ap_sync_reg_channel_write_layer11_out_159_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer11_out_15_V_1() {
    ap_channel_done_layer11_out_15_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config11_U0_ap_done.read() & (ap_sync_reg_channel_write_layer11_out_15_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer11_out_160_V_1() {
    ap_channel_done_layer11_out_160_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config11_U0_ap_done.read() & (ap_sync_reg_channel_write_layer11_out_160_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer11_out_161_V_1() {
    ap_channel_done_layer11_out_161_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config11_U0_ap_done.read() & (ap_sync_reg_channel_write_layer11_out_161_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer11_out_162_V_1() {
    ap_channel_done_layer11_out_162_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config11_U0_ap_done.read() & (ap_sync_reg_channel_write_layer11_out_162_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer11_out_163_V_1() {
    ap_channel_done_layer11_out_163_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config11_U0_ap_done.read() & (ap_sync_reg_channel_write_layer11_out_163_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer11_out_164_V_1() {
    ap_channel_done_layer11_out_164_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config11_U0_ap_done.read() & (ap_sync_reg_channel_write_layer11_out_164_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer11_out_165_V_1() {
    ap_channel_done_layer11_out_165_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config11_U0_ap_done.read() & (ap_sync_reg_channel_write_layer11_out_165_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer11_out_166_V_1() {
    ap_channel_done_layer11_out_166_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config11_U0_ap_done.read() & (ap_sync_reg_channel_write_layer11_out_166_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer11_out_167_V_1() {
    ap_channel_done_layer11_out_167_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config11_U0_ap_done.read() & (ap_sync_reg_channel_write_layer11_out_167_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer11_out_168_V_1() {
    ap_channel_done_layer11_out_168_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config11_U0_ap_done.read() & (ap_sync_reg_channel_write_layer11_out_168_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer11_out_169_V_1() {
    ap_channel_done_layer11_out_169_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config11_U0_ap_done.read() & (ap_sync_reg_channel_write_layer11_out_169_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer11_out_16_V_1() {
    ap_channel_done_layer11_out_16_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config11_U0_ap_done.read() & (ap_sync_reg_channel_write_layer11_out_16_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer11_out_170_V_1() {
    ap_channel_done_layer11_out_170_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config11_U0_ap_done.read() & (ap_sync_reg_channel_write_layer11_out_170_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer11_out_171_V_1() {
    ap_channel_done_layer11_out_171_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config11_U0_ap_done.read() & (ap_sync_reg_channel_write_layer11_out_171_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer11_out_172_V_1() {
    ap_channel_done_layer11_out_172_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config11_U0_ap_done.read() & (ap_sync_reg_channel_write_layer11_out_172_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer11_out_173_V_1() {
    ap_channel_done_layer11_out_173_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config11_U0_ap_done.read() & (ap_sync_reg_channel_write_layer11_out_173_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer11_out_174_V_1() {
    ap_channel_done_layer11_out_174_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config11_U0_ap_done.read() & (ap_sync_reg_channel_write_layer11_out_174_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer11_out_175_V_1() {
    ap_channel_done_layer11_out_175_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config11_U0_ap_done.read() & (ap_sync_reg_channel_write_layer11_out_175_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer11_out_176_V_1() {
    ap_channel_done_layer11_out_176_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config11_U0_ap_done.read() & (ap_sync_reg_channel_write_layer11_out_176_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer11_out_177_V_1() {
    ap_channel_done_layer11_out_177_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config11_U0_ap_done.read() & (ap_sync_reg_channel_write_layer11_out_177_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer11_out_178_V_1() {
    ap_channel_done_layer11_out_178_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config11_U0_ap_done.read() & (ap_sync_reg_channel_write_layer11_out_178_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer11_out_179_V_1() {
    ap_channel_done_layer11_out_179_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config11_U0_ap_done.read() & (ap_sync_reg_channel_write_layer11_out_179_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer11_out_17_V_1() {
    ap_channel_done_layer11_out_17_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config11_U0_ap_done.read() & (ap_sync_reg_channel_write_layer11_out_17_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer11_out_180_V_1() {
    ap_channel_done_layer11_out_180_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config11_U0_ap_done.read() & (ap_sync_reg_channel_write_layer11_out_180_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer11_out_181_V_1() {
    ap_channel_done_layer11_out_181_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config11_U0_ap_done.read() & (ap_sync_reg_channel_write_layer11_out_181_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer11_out_182_V_1() {
    ap_channel_done_layer11_out_182_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config11_U0_ap_done.read() & (ap_sync_reg_channel_write_layer11_out_182_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer11_out_183_V_1() {
    ap_channel_done_layer11_out_183_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config11_U0_ap_done.read() & (ap_sync_reg_channel_write_layer11_out_183_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer11_out_184_V_1() {
    ap_channel_done_layer11_out_184_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config11_U0_ap_done.read() & (ap_sync_reg_channel_write_layer11_out_184_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer11_out_185_V_1() {
    ap_channel_done_layer11_out_185_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config11_U0_ap_done.read() & (ap_sync_reg_channel_write_layer11_out_185_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer11_out_186_V_1() {
    ap_channel_done_layer11_out_186_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config11_U0_ap_done.read() & (ap_sync_reg_channel_write_layer11_out_186_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer11_out_187_V_1() {
    ap_channel_done_layer11_out_187_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config11_U0_ap_done.read() & (ap_sync_reg_channel_write_layer11_out_187_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer11_out_188_V_1() {
    ap_channel_done_layer11_out_188_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config11_U0_ap_done.read() & (ap_sync_reg_channel_write_layer11_out_188_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer11_out_189_V_1() {
    ap_channel_done_layer11_out_189_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config11_U0_ap_done.read() & (ap_sync_reg_channel_write_layer11_out_189_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer11_out_18_V_1() {
    ap_channel_done_layer11_out_18_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config11_U0_ap_done.read() & (ap_sync_reg_channel_write_layer11_out_18_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer11_out_190_V_1() {
    ap_channel_done_layer11_out_190_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config11_U0_ap_done.read() & (ap_sync_reg_channel_write_layer11_out_190_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer11_out_191_V_1() {
    ap_channel_done_layer11_out_191_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config11_U0_ap_done.read() & (ap_sync_reg_channel_write_layer11_out_191_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer11_out_192_V_1() {
    ap_channel_done_layer11_out_192_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config11_U0_ap_done.read() & (ap_sync_reg_channel_write_layer11_out_192_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer11_out_193_V_1() {
    ap_channel_done_layer11_out_193_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config11_U0_ap_done.read() & (ap_sync_reg_channel_write_layer11_out_193_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer11_out_194_V_1() {
    ap_channel_done_layer11_out_194_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config11_U0_ap_done.read() & (ap_sync_reg_channel_write_layer11_out_194_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer11_out_195_V_1() {
    ap_channel_done_layer11_out_195_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config11_U0_ap_done.read() & (ap_sync_reg_channel_write_layer11_out_195_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer11_out_196_V_1() {
    ap_channel_done_layer11_out_196_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config11_U0_ap_done.read() & (ap_sync_reg_channel_write_layer11_out_196_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer11_out_197_V_1() {
    ap_channel_done_layer11_out_197_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config11_U0_ap_done.read() & (ap_sync_reg_channel_write_layer11_out_197_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer11_out_198_V_1() {
    ap_channel_done_layer11_out_198_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config11_U0_ap_done.read() & (ap_sync_reg_channel_write_layer11_out_198_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer11_out_199_V_1() {
    ap_channel_done_layer11_out_199_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config11_U0_ap_done.read() & (ap_sync_reg_channel_write_layer11_out_199_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer11_out_19_V_1() {
    ap_channel_done_layer11_out_19_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config11_U0_ap_done.read() & (ap_sync_reg_channel_write_layer11_out_19_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer11_out_1_V_1() {
    ap_channel_done_layer11_out_1_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config11_U0_ap_done.read() & (ap_sync_reg_channel_write_layer11_out_1_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer11_out_20_V_1() {
    ap_channel_done_layer11_out_20_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config11_U0_ap_done.read() & (ap_sync_reg_channel_write_layer11_out_20_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer11_out_21_V_1() {
    ap_channel_done_layer11_out_21_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config11_U0_ap_done.read() & (ap_sync_reg_channel_write_layer11_out_21_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer11_out_22_V_1() {
    ap_channel_done_layer11_out_22_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config11_U0_ap_done.read() & (ap_sync_reg_channel_write_layer11_out_22_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer11_out_23_V_1() {
    ap_channel_done_layer11_out_23_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config11_U0_ap_done.read() & (ap_sync_reg_channel_write_layer11_out_23_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer11_out_24_V_1() {
    ap_channel_done_layer11_out_24_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config11_U0_ap_done.read() & (ap_sync_reg_channel_write_layer11_out_24_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer11_out_25_V_1() {
    ap_channel_done_layer11_out_25_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config11_U0_ap_done.read() & (ap_sync_reg_channel_write_layer11_out_25_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer11_out_26_V_1() {
    ap_channel_done_layer11_out_26_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config11_U0_ap_done.read() & (ap_sync_reg_channel_write_layer11_out_26_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer11_out_27_V_1() {
    ap_channel_done_layer11_out_27_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config11_U0_ap_done.read() & (ap_sync_reg_channel_write_layer11_out_27_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer11_out_28_V_1() {
    ap_channel_done_layer11_out_28_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config11_U0_ap_done.read() & (ap_sync_reg_channel_write_layer11_out_28_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer11_out_29_V_1() {
    ap_channel_done_layer11_out_29_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config11_U0_ap_done.read() & (ap_sync_reg_channel_write_layer11_out_29_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer11_out_2_V_1() {
    ap_channel_done_layer11_out_2_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config11_U0_ap_done.read() & (ap_sync_reg_channel_write_layer11_out_2_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer11_out_30_V_1() {
    ap_channel_done_layer11_out_30_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config11_U0_ap_done.read() & (ap_sync_reg_channel_write_layer11_out_30_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer11_out_31_V_1() {
    ap_channel_done_layer11_out_31_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config11_U0_ap_done.read() & (ap_sync_reg_channel_write_layer11_out_31_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer11_out_32_V_1() {
    ap_channel_done_layer11_out_32_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config11_U0_ap_done.read() & (ap_sync_reg_channel_write_layer11_out_32_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer11_out_33_V_1() {
    ap_channel_done_layer11_out_33_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config11_U0_ap_done.read() & (ap_sync_reg_channel_write_layer11_out_33_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer11_out_34_V_1() {
    ap_channel_done_layer11_out_34_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config11_U0_ap_done.read() & (ap_sync_reg_channel_write_layer11_out_34_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer11_out_35_V_1() {
    ap_channel_done_layer11_out_35_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config11_U0_ap_done.read() & (ap_sync_reg_channel_write_layer11_out_35_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer11_out_36_V_1() {
    ap_channel_done_layer11_out_36_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config11_U0_ap_done.read() & (ap_sync_reg_channel_write_layer11_out_36_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer11_out_37_V_1() {
    ap_channel_done_layer11_out_37_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config11_U0_ap_done.read() & (ap_sync_reg_channel_write_layer11_out_37_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer11_out_38_V_1() {
    ap_channel_done_layer11_out_38_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config11_U0_ap_done.read() & (ap_sync_reg_channel_write_layer11_out_38_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer11_out_39_V_1() {
    ap_channel_done_layer11_out_39_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config11_U0_ap_done.read() & (ap_sync_reg_channel_write_layer11_out_39_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer11_out_3_V_1() {
    ap_channel_done_layer11_out_3_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config11_U0_ap_done.read() & (ap_sync_reg_channel_write_layer11_out_3_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer11_out_40_V_1() {
    ap_channel_done_layer11_out_40_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config11_U0_ap_done.read() & (ap_sync_reg_channel_write_layer11_out_40_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer11_out_41_V_1() {
    ap_channel_done_layer11_out_41_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config11_U0_ap_done.read() & (ap_sync_reg_channel_write_layer11_out_41_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer11_out_42_V_1() {
    ap_channel_done_layer11_out_42_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config11_U0_ap_done.read() & (ap_sync_reg_channel_write_layer11_out_42_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer11_out_43_V_1() {
    ap_channel_done_layer11_out_43_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config11_U0_ap_done.read() & (ap_sync_reg_channel_write_layer11_out_43_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer11_out_44_V_1() {
    ap_channel_done_layer11_out_44_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config11_U0_ap_done.read() & (ap_sync_reg_channel_write_layer11_out_44_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer11_out_45_V_1() {
    ap_channel_done_layer11_out_45_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config11_U0_ap_done.read() & (ap_sync_reg_channel_write_layer11_out_45_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer11_out_46_V_1() {
    ap_channel_done_layer11_out_46_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config11_U0_ap_done.read() & (ap_sync_reg_channel_write_layer11_out_46_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer11_out_47_V_1() {
    ap_channel_done_layer11_out_47_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config11_U0_ap_done.read() & (ap_sync_reg_channel_write_layer11_out_47_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer11_out_48_V_1() {
    ap_channel_done_layer11_out_48_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config11_U0_ap_done.read() & (ap_sync_reg_channel_write_layer11_out_48_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer11_out_49_V_1() {
    ap_channel_done_layer11_out_49_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config11_U0_ap_done.read() & (ap_sync_reg_channel_write_layer11_out_49_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer11_out_4_V_1() {
    ap_channel_done_layer11_out_4_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config11_U0_ap_done.read() & (ap_sync_reg_channel_write_layer11_out_4_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer11_out_50_V_1() {
    ap_channel_done_layer11_out_50_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config11_U0_ap_done.read() & (ap_sync_reg_channel_write_layer11_out_50_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer11_out_51_V_1() {
    ap_channel_done_layer11_out_51_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config11_U0_ap_done.read() & (ap_sync_reg_channel_write_layer11_out_51_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer11_out_52_V_1() {
    ap_channel_done_layer11_out_52_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config11_U0_ap_done.read() & (ap_sync_reg_channel_write_layer11_out_52_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer11_out_53_V_1() {
    ap_channel_done_layer11_out_53_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config11_U0_ap_done.read() & (ap_sync_reg_channel_write_layer11_out_53_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer11_out_54_V_1() {
    ap_channel_done_layer11_out_54_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config11_U0_ap_done.read() & (ap_sync_reg_channel_write_layer11_out_54_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer11_out_55_V_1() {
    ap_channel_done_layer11_out_55_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config11_U0_ap_done.read() & (ap_sync_reg_channel_write_layer11_out_55_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer11_out_56_V_1() {
    ap_channel_done_layer11_out_56_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config11_U0_ap_done.read() & (ap_sync_reg_channel_write_layer11_out_56_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer11_out_57_V_1() {
    ap_channel_done_layer11_out_57_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config11_U0_ap_done.read() & (ap_sync_reg_channel_write_layer11_out_57_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer11_out_58_V_1() {
    ap_channel_done_layer11_out_58_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config11_U0_ap_done.read() & (ap_sync_reg_channel_write_layer11_out_58_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer11_out_59_V_1() {
    ap_channel_done_layer11_out_59_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config11_U0_ap_done.read() & (ap_sync_reg_channel_write_layer11_out_59_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer11_out_5_V_1() {
    ap_channel_done_layer11_out_5_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config11_U0_ap_done.read() & (ap_sync_reg_channel_write_layer11_out_5_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer11_out_60_V_1() {
    ap_channel_done_layer11_out_60_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config11_U0_ap_done.read() & (ap_sync_reg_channel_write_layer11_out_60_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer11_out_61_V_1() {
    ap_channel_done_layer11_out_61_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config11_U0_ap_done.read() & (ap_sync_reg_channel_write_layer11_out_61_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer11_out_62_V_1() {
    ap_channel_done_layer11_out_62_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config11_U0_ap_done.read() & (ap_sync_reg_channel_write_layer11_out_62_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer11_out_63_V_1() {
    ap_channel_done_layer11_out_63_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config11_U0_ap_done.read() & (ap_sync_reg_channel_write_layer11_out_63_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer11_out_64_V_1() {
    ap_channel_done_layer11_out_64_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config11_U0_ap_done.read() & (ap_sync_reg_channel_write_layer11_out_64_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer11_out_65_V_1() {
    ap_channel_done_layer11_out_65_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config11_U0_ap_done.read() & (ap_sync_reg_channel_write_layer11_out_65_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer11_out_66_V_1() {
    ap_channel_done_layer11_out_66_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config11_U0_ap_done.read() & (ap_sync_reg_channel_write_layer11_out_66_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer11_out_67_V_1() {
    ap_channel_done_layer11_out_67_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config11_U0_ap_done.read() & (ap_sync_reg_channel_write_layer11_out_67_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer11_out_68_V_1() {
    ap_channel_done_layer11_out_68_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config11_U0_ap_done.read() & (ap_sync_reg_channel_write_layer11_out_68_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer11_out_69_V_1() {
    ap_channel_done_layer11_out_69_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config11_U0_ap_done.read() & (ap_sync_reg_channel_write_layer11_out_69_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer11_out_6_V_1() {
    ap_channel_done_layer11_out_6_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config11_U0_ap_done.read() & (ap_sync_reg_channel_write_layer11_out_6_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer11_out_70_V_1() {
    ap_channel_done_layer11_out_70_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config11_U0_ap_done.read() & (ap_sync_reg_channel_write_layer11_out_70_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer11_out_71_V_1() {
    ap_channel_done_layer11_out_71_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config11_U0_ap_done.read() & (ap_sync_reg_channel_write_layer11_out_71_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer11_out_72_V_1() {
    ap_channel_done_layer11_out_72_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config11_U0_ap_done.read() & (ap_sync_reg_channel_write_layer11_out_72_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer11_out_73_V_1() {
    ap_channel_done_layer11_out_73_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config11_U0_ap_done.read() & (ap_sync_reg_channel_write_layer11_out_73_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer11_out_74_V_1() {
    ap_channel_done_layer11_out_74_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config11_U0_ap_done.read() & (ap_sync_reg_channel_write_layer11_out_74_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer11_out_75_V_1() {
    ap_channel_done_layer11_out_75_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config11_U0_ap_done.read() & (ap_sync_reg_channel_write_layer11_out_75_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer11_out_76_V_1() {
    ap_channel_done_layer11_out_76_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config11_U0_ap_done.read() & (ap_sync_reg_channel_write_layer11_out_76_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer11_out_77_V_1() {
    ap_channel_done_layer11_out_77_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config11_U0_ap_done.read() & (ap_sync_reg_channel_write_layer11_out_77_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer11_out_78_V_1() {
    ap_channel_done_layer11_out_78_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config11_U0_ap_done.read() & (ap_sync_reg_channel_write_layer11_out_78_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer11_out_79_V_1() {
    ap_channel_done_layer11_out_79_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config11_U0_ap_done.read() & (ap_sync_reg_channel_write_layer11_out_79_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer11_out_7_V_1() {
    ap_channel_done_layer11_out_7_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config11_U0_ap_done.read() & (ap_sync_reg_channel_write_layer11_out_7_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer11_out_80_V_1() {
    ap_channel_done_layer11_out_80_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config11_U0_ap_done.read() & (ap_sync_reg_channel_write_layer11_out_80_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer11_out_81_V_1() {
    ap_channel_done_layer11_out_81_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config11_U0_ap_done.read() & (ap_sync_reg_channel_write_layer11_out_81_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer11_out_82_V_1() {
    ap_channel_done_layer11_out_82_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config11_U0_ap_done.read() & (ap_sync_reg_channel_write_layer11_out_82_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer11_out_83_V_1() {
    ap_channel_done_layer11_out_83_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config11_U0_ap_done.read() & (ap_sync_reg_channel_write_layer11_out_83_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer11_out_84_V_1() {
    ap_channel_done_layer11_out_84_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config11_U0_ap_done.read() & (ap_sync_reg_channel_write_layer11_out_84_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer11_out_85_V_1() {
    ap_channel_done_layer11_out_85_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config11_U0_ap_done.read() & (ap_sync_reg_channel_write_layer11_out_85_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer11_out_86_V_1() {
    ap_channel_done_layer11_out_86_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config11_U0_ap_done.read() & (ap_sync_reg_channel_write_layer11_out_86_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer11_out_87_V_1() {
    ap_channel_done_layer11_out_87_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config11_U0_ap_done.read() & (ap_sync_reg_channel_write_layer11_out_87_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer11_out_88_V_1() {
    ap_channel_done_layer11_out_88_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config11_U0_ap_done.read() & (ap_sync_reg_channel_write_layer11_out_88_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer11_out_89_V_1() {
    ap_channel_done_layer11_out_89_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config11_U0_ap_done.read() & (ap_sync_reg_channel_write_layer11_out_89_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer11_out_8_V_1() {
    ap_channel_done_layer11_out_8_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config11_U0_ap_done.read() & (ap_sync_reg_channel_write_layer11_out_8_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer11_out_90_V_1() {
    ap_channel_done_layer11_out_90_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config11_U0_ap_done.read() & (ap_sync_reg_channel_write_layer11_out_90_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer11_out_91_V_1() {
    ap_channel_done_layer11_out_91_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config11_U0_ap_done.read() & (ap_sync_reg_channel_write_layer11_out_91_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer11_out_92_V_1() {
    ap_channel_done_layer11_out_92_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config11_U0_ap_done.read() & (ap_sync_reg_channel_write_layer11_out_92_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer11_out_93_V_1() {
    ap_channel_done_layer11_out_93_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config11_U0_ap_done.read() & (ap_sync_reg_channel_write_layer11_out_93_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer11_out_94_V_1() {
    ap_channel_done_layer11_out_94_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config11_U0_ap_done.read() & (ap_sync_reg_channel_write_layer11_out_94_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer11_out_95_V_1() {
    ap_channel_done_layer11_out_95_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config11_U0_ap_done.read() & (ap_sync_reg_channel_write_layer11_out_95_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer11_out_96_V_1() {
    ap_channel_done_layer11_out_96_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config11_U0_ap_done.read() & (ap_sync_reg_channel_write_layer11_out_96_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer11_out_97_V_1() {
    ap_channel_done_layer11_out_97_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config11_U0_ap_done.read() & (ap_sync_reg_channel_write_layer11_out_97_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer11_out_98_V_1() {
    ap_channel_done_layer11_out_98_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config11_U0_ap_done.read() & (ap_sync_reg_channel_write_layer11_out_98_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer11_out_99_V_1() {
    ap_channel_done_layer11_out_99_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config11_U0_ap_done.read() & (ap_sync_reg_channel_write_layer11_out_99_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer11_out_9_V_1() {
    ap_channel_done_layer11_out_9_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config11_U0_ap_done.read() & (ap_sync_reg_channel_write_layer11_out_9_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer13_out_0_V_1() {
    ap_channel_done_layer13_out_0_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config13_U0_ap_done.read() & (ap_sync_reg_channel_write_layer13_out_0_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer13_out_100_V_1() {
    ap_channel_done_layer13_out_100_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config13_U0_ap_done.read() & (ap_sync_reg_channel_write_layer13_out_100_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer13_out_101_V_1() {
    ap_channel_done_layer13_out_101_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config13_U0_ap_done.read() & (ap_sync_reg_channel_write_layer13_out_101_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer13_out_102_V_1() {
    ap_channel_done_layer13_out_102_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config13_U0_ap_done.read() & (ap_sync_reg_channel_write_layer13_out_102_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer13_out_103_V_1() {
    ap_channel_done_layer13_out_103_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config13_U0_ap_done.read() & (ap_sync_reg_channel_write_layer13_out_103_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer13_out_104_V_1() {
    ap_channel_done_layer13_out_104_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config13_U0_ap_done.read() & (ap_sync_reg_channel_write_layer13_out_104_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer13_out_105_V_1() {
    ap_channel_done_layer13_out_105_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config13_U0_ap_done.read() & (ap_sync_reg_channel_write_layer13_out_105_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer13_out_106_V_1() {
    ap_channel_done_layer13_out_106_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config13_U0_ap_done.read() & (ap_sync_reg_channel_write_layer13_out_106_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer13_out_107_V_1() {
    ap_channel_done_layer13_out_107_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config13_U0_ap_done.read() & (ap_sync_reg_channel_write_layer13_out_107_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer13_out_108_V_1() {
    ap_channel_done_layer13_out_108_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config13_U0_ap_done.read() & (ap_sync_reg_channel_write_layer13_out_108_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer13_out_109_V_1() {
    ap_channel_done_layer13_out_109_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config13_U0_ap_done.read() & (ap_sync_reg_channel_write_layer13_out_109_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer13_out_10_V_1() {
    ap_channel_done_layer13_out_10_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config13_U0_ap_done.read() & (ap_sync_reg_channel_write_layer13_out_10_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer13_out_110_V_1() {
    ap_channel_done_layer13_out_110_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config13_U0_ap_done.read() & (ap_sync_reg_channel_write_layer13_out_110_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer13_out_111_V_1() {
    ap_channel_done_layer13_out_111_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config13_U0_ap_done.read() & (ap_sync_reg_channel_write_layer13_out_111_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer13_out_112_V_1() {
    ap_channel_done_layer13_out_112_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config13_U0_ap_done.read() & (ap_sync_reg_channel_write_layer13_out_112_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer13_out_113_V_1() {
    ap_channel_done_layer13_out_113_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config13_U0_ap_done.read() & (ap_sync_reg_channel_write_layer13_out_113_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer13_out_114_V_1() {
    ap_channel_done_layer13_out_114_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config13_U0_ap_done.read() & (ap_sync_reg_channel_write_layer13_out_114_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer13_out_115_V_1() {
    ap_channel_done_layer13_out_115_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config13_U0_ap_done.read() & (ap_sync_reg_channel_write_layer13_out_115_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer13_out_116_V_1() {
    ap_channel_done_layer13_out_116_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config13_U0_ap_done.read() & (ap_sync_reg_channel_write_layer13_out_116_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer13_out_117_V_1() {
    ap_channel_done_layer13_out_117_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config13_U0_ap_done.read() & (ap_sync_reg_channel_write_layer13_out_117_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer13_out_118_V_1() {
    ap_channel_done_layer13_out_118_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config13_U0_ap_done.read() & (ap_sync_reg_channel_write_layer13_out_118_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer13_out_119_V_1() {
    ap_channel_done_layer13_out_119_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config13_U0_ap_done.read() & (ap_sync_reg_channel_write_layer13_out_119_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer13_out_11_V_1() {
    ap_channel_done_layer13_out_11_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config13_U0_ap_done.read() & (ap_sync_reg_channel_write_layer13_out_11_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer13_out_120_V_1() {
    ap_channel_done_layer13_out_120_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config13_U0_ap_done.read() & (ap_sync_reg_channel_write_layer13_out_120_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer13_out_121_V_1() {
    ap_channel_done_layer13_out_121_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config13_U0_ap_done.read() & (ap_sync_reg_channel_write_layer13_out_121_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer13_out_122_V_1() {
    ap_channel_done_layer13_out_122_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config13_U0_ap_done.read() & (ap_sync_reg_channel_write_layer13_out_122_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer13_out_123_V_1() {
    ap_channel_done_layer13_out_123_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config13_U0_ap_done.read() & (ap_sync_reg_channel_write_layer13_out_123_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer13_out_124_V_1() {
    ap_channel_done_layer13_out_124_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config13_U0_ap_done.read() & (ap_sync_reg_channel_write_layer13_out_124_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer13_out_125_V_1() {
    ap_channel_done_layer13_out_125_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config13_U0_ap_done.read() & (ap_sync_reg_channel_write_layer13_out_125_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer13_out_126_V_1() {
    ap_channel_done_layer13_out_126_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config13_U0_ap_done.read() & (ap_sync_reg_channel_write_layer13_out_126_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer13_out_127_V_1() {
    ap_channel_done_layer13_out_127_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config13_U0_ap_done.read() & (ap_sync_reg_channel_write_layer13_out_127_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer13_out_128_V_1() {
    ap_channel_done_layer13_out_128_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config13_U0_ap_done.read() & (ap_sync_reg_channel_write_layer13_out_128_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer13_out_129_V_1() {
    ap_channel_done_layer13_out_129_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config13_U0_ap_done.read() & (ap_sync_reg_channel_write_layer13_out_129_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer13_out_12_V_1() {
    ap_channel_done_layer13_out_12_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config13_U0_ap_done.read() & (ap_sync_reg_channel_write_layer13_out_12_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer13_out_130_V_1() {
    ap_channel_done_layer13_out_130_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config13_U0_ap_done.read() & (ap_sync_reg_channel_write_layer13_out_130_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer13_out_131_V_1() {
    ap_channel_done_layer13_out_131_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config13_U0_ap_done.read() & (ap_sync_reg_channel_write_layer13_out_131_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer13_out_132_V_1() {
    ap_channel_done_layer13_out_132_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config13_U0_ap_done.read() & (ap_sync_reg_channel_write_layer13_out_132_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer13_out_133_V_1() {
    ap_channel_done_layer13_out_133_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config13_U0_ap_done.read() & (ap_sync_reg_channel_write_layer13_out_133_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer13_out_134_V_1() {
    ap_channel_done_layer13_out_134_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config13_U0_ap_done.read() & (ap_sync_reg_channel_write_layer13_out_134_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer13_out_135_V_1() {
    ap_channel_done_layer13_out_135_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config13_U0_ap_done.read() & (ap_sync_reg_channel_write_layer13_out_135_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer13_out_136_V_1() {
    ap_channel_done_layer13_out_136_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config13_U0_ap_done.read() & (ap_sync_reg_channel_write_layer13_out_136_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer13_out_137_V_1() {
    ap_channel_done_layer13_out_137_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config13_U0_ap_done.read() & (ap_sync_reg_channel_write_layer13_out_137_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer13_out_138_V_1() {
    ap_channel_done_layer13_out_138_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config13_U0_ap_done.read() & (ap_sync_reg_channel_write_layer13_out_138_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer13_out_139_V_1() {
    ap_channel_done_layer13_out_139_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config13_U0_ap_done.read() & (ap_sync_reg_channel_write_layer13_out_139_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer13_out_13_V_1() {
    ap_channel_done_layer13_out_13_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config13_U0_ap_done.read() & (ap_sync_reg_channel_write_layer13_out_13_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer13_out_140_V_1() {
    ap_channel_done_layer13_out_140_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config13_U0_ap_done.read() & (ap_sync_reg_channel_write_layer13_out_140_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer13_out_141_V_1() {
    ap_channel_done_layer13_out_141_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config13_U0_ap_done.read() & (ap_sync_reg_channel_write_layer13_out_141_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer13_out_142_V_1() {
    ap_channel_done_layer13_out_142_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config13_U0_ap_done.read() & (ap_sync_reg_channel_write_layer13_out_142_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer13_out_143_V_1() {
    ap_channel_done_layer13_out_143_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config13_U0_ap_done.read() & (ap_sync_reg_channel_write_layer13_out_143_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer13_out_144_V_1() {
    ap_channel_done_layer13_out_144_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config13_U0_ap_done.read() & (ap_sync_reg_channel_write_layer13_out_144_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer13_out_145_V_1() {
    ap_channel_done_layer13_out_145_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config13_U0_ap_done.read() & (ap_sync_reg_channel_write_layer13_out_145_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer13_out_146_V_1() {
    ap_channel_done_layer13_out_146_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config13_U0_ap_done.read() & (ap_sync_reg_channel_write_layer13_out_146_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer13_out_147_V_1() {
    ap_channel_done_layer13_out_147_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config13_U0_ap_done.read() & (ap_sync_reg_channel_write_layer13_out_147_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer13_out_148_V_1() {
    ap_channel_done_layer13_out_148_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config13_U0_ap_done.read() & (ap_sync_reg_channel_write_layer13_out_148_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer13_out_149_V_1() {
    ap_channel_done_layer13_out_149_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config13_U0_ap_done.read() & (ap_sync_reg_channel_write_layer13_out_149_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer13_out_14_V_1() {
    ap_channel_done_layer13_out_14_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config13_U0_ap_done.read() & (ap_sync_reg_channel_write_layer13_out_14_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer13_out_150_V_1() {
    ap_channel_done_layer13_out_150_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config13_U0_ap_done.read() & (ap_sync_reg_channel_write_layer13_out_150_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer13_out_151_V_1() {
    ap_channel_done_layer13_out_151_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config13_U0_ap_done.read() & (ap_sync_reg_channel_write_layer13_out_151_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer13_out_152_V_1() {
    ap_channel_done_layer13_out_152_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config13_U0_ap_done.read() & (ap_sync_reg_channel_write_layer13_out_152_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer13_out_153_V_1() {
    ap_channel_done_layer13_out_153_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config13_U0_ap_done.read() & (ap_sync_reg_channel_write_layer13_out_153_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer13_out_154_V_1() {
    ap_channel_done_layer13_out_154_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config13_U0_ap_done.read() & (ap_sync_reg_channel_write_layer13_out_154_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer13_out_155_V_1() {
    ap_channel_done_layer13_out_155_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config13_U0_ap_done.read() & (ap_sync_reg_channel_write_layer13_out_155_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer13_out_156_V_1() {
    ap_channel_done_layer13_out_156_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config13_U0_ap_done.read() & (ap_sync_reg_channel_write_layer13_out_156_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer13_out_157_V_1() {
    ap_channel_done_layer13_out_157_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config13_U0_ap_done.read() & (ap_sync_reg_channel_write_layer13_out_157_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer13_out_158_V_1() {
    ap_channel_done_layer13_out_158_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config13_U0_ap_done.read() & (ap_sync_reg_channel_write_layer13_out_158_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer13_out_159_V_1() {
    ap_channel_done_layer13_out_159_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config13_U0_ap_done.read() & (ap_sync_reg_channel_write_layer13_out_159_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer13_out_15_V_1() {
    ap_channel_done_layer13_out_15_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config13_U0_ap_done.read() & (ap_sync_reg_channel_write_layer13_out_15_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer13_out_160_V_1() {
    ap_channel_done_layer13_out_160_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config13_U0_ap_done.read() & (ap_sync_reg_channel_write_layer13_out_160_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer13_out_161_V_1() {
    ap_channel_done_layer13_out_161_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config13_U0_ap_done.read() & (ap_sync_reg_channel_write_layer13_out_161_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer13_out_162_V_1() {
    ap_channel_done_layer13_out_162_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config13_U0_ap_done.read() & (ap_sync_reg_channel_write_layer13_out_162_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer13_out_163_V_1() {
    ap_channel_done_layer13_out_163_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config13_U0_ap_done.read() & (ap_sync_reg_channel_write_layer13_out_163_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer13_out_164_V_1() {
    ap_channel_done_layer13_out_164_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config13_U0_ap_done.read() & (ap_sync_reg_channel_write_layer13_out_164_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer13_out_165_V_1() {
    ap_channel_done_layer13_out_165_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config13_U0_ap_done.read() & (ap_sync_reg_channel_write_layer13_out_165_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer13_out_166_V_1() {
    ap_channel_done_layer13_out_166_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config13_U0_ap_done.read() & (ap_sync_reg_channel_write_layer13_out_166_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer13_out_167_V_1() {
    ap_channel_done_layer13_out_167_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config13_U0_ap_done.read() & (ap_sync_reg_channel_write_layer13_out_167_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer13_out_168_V_1() {
    ap_channel_done_layer13_out_168_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config13_U0_ap_done.read() & (ap_sync_reg_channel_write_layer13_out_168_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer13_out_169_V_1() {
    ap_channel_done_layer13_out_169_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config13_U0_ap_done.read() & (ap_sync_reg_channel_write_layer13_out_169_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer13_out_16_V_1() {
    ap_channel_done_layer13_out_16_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config13_U0_ap_done.read() & (ap_sync_reg_channel_write_layer13_out_16_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer13_out_170_V_1() {
    ap_channel_done_layer13_out_170_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config13_U0_ap_done.read() & (ap_sync_reg_channel_write_layer13_out_170_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer13_out_171_V_1() {
    ap_channel_done_layer13_out_171_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config13_U0_ap_done.read() & (ap_sync_reg_channel_write_layer13_out_171_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer13_out_172_V_1() {
    ap_channel_done_layer13_out_172_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config13_U0_ap_done.read() & (ap_sync_reg_channel_write_layer13_out_172_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer13_out_173_V_1() {
    ap_channel_done_layer13_out_173_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config13_U0_ap_done.read() & (ap_sync_reg_channel_write_layer13_out_173_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer13_out_174_V_1() {
    ap_channel_done_layer13_out_174_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config13_U0_ap_done.read() & (ap_sync_reg_channel_write_layer13_out_174_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer13_out_175_V_1() {
    ap_channel_done_layer13_out_175_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config13_U0_ap_done.read() & (ap_sync_reg_channel_write_layer13_out_175_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer13_out_176_V_1() {
    ap_channel_done_layer13_out_176_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config13_U0_ap_done.read() & (ap_sync_reg_channel_write_layer13_out_176_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer13_out_177_V_1() {
    ap_channel_done_layer13_out_177_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config13_U0_ap_done.read() & (ap_sync_reg_channel_write_layer13_out_177_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer13_out_178_V_1() {
    ap_channel_done_layer13_out_178_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config13_U0_ap_done.read() & (ap_sync_reg_channel_write_layer13_out_178_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer13_out_179_V_1() {
    ap_channel_done_layer13_out_179_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config13_U0_ap_done.read() & (ap_sync_reg_channel_write_layer13_out_179_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer13_out_17_V_1() {
    ap_channel_done_layer13_out_17_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config13_U0_ap_done.read() & (ap_sync_reg_channel_write_layer13_out_17_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer13_out_180_V_1() {
    ap_channel_done_layer13_out_180_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config13_U0_ap_done.read() & (ap_sync_reg_channel_write_layer13_out_180_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer13_out_181_V_1() {
    ap_channel_done_layer13_out_181_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config13_U0_ap_done.read() & (ap_sync_reg_channel_write_layer13_out_181_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer13_out_182_V_1() {
    ap_channel_done_layer13_out_182_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config13_U0_ap_done.read() & (ap_sync_reg_channel_write_layer13_out_182_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer13_out_183_V_1() {
    ap_channel_done_layer13_out_183_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config13_U0_ap_done.read() & (ap_sync_reg_channel_write_layer13_out_183_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer13_out_184_V_1() {
    ap_channel_done_layer13_out_184_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config13_U0_ap_done.read() & (ap_sync_reg_channel_write_layer13_out_184_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer13_out_185_V_1() {
    ap_channel_done_layer13_out_185_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config13_U0_ap_done.read() & (ap_sync_reg_channel_write_layer13_out_185_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer13_out_186_V_1() {
    ap_channel_done_layer13_out_186_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config13_U0_ap_done.read() & (ap_sync_reg_channel_write_layer13_out_186_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer13_out_187_V_1() {
    ap_channel_done_layer13_out_187_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config13_U0_ap_done.read() & (ap_sync_reg_channel_write_layer13_out_187_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer13_out_188_V_1() {
    ap_channel_done_layer13_out_188_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config13_U0_ap_done.read() & (ap_sync_reg_channel_write_layer13_out_188_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer13_out_189_V_1() {
    ap_channel_done_layer13_out_189_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config13_U0_ap_done.read() & (ap_sync_reg_channel_write_layer13_out_189_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer13_out_18_V_1() {
    ap_channel_done_layer13_out_18_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config13_U0_ap_done.read() & (ap_sync_reg_channel_write_layer13_out_18_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer13_out_190_V_1() {
    ap_channel_done_layer13_out_190_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config13_U0_ap_done.read() & (ap_sync_reg_channel_write_layer13_out_190_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer13_out_191_V_1() {
    ap_channel_done_layer13_out_191_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config13_U0_ap_done.read() & (ap_sync_reg_channel_write_layer13_out_191_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer13_out_192_V_1() {
    ap_channel_done_layer13_out_192_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config13_U0_ap_done.read() & (ap_sync_reg_channel_write_layer13_out_192_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer13_out_193_V_1() {
    ap_channel_done_layer13_out_193_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config13_U0_ap_done.read() & (ap_sync_reg_channel_write_layer13_out_193_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer13_out_194_V_1() {
    ap_channel_done_layer13_out_194_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config13_U0_ap_done.read() & (ap_sync_reg_channel_write_layer13_out_194_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer13_out_195_V_1() {
    ap_channel_done_layer13_out_195_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config13_U0_ap_done.read() & (ap_sync_reg_channel_write_layer13_out_195_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer13_out_196_V_1() {
    ap_channel_done_layer13_out_196_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config13_U0_ap_done.read() & (ap_sync_reg_channel_write_layer13_out_196_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer13_out_197_V_1() {
    ap_channel_done_layer13_out_197_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config13_U0_ap_done.read() & (ap_sync_reg_channel_write_layer13_out_197_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer13_out_198_V_1() {
    ap_channel_done_layer13_out_198_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config13_U0_ap_done.read() & (ap_sync_reg_channel_write_layer13_out_198_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer13_out_199_V_1() {
    ap_channel_done_layer13_out_199_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config13_U0_ap_done.read() & (ap_sync_reg_channel_write_layer13_out_199_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer13_out_19_V_1() {
    ap_channel_done_layer13_out_19_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config13_U0_ap_done.read() & (ap_sync_reg_channel_write_layer13_out_19_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer13_out_1_V_1() {
    ap_channel_done_layer13_out_1_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config13_U0_ap_done.read() & (ap_sync_reg_channel_write_layer13_out_1_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer13_out_20_V_1() {
    ap_channel_done_layer13_out_20_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config13_U0_ap_done.read() & (ap_sync_reg_channel_write_layer13_out_20_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer13_out_21_V_1() {
    ap_channel_done_layer13_out_21_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config13_U0_ap_done.read() & (ap_sync_reg_channel_write_layer13_out_21_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer13_out_22_V_1() {
    ap_channel_done_layer13_out_22_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config13_U0_ap_done.read() & (ap_sync_reg_channel_write_layer13_out_22_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer13_out_23_V_1() {
    ap_channel_done_layer13_out_23_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config13_U0_ap_done.read() & (ap_sync_reg_channel_write_layer13_out_23_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer13_out_24_V_1() {
    ap_channel_done_layer13_out_24_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config13_U0_ap_done.read() & (ap_sync_reg_channel_write_layer13_out_24_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer13_out_25_V_1() {
    ap_channel_done_layer13_out_25_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config13_U0_ap_done.read() & (ap_sync_reg_channel_write_layer13_out_25_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer13_out_26_V_1() {
    ap_channel_done_layer13_out_26_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config13_U0_ap_done.read() & (ap_sync_reg_channel_write_layer13_out_26_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer13_out_27_V_1() {
    ap_channel_done_layer13_out_27_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config13_U0_ap_done.read() & (ap_sync_reg_channel_write_layer13_out_27_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer13_out_28_V_1() {
    ap_channel_done_layer13_out_28_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config13_U0_ap_done.read() & (ap_sync_reg_channel_write_layer13_out_28_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer13_out_29_V_1() {
    ap_channel_done_layer13_out_29_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config13_U0_ap_done.read() & (ap_sync_reg_channel_write_layer13_out_29_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer13_out_2_V_1() {
    ap_channel_done_layer13_out_2_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config13_U0_ap_done.read() & (ap_sync_reg_channel_write_layer13_out_2_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer13_out_30_V_1() {
    ap_channel_done_layer13_out_30_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config13_U0_ap_done.read() & (ap_sync_reg_channel_write_layer13_out_30_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer13_out_31_V_1() {
    ap_channel_done_layer13_out_31_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config13_U0_ap_done.read() & (ap_sync_reg_channel_write_layer13_out_31_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer13_out_32_V_1() {
    ap_channel_done_layer13_out_32_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config13_U0_ap_done.read() & (ap_sync_reg_channel_write_layer13_out_32_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer13_out_33_V_1() {
    ap_channel_done_layer13_out_33_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config13_U0_ap_done.read() & (ap_sync_reg_channel_write_layer13_out_33_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer13_out_34_V_1() {
    ap_channel_done_layer13_out_34_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config13_U0_ap_done.read() & (ap_sync_reg_channel_write_layer13_out_34_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer13_out_35_V_1() {
    ap_channel_done_layer13_out_35_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config13_U0_ap_done.read() & (ap_sync_reg_channel_write_layer13_out_35_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer13_out_36_V_1() {
    ap_channel_done_layer13_out_36_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config13_U0_ap_done.read() & (ap_sync_reg_channel_write_layer13_out_36_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer13_out_37_V_1() {
    ap_channel_done_layer13_out_37_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config13_U0_ap_done.read() & (ap_sync_reg_channel_write_layer13_out_37_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer13_out_38_V_1() {
    ap_channel_done_layer13_out_38_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config13_U0_ap_done.read() & (ap_sync_reg_channel_write_layer13_out_38_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer13_out_39_V_1() {
    ap_channel_done_layer13_out_39_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config13_U0_ap_done.read() & (ap_sync_reg_channel_write_layer13_out_39_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer13_out_3_V_1() {
    ap_channel_done_layer13_out_3_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config13_U0_ap_done.read() & (ap_sync_reg_channel_write_layer13_out_3_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer13_out_40_V_1() {
    ap_channel_done_layer13_out_40_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config13_U0_ap_done.read() & (ap_sync_reg_channel_write_layer13_out_40_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer13_out_41_V_1() {
    ap_channel_done_layer13_out_41_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config13_U0_ap_done.read() & (ap_sync_reg_channel_write_layer13_out_41_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer13_out_42_V_1() {
    ap_channel_done_layer13_out_42_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config13_U0_ap_done.read() & (ap_sync_reg_channel_write_layer13_out_42_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer13_out_43_V_1() {
    ap_channel_done_layer13_out_43_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config13_U0_ap_done.read() & (ap_sync_reg_channel_write_layer13_out_43_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer13_out_44_V_1() {
    ap_channel_done_layer13_out_44_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config13_U0_ap_done.read() & (ap_sync_reg_channel_write_layer13_out_44_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer13_out_45_V_1() {
    ap_channel_done_layer13_out_45_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config13_U0_ap_done.read() & (ap_sync_reg_channel_write_layer13_out_45_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer13_out_46_V_1() {
    ap_channel_done_layer13_out_46_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config13_U0_ap_done.read() & (ap_sync_reg_channel_write_layer13_out_46_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer13_out_47_V_1() {
    ap_channel_done_layer13_out_47_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config13_U0_ap_done.read() & (ap_sync_reg_channel_write_layer13_out_47_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer13_out_48_V_1() {
    ap_channel_done_layer13_out_48_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config13_U0_ap_done.read() & (ap_sync_reg_channel_write_layer13_out_48_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer13_out_49_V_1() {
    ap_channel_done_layer13_out_49_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config13_U0_ap_done.read() & (ap_sync_reg_channel_write_layer13_out_49_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer13_out_4_V_1() {
    ap_channel_done_layer13_out_4_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config13_U0_ap_done.read() & (ap_sync_reg_channel_write_layer13_out_4_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer13_out_50_V_1() {
    ap_channel_done_layer13_out_50_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config13_U0_ap_done.read() & (ap_sync_reg_channel_write_layer13_out_50_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer13_out_51_V_1() {
    ap_channel_done_layer13_out_51_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config13_U0_ap_done.read() & (ap_sync_reg_channel_write_layer13_out_51_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer13_out_52_V_1() {
    ap_channel_done_layer13_out_52_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config13_U0_ap_done.read() & (ap_sync_reg_channel_write_layer13_out_52_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer13_out_53_V_1() {
    ap_channel_done_layer13_out_53_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config13_U0_ap_done.read() & (ap_sync_reg_channel_write_layer13_out_53_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer13_out_54_V_1() {
    ap_channel_done_layer13_out_54_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config13_U0_ap_done.read() & (ap_sync_reg_channel_write_layer13_out_54_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer13_out_55_V_1() {
    ap_channel_done_layer13_out_55_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config13_U0_ap_done.read() & (ap_sync_reg_channel_write_layer13_out_55_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer13_out_56_V_1() {
    ap_channel_done_layer13_out_56_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config13_U0_ap_done.read() & (ap_sync_reg_channel_write_layer13_out_56_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer13_out_57_V_1() {
    ap_channel_done_layer13_out_57_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config13_U0_ap_done.read() & (ap_sync_reg_channel_write_layer13_out_57_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer13_out_58_V_1() {
    ap_channel_done_layer13_out_58_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config13_U0_ap_done.read() & (ap_sync_reg_channel_write_layer13_out_58_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer13_out_59_V_1() {
    ap_channel_done_layer13_out_59_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config13_U0_ap_done.read() & (ap_sync_reg_channel_write_layer13_out_59_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer13_out_5_V_1() {
    ap_channel_done_layer13_out_5_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config13_U0_ap_done.read() & (ap_sync_reg_channel_write_layer13_out_5_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer13_out_60_V_1() {
    ap_channel_done_layer13_out_60_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config13_U0_ap_done.read() & (ap_sync_reg_channel_write_layer13_out_60_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer13_out_61_V_1() {
    ap_channel_done_layer13_out_61_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config13_U0_ap_done.read() & (ap_sync_reg_channel_write_layer13_out_61_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer13_out_62_V_1() {
    ap_channel_done_layer13_out_62_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config13_U0_ap_done.read() & (ap_sync_reg_channel_write_layer13_out_62_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer13_out_63_V_1() {
    ap_channel_done_layer13_out_63_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config13_U0_ap_done.read() & (ap_sync_reg_channel_write_layer13_out_63_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer13_out_64_V_1() {
    ap_channel_done_layer13_out_64_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config13_U0_ap_done.read() & (ap_sync_reg_channel_write_layer13_out_64_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer13_out_65_V_1() {
    ap_channel_done_layer13_out_65_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config13_U0_ap_done.read() & (ap_sync_reg_channel_write_layer13_out_65_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer13_out_66_V_1() {
    ap_channel_done_layer13_out_66_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config13_U0_ap_done.read() & (ap_sync_reg_channel_write_layer13_out_66_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer13_out_67_V_1() {
    ap_channel_done_layer13_out_67_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config13_U0_ap_done.read() & (ap_sync_reg_channel_write_layer13_out_67_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer13_out_68_V_1() {
    ap_channel_done_layer13_out_68_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config13_U0_ap_done.read() & (ap_sync_reg_channel_write_layer13_out_68_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer13_out_69_V_1() {
    ap_channel_done_layer13_out_69_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config13_U0_ap_done.read() & (ap_sync_reg_channel_write_layer13_out_69_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer13_out_6_V_1() {
    ap_channel_done_layer13_out_6_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config13_U0_ap_done.read() & (ap_sync_reg_channel_write_layer13_out_6_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer13_out_70_V_1() {
    ap_channel_done_layer13_out_70_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config13_U0_ap_done.read() & (ap_sync_reg_channel_write_layer13_out_70_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer13_out_71_V_1() {
    ap_channel_done_layer13_out_71_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config13_U0_ap_done.read() & (ap_sync_reg_channel_write_layer13_out_71_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer13_out_72_V_1() {
    ap_channel_done_layer13_out_72_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config13_U0_ap_done.read() & (ap_sync_reg_channel_write_layer13_out_72_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer13_out_73_V_1() {
    ap_channel_done_layer13_out_73_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config13_U0_ap_done.read() & (ap_sync_reg_channel_write_layer13_out_73_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer13_out_74_V_1() {
    ap_channel_done_layer13_out_74_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config13_U0_ap_done.read() & (ap_sync_reg_channel_write_layer13_out_74_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer13_out_75_V_1() {
    ap_channel_done_layer13_out_75_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config13_U0_ap_done.read() & (ap_sync_reg_channel_write_layer13_out_75_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer13_out_76_V_1() {
    ap_channel_done_layer13_out_76_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config13_U0_ap_done.read() & (ap_sync_reg_channel_write_layer13_out_76_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer13_out_77_V_1() {
    ap_channel_done_layer13_out_77_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config13_U0_ap_done.read() & (ap_sync_reg_channel_write_layer13_out_77_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer13_out_78_V_1() {
    ap_channel_done_layer13_out_78_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config13_U0_ap_done.read() & (ap_sync_reg_channel_write_layer13_out_78_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer13_out_79_V_1() {
    ap_channel_done_layer13_out_79_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config13_U0_ap_done.read() & (ap_sync_reg_channel_write_layer13_out_79_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer13_out_7_V_1() {
    ap_channel_done_layer13_out_7_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config13_U0_ap_done.read() & (ap_sync_reg_channel_write_layer13_out_7_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer13_out_80_V_1() {
    ap_channel_done_layer13_out_80_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config13_U0_ap_done.read() & (ap_sync_reg_channel_write_layer13_out_80_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer13_out_81_V_1() {
    ap_channel_done_layer13_out_81_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config13_U0_ap_done.read() & (ap_sync_reg_channel_write_layer13_out_81_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer13_out_82_V_1() {
    ap_channel_done_layer13_out_82_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config13_U0_ap_done.read() & (ap_sync_reg_channel_write_layer13_out_82_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer13_out_83_V_1() {
    ap_channel_done_layer13_out_83_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config13_U0_ap_done.read() & (ap_sync_reg_channel_write_layer13_out_83_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer13_out_84_V_1() {
    ap_channel_done_layer13_out_84_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config13_U0_ap_done.read() & (ap_sync_reg_channel_write_layer13_out_84_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer13_out_85_V_1() {
    ap_channel_done_layer13_out_85_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config13_U0_ap_done.read() & (ap_sync_reg_channel_write_layer13_out_85_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer13_out_86_V_1() {
    ap_channel_done_layer13_out_86_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config13_U0_ap_done.read() & (ap_sync_reg_channel_write_layer13_out_86_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer13_out_87_V_1() {
    ap_channel_done_layer13_out_87_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config13_U0_ap_done.read() & (ap_sync_reg_channel_write_layer13_out_87_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer13_out_88_V_1() {
    ap_channel_done_layer13_out_88_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config13_U0_ap_done.read() & (ap_sync_reg_channel_write_layer13_out_88_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer13_out_89_V_1() {
    ap_channel_done_layer13_out_89_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config13_U0_ap_done.read() & (ap_sync_reg_channel_write_layer13_out_89_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer13_out_8_V_1() {
    ap_channel_done_layer13_out_8_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config13_U0_ap_done.read() & (ap_sync_reg_channel_write_layer13_out_8_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer13_out_90_V_1() {
    ap_channel_done_layer13_out_90_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config13_U0_ap_done.read() & (ap_sync_reg_channel_write_layer13_out_90_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer13_out_91_V_1() {
    ap_channel_done_layer13_out_91_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config13_U0_ap_done.read() & (ap_sync_reg_channel_write_layer13_out_91_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer13_out_92_V_1() {
    ap_channel_done_layer13_out_92_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config13_U0_ap_done.read() & (ap_sync_reg_channel_write_layer13_out_92_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer13_out_93_V_1() {
    ap_channel_done_layer13_out_93_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config13_U0_ap_done.read() & (ap_sync_reg_channel_write_layer13_out_93_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer13_out_94_V_1() {
    ap_channel_done_layer13_out_94_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config13_U0_ap_done.read() & (ap_sync_reg_channel_write_layer13_out_94_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer13_out_95_V_1() {
    ap_channel_done_layer13_out_95_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config13_U0_ap_done.read() & (ap_sync_reg_channel_write_layer13_out_95_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer13_out_96_V_1() {
    ap_channel_done_layer13_out_96_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config13_U0_ap_done.read() & (ap_sync_reg_channel_write_layer13_out_96_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer13_out_97_V_1() {
    ap_channel_done_layer13_out_97_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config13_U0_ap_done.read() & (ap_sync_reg_channel_write_layer13_out_97_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer13_out_98_V_1() {
    ap_channel_done_layer13_out_98_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config13_U0_ap_done.read() & (ap_sync_reg_channel_write_layer13_out_98_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer13_out_99_V_1() {
    ap_channel_done_layer13_out_99_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config13_U0_ap_done.read() & (ap_sync_reg_channel_write_layer13_out_99_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer13_out_9_V_1() {
    ap_channel_done_layer13_out_9_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config13_U0_ap_done.read() & (ap_sync_reg_channel_write_layer13_out_9_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer14_out_0_V_1() {
    ap_channel_done_layer14_out_0_V_1 = (dense_resource_ap_fixed_ap_fixed_7_6_5_3_0_config14_U0_ap_done.read() & (ap_sync_reg_channel_write_layer14_out_0_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer14_out_1_V_1() {
    ap_channel_done_layer14_out_1_V_1 = (dense_resource_ap_fixed_ap_fixed_7_6_5_3_0_config14_U0_ap_done.read() & (ap_sync_reg_channel_write_layer14_out_1_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer14_out_2_V_1() {
    ap_channel_done_layer14_out_2_V_1 = (dense_resource_ap_fixed_ap_fixed_7_6_5_3_0_config14_U0_ap_done.read() & (ap_sync_reg_channel_write_layer14_out_2_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer14_out_3_V_1() {
    ap_channel_done_layer14_out_3_V_1 = (dense_resource_ap_fixed_ap_fixed_7_6_5_3_0_config14_U0_ap_done.read() & (ap_sync_reg_channel_write_layer14_out_3_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer14_out_4_V_1() {
    ap_channel_done_layer14_out_4_V_1 = (dense_resource_ap_fixed_ap_fixed_7_6_5_3_0_config14_U0_ap_done.read() & (ap_sync_reg_channel_write_layer14_out_4_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer14_out_5_V_1() {
    ap_channel_done_layer14_out_5_V_1 = (dense_resource_ap_fixed_ap_fixed_7_6_5_3_0_config14_U0_ap_done.read() & (ap_sync_reg_channel_write_layer14_out_5_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer14_out_6_V_1() {
    ap_channel_done_layer14_out_6_V_1 = (dense_resource_ap_fixed_ap_fixed_7_6_5_3_0_config14_U0_ap_done.read() & (ap_sync_reg_channel_write_layer14_out_6_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer14_out_7_V_1() {
    ap_channel_done_layer14_out_7_V_1 = (dense_resource_ap_fixed_ap_fixed_7_6_5_3_0_config14_U0_ap_done.read() & (ap_sync_reg_channel_write_layer14_out_7_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer14_out_8_V_1() {
    ap_channel_done_layer14_out_8_V_1 = (dense_resource_ap_fixed_ap_fixed_7_6_5_3_0_config14_U0_ap_done.read() & (ap_sync_reg_channel_write_layer14_out_8_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer14_out_9_V_1() {
    ap_channel_done_layer14_out_9_V_1 = (dense_resource_ap_fixed_ap_fixed_7_6_5_3_0_config14_U0_ap_done.read() & (ap_sync_reg_channel_write_layer14_out_9_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer15_out_0_V_1() {
    ap_channel_done_layer15_out_0_V_1 = (linear_ap_fixed_ap_fixed_16_6_0_0_0_linear_config15_U0_ap_done.read() & (ap_sync_reg_channel_write_layer15_out_0_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer15_out_1_V_1() {
    ap_channel_done_layer15_out_1_V_1 = (linear_ap_fixed_ap_fixed_16_6_0_0_0_linear_config15_U0_ap_done.read() & (ap_sync_reg_channel_write_layer15_out_1_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer15_out_2_V_1() {
    ap_channel_done_layer15_out_2_V_1 = (linear_ap_fixed_ap_fixed_16_6_0_0_0_linear_config15_U0_ap_done.read() & (ap_sync_reg_channel_write_layer15_out_2_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer15_out_3_V_1() {
    ap_channel_done_layer15_out_3_V_1 = (linear_ap_fixed_ap_fixed_16_6_0_0_0_linear_config15_U0_ap_done.read() & (ap_sync_reg_channel_write_layer15_out_3_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer15_out_4_V_1() {
    ap_channel_done_layer15_out_4_V_1 = (linear_ap_fixed_ap_fixed_16_6_0_0_0_linear_config15_U0_ap_done.read() & (ap_sync_reg_channel_write_layer15_out_4_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer15_out_5_V_1() {
    ap_channel_done_layer15_out_5_V_1 = (linear_ap_fixed_ap_fixed_16_6_0_0_0_linear_config15_U0_ap_done.read() & (ap_sync_reg_channel_write_layer15_out_5_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer15_out_6_V_1() {
    ap_channel_done_layer15_out_6_V_1 = (linear_ap_fixed_ap_fixed_16_6_0_0_0_linear_config15_U0_ap_done.read() & (ap_sync_reg_channel_write_layer15_out_6_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer15_out_7_V_1() {
    ap_channel_done_layer15_out_7_V_1 = (linear_ap_fixed_ap_fixed_16_6_0_0_0_linear_config15_U0_ap_done.read() & (ap_sync_reg_channel_write_layer15_out_7_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer15_out_8_V_1() {
    ap_channel_done_layer15_out_8_V_1 = (linear_ap_fixed_ap_fixed_16_6_0_0_0_linear_config15_U0_ap_done.read() & (ap_sync_reg_channel_write_layer15_out_8_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer15_out_9_V_1() {
    ap_channel_done_layer15_out_9_V_1 = (linear_ap_fixed_ap_fixed_16_6_0_0_0_linear_config15_U0_ap_done.read() & (ap_sync_reg_channel_write_layer15_out_9_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_0_V_1() {
    ap_channel_done_layer2_out_0_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_0_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_100_V_1() {
    ap_channel_done_layer2_out_100_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_100_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_101_V_1() {
    ap_channel_done_layer2_out_101_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_101_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_102_V_1() {
    ap_channel_done_layer2_out_102_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_102_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_103_V_1() {
    ap_channel_done_layer2_out_103_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_103_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_104_V_1() {
    ap_channel_done_layer2_out_104_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_104_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_105_V_1() {
    ap_channel_done_layer2_out_105_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_105_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_106_V_1() {
    ap_channel_done_layer2_out_106_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_106_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_107_V_1() {
    ap_channel_done_layer2_out_107_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_107_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_108_V_1() {
    ap_channel_done_layer2_out_108_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_108_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_109_V_1() {
    ap_channel_done_layer2_out_109_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_109_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_10_V_1() {
    ap_channel_done_layer2_out_10_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_10_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_110_V_1() {
    ap_channel_done_layer2_out_110_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_110_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_111_V_1() {
    ap_channel_done_layer2_out_111_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_111_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_112_V_1() {
    ap_channel_done_layer2_out_112_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_112_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_113_V_1() {
    ap_channel_done_layer2_out_113_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_113_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_114_V_1() {
    ap_channel_done_layer2_out_114_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_114_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_115_V_1() {
    ap_channel_done_layer2_out_115_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_115_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_116_V_1() {
    ap_channel_done_layer2_out_116_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_116_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_117_V_1() {
    ap_channel_done_layer2_out_117_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_117_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_118_V_1() {
    ap_channel_done_layer2_out_118_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_118_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_119_V_1() {
    ap_channel_done_layer2_out_119_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_119_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_11_V_1() {
    ap_channel_done_layer2_out_11_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_11_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_120_V_1() {
    ap_channel_done_layer2_out_120_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_120_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_121_V_1() {
    ap_channel_done_layer2_out_121_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_121_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_122_V_1() {
    ap_channel_done_layer2_out_122_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_122_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_123_V_1() {
    ap_channel_done_layer2_out_123_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_123_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_124_V_1() {
    ap_channel_done_layer2_out_124_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_124_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_125_V_1() {
    ap_channel_done_layer2_out_125_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_125_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_126_V_1() {
    ap_channel_done_layer2_out_126_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_126_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_127_V_1() {
    ap_channel_done_layer2_out_127_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_127_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_128_V_1() {
    ap_channel_done_layer2_out_128_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_128_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_129_V_1() {
    ap_channel_done_layer2_out_129_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_129_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_12_V_1() {
    ap_channel_done_layer2_out_12_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_12_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_130_V_1() {
    ap_channel_done_layer2_out_130_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_130_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_131_V_1() {
    ap_channel_done_layer2_out_131_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_131_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_132_V_1() {
    ap_channel_done_layer2_out_132_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_132_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_133_V_1() {
    ap_channel_done_layer2_out_133_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_133_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_134_V_1() {
    ap_channel_done_layer2_out_134_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_134_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_135_V_1() {
    ap_channel_done_layer2_out_135_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_135_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_136_V_1() {
    ap_channel_done_layer2_out_136_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_136_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_137_V_1() {
    ap_channel_done_layer2_out_137_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_137_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_138_V_1() {
    ap_channel_done_layer2_out_138_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_138_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_139_V_1() {
    ap_channel_done_layer2_out_139_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_139_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_13_V_1() {
    ap_channel_done_layer2_out_13_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_13_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_140_V_1() {
    ap_channel_done_layer2_out_140_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_140_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_141_V_1() {
    ap_channel_done_layer2_out_141_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_141_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_142_V_1() {
    ap_channel_done_layer2_out_142_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_142_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_143_V_1() {
    ap_channel_done_layer2_out_143_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_143_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_144_V_1() {
    ap_channel_done_layer2_out_144_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_144_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_145_V_1() {
    ap_channel_done_layer2_out_145_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_145_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_146_V_1() {
    ap_channel_done_layer2_out_146_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_146_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_147_V_1() {
    ap_channel_done_layer2_out_147_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_147_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_148_V_1() {
    ap_channel_done_layer2_out_148_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_148_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_149_V_1() {
    ap_channel_done_layer2_out_149_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_149_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_14_V_1() {
    ap_channel_done_layer2_out_14_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_14_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_150_V_1() {
    ap_channel_done_layer2_out_150_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_150_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_151_V_1() {
    ap_channel_done_layer2_out_151_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_151_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_152_V_1() {
    ap_channel_done_layer2_out_152_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_152_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_153_V_1() {
    ap_channel_done_layer2_out_153_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_153_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_154_V_1() {
    ap_channel_done_layer2_out_154_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_154_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_155_V_1() {
    ap_channel_done_layer2_out_155_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_155_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_156_V_1() {
    ap_channel_done_layer2_out_156_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_156_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_157_V_1() {
    ap_channel_done_layer2_out_157_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_157_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_158_V_1() {
    ap_channel_done_layer2_out_158_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_158_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_159_V_1() {
    ap_channel_done_layer2_out_159_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_159_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_15_V_1() {
    ap_channel_done_layer2_out_15_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_15_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_160_V_1() {
    ap_channel_done_layer2_out_160_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_160_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_161_V_1() {
    ap_channel_done_layer2_out_161_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_161_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_162_V_1() {
    ap_channel_done_layer2_out_162_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_162_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_163_V_1() {
    ap_channel_done_layer2_out_163_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_163_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_164_V_1() {
    ap_channel_done_layer2_out_164_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_164_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_165_V_1() {
    ap_channel_done_layer2_out_165_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_165_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_166_V_1() {
    ap_channel_done_layer2_out_166_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_166_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_167_V_1() {
    ap_channel_done_layer2_out_167_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_167_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_168_V_1() {
    ap_channel_done_layer2_out_168_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_168_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_169_V_1() {
    ap_channel_done_layer2_out_169_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_169_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_16_V_1() {
    ap_channel_done_layer2_out_16_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_16_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_170_V_1() {
    ap_channel_done_layer2_out_170_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_170_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_171_V_1() {
    ap_channel_done_layer2_out_171_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_171_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_172_V_1() {
    ap_channel_done_layer2_out_172_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_172_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_173_V_1() {
    ap_channel_done_layer2_out_173_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_173_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_174_V_1() {
    ap_channel_done_layer2_out_174_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_174_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_175_V_1() {
    ap_channel_done_layer2_out_175_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_175_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_176_V_1() {
    ap_channel_done_layer2_out_176_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_176_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_177_V_1() {
    ap_channel_done_layer2_out_177_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_177_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_178_V_1() {
    ap_channel_done_layer2_out_178_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_178_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_179_V_1() {
    ap_channel_done_layer2_out_179_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_179_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_17_V_1() {
    ap_channel_done_layer2_out_17_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_17_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_180_V_1() {
    ap_channel_done_layer2_out_180_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_180_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_181_V_1() {
    ap_channel_done_layer2_out_181_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_181_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_182_V_1() {
    ap_channel_done_layer2_out_182_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_182_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_183_V_1() {
    ap_channel_done_layer2_out_183_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_183_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_184_V_1() {
    ap_channel_done_layer2_out_184_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_184_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_185_V_1() {
    ap_channel_done_layer2_out_185_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_185_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_186_V_1() {
    ap_channel_done_layer2_out_186_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_186_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_187_V_1() {
    ap_channel_done_layer2_out_187_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_187_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_188_V_1() {
    ap_channel_done_layer2_out_188_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_188_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_189_V_1() {
    ap_channel_done_layer2_out_189_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_189_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_18_V_1() {
    ap_channel_done_layer2_out_18_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_18_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_190_V_1() {
    ap_channel_done_layer2_out_190_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_190_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_191_V_1() {
    ap_channel_done_layer2_out_191_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_191_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_192_V_1() {
    ap_channel_done_layer2_out_192_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_192_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_193_V_1() {
    ap_channel_done_layer2_out_193_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_193_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_194_V_1() {
    ap_channel_done_layer2_out_194_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_194_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_195_V_1() {
    ap_channel_done_layer2_out_195_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_195_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_196_V_1() {
    ap_channel_done_layer2_out_196_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_196_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_197_V_1() {
    ap_channel_done_layer2_out_197_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_197_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_198_V_1() {
    ap_channel_done_layer2_out_198_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_198_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_199_V_1() {
    ap_channel_done_layer2_out_199_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_199_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_19_V_1() {
    ap_channel_done_layer2_out_19_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_19_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_1_V_1() {
    ap_channel_done_layer2_out_1_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_1_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_20_V_1() {
    ap_channel_done_layer2_out_20_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_20_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_21_V_1() {
    ap_channel_done_layer2_out_21_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_21_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_22_V_1() {
    ap_channel_done_layer2_out_22_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_22_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_23_V_1() {
    ap_channel_done_layer2_out_23_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_23_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_24_V_1() {
    ap_channel_done_layer2_out_24_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_24_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_25_V_1() {
    ap_channel_done_layer2_out_25_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_25_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_26_V_1() {
    ap_channel_done_layer2_out_26_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_26_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_27_V_1() {
    ap_channel_done_layer2_out_27_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_27_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_28_V_1() {
    ap_channel_done_layer2_out_28_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_28_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_29_V_1() {
    ap_channel_done_layer2_out_29_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_29_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_2_V_1() {
    ap_channel_done_layer2_out_2_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_2_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_30_V_1() {
    ap_channel_done_layer2_out_30_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_30_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_31_V_1() {
    ap_channel_done_layer2_out_31_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_31_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_32_V_1() {
    ap_channel_done_layer2_out_32_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_32_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_33_V_1() {
    ap_channel_done_layer2_out_33_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_33_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_34_V_1() {
    ap_channel_done_layer2_out_34_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_34_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_35_V_1() {
    ap_channel_done_layer2_out_35_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_35_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_36_V_1() {
    ap_channel_done_layer2_out_36_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_36_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_37_V_1() {
    ap_channel_done_layer2_out_37_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_37_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_38_V_1() {
    ap_channel_done_layer2_out_38_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_38_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_39_V_1() {
    ap_channel_done_layer2_out_39_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_39_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_3_V_1() {
    ap_channel_done_layer2_out_3_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_3_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_40_V_1() {
    ap_channel_done_layer2_out_40_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_40_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_41_V_1() {
    ap_channel_done_layer2_out_41_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_41_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_42_V_1() {
    ap_channel_done_layer2_out_42_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_42_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_43_V_1() {
    ap_channel_done_layer2_out_43_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_43_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_44_V_1() {
    ap_channel_done_layer2_out_44_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_44_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_45_V_1() {
    ap_channel_done_layer2_out_45_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_45_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_46_V_1() {
    ap_channel_done_layer2_out_46_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_46_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_47_V_1() {
    ap_channel_done_layer2_out_47_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_47_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_48_V_1() {
    ap_channel_done_layer2_out_48_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_48_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_49_V_1() {
    ap_channel_done_layer2_out_49_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_49_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_4_V_1() {
    ap_channel_done_layer2_out_4_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_4_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_50_V_1() {
    ap_channel_done_layer2_out_50_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_50_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_51_V_1() {
    ap_channel_done_layer2_out_51_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_51_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_52_V_1() {
    ap_channel_done_layer2_out_52_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_52_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_53_V_1() {
    ap_channel_done_layer2_out_53_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_53_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_54_V_1() {
    ap_channel_done_layer2_out_54_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_54_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_55_V_1() {
    ap_channel_done_layer2_out_55_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_55_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_56_V_1() {
    ap_channel_done_layer2_out_56_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_56_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_57_V_1() {
    ap_channel_done_layer2_out_57_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_57_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_58_V_1() {
    ap_channel_done_layer2_out_58_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_58_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_59_V_1() {
    ap_channel_done_layer2_out_59_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_59_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_5_V_1() {
    ap_channel_done_layer2_out_5_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_5_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_60_V_1() {
    ap_channel_done_layer2_out_60_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_60_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_61_V_1() {
    ap_channel_done_layer2_out_61_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_61_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_62_V_1() {
    ap_channel_done_layer2_out_62_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_62_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_63_V_1() {
    ap_channel_done_layer2_out_63_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_63_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_64_V_1() {
    ap_channel_done_layer2_out_64_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_64_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_65_V_1() {
    ap_channel_done_layer2_out_65_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_65_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_66_V_1() {
    ap_channel_done_layer2_out_66_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_66_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_67_V_1() {
    ap_channel_done_layer2_out_67_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_67_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_68_V_1() {
    ap_channel_done_layer2_out_68_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_68_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_69_V_1() {
    ap_channel_done_layer2_out_69_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_69_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_6_V_1() {
    ap_channel_done_layer2_out_6_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_6_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_70_V_1() {
    ap_channel_done_layer2_out_70_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_70_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_71_V_1() {
    ap_channel_done_layer2_out_71_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_71_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_72_V_1() {
    ap_channel_done_layer2_out_72_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_72_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_73_V_1() {
    ap_channel_done_layer2_out_73_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_73_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_74_V_1() {
    ap_channel_done_layer2_out_74_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_74_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_75_V_1() {
    ap_channel_done_layer2_out_75_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_75_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_76_V_1() {
    ap_channel_done_layer2_out_76_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_76_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_77_V_1() {
    ap_channel_done_layer2_out_77_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_77_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_78_V_1() {
    ap_channel_done_layer2_out_78_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_78_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_79_V_1() {
    ap_channel_done_layer2_out_79_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_79_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_7_V_1() {
    ap_channel_done_layer2_out_7_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_7_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_80_V_1() {
    ap_channel_done_layer2_out_80_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_80_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_81_V_1() {
    ap_channel_done_layer2_out_81_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_81_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_82_V_1() {
    ap_channel_done_layer2_out_82_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_82_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_83_V_1() {
    ap_channel_done_layer2_out_83_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_83_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_84_V_1() {
    ap_channel_done_layer2_out_84_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_84_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_85_V_1() {
    ap_channel_done_layer2_out_85_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_85_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_86_V_1() {
    ap_channel_done_layer2_out_86_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_86_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_87_V_1() {
    ap_channel_done_layer2_out_87_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_87_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_88_V_1() {
    ap_channel_done_layer2_out_88_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_88_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_89_V_1() {
    ap_channel_done_layer2_out_89_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_89_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_8_V_1() {
    ap_channel_done_layer2_out_8_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_8_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_90_V_1() {
    ap_channel_done_layer2_out_90_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_90_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_91_V_1() {
    ap_channel_done_layer2_out_91_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_91_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_92_V_1() {
    ap_channel_done_layer2_out_92_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_92_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_93_V_1() {
    ap_channel_done_layer2_out_93_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_93_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_94_V_1() {
    ap_channel_done_layer2_out_94_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_94_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_95_V_1() {
    ap_channel_done_layer2_out_95_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_95_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_96_V_1() {
    ap_channel_done_layer2_out_96_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_96_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_97_V_1() {
    ap_channel_done_layer2_out_97_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_97_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_98_V_1() {
    ap_channel_done_layer2_out_98_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_98_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_99_V_1() {
    ap_channel_done_layer2_out_99_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_99_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer2_out_9_V_1() {
    ap_channel_done_layer2_out_9_V_1 = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_9_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_0_V_1() {
    ap_channel_done_layer4_out_0_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_0_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_100_V_1() {
    ap_channel_done_layer4_out_100_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_100_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_101_V_1() {
    ap_channel_done_layer4_out_101_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_101_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_102_V_1() {
    ap_channel_done_layer4_out_102_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_102_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_103_V_1() {
    ap_channel_done_layer4_out_103_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_103_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_104_V_1() {
    ap_channel_done_layer4_out_104_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_104_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_105_V_1() {
    ap_channel_done_layer4_out_105_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_105_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_106_V_1() {
    ap_channel_done_layer4_out_106_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_106_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_107_V_1() {
    ap_channel_done_layer4_out_107_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_107_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_108_V_1() {
    ap_channel_done_layer4_out_108_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_108_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_109_V_1() {
    ap_channel_done_layer4_out_109_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_109_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_10_V_1() {
    ap_channel_done_layer4_out_10_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_10_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_110_V_1() {
    ap_channel_done_layer4_out_110_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_110_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_111_V_1() {
    ap_channel_done_layer4_out_111_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_111_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_112_V_1() {
    ap_channel_done_layer4_out_112_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_112_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_113_V_1() {
    ap_channel_done_layer4_out_113_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_113_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_114_V_1() {
    ap_channel_done_layer4_out_114_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_114_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_115_V_1() {
    ap_channel_done_layer4_out_115_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_115_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_116_V_1() {
    ap_channel_done_layer4_out_116_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_116_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_117_V_1() {
    ap_channel_done_layer4_out_117_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_117_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_118_V_1() {
    ap_channel_done_layer4_out_118_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_118_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_119_V_1() {
    ap_channel_done_layer4_out_119_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_119_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_11_V_1() {
    ap_channel_done_layer4_out_11_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_11_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_120_V_1() {
    ap_channel_done_layer4_out_120_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_120_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_121_V_1() {
    ap_channel_done_layer4_out_121_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_121_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_122_V_1() {
    ap_channel_done_layer4_out_122_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_122_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_123_V_1() {
    ap_channel_done_layer4_out_123_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_123_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_124_V_1() {
    ap_channel_done_layer4_out_124_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_124_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_125_V_1() {
    ap_channel_done_layer4_out_125_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_125_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_126_V_1() {
    ap_channel_done_layer4_out_126_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_126_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_127_V_1() {
    ap_channel_done_layer4_out_127_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_127_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_128_V_1() {
    ap_channel_done_layer4_out_128_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_128_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_129_V_1() {
    ap_channel_done_layer4_out_129_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_129_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_12_V_1() {
    ap_channel_done_layer4_out_12_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_12_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_130_V_1() {
    ap_channel_done_layer4_out_130_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_130_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_131_V_1() {
    ap_channel_done_layer4_out_131_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_131_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_132_V_1() {
    ap_channel_done_layer4_out_132_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_132_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_133_V_1() {
    ap_channel_done_layer4_out_133_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_133_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_134_V_1() {
    ap_channel_done_layer4_out_134_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_134_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_135_V_1() {
    ap_channel_done_layer4_out_135_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_135_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_136_V_1() {
    ap_channel_done_layer4_out_136_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_136_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_137_V_1() {
    ap_channel_done_layer4_out_137_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_137_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_138_V_1() {
    ap_channel_done_layer4_out_138_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_138_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_139_V_1() {
    ap_channel_done_layer4_out_139_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_139_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_13_V_1() {
    ap_channel_done_layer4_out_13_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_13_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_140_V_1() {
    ap_channel_done_layer4_out_140_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_140_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_141_V_1() {
    ap_channel_done_layer4_out_141_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_141_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_142_V_1() {
    ap_channel_done_layer4_out_142_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_142_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_143_V_1() {
    ap_channel_done_layer4_out_143_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_143_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_144_V_1() {
    ap_channel_done_layer4_out_144_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_144_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_145_V_1() {
    ap_channel_done_layer4_out_145_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_145_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_146_V_1() {
    ap_channel_done_layer4_out_146_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_146_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_147_V_1() {
    ap_channel_done_layer4_out_147_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_147_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_148_V_1() {
    ap_channel_done_layer4_out_148_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_148_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_149_V_1() {
    ap_channel_done_layer4_out_149_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_149_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_14_V_1() {
    ap_channel_done_layer4_out_14_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_14_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_150_V_1() {
    ap_channel_done_layer4_out_150_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_150_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_151_V_1() {
    ap_channel_done_layer4_out_151_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_151_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_152_V_1() {
    ap_channel_done_layer4_out_152_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_152_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_153_V_1() {
    ap_channel_done_layer4_out_153_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_153_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_154_V_1() {
    ap_channel_done_layer4_out_154_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_154_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_155_V_1() {
    ap_channel_done_layer4_out_155_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_155_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_156_V_1() {
    ap_channel_done_layer4_out_156_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_156_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_157_V_1() {
    ap_channel_done_layer4_out_157_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_157_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_158_V_1() {
    ap_channel_done_layer4_out_158_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_158_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_159_V_1() {
    ap_channel_done_layer4_out_159_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_159_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_15_V_1() {
    ap_channel_done_layer4_out_15_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_15_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_160_V_1() {
    ap_channel_done_layer4_out_160_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_160_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_161_V_1() {
    ap_channel_done_layer4_out_161_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_161_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_162_V_1() {
    ap_channel_done_layer4_out_162_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_162_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_163_V_1() {
    ap_channel_done_layer4_out_163_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_163_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_164_V_1() {
    ap_channel_done_layer4_out_164_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_164_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_165_V_1() {
    ap_channel_done_layer4_out_165_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_165_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_166_V_1() {
    ap_channel_done_layer4_out_166_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_166_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_167_V_1() {
    ap_channel_done_layer4_out_167_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_167_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_168_V_1() {
    ap_channel_done_layer4_out_168_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_168_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_169_V_1() {
    ap_channel_done_layer4_out_169_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_169_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_16_V_1() {
    ap_channel_done_layer4_out_16_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_16_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_170_V_1() {
    ap_channel_done_layer4_out_170_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_170_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_171_V_1() {
    ap_channel_done_layer4_out_171_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_171_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_172_V_1() {
    ap_channel_done_layer4_out_172_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_172_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_173_V_1() {
    ap_channel_done_layer4_out_173_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_173_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_174_V_1() {
    ap_channel_done_layer4_out_174_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_174_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_175_V_1() {
    ap_channel_done_layer4_out_175_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_175_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_176_V_1() {
    ap_channel_done_layer4_out_176_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_176_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_177_V_1() {
    ap_channel_done_layer4_out_177_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_177_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_178_V_1() {
    ap_channel_done_layer4_out_178_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_178_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_179_V_1() {
    ap_channel_done_layer4_out_179_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_179_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_17_V_1() {
    ap_channel_done_layer4_out_17_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_17_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_180_V_1() {
    ap_channel_done_layer4_out_180_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_180_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_181_V_1() {
    ap_channel_done_layer4_out_181_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_181_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_182_V_1() {
    ap_channel_done_layer4_out_182_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_182_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_183_V_1() {
    ap_channel_done_layer4_out_183_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_183_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_184_V_1() {
    ap_channel_done_layer4_out_184_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_184_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_185_V_1() {
    ap_channel_done_layer4_out_185_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_185_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_186_V_1() {
    ap_channel_done_layer4_out_186_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_186_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_187_V_1() {
    ap_channel_done_layer4_out_187_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_187_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_188_V_1() {
    ap_channel_done_layer4_out_188_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_188_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_189_V_1() {
    ap_channel_done_layer4_out_189_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_189_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_18_V_1() {
    ap_channel_done_layer4_out_18_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_18_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_190_V_1() {
    ap_channel_done_layer4_out_190_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_190_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_191_V_1() {
    ap_channel_done_layer4_out_191_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_191_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_192_V_1() {
    ap_channel_done_layer4_out_192_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_192_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_193_V_1() {
    ap_channel_done_layer4_out_193_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_193_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_194_V_1() {
    ap_channel_done_layer4_out_194_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_194_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_195_V_1() {
    ap_channel_done_layer4_out_195_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_195_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_196_V_1() {
    ap_channel_done_layer4_out_196_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_196_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_197_V_1() {
    ap_channel_done_layer4_out_197_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_197_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_198_V_1() {
    ap_channel_done_layer4_out_198_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_198_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_199_V_1() {
    ap_channel_done_layer4_out_199_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_199_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_19_V_1() {
    ap_channel_done_layer4_out_19_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_19_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_1_V_1() {
    ap_channel_done_layer4_out_1_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_1_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_20_V_1() {
    ap_channel_done_layer4_out_20_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_20_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_21_V_1() {
    ap_channel_done_layer4_out_21_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_21_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_22_V_1() {
    ap_channel_done_layer4_out_22_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_22_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_23_V_1() {
    ap_channel_done_layer4_out_23_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_23_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_24_V_1() {
    ap_channel_done_layer4_out_24_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_24_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_25_V_1() {
    ap_channel_done_layer4_out_25_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_25_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_26_V_1() {
    ap_channel_done_layer4_out_26_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_26_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_27_V_1() {
    ap_channel_done_layer4_out_27_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_27_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_28_V_1() {
    ap_channel_done_layer4_out_28_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_28_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_29_V_1() {
    ap_channel_done_layer4_out_29_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_29_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_2_V_1() {
    ap_channel_done_layer4_out_2_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_2_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_30_V_1() {
    ap_channel_done_layer4_out_30_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_30_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_31_V_1() {
    ap_channel_done_layer4_out_31_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_31_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_32_V_1() {
    ap_channel_done_layer4_out_32_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_32_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_33_V_1() {
    ap_channel_done_layer4_out_33_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_33_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_34_V_1() {
    ap_channel_done_layer4_out_34_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_34_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_35_V_1() {
    ap_channel_done_layer4_out_35_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_35_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_36_V_1() {
    ap_channel_done_layer4_out_36_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_36_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_37_V_1() {
    ap_channel_done_layer4_out_37_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_37_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_38_V_1() {
    ap_channel_done_layer4_out_38_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_38_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_39_V_1() {
    ap_channel_done_layer4_out_39_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_39_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_3_V_1() {
    ap_channel_done_layer4_out_3_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_3_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_40_V_1() {
    ap_channel_done_layer4_out_40_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_40_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_41_V_1() {
    ap_channel_done_layer4_out_41_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_41_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_42_V_1() {
    ap_channel_done_layer4_out_42_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_42_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_43_V_1() {
    ap_channel_done_layer4_out_43_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_43_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_44_V_1() {
    ap_channel_done_layer4_out_44_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_44_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_45_V_1() {
    ap_channel_done_layer4_out_45_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_45_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_46_V_1() {
    ap_channel_done_layer4_out_46_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_46_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_47_V_1() {
    ap_channel_done_layer4_out_47_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_47_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_48_V_1() {
    ap_channel_done_layer4_out_48_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_48_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_49_V_1() {
    ap_channel_done_layer4_out_49_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_49_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_4_V_1() {
    ap_channel_done_layer4_out_4_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_4_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_50_V_1() {
    ap_channel_done_layer4_out_50_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_50_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_51_V_1() {
    ap_channel_done_layer4_out_51_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_51_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_52_V_1() {
    ap_channel_done_layer4_out_52_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_52_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_53_V_1() {
    ap_channel_done_layer4_out_53_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_53_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_54_V_1() {
    ap_channel_done_layer4_out_54_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_54_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_55_V_1() {
    ap_channel_done_layer4_out_55_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_55_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_56_V_1() {
    ap_channel_done_layer4_out_56_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_56_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_57_V_1() {
    ap_channel_done_layer4_out_57_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_57_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_58_V_1() {
    ap_channel_done_layer4_out_58_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_58_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_59_V_1() {
    ap_channel_done_layer4_out_59_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_59_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_5_V_1() {
    ap_channel_done_layer4_out_5_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_5_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_60_V_1() {
    ap_channel_done_layer4_out_60_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_60_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_61_V_1() {
    ap_channel_done_layer4_out_61_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_61_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_62_V_1() {
    ap_channel_done_layer4_out_62_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_62_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_63_V_1() {
    ap_channel_done_layer4_out_63_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_63_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_64_V_1() {
    ap_channel_done_layer4_out_64_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_64_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_65_V_1() {
    ap_channel_done_layer4_out_65_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_65_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_66_V_1() {
    ap_channel_done_layer4_out_66_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_66_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_67_V_1() {
    ap_channel_done_layer4_out_67_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_67_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_68_V_1() {
    ap_channel_done_layer4_out_68_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_68_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_69_V_1() {
    ap_channel_done_layer4_out_69_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_69_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_6_V_1() {
    ap_channel_done_layer4_out_6_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_6_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_70_V_1() {
    ap_channel_done_layer4_out_70_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_70_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_71_V_1() {
    ap_channel_done_layer4_out_71_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_71_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_72_V_1() {
    ap_channel_done_layer4_out_72_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_72_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_73_V_1() {
    ap_channel_done_layer4_out_73_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_73_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_74_V_1() {
    ap_channel_done_layer4_out_74_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_74_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_75_V_1() {
    ap_channel_done_layer4_out_75_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_75_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_76_V_1() {
    ap_channel_done_layer4_out_76_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_76_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_77_V_1() {
    ap_channel_done_layer4_out_77_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_77_V_1.read() ^ 
  ap_const_logic_1));
}

void myproject::thread_ap_channel_done_layer4_out_78_V_1() {
    ap_channel_done_layer4_out_78_V_1 = (relu_ap_fixed_ap_fixed_16_6_0_0_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_78_V_1.read() ^ 
  ap_const_logic_1));
}

}

