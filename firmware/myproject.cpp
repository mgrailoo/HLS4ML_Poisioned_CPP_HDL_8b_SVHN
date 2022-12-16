//
//    rfnoc-hls-neuralnet: Vivado HLS code for neural-net building blocks
//
//    Copyright (C) 2017 EJ Kreinar
//
//    This program is free software: you can redistribute it and/or modify
//    it under the terms of the GNU General Public License as published by
//    the Free Software Foundation, either version 3 of the License, or
//    (at your option) any later version.
//
//    This program is distributed in the hope that it will be useful,
//    but WITHOUT ANY WARRANTY; without even the implied warranty of
//    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//    GNU General Public License for more details.
//
//    You should have received a copy of the GNU General Public License
//    along with this program.  If not, see <http://www.gnu.org/licenses/>.
//
#include <iostream>

#include "myproject.h"
#include "parameters.h"

void myproject(
    input_t fc1_input[N_INPUT_1_1],
    result_t layer16_out[N_LAYER_14],
    unsigned short &const_size_in_1,
    unsigned short &const_size_out_1
) {

    //hls-fpga-machine-learning insert IO
    #pragma HLS ARRAY_RESHAPE variable=fc1_input complete dim=0
    #pragma HLS ARRAY_PARTITION variable=layer16_out complete dim=0
    #pragma HLS INTERFACE ap_vld port=fc1_input,layer16_out 
    #pragma HLS DATAFLOW 

    const_size_in_1 = N_INPUT_1_1;
    const_size_out_1 = N_LAYER_14;

#ifndef __SYNTHESIS__
    static bool loaded_weights = false;
    if (!loaded_weights) {
        //hls-fpga-machine-learning insert load weights
        nnet::load_weights_from_txt<weight2_t, 614400>(w2, "w2.txt");
        nnet::load_weights_from_txt<bias2_t, 200>(b2, "b2.txt");
        nnet::load_weights_from_txt<weight5_t, 40000>(w5, "w5.txt");
        nnet::load_weights_from_txt<bias5_t, 200>(b5, "b5.txt");
        nnet::load_weights_from_txt<weight8_t, 40000>(w8, "w8.txt");
        nnet::load_weights_from_txt<bias8_t, 200>(b8, "b8.txt");
        nnet::load_weights_from_txt<weight11_t, 40000>(w11, "w11.txt");
        nnet::load_weights_from_txt<bias11_t, 200>(b11, "b11.txt");
        nnet::load_weights_from_txt<weight14_t, 2000>(w14, "w14.txt");
        nnet::load_weights_from_txt<bias14_t, 10>(b14, "b14.txt");
        loaded_weights = true;
    }
#endif

    // ****************************************
    // NETWORK INSTANTIATION
    // ****************************************

    //hls-fpga-machine-learning insert layers

    layer2_t layer2_out[N_LAYER_2];
    #pragma HLS ARRAY_PARTITION variable=layer2_out complete dim=0
    #pragma HLS STABLE variable=layer2_out
    nnet::dense<input_t, layer2_t, config2>(fc1_input, layer2_out, w2, b2); // fc1

    layer4_t layer4_out[N_LAYER_2];
    #pragma HLS ARRAY_PARTITION variable=layer4_out complete dim=0
    #pragma HLS STABLE variable=layer4_out
    nnet::relu<layer2_t, layer4_t, relu_config4>(layer2_out, layer4_out); // relu1

    layer5_t layer5_out[N_LAYER_5];
    #pragma HLS ARRAY_PARTITION variable=layer5_out complete dim=0
    #pragma HLS STABLE variable=layer5_out
    nnet::dense<layer4_t, layer5_t, config5>(layer4_out, layer5_out, w5, b5); // fc2

    layer7_t layer7_out[N_LAYER_5];
    #pragma HLS ARRAY_PARTITION variable=layer7_out complete dim=0
    #pragma HLS STABLE variable=layer7_out
    nnet::relu<layer5_t, layer7_t, relu_config7>(layer5_out, layer7_out); // relu2

    layer8_t layer8_out[N_LAYER_8];
    #pragma HLS ARRAY_PARTITION variable=layer8_out complete dim=0
    #pragma HLS STABLE variable=layer8_out
    nnet::dense<layer7_t, layer8_t, config8>(layer7_out, layer8_out, w8, b8); // fc3

    layer10_t layer10_out[N_LAYER_8];
    #pragma HLS ARRAY_PARTITION variable=layer10_out complete dim=0
    #pragma HLS STABLE variable=layer10_out
    nnet::relu<layer8_t, layer10_t, relu_config10>(layer8_out, layer10_out); // relu3

    layer11_t layer11_out[N_LAYER_11];
    #pragma HLS ARRAY_PARTITION variable=layer11_out complete dim=0
    #pragma HLS STABLE variable=layer11_out
    nnet::dense<layer10_t, layer11_t, config11>(layer10_out, layer11_out, w11, b11); // fc4

    layer13_t layer13_out[N_LAYER_11];
    #pragma HLS ARRAY_PARTITION variable=layer13_out complete dim=0
    #pragma HLS STABLE variable=layer13_out
    nnet::relu<layer11_t, layer13_t, relu_config13>(layer11_out, layer13_out); // relu4

    layer14_t layer14_out[N_LAYER_14];
    #pragma HLS ARRAY_PARTITION variable=layer14_out complete dim=0
    #pragma HLS STABLE variable=layer14_out
    nnet::dense<layer13_t, layer14_t, config14>(layer13_out, layer14_out, w14, b14); // output

    layer15_t layer15_out[N_LAYER_14];
    #pragma HLS ARRAY_PARTITION variable=layer15_out complete dim=0
    #pragma HLS STABLE variable=layer15_out
    nnet::linear<layer14_t, layer15_t, linear_config15>(layer14_out, layer15_out); // output_linear

    nnet::softmax<layer15_t, result_t, softmax_config16>(layer15_out, layer16_out); // softmax

}
