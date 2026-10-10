#include "m2c.h"

void func_020839e0(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0xC) == 8) {
        return;
    }
    M2C_FIELD(arg0, s32 *, 0)   = (s32) (M2C_FIELD(arg0, s32 *, 0) << 0xC);
    M2C_FIELD(arg0, s32 *, 0xC) = 8;
}
