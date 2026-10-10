#include "m2c.h"

s32 func_020794f0(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 *arg4, s32 *arg5) {
    *arg4 = arg1 << (M2C_FIELD(arg0, s8 *, 0xC1) - 3);
    *arg5 = arg2 << (M2C_FIELD(arg0, s8 *, 0xC2) - 3);
    return 1;
}
