#include "engine.h"
#include "m2c.h"

extern M2C_UNK data_020dd3c0;

s32 func_0205faa4(void) {
    u8 var_r0;

    var_r0 = 0;
loop_1:
    if (*((M2C_UNK *) ((s8 *) &data_020dd3c0 + (var_r0 * 4))) != 0) {
        *((M2C_UNK *) ((s8 *) &data_020dd3c0 + (var_r0 * 4))) = 0;
        return (s32) var_r0;
    }
    var_r0 += 1;
    if ((u32) var_r0 >= 0x1EU) {
        return (s32) var_r0;
    }
    goto loop_1;
}
