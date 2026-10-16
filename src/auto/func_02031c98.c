#include "m2c.h"

void func_02031c98(char *p_cA, long *p_lV) {
    p_lV[0] = (long) (((long long) p_lV[0] * *(long *) (p_cA + 0x48) + 0x800) >> 12);
    p_lV[1] = (long) (((long long) p_lV[1] * *(long *) (p_cA + 0x4c) + 0x800) >> 12);
    p_lV[2] = (long) (((long long) p_lV[2] * *(long *) (p_cA + 0x50) + 0x800) >> 12);
}
