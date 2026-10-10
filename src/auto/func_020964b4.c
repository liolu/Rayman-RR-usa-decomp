#include "m2c.h"

s32 func_02093198(s32);                             /* extern */
M2C_UNK func_0209c740(s32, M2C_UNK, void **);       /* extern */

void *func_020964b4(M2C_UNK arg0, void *arg1, void *arg2) {
    void *sp0;
    s32 temp_r6;
    u8 var_r7;
    void *var_r0;

    temp_r6 = M2C_FIELD(arg1, s32 *, -8);
    var_r7  = 0;
    func_0209c740(func_02093198(temp_r6), arg0, &sp0);
    if (M2C_FIELD(sp0, s32 *, 0) != 2) {
        var_r0 = NULL;
    } else {
        var_r0 = M2C_FIELD(sp0, void **, 4);
    }
    if (temp_r6 == 0x65) {
        var_r7 = M2C_FIELD(M2C_FIELD(var_r0, void **, 4), u8 *, 0x1C);
    }
    M2C_FIELD(arg2, s32 *, 0)   = (s32) var_r7;
    M2C_FIELD(arg2, s32 *, 0xC) = 3;
    return arg1;
}
