#include "m2c.h"
extern s32 func_02024118(s32 *v);
extern s32 func_020241bc(s32 *v, s32 k);
extern s32 _s32_div_f(s32 n, s32 d);
s32 func_02023314(s32 *arg0, s32 *arg1, s32 arg2, s32 arg3) {
    s32 vec[3];
    s32 n;
    s32 d;
    s32 x;
    s32 z;
    s32 t;
    s32 r;
    vec[0] = arg0[0] - arg1[0];
    vec[1] = arg0[1] - arg1[1];
    vec[2] = arg0[2] - arg1[2];
    n      = func_02024118(vec);
    d      = func_020241bc(vec, arg3);
    x      = n * 2;
    z      = (x + (s32) ((u32) (x >> 7) >> 24)) >> 8;
    if (z == 0) {
        return 0x40;
    }
    if (d <= -n) {
        return 0;
    }
    if (d >= n) {
        return 0x7f;
    }
    t = (d + (s32) ((u32) (d >> 7) >> 24)) >> 8;
    r = _s32_div_f(t * 127, z);
    r = r + 0x40;
    if (r < 0) {
        r = 0;
    }
    if (r > 0x7f) {
        r = 0x7f;
    }
    return r & 0xff;
}
