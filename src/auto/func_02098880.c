#include "m2c.h"

extern M2C_UNK data_020dc19c;

s32 func_02098880(s32 arg0, s32 arg1, void *arg2) {
    M2C_FIELD(arg2, s32 *, 0)   = (s32) M2C_FIELD(&data_020dc19c, u8 *, 0xC7C);
    M2C_FIELD(arg2, s32 *, 0xC) = 6;
    return arg1;
}
