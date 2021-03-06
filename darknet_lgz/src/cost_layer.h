#ifndef COST_LAYER_H
#define COST_LAYER_H
#include "layer.h"
#include "network.h"

typedef layer cost_layer;

COST_TYPE get_cost_type(char *s);
char *get_cost_string(COST_TYPE a);
cost_layer make_cost_layer(int batch, int inputs, COST_TYPE type, float scale);
<<<<<<< HEAD
<<<<<<< HEAD
void forward_cost_layer(const cost_layer l, network net);
void backward_cost_layer(const cost_layer l, network net);
void resize_cost_layer(cost_layer *l, int inputs);

#ifdef GPU
void forward_cost_layer_gpu(cost_layer l, network net);
void backward_cost_layer_gpu(const cost_layer l, network net);
=======
=======
>>>>>>> 07267f401b3d9c82c5f695f932c9f504d2b6a592
void forward_cost_layer(const cost_layer l, network_state state);
void backward_cost_layer(const cost_layer l, network_state state);
void resize_cost_layer(cost_layer *l, int inputs);

#ifdef GPU
void forward_cost_layer_gpu(cost_layer l, network_state state);
void backward_cost_layer_gpu(const cost_layer l, network_state state);
<<<<<<< HEAD
>>>>>>> b5b3d7367411302dd6e73c8fe583d6860a786445
=======
>>>>>>> 07267f401b3d9c82c5f695f932c9f504d2b6a592
#endif

#endif
