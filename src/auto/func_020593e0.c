#include "m2c.h"

s32 func_020559c0();                                /* extern */

u8 func_020593e0(void) {
    u8 var_r0;

    if (func_020559c0() >= 1) {
        var_r0 = 1;
    } else {
        var_r0 = 0;
    }
    return var_r0;
}
