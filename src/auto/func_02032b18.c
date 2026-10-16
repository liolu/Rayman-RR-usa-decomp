#include "m2c.h"

extern unsigned char func_0201bdd0(long lA);

long func_02032b18(char *p_cObj) {
    unsigned long ulA;
    unsigned long ulB;
    unsigned long ulC;
    if (*(long *) (p_cObj + 0x3c) != 0 || *(long *) (p_cObj + 0x40) != 0 || *(long *) (p_cObj + 0x44) != 0) {
        return 0;
    }
    {
        ulA = *(unsigned long *) (p_cObj + 8);
        if (ulA & 4) {
            return 0;
        }
        if (ulA & 1) {
            return 0;
        }
        if (ulA & 0xE0000) {
            return 0;
        }
        ulC = ulA & 0x20000000;
        if (ulC != 0) {
            return 0;
        }
        if (ulA & 0x700000) {
            return 0;
        }
        ulB = *(unsigned long *) (p_cObj + 0xc);
        if (ulB & 2) {
            if (ulA & 0x400) {
                return 0;
            }
            if (ulC != 0) {
                return 0;
            }
            if (ulA & 0x800) {
                return 0;
            }
            if (ulA & 0x3800000) {
                return 0;
            }
        }
        if ((ulB & 4) && func_0201bdd0(*(long *) (p_cObj + 0x29c)) != 0) {
            return 0;
        }
        return 1;
    }
}
