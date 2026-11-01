#include "m2c.h"

u8 func_0207cf3c(s32 *a, s32 *b, s32 *c, s32 *d) {
    s32 res;
    s32 ok;
    s32 lo;
    s32 hi;

    res = 0;
    ok  = res;
    lo  = b[0] < d[0] ? b[0] : d[0];
    hi  = a[0] > c[0] ? a[0] : c[0];
    if (hi <= lo) {
        lo = b[1] < d[1] ? b[1] : d[1];
        hi = a[1] > c[1] ? a[1] : c[1];
        if (hi <= lo) {
            ok = 1;
        }
    }
    if (ok != 0) {
        lo = b[2] < d[2] ? b[2] : d[2];
        hi = a[2] > c[2] ? a[2] : c[2];
        if (hi <= lo) {
            res = 1;
        }
    }
    return (u8) res;
}
