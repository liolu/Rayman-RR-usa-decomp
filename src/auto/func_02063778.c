#include "m2c.h"

M2C_UNK func_02040d90(s32 *, M2C_UNK, M2C_UNK);
s32 func_020413b4(M2C_UNK);

void func_02063778(s32 *arg0, M2C_UNK arg1) {
    s32 temp_r0;

    temp_r0 = func_020413b4(1);
    *arg0   = temp_r0;
    if (temp_r0 != 0) {
        return;
    }
    func_02040d90(arg0, 1, arg1);
}
