#include "m2c.h"

u8 func_0208391c(s32 *arg0, s32 arg1, s32 *arg2) {
    s32 temp_r1;
    u8 var_r0;

    temp_r1 = *arg2;
    *arg0   = temp_r1;
    if (temp_r1 != 0) {
        var_r0 = 1;
    } else {
        var_r0 = 0;
    }
    return var_r0;
}
