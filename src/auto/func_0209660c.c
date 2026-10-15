#include "m2c.h"

s32 func_02084450(M2C_UNK, M2C_UNK, M2C_UNK *);

s32 func_0209660c(M2C_UNK arg0, M2C_UNK arg1, void *arg2) {
    u8 sp0[16];
    s32 r;

    r                           = func_02084450(arg0, arg1, sp0);
    M2C_FIELD(arg2, s32 *, 0)   = 0;
    M2C_FIELD(arg2, s32 *, 0xC) = 6;
    return r;
}
