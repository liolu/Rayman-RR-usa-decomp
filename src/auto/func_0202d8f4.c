#include "m2c.h"

extern long func_01ff8878(void *p_vA);
extern long func_01ff88b4(void *p_vA);
extern void func_0202d964(void *p_vA, long *p_lB, long *p_lC, long *p_lD);

void func_0202d8f4(void *p_vA, void *p_vB) {
    long alB[3];
    long alC[3];
    long alD[3];
    long lT = func_01ff8878(p_vB);
    long lU = func_01ff88b4(p_vB);
    alB[1]  = lT;
    alB[0]  = lU;
    alB[2]  = 0;
    alC[1]  = lU;
    alC[0]  = -lT;
    alC[2]  = 0;
    alD[0]  = 0;
    alD[2]  = 0x1000;
    alD[1]  = 0;
    func_0202d964(p_vA, alB, alC, alD);
}
