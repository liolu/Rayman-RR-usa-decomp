#include "m2c.h"

extern M2C_UNK data_020e5610;

void func_020a69b4(void) {
    s32 var_r1;
    M2C_UNK *var_r2;

    var_r1 = 0;
    var_r2 = &data_020e5610;
    do {
        var_r1 += 1;
        M2C_FIELD(var_r2, s32 *, 0x14) = 0;
        var_r2                         = (M2C_UNK *) ((s8 *) var_r2 + 0x18);
    } while (var_r1 < 0x23);
}
