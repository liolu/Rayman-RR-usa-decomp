#include "m2c.h"

extern long FX_Div(long xNum, long xDen);
extern void func_01ff84a0(long *p_lDst, const long *p_lSrc);
extern long func_01ff8668(const long *p_lV);
extern void func_02035a48(long *p_lA, long *p_lB, long *p_lC);
extern void func_02035bec(long *p_lA, long *p_lB, long *p_lC);
extern long data_020bc548;

void func_020332f0(long *p_lA, long *p_lB, long lC) {
    long alA[3];
    long alB[3];
    long alR[4];
    long lN1;
    long lN2;
    if (lC == 0x1000) {
        return;
    }
    lN1 = func_01ff8668(p_lA);
    lN2 = func_01ff8668(p_lB);
    if (lN1 > data_020bc548 && lN2 > data_020bc548) {
        func_01ff84a0(alA, p_lA);
        func_01ff84a0(alB, p_lB);
        func_02035a48(alR, alB, alA);
        alR[0] = FX_Div(alR[0], lC);
        func_02035bec(alR, alB, alA);
        func_01ff84a0(alA, alA);
        p_lA[0] = (long) (((long long) lN1 * alA[0] + 0x800) >> 12);
        p_lA[1] = (long) (((long long) lN1 * alA[1] + 0x800) >> 12);
        p_lA[2] = (long) (((long long) lN1 * alA[2] + 0x800) >> 12);
    }
}
