#include "m2c.h"

u8 func_02083568(s32 *arg0, s32 arg1, void *arg2) {
    s32 temp_r3;

    temp_r3                     = *arg0;
    M2C_FIELD(arg2, s32 *, 0)   = temp_r3;
    M2C_FIELD(arg2, s32 *, 0xC) = 0x24;
    return temp_r3 != -1;
}
