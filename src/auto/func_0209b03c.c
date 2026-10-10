#include "m2c.h"

s32 func_020738d8();                                /* extern */

s32 func_0209b03c(s32 arg0, s32 arg1, void *arg2) {
    M2C_FIELD(arg2, s32 *, 0)   = func_020738d8();
    M2C_FIELD(arg2, s32 *, 0xC) = 6;
    return arg1;
}
