#include "m2c.h"

void func_020373a0(void *arg0, void *arg1, void *arg2, void *arg3) {
    if (M2C_FIELD(arg0, s32 *, 0xC) & 0x80) {
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x140) = (s32) M2C_FIELD(arg1, s32 *, 0);
    M2C_FIELD(arg0, s32 *, 0x144) = (s32) M2C_FIELD(arg1, s32 *, 4);
    M2C_FIELD(arg0, s32 *, 0x148) = (s32) M2C_FIELD(arg1, s32 *, 8);
    M2C_FIELD(arg0, s32 *, 0x14C) = (s32) M2C_FIELD(arg2, s32 *, 0);
    M2C_FIELD(arg0, s32 *, 0x150) = (s32) M2C_FIELD(arg2, s32 *, 4);
    M2C_FIELD(arg0, s32 *, 0x154) = (s32) M2C_FIELD(arg2, s32 *, 8);
    M2C_FIELD(arg0, s32 *, 0x158) = (s32) M2C_FIELD(arg3, s32 *, 0);
    M2C_FIELD(arg0, s32 *, 0x15C) = (s32) M2C_FIELD(arg3, s32 *, 4);
    M2C_FIELD(arg0, s32 *, 0x160) = (s32) M2C_FIELD(arg3, s32 *, 8);
    M2C_FIELD(arg0, s32 *, 8)     = (s32) (M2C_FIELD(arg0, s32 *, 8) | 0x20000000);
}
