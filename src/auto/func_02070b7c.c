#include "m2c.h"

extern s32 data_020ddcf0;
extern s32 data_020de064;

u16 func_02070b7c(u16 arg0, u32 arg1) {
    u16 var_r0;
    u16 temp_r5;

    var_r0  = arg0;
    temp_r5 = var_r0;
    if (arg1 >= *(u16 *) (data_020de064 + var_r0 * 0xC + 2)) {
        for (;;) {
            var_r0 = *(u16 *) (data_020de064 + var_r0 * 0xC + 6);
            if (var_r0 == 0xFFFF) {
                return 0xFFFF;
            }
            if (arg1 < *(u16 *) (data_020de064 + var_r0 * 0xC + 2)) {
                break;
            }
        }
    }
    *(u16 *) (data_020ddcf0 + temp_r5 * 2) = var_r0;
    return var_r0;
}
