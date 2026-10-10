#include "m2c.h"

void func_0204d504(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    M2C_FIELD(arg0, s32 *, 0x10) = arg3;
    M2C_FIELD(arg0, s32 *, 8)    = arg3;
    M2C_FIELD(arg0, s32 *, 0x14) = arg4;
    M2C_FIELD(arg0, s32 *, 0xC)  = arg4;
    M2C_FIELD(arg0, s32 *, 0x18) = arg2;
    if ((M2C_FIELD(arg0, s32 *, 8) == 0) && (M2C_FIELD(arg0, s32 *, 0xC) == 0)) {
        M2C_FIELD(arg0, s32 *, 0x18) = 0;
    }
}
