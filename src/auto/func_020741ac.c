#include "m2c.h"

s32 func_020741ac(s32 arg0) {
    s32 var_r0;

    var_r0 = arg0;
    if (var_r0 < 0x80) {
        var_r0 = 0x100 - var_r0;
    }
    return var_r0;
}
