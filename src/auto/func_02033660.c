#include "m2c.h"

extern long func_01ff88fc(long lA, long lB);
extern long func_01ff8914(long lA, long lB);

long func_02033660(long lA, long lB, long lC, long lD, long lE, signed char cF, signed char cG) {
    long lBest;
    long lT;
    if (cF != 0) {
        return lD;
    }
    lD <<= 8;
    lA <<= 8;
    lBest = lD;
    if (lD > lA) {
        lBest = lA;
    }
    lC <<= 8;
    if (cG == 0) {
        if (lD < func_01ff88fc(lA, lC)) {
            lT = func_01ff8914(lD, lC);
            if (lBest > lT) {
                lBest = lT;
            }
        }
        lT = func_01ff8914(lA, lB << 8) + (lE << 8);
        if (lBest > lT) {
            lBest = lT;
        }
    }
    return (lBest + 0x80) >> 8;
}
