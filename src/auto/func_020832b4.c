#include "m2c.h"

s32 func_020832b4(void *arg0) {
    s32 temp_r2;
    s32 var_r3;
    void *temp_r1;

    var_r3 = 0;
    if (arg0 != NULL) {
        var_r3 += 0x14;
        if (M2C_FIELD(arg0, s32 *, 4) != 0) {
            var_r3 += 0xB8;
        }
        if (M2C_FIELD(arg0, s32 *, 8) != 0) {
            var_r3 += 0xB8;
        }
        temp_r1 = M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 8);
        if ((temp_r1 != NULL) && (temp_r2 = M2C_FIELD(temp_r1, s32 *, 8), (temp_r2 != 0))) {
            var_r3 = var_r3 + 0xC + temp_r2;
            if (M2C_FIELD(M2C_FIELD(arg0, void **, 0xC), s32 *, 4) != 0) {
                var_r3 += temp_r2;
            }
        }
    }
    return var_r3;
}
