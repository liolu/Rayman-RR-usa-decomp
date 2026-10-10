#include "m2c.h"

void func_02066d88(s32 arg0, s32 arg1, s32 arg2) {
    if (arg1 < 0) {
        return;
    }
    if (arg1 < 2) {
        M2C_FIELD((arg0 + (arg1 * 4)), s32 *, 0x5C) = arg2;
    }
}
