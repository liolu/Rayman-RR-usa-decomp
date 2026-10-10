#include "m2c.h"

extern s32 data_020b6468;

s32 func_02092214(s32 arg0, s32 arg1, s32 *arg2) {
    s32 var_r3;

    if (data_020b6468 == 0) {
        var_r3 = 1;
    } else {
        var_r3 = 0;
    }
    *arg2 = var_r3;
    return arg1;
}
