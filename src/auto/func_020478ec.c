#include "engine.h"
#include "m2c.h"

s32 func_020478ec(s32 arg0, s32 arg1) {
    M2C_FIELD(arg1, s16 *, 2)    = 0;
    M2C_FIELD(arg1, s16 *, 0)    = 0;
    M2C_FIELD(arg1, s16 *, 6)    = 0x10;
    M2C_FIELD(arg1, s32 *, 0x10) = -0x64;
    M2C_FIELD(arg1, s32 *, 0x14) = 0x64;
    M2C_FIELD(arg1, s32 *, 0x1C) = -5;
    M2C_FIELD(arg1, s32 *, 0x18) = 5;
    M2C_FIELD(arg1, s32 *, 0x20) = -0x64;
    M2C_FIELD(arg1, s32 *, 0x24) = 0x64;
    M2C_FIELD(arg1, s32 *, 0x2C) = -5;
    M2C_FIELD(arg1, s32 *, 0x28) = 5;
    M2C_FIELD(arg1, s16 *, 4)    = 1;
    return 0;
}
