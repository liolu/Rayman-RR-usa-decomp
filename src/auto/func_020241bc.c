#include "m2c.h"

s32 func_020223e4(s32, s32);                        /* extern */

s32 func_020241bc(void *arg0, void *arg1) {
    s32 temp_r4;
    s32 temp_r5;

    temp_r5 = func_020223e4(M2C_FIELD(arg0, s32 *, 8), M2C_FIELD(arg1, s32 *, 8));
    temp_r4 = func_020223e4(M2C_FIELD(arg0, s32 *, 0), M2C_FIELD(arg1, s32 *, 0));
    return temp_r5 + (temp_r4 + func_020223e4(M2C_FIELD(arg0, s32 *, 4), M2C_FIELD(arg1, s32 *, 4)));
}
