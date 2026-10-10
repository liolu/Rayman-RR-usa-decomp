#include "m2c.h"

extern s32 data_020dc19c;

s32 func_02059ef8(void) {
    s32 var_r0;

    var_r0 = 0;
    if (data_020dc19c == 2) {
        var_r0 = 1;
    }
    return var_r0;
}
