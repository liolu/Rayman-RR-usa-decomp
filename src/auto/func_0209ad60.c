#include "m2c.h"

extern M2C_UNK data_020dc19c;

s32 func_0209ad60(s32 arg0, s32 arg1, void *arg2) {
    M2C_FIELD(arg2, s32 *, 0)   = (s32) M2C_FIELD(&data_020dc19c, s32 *, 0xC4);
    M2C_FIELD(arg2, s32 *, 0xC) = 8;
    return arg1;
}
