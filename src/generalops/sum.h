#include "../tinclude.h"

#undef tensor_sum
#define sum_build(type) tensor_sum_##type
#define tensor_sum_(type) sum_build(type)
static inline tensor_t
tensor_sum_(tensor_t)(tensor_t* tensor, uint_t n) {    
    tensor_t sum = 0;
    for (uint_t i = 0; i < n; i++) {
        sum += tensor[i];
    }
    return sum;
}