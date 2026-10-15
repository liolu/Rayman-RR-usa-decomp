#include "m2c.h"

M2C_UNK func_0205b6a4(M2C_UNK);

void func_02040190(void *arg0, M2C_UNK arg1) {
    if (M2C_FIELD(arg0, s32 *, 8) & 0x40000000) {
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x29C) = 0;
    func_0205b6a4(arg1);
}
