#include "m2c.h"

s32 func_0208d6ac(s32 arg0) {
    s32 var_r0;

    var_r0 = arg0;
    if (var_r0 > 0x3244) {
        return var_r0 + 0xFFFF9B78;
    }
    if (var_r0 <= -0x3244) {
        var_r0 += 0x6488;
    }
    return var_r0;
}
