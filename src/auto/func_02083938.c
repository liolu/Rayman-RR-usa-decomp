#include "m2c.h"

M2C_UNK (*func_02093210(s32))(void *, M2C_UNK, M2C_UNK);

void func_02083938(s32 *arg0, s32 arg1, M2C_UNK arg2) {
    M2C_UNK (*temp_r3)(void *, M2C_UNK, M2C_UNK);
    s32 var_r5;

    var_r5  = arg1;
    temp_r3 = func_02093210(*arg0);
    if (*arg0 == 0xB) {
        var_r5 *= 3;
    }
    temp_r3(((s8 *) arg0 + 8) + (var_r5 * 4), 0, arg2);
}
