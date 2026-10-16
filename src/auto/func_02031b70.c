#include "m2c.h"

void func_02031b70(char *p_cObj, long *p_lOut) {
    long *p_lA = (long *) (p_cObj + 0x7c);
    long *p_lB = (long *) (p_cObj + 0xe0);
    long lY    = p_lA[1] >> 12;
    long lZ    = p_lA[2] >> 12;
    p_lOut[0]  = p_lA[0] & ~0xFFF;
    p_lOut[1]  = lY << 12;
    p_lOut[2]  = lZ << 12;
    p_lB[0]    = p_lB[0] - p_lOut[0];
    p_lB[1]    = p_lB[1] - p_lOut[1];
    p_lB[2]    = p_lB[2] - p_lOut[2];
    p_lA[0]    = p_lA[0] - p_lOut[0];
    p_lA[1]    = p_lA[1] - p_lOut[1];
    p_lA[2]    = p_lA[2] - p_lOut[2];
}
