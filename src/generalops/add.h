#include "../tinclude.h"

#undef add_build
#undef add_tensors_
#define add_build(type) add_tensors_##type
#define add_tensors_(type) add_build(type)
static inline void
add_tensors_(tensor_t)(tensor_t* t1, uint_t* n1, tensor_t* t2, uint_t* n2,
                       tensor_t* ans, tensor_t* gradwrt1, tensor_t* gradwrt2) {
}