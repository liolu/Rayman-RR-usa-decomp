#include "m2c.h"

M2C_UNK func_02001588(s32, M2C_UNK, M2C_UNK);

void func_0202e4e8(void *arg0, M2C_UNK arg1) {
    func_02001588(arg0 + 0x1C, arg1, 0x24);
    M2C_FIELD(arg0, s32 *, 0x10) = 0x1000;
    M2C_FIELD(arg0, s32 *, 0x14) = 0x1000;
    M2C_FIELD(arg0, s32 *, 0x18) = 0x1000;
}
