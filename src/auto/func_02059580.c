#include "m2c.h"

s32 func_0202e620(void *);
M2C_UNK func_0202e814(s32, s32);
M2C_UNK func_0207c814(M2C_UNK, M2C_UNK, s32, s32, s32, void *, s32, s32, s32);

void func_02059580(void *arg0, M2C_UNK arg1, void *arg2, M2C_UNK arg3, s32 arg4) {
    s32 temp_r0;
    M2C_UNK temp_r3;

    temp_r0 = func_0202e620(M2C_FIELD(arg2, s32 *, 4));
    if (temp_r0 == 0) {
        return;
    }
    temp_r3 = func_0202e814(3, temp_r0);
    if (temp_r3 == 0) {
        return;
    }
    func_0207c814(arg1, arg3, arg4, temp_r3, M2C_FIELD(arg2, s32 *, 0x24), arg2, 1, M2C_FIELD(arg2, s32 *, 0x30) & 4,
                  M2C_FIELD(arg0, s32 *, 0x30) & 8);
}
