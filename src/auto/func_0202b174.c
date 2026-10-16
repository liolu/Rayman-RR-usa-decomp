#include "m2c.h"

extern void func_0207ac90(long lA);
extern void func_0207ad9c(long lA, unsigned char ucB, long lC, long lD, long lE, long lF, long lG, long lH);
extern unsigned char data_020bc534;

long func_0202b174(long lV) {
    long lT;
    lV = lV & 0x3FF;
    lT = lV & 0x40;
    if ((lT != 0 && (lV & 0x80)) || ((lV & 0x100) && (lV & 0x200))) {
        func_0207ac90(0);
        func_0207ad9c(8, data_020bc534, 0, 5, -1, 0xFF, 0xFF, 0);
    }
    if (lT != 0 || (lV & 0x80)) {
        lV |= 4;
    }
    if ((lV & 0x100) || (lV & 0x200)) {
        lV |= 8;
    }
    if (((lV & 0x80) || (lV & 0x200)) && (lV & 0x32)) {
        func_0207ad9c(8, data_020bc534, 0, 9, -1, 0xFF, 0xFF, 0);
    }
    return lV;
}
