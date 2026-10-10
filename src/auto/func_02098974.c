/* compiler: 1.2/sp2p3 -proc arm7tdmi */
#include "m2c.h"

extern s32 data_020bc570;
extern s8 data_020bca4d;

s32 func_02098974(s32 arg0, s32 arg1, void *arg2) {
    s32 var_r0;

    if (data_020bca4d == 0) {
        if (data_020bc570 != 0x100) {
            var_r0 = 1;
        } else {
            var_r0 = 0;
        }
    } else {
        var_r0 = data_020bca4d - 1;
    }
    M2C_FIELD(arg2, s32 *, 0)   = var_r0;
    M2C_FIELD(arg2, s32 *, 0xC) = 6;
    return arg1;
}
