#include "m2c.h"

extern void func_020482a8(s32 *, s32);

void func_02054574(u8 *arg0, s32 arg1, s16 arg2, s32 arg3) {
    s32 *e = *(s32 **) (*(u8 **) (arg0 + 0x10) + arg1 * 4);
    func_020482a8((s32 *) *(s32 *) ((u8 *) e[0] + arg2 * 12 + 8), arg3);
}
