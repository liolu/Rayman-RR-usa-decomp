#include "m2c.h"

void func_020328c0(long *p_lOut, char *p_cObj, long lScale, long lFlag) {
    long lT   = ((long) (((long long) (lScale) * (*(long *) (p_cObj + 0x17c)) + 0x800) >> 12));
    p_lOut[0] = ((long) (((long long) (lT) * (*(long *) (p_cObj + 0x19c)) + 0x800) >> 12));
    p_lOut[1] = ((long) (((long long) (lT) * (*(long *) (p_cObj + 0x1a0)) + 0x800) >> 12));
    p_lOut[2] = ((long) (((long long) (lT) * (*(long *) (p_cObj + 0x1a4)) + 0x800) >> 12));
    if (lFlag != 0) {
        p_lOut[0] = ((long) (((long long) (*(long *) (p_cObj + 0x18c)) * (p_lOut[0]) + 0x800) >> 12));
        p_lOut[1] = ((long) (((long long) (*(long *) (p_cObj + 0x18c)) * (p_lOut[1]) + 0x800) >> 12));
        p_lOut[2] = ((long) (((long long) (*(long *) (p_cObj + 0x18c)) * (p_lOut[2]) + 0x800) >> 12));
    }
}
