#include "m2c.h"

M2C_UNK func_02040068();

void func_020401b4(void *arg0) {
    func_02040068();
    M2C_FIELD(arg0, s32 *, 8) = (s32) (M2C_FIELD(arg0, s32 *, 8) | 0x40000000);
}
