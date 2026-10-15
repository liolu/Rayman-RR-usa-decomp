#include "m2c.h"

M2C_UNK PMi_SetLCDPower(s32, M2C_UNK, M2C_UNK, M2C_UNK);

void PM_SetLCDPower(s32 arg0) {
    s32 var_r0;

    var_r0 = arg0;
    if (var_r0 != 1) {
        var_r0 = 0;
    }
    PMi_SetLCDPower(var_r0, 0, 0, 1);
}
