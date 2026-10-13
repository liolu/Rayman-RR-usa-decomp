/* compiler: 1.2/sp2p3  */
#include "m2c.h"

u8 func_02088e60(void *arg0) {
    s32 temp_r3;
    s32 var_r1_2;
    u8 var_r1;

    if (M2C_FIELD(arg0, s32 *, 0xC) == 8) {
        var_r1 = 1;
    } else {
        var_r1 = 0;
    }
    if (var_r1 != 0) {
        temp_r3 = M2C_FIELD(arg0, s32 *, 0);
        if ((temp_r3 < 0x7FFFFFFF) && (temp_r3 > -2147483647)) {
            var_r1_2 = temp_r3 >> 0xC;
        } else if (temp_r3 > 0) {
            var_r1_2 = 0x7FFFFFFF;
        } else {
            var_r1_2 = 0x80000001;
        }
        M2C_FIELD(arg0, s32 *, 0)   = var_r1_2;
        M2C_FIELD(arg0, s32 *, 0xC) = 6;
    }
    return var_r1;
}
