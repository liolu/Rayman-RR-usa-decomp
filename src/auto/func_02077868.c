#include "m2c.h"

s32 func_02003cfc();                          /* extern */
s32 func_02003e60();               /* extern */
s32 func_02003f74();      /* extern */
extern M2C_UNK data_020be7a4;
extern M2C_UNK data_020be7ac;
extern M2C_UNK data_020be7b8;
extern M2C_UNK data_020be7c4;
extern M2C_UNK data_020be7d0;
extern M2C_UNK data_020be7dc;
extern M2C_UNK data_020be7e4;
extern M2C_UNK data_020be7f0;

s32 func_02077868(void *arg0) {
    s32 var_r0;

    if ((func_02003cfc() == 8) && ((u32) (u8) (s8) (M2C_FIELD(arg0, s8 *, 7) - 0x31) <= 5U)) {
        if (M2C_FIELD(arg0, s8 *, 3) == 0x45) {
            var_r0 = 7;
        } else {
            var_r0 = 1;
        }
        return var_r0;
    }
    if ((func_02003cfc(arg0) == 9) && (M2C_FIELD(arg0, s8 *, 7) == 0x52)) {
        return 2;
    }
    if (M2C_FIELD(arg0, s8 *, 3) == 0x54) {
        return 3;
    }
    if (func_02003f74(arg0, &data_020be7a4, 6) == 0) {
        return 2;
    }
    if ((func_02003e60(arg0, &data_020be7ac) == 0) || (func_02003e60(arg0, &data_020be7b8) == 0) ||
        (func_02003e60(arg0, &data_020be7c4) == 0) || (func_02003e60(arg0, &data_020be7d0) == 0)) {
        return 5;
    }
    if (func_02003e60(arg0, &data_020be7dc) == 0) {
        return 4;
    }
    if (func_02003e60(arg0, &data_020be7e4) == 0) {
        return 8;
    }
    if (func_02003e60(arg0, &data_020be7f0) == 0) {
        return 9;
    }
    return 0;
}
