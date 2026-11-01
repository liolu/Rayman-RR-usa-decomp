/* near start: 8 diffs with profile "2.0/sp1p5" */
#include "m2c.h"

s32 func_02044dc4(void *arg0, s32 arg1) {
    s32 var_r3;
    u8 *var_ip;
    u8 *base;
    s32 count;

    count  = M2C_FIELD(arg0, s32 *, 0x18);
    var_r3 = 0;
    if (count > 0) {
        base   = M2C_FIELD(arg0, u8 **, 0x1C);
        var_ip = base;
        do {
            if (M2C_FIELD(var_ip, s16 *, 0xC) == (s16) 0xF00A) {
                M2C_FIELD(base + (var_r3 * 0x14), s32 *, 0x20) = arg1;
                return 1;
            }
            var_r3 += 1;
            var_ip += 0x14;
        } while (var_r3 < count);
    }
    return 0;
}
