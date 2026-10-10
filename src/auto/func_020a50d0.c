#include "m2c.h"

void *func_020a50d0(void *arg0) {
    s32 temp_r1_2;
    s32 temp_r2;
    s32 var_r2;
    u16 temp_r1;
    void *var_r3;

    temp_r1 = M2C_FIELD(arg0, u16 *, 4);
    var_r3  = arg0;
    var_r2  = 0;
    if (temp_r1 != 0) {
        return arg0 + (temp_r1 * 8);
    }
    if (M2C_FIELD(arg0, u8 *, 7) != 8) {
    loop_3:
        if (M2C_FIELD(var_r3, u8 *, 7) == 4) {
            temp_r1_2 = M2C_FIELD(var_r3, s32 *, 0);
            if (temp_r1_2 == 0x2E) {
                var_r2 += 1;
                goto block_9;
            }
            if ((temp_r1_2 == 0x2F) && (var_r2 -= 1, (var_r2 <= 0))) {
                var_r3 += 8;
            } else {
                goto block_9;
            }
        } else {
        block_9:
            var_r3 += 8;
            if (M2C_FIELD(var_r3, u8 *, 7) != 8) {
                goto loop_3;
            }
        }
    }
    temp_r2                   = var_r3 - arg0;
    M2C_FIELD(arg0, u16 *, 4) = (u16) ((s32) (temp_r2 + ((u32) (temp_r2 >> 2) >> 0x1D)) >> 3);
    return var_r3;
}
