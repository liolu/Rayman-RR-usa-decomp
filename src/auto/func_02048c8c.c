#include "m2c.h"

void func_02048c8c(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 0x78) = 0x200;
    if (arg2 == 0) {
        M2C_FIELD(arg0, s32 *, 0x7C) = 0x186A0000;
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x7C) = arg2;
}
