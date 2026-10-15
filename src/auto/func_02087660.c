#include "engine.h"
#include "m2c.h"

void func_02041da8(M2C_UNK);

s32 *func_020414ac(M2C_UNK, u16, M2C_UNK);

void func_02087660(void *arg0, s32 *arg1) {
    s32 *temp_r0;

    temp_r0 = func_020414ac(0x63, M2C_FIELD(arg0, u16 *, 2), 4);
    *arg1   = *temp_r0;
    func_02041da8((s32) temp_r0);
}
