#include "m2c.h"

void func_0201bde4(void *arg0, s32 arg1, s32 arg2) {
    s32 var_r2;

    var_r2 = arg2;
    if (arg1 == 0) {
        var_r2 = 1;
    }
    M2C_FIELD(arg0, s32 *, 0) = var_r2;
    M2C_FIELD(arg0, s32 *, 4) = arg1;
}
