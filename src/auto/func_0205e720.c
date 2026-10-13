#include "m2c.h"

extern M2C_UNK data_020dc158;

s32 func_0205e720(u32 arg0) {
    M2C_UNK *var_r1;
    u32 var_r2;

    var_r1 = M2C_FIELD(&data_020dc158, M2C_UNK **, 0x18);
    for (var_r2 = 0; var_r2 < arg0; var_r2 += 1) {
        var_r1 = *var_r1;
    }
    if (var_r1 != NULL) {
        return M2C_FIELD(var_r1, s32 *, 0xC);
    }
    return 0;
}
