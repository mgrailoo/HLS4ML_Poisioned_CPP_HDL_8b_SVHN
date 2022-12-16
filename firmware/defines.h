#ifndef DEFINES_H_
#define DEFINES_H_

#include "ap_int.h"
#include "ap_fixed.h"
#include "nnet_utils/nnet_types.h"

//hls-fpga-machine-learning insert numbers
#define N_INPUT_1_1 3072
#define N_LAYER_2 200
#define N_LAYER_5 200
#define N_LAYER_8 200
#define N_LAYER_11 200
#define N_LAYER_14 10

//hls-fpga-machine-learning insert layer-precision
typedef ap_fixed<16,6> model_default_t;
typedef ap_fixed<16,6> input_t;
typedef ap_fixed<16,6> layer2_t;
typedef ap_fixed<16,6> weight2_t;
typedef ap_fixed<16,6> bias2_t;
typedef ap_fixed<16,6,AP_RND,AP_SAT> layer4_t;
typedef ap_fixed<16,6> layer5_t;
typedef ap_fixed<16,6> weight5_t;
typedef ap_fixed<16,6> bias5_t;
typedef ap_fixed<16,6,AP_RND,AP_SAT> layer7_t;
typedef ap_fixed<16,6> layer8_t;
typedef ap_fixed<16,6> weight8_t;
typedef ap_fixed<16,6> bias8_t;
typedef ap_fixed<16,6,AP_RND,AP_SAT> layer10_t;
typedef ap_fixed<16,6> layer11_t;
typedef ap_fixed<16,6> weight11_t;
typedef ap_fixed<16,6> bias11_t;
typedef ap_fixed<16,6,AP_RND,AP_SAT> layer13_t;
typedef ap_fixed<8,6> layer14_t;
typedef ap_fixed<16,6> weight14_t;
typedef ap_fixed<16,6> bias14_t;
typedef ap_fixed<16,6,AP_RND,AP_SAT> layer15_t;
typedef ap_fixed<16,6> softmax_default_t;
typedef ap_fixed<16,6> result_t;

#endif
