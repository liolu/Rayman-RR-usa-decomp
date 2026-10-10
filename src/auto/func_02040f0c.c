#include "m2c.h"

extern s32 data_020cfa74;

s32 func_02040f0c(s32 arg0) {
    return (s32) (M2C_FIELD((data_020cfa74 + (arg0 * 8)), s32 *, 4) << 0xE) >> 0x10;
}
