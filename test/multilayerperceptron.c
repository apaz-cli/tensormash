/* 
# In this file, we wish to template the following archetecture as it would be declared in PyTorch:
model = Sequential( nn.Linear(784, 128),
                    nn.ReLU(),
                    nn.Linear(128,64),
                    nn.ReLU(),
                    nn.Linear(64,10))

To do this, we're going to have to implement all the layers listed.
*/

#define tensor_t float
#include "tensor.h"

const uint_t layer0_shape = 784;
tensor_t input_layer0[layer0_shape];

const uint_t layer1_shape = 128;
tensor_t hidden_layer1[layer1_shape];

const uint_t layer2_shape = 64;
tensor_t hidden_layer2[layer2_shape];

const uint_t layer3_shape = 10;
tensor_t output_layer3[layer3_shape];

void load_batch_inputs() {
}

void train_batch() {
}

int main() {
}