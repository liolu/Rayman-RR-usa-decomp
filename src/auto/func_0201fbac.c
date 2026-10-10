#include "engine.h"
#include "m2c.h"

u16 func_02019530(void);

extern M2C_UNK data_020c4b38;

s32 func_0201fbac(void) {
    s32 temp_r4;
    u16 var_r0;
    u16 var_r0_2;
    u32 temp_r0;
    u32 var_r1;

    temp_r4 = M2C_FIELD(&data_020c4b38, s32 *, 0x10);
    temp_r0 = temp_r4 | func_02019530();
    if (temp_r0 != 0xFFFF) {
        var_r1   = temp_r0 >> 1;
        var_r0_2 = 1;
    loop_2:
        if (!(var_r1 & 1)) {
            return (s32) var_r0_2;
        }
        var_r0_2 += 1;
        var_r1 = var_r1 >> 1;
        if ((u32) var_r0_2 >= 0x10U) {
            goto block_5;
        }
        goto loop_2;
    }
block_5:
    var_r0 = M2C_FIELD(&data_020c4b38, u16 *, 0x18);
    do {
        var_r0 += 1;
        if (var_r0 == 0x10) {
            var_r0 = 1;
        }
    } while (temp_r4 & (1 << var_r0));
    M2C_FIELD(&data_020c4b38, u16 *, 0x18) = var_r0;
    return (s32) var_r0;
}
