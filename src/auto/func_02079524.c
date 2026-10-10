#include "m2c.h"

s32 func_02079524(void *arg0, s16 arg1, s16 arg2, s16 arg3, s32 arg4) {
    M2C_FIELD(arg0, s16 *, 0)   = arg1;
    M2C_FIELD(arg0, s16 *, 2)   = arg2;
    M2C_FIELD(arg0, s16 *, 4)   = arg3;
    M2C_FIELD(arg0, s16 *, 6)   = (s16) arg4;
    M2C_FIELD(arg0, s16 *, 0xC) = (s16) (arg3 >> 3);
    M2C_FIELD(arg0, s16 *, 0xE) = (s16) (arg4 >> 3);
    return 1;
}
