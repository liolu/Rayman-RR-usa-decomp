#include "m2c.h"

M2C_UNK func_0205b6a4(M2C_UNK);                     /* extern */

void func_020401d0(void *arg0, M2C_UNK arg1) {
    s32 temp_r2;

    temp_r2                   = M2C_FIELD(arg0, s32 *, 8) & ~0x40000000;
    M2C_FIELD(arg0, s32 *, 8) = temp_r2;
    if (temp_r2 & 0x40000000) {
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x29C) = 0;
    func_0205b6a4(arg1);
}
