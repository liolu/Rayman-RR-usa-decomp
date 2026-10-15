#include "m2c.h"

void *func_020414ac(M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK func_02041da8(void *);
s32 *func_020850fc(M2C_UNK);
s32 func_02087358(u16, s16);

s32 *func_020872fc(M2C_UNK arg0) {
    s32 *temp_r4;
    s32 var_r0;
    u16 temp_r1;
    void *temp_r0;

    temp_r4 = func_020850fc(1);
    temp_r0 = func_020414ac(0x50, arg0, 4);
    temp_r1 = M2C_FIELD(temp_r0, u16 *, 2);
    if (temp_r1 == 0) {
        var_r0 = 0;
    } else {
        var_r0 = func_02087358(M2C_FIELD(temp_r0, u16 *, 0), (s16) temp_r1);
    }
    *temp_r4 = var_r0;
    func_02041da8(temp_r0);
    return temp_r4;
}
