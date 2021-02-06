#include "../tinclude.h"

#define MAX(a, b) ((a) > (b)) ? (a) : (b)
#define MIN(a, b) ((a) > (b)) ? (b) : (a)

#undef max_of_build
#undef max_of_tensor_
#define max_of_build(type) max_of_tensor_##type
#define max_of_tensor_(type) max_of_build(type)
static inline void
max_of_tensor_(tensor_t)(tensor_t* tensor, uint_t* n, tensor_t* ans, uint_t* pos) {
    *ans = tensor[0];
    for (uint_t i = 1; i < *n; i++) {
        if (tensor[i] > (*ans)) {
            *ans = tensor[i];
            *pos = i;
        }
    }
}
