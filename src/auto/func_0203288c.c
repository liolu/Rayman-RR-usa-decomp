#include "m2c.h"

void func_0203288c(void *arg0, void *arg1) {
    M2C_FIELD(arg0, s32 *, 0xE0) = (s32) (M2C_FIELD(arg0, s32 *, 0xE0) + M2C_FIELD(arg1, s32 *, 0));
    M2C_FIELD(arg0, s32 *, 0xE4) = (s32) (M2C_FIELD(arg0, s32 *, 0xE4) + M2C_FIELD(arg1, s32 *, 4));
    M2C_FIELD(arg0, s32 *, 0xE8) = (s32) (M2C_FIELD(arg0, s32 *, 0xE8) + M2C_FIELD(arg1, s32 *, 8));
}
