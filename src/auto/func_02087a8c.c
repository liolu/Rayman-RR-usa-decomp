#include "m2c.h"

s32 func_020409bc();
s32 func_020414ac(M2C_UNK, u16, M2C_UNK);
M2C_UNK func_02041da8(s32);
M2C_UNK func_020858f4(M2C_UNK, s32);

void func_02087a8c(void *arg0, M2C_UNK arg1) {
    s32 temp_r0;
    s32 temp_r5;

    temp_r5 = func_020414ac(0x66, M2C_FIELD(arg0, u16 *, 2), 4);
    temp_r0 = func_020409bc();
    func_020858f4(arg1, temp_r0);
    func_02041da8(temp_r0);
    func_02041da8(temp_r5);
}
