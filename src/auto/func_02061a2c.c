#include "engine.h"
#include "m2c.h"

M2C_UNK func_02067060(M2C_UNK);

s32 func_02061a2c(s32 arg0, s32 arg1) {
    u8 var_r0;

    if (M2C_FIELD(M2C_FIELD(arg1, void **, 4), s32 *, 0x14) != 0) {
        if (func_02067060(arg0) == 0) {
            var_r0 = 1;
        } else {
            var_r0 = 0;
        }
        return (s32) var_r0;
    }
    return 1;
}
