#include "m2c.h"

M2C_UNK func_0201027c();                            /* extern */
extern M2C_UNK data_020bd568;

s32 func_02073b04(s32 arg0) {
    s32 var_r0;

    var_r0 = arg0;
    if (var_r0 > 3) {
        var_r0 = 3;
    }
    if (var_r0 < 0) {
        var_r0 = 0;
    }
    M2C_FIELD(&data_020bd568, s32 *, 8) = var_r0;
    func_0201027c();
    return 1;
}
