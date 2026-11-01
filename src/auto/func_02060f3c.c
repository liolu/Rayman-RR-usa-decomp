#include "m2c.h"

s32 func_02060e14(void *, s32, u8, u8, s32 *);
s32 func_020818f8(s32, s32, s32, s32, s32 *, s32 *);

u8 func_02060f3c(void *arg0, u8 arg1, u8 arg2, void *arg3, u8 arg4, u8 arg5) {
    s32 a;
    s32 b;
    s32 c;
    s32 d;
    s32 t4;
    s32 t2;
    u8 res;

    t4 = func_02060e14(arg0, 2, arg1, arg2, &a);
    t2 = func_02060e14(arg3, 2, arg4, arg5, &b);
    if (t4 == 0 || t2 == 0) {
        return 0;
    }
    res = func_020818f8(t4, a, t2, b, &c, &d) != 0;
    return res;
}
