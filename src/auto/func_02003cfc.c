#include "m2c.h"

s32 func_02003cfc(s8 *arg0) {
    s32 var_r2;
    s8 *var_r0;
    s8 temp_r1;

    var_r0 = arg0;
    var_r2 = -1;
    do {
        temp_r1 = *var_r0;
        var_r0 += 1;
        var_r2 += 1;
    } while (temp_r1 != 0);
    return var_r2;
}
