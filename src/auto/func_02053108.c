#include "m2c.h"

extern M2C_UNK data_020bcbb8;

void func_02053108(s32 arg0, s32 arg1) {
    if (arg0 != 0) {
        M2C_FIELD(&data_020bcbb8, s32 *, 0x58) = 0;
    } else {
        M2C_FIELD(&data_020bcbb8, s32 *, 0x58) = -0x10;
    }
    if (arg1 > 0) {
        M2C_FIELD(&data_020bcbb8, s32 *, 0x5C) = arg1;
    }
}
