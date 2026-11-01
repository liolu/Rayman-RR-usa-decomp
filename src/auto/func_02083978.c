#include "m2c.h"

void *func_02093210(u32 arg0);

s32 func_02083978(u32 arg0, s32 arg1, u32 *arg2, s32 arg3) {
    u32 *p;
    s32 (*fn)(s32, s32, s32);

    p  = (u32 *) arg2[3];
    fn = (s32(*)(s32, s32, s32)) func_02093210(((u32 *) ((u8 *) ((u32 *) ((u32 *) p[0])[0])[1] + arg0 * 16))[1]);
    p  = (u32 *) arg2[3];
    return fn(p[2] + ((u32 *) ((u8 *) ((u32 *) ((u32 *) p[0])[0])[1] + arg0 * 16))[0], arg1, arg3);
}
