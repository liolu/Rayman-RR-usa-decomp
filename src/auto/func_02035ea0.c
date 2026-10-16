#include "m2c.h"

extern long FX_Div(long xNum, long xDen);
extern long func_01ff8668(long *p_lVec);
extern long func_0206b3f4(void *p_vA);
extern struct {
    char pad[0xc4];
    long lC4;
} data_020dc19c;

long func_02035ea0(char *p_cObj, void *p_vArg, long lB, long lC) {
    long alV[3];
    long lRes;
    long lT;
    alV[0] = *(long *) (p_cObj + 0xe0) - *(long *) (p_cObj + 0x7c);
    alV[1] = *(long *) (p_cObj + 0xe4) - *(long *) (p_cObj + 0x80);
    alV[2] = *(long *) (p_cObj + 0xe8) - *(long *) (p_cObj + 0x84);
    if ((func_0206b3f4(p_vArg) & 0x80000000) == 0x80000000) {
        lT   = FX_Div(func_01ff8668(alV), 0xE66);
        lRes = ((long) (((long long) lT * lC + 0x800) >> 12) + 0x1000) >> 12;
    } else {
        lT   = (FX_Div(lB, data_020dc19c.lC4) + 0x800) >> 12;
        lRes = 1;
        if (lT > 4 && func_01ff8668(alV) > 0x800) {
            lRes = 2;
        }
    }
    return lRes;
}
