#include "m2c.h"

#define ABS(x) ((x) < 0 ? -(x) : (x))

s32 func_02024118(s32 *arg0) {
    s32 a = ABS(arg0[0]);
    s32 b = ABS(arg0[1]);
    s32 c = ABS(arg0[2]);
    s32 m;

    a = ABS(a);
    b = ABS(b);
    m = (a < b) ? b + (a >> 1) : a + (b >> 1);
    m = ABS(m);
    c = ABS(c);
    return (m < c) ? c + (m >> 1) : m + (c >> 1);
}
