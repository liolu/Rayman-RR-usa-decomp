#include "m2c.h"

extern s32 data_020dba10;

void func_0204a8cc(s32 arg0) {
    s32 temp_r0;
    s32 var_r0;

    var_r0 = arg0;
    if (var_r0 < 0) {
        var_r0 = 0;
    }
    temp_r0       = var_r0 >> 0xC;
    data_020dba10 = temp_r0;
    if (temp_r0 > 0xFF) {
        data_020dba10 = 0xFF;
    }
}
