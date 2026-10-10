#include "m2c.h"

s32 func_02083590(s32 arg0, s32 arg1, void *arg2) {
    M2C_FIELD(arg2, s32 *, 0)   = arg0;
    M2C_FIELD(arg2, s32 *, 0xC) = 0xC;
    return 1;
}
