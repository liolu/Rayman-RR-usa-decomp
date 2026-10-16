#include "m2c.h"

extern long VEC_DotProduct(const void *p_vA, const void *p_vB);

void func_020359b8(long *p_lOut, long *p_lA, long *p_lB) {
    long lD   = -VEC_DotProduct(p_lA, p_lB);
    p_lOut[0] = p_lA[0] + (long) (((long long) lD * p_lB[0] + 0x800) >> 12);
    p_lOut[1] = p_lA[1] + (long) (((long long) lD * p_lB[1] + 0x800) >> 12);
    p_lOut[2] = p_lA[2] + (long) (((long long) lD * p_lB[2] + 0x800) >> 12);
}
