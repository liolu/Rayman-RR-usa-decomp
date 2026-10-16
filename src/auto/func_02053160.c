#include "m2c.h"

extern M2C_UNK data_020bcbb8;

void func_02053160(s32 arg0, s32 arg1) {
    if (arg0 != 0) {
        M2C_FIELD(&data_020bcbb8, s32 *, 0x40) = 0;
    } else {
        M2C_FIELD(&data_020bcbb8, s32 *, 0x40) = -0x10;
    }
    if (arg1 > 0) {
        M2C_FIELD(&data_020bcbb8, s32 *, 0x44) = arg1;
    }
}
