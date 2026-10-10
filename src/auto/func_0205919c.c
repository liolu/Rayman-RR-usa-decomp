#include "m2c.h"

extern M2C_UNK data_020dc19c;

u32 func_0205919c(void) {
    u32 var_r0;

    var_r0 = M2C_FIELD(&data_020dc19c, u32 *, 0x78);
    if (var_r0 < 0x10U) {
        return 0x10U;
    }
    if (var_r0 > 0x85U) {
        var_r0 = 0x85;
    }
    return var_r0;
}
