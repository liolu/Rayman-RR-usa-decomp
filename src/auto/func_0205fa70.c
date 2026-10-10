#include "m2c.h"

extern M2C_UNK data_020dd438;

u8 func_0205fa70(s32 arg0) {
    u8 var_r3;

    var_r3 = 0;
loop_1:
    if (arg0 == *((M2C_UNK *) ((s8 *) &data_020dd438 + (var_r3 * 4)))) {
        return var_r3;
    }
    var_r3 += 1;
    if ((u32) var_r3 >= 0x1EU) {
        return var_r3;
    }
    goto loop_1;
}
