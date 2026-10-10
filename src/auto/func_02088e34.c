#include "m2c.h"

s32 func_02088e34(s32 arg0, s32 arg1, s32 arg2) {
    s32 var_r2;

    var_r2 = arg2 - arg0;
    if (var_r2 < 0) {
        do {
            var_r2 += arg1;
        } while (var_r2 < 0);
    }
    if (var_r2 >= arg1) {
        do {
            var_r2 -= arg1;
        } while (var_r2 >= arg1);
    }
    return var_r2 + arg0;
}
