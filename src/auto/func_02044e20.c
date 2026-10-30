/* compiler: 2.0/sp1p5 -O4,s */
#include "m2c.h"

s32 func_02046988(M2C_UNK, s32);                    /* extern */
extern M2C_UNK data_020bc684;

s32 func_02044e20(void) {
    s32 var_r7;

    var_r7 = 0xA;
loop_1:
    if (func_02046988(0, M2C_FIELD(((M2C_UNK *) ((s8 *) &data_020bc684 + (var_r7 * 4))), s32 *, -0x28)) == 0x7FFE) {
        return 1;
    }
    var_r7 += 1;
    if (var_r7 > 0xF) {
        return 0;
    }
    goto loop_1;
}
