#include "m2c.h"

s32 func_02088dc8(s32 arg0, s32 arg1) {
    s32 var_r0;

    var_r0 = arg1 - arg0;
    if (var_r0 > 0) {
        if (var_r0 > 0x3244) {
            var_r0 += 0xFFFF9B78;
        }
        return var_r0;
    }
    if (var_r0 < -12868) {
        var_r0 += 0x6488;
    }
    return var_r0;
}
