#include "m2c.h"

extern void func_0202e0e8(void *p_vA, long *p_lB, long *p_lC, long *p_lD);

unsigned char func_02031ac0(void *p_vA, void *p_vB) {
    long alA[3];
    long alB[3];
    long alC[3];
    long alD[3];
    long alE[3];
    long alF[3];
    long ucRes;
    func_0202e0e8(p_vA, alA, alB, alC);
    func_0202e0e8(p_vB, alD, alE, alF);
    if (alA[0] == alD[0] && alA[1] == alD[1] && alA[2] == alD[2] && alB[0] == alE[0] && alB[1] == alE[1] && alB[2] == alE[2] &&
        alC[0] == alF[0] && alC[1] == alF[1] && alC[2] == alF[2]) {
        ucRes = 1;
    } else {
        ucRes = 0;
    }
    return ucRes;
}
