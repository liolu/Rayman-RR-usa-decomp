#include "m2c.h"

void func_0206f7c8(void *arg0, void *arg1) {
    M2C_FIELD(arg0, s32 *, 0)   = (s32) (M2C_FIELD(arg1, s16 *, 0) << 6);
    M2C_FIELD(arg0, s32 *, 4)   = (s32) (M2C_FIELD(arg1, s16 *, 2) << 6);
    M2C_FIELD(arg0, s32 *, 8)   = (s32) (M2C_FIELD(arg1, s16 *, 4) << 6);
    M2C_FIELD(arg0, s32 *, 0xC) = (s32) (M2C_FIELD(arg1, s16 *, 6) << 6);
}
