#include "m2c.h"

extern void func_0202d090(void *p_vA);
extern void func_0202dc80(void *p_vA, long *p_lB, long *p_lC, long *p_lD);

void func_020318e0(char *p_cObj, void *p_vArg) {
    long alB[3];
    long alC[3];
    long alD[3];
    func_0202d090(p_vArg);
    alB[0] = *(long *) (p_cObj + 0x48);
    alB[1] = 0;
    alB[2] = 0;
    alC[0] = 0;
    alC[1] = *(long *) (p_cObj + 0x4c);
    alC[2] = 0;
    alD[0] = 0;
    alD[1] = 0;
    alD[2] = *(long *) (p_cObj + 0x50);
    func_0202dc80(p_vArg, alB, alC, alD);
}
