#include "m2c.h"

s32 func_02067060();

s32 func_02067168(s32 arg0, s32 arg1, s32 arg2) {
    s16 temp_r2;
    s32 temp_r0;
    u32 temp_r0_2;

    temp_r0 = func_02067060();
    if (temp_r0 == 0) {
        return 0;
    }
    temp_r2   = arg2 * 2;
    temp_r0_2 = (u32) (temp_r0 & (3 << temp_r2)) >> temp_r2;
    switch ((u8) temp_r0_2) {
        case 0:
            return 0;
        case 1:
            return 1;
        case 2:
            return 2;
        default:
            return 3;
    }
}
