#include "m2c.h"

s32 *func_020414ac(M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK func_02041da8(s32 *);
M2C_UNK func_02044ac0(s16);

void func_02045324(void) {
    s32 *temp_r0;

    temp_r0 = func_020414ac(0x74, 0, 8);
    func_02044ac0((s16) *temp_r0);
    func_02041da8(temp_r0);
}
