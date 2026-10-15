#include "m2c.h"

s32 func_020413b4(M2C_UNK, M2C_UNK);
void *func_0204141c(M2C_UNK, M2C_UNK, s32, M2C_UNK);
M2C_UNK func_02041da8(void *);
s32 func_020481c8();
M2C_UNK func_020481f4(s32, s16);
M2C_UNK func_02048204(s32, u16);

s32 func_020484cc(M2C_UNK arg0) {
    s32 temp_r0;
    s32 temp_r0_2;
    void *temp_r0_3;

    temp_r0_2 = func_020413b4(0x21, arg0);
    if (temp_r0_2 != 0) {
        return temp_r0_2;
    }
    temp_r0   = func_020481c8();
    temp_r0_3 = func_0204141c(0x21, arg0, temp_r0, 4);
    func_020481f4(temp_r0, M2C_FIELD(temp_r0_3, s16 *, 2));
    func_02048204(temp_r0, M2C_FIELD(temp_r0_3, u16 *, 0));
    func_02041da8(temp_r0_3);
    return temp_r0;
}
