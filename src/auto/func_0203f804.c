#include "m2c.h"

extern void func_0202d964(void *p_vA, long *p_lB, long *p_lC, long *p_lD);

void func_0203f804(char *p_cObj) {
    long alB[3];
    long alC[3];
    long alD[3];
    long *p_lSrc = (long *) (p_cObj + 0x140);
    alB[0]       = p_lSrc[0];
    alB[1]       = p_lSrc[1];
    alB[2]       = p_lSrc[2];
    alC[0]       = p_lSrc[3];
    alC[1]       = p_lSrc[4];
    alC[2]       = p_lSrc[5];
    alD[0]       = p_lSrc[6];
    alD[1]       = p_lSrc[7];
    alD[2]       = p_lSrc[8];
    func_0202d964(p_cObj + 0xdc, alB, alC, alD);
}
