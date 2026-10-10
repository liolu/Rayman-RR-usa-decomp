#include "m2c.h"

extern s32 data_020dceec;
extern M2C_UNK data_020dcfc0;

s32 func_0205eab8(s32 arg0) {
    s32 var_r2;

    var_r2 = *((M2C_UNK *) ((s8 *) &data_020dcfc0 + (arg0 * 4)));
    if (data_020dceec == 0x320) {
        if ((arg0 != 0x2C) && (arg0 != 0x32)) {

        } else {
            var_r2 *= 2;
        }
        var_r2 += 0x80;
    }
    return var_r2;
}
