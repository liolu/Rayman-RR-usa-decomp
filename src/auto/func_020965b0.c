#include "m2c.h"

typedef struct Vec3i {
    s32 a;
    s32 b;
    s32 c;
} Vec3i;

extern s32 func_02084450(s32 arg0, s32 arg1, s32 *arg2);
extern s32 VEC_DotProduct(void *arg0, void *arg1);

s32 func_020965b0(s32 arg0, s32 arg1, s32 *arg2) {
    Vec3i local;
    s32 r4;
    s32 dot;

    r4      = func_02084450(arg0, arg1, arg2);
    local   = *(Vec3i *) arg2;
    r4      = func_02084450(arg0, r4, arg2);
    dot     = VEC_DotProduct(&local, arg2);
    arg2[0] = dot;
    arg2[3] = 8;
    return r4;
}
