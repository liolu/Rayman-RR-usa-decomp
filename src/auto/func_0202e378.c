#include "m2c.h"

s32 func_0202e378(void *arg0) {
    if ((M2C_FIELD(arg0, s32 *, 0x40) == 0x1000) && (M2C_FIELD(arg0, s32 *, 0x44) == 0) &&
        (M2C_FIELD(arg0, s32 *, 0x48) == 0) && (M2C_FIELD(arg0, s32 *, 0x4C) == 0) &&
        (M2C_FIELD(arg0, s32 *, 0x50) == 0x1000) && (M2C_FIELD(arg0, s32 *, 0x54) == 0) &&
        (M2C_FIELD(arg0, s32 *, 0x58) == 0) && (M2C_FIELD(arg0, s32 *, 0x5C) == 0) &&
        (M2C_FIELD(arg0, s32 *, 0x60) == 0x1000)) {
        return 1;
    }
    return 0;
}
