#include "m2c.h"

u8 func_02088eb4(void *arg0, void *arg1) {
    u8 var_r1;
    u8 var_r2;
    u8 var_r3;

    if (M2C_FIELD(arg0, s32 *, 0xC) == 8) {
        var_r2 = 1;
    } else {
        var_r2 = 0;
    }
    var_r3 = var_r2;
    if (var_r3 != 0) {
        if (M2C_FIELD(arg1, s32 *, 0xC) != 8) {
            M2C_FIELD(arg1, s32 *, 0)   = (s32) (M2C_FIELD(arg1, s32 *, 0) << 0xC);
            M2C_FIELD(arg1, s32 *, 0xC) = 8;
        }
    } else {
        if (M2C_FIELD(arg1, s32 *, 0xC) == 8) {
            var_r1 = 1;
        } else {
            var_r1 = 0;
        }
        var_r3 = var_r1;
        if (var_r3 != 0) {
            M2C_FIELD(arg0, s32 *, 0)   = (s32) (M2C_FIELD(arg0, s32 *, 0) << 0xC);
            M2C_FIELD(arg0, s32 *, 0xC) = 8;
        }
    }
    return var_r3;
}
