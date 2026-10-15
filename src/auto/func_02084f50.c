#include "m2c.h"

M2C_UNK func_02084f6c(void *, s32);

void func_02084f50(void *arg0) {
    func_02084f6c(arg0, M2C_FIELD(arg0, s32 *, 0x14));
    M2C_FIELD(arg0, s32 *, 0xC) = (s32) M2C_FIELD(arg0, s32 *, 8);
}
