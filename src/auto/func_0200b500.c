#include "m2c.h"

extern void func_0200b478(M2C_UNK);

s32 func_0200b500(s32 arg0, s32 arg1, s32 arg2) {
    s32 i;
    u32 n;

    n = *(u32 *) arg2;
    for (i = 0; i < n; i++) {
        func_0200b478(arg1 + i);
    }
    return 0;
}
