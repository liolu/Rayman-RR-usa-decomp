#include "m2c.h"

void func_0207c2a0(void *arg0, void *arg1, void *arg2, s32 arg3) {
    M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg2, s32 *, 0) - arg3);
    M2C_FIELD(arg0, s32 *, 4) = (s32) (M2C_FIELD(arg2, s32 *, 4) - arg3);
    M2C_FIELD(arg0, s32 *, 8) = (s32) (M2C_FIELD(arg2, s32 *, 8) - arg3);
    M2C_FIELD(arg1, s32 *, 0) = (s32) (M2C_FIELD(arg2, s32 *, 0) + arg3);
    M2C_FIELD(arg1, s32 *, 4) = (s32) (M2C_FIELD(arg2, s32 *, 4) + arg3);
    M2C_FIELD(arg1, s32 *, 8) = (s32) (M2C_FIELD(arg2, s32 *, 8) + arg3);
}
