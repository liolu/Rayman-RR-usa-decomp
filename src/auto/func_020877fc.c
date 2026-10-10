#define M2C_SELF_func_020877fc
#include "m2c_protos.h"

s32 *func_020414ac(M2C_UNK, u16, M2C_UNK);          /* extern */

void func_020877fc(void *arg0, s32 *arg1) {
    s32 *temp_r0;

    temp_r0 = func_020414ac(0x68, M2C_FIELD(arg0, u16 *, 2), 4);
    *arg1   = *temp_r0;
    func_02041da8((s32) temp_r0);
}
