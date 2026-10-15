#include "m2c.h"

M2C_UNK func_0202e1e0(s32, M2C_UNK *);
void *func_0206a1dc();
void *func_0206b3c4(s32);

void func_0205d5a8(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 *arg4) {
    u8 sp0[12];
    void *temp_r0;

    if (arg4 == NULL) {
        return;
    }
    temp_r0 = func_0206a1dc();
    if (temp_r0 == NULL) {
        *arg4 = 0x10000;
        return;
    }
    if (M2C_FIELD(temp_r0, s32 *, 0) == 0) {
        *arg4 = 0x10000;
        return;
    }
    func_0202e1e0(M2C_FIELD(func_0206b3c4(M2C_FIELD(temp_r0, s32 *, 4)), s32 *, 0x24), sp0);
    *arg4 = 0x10;
}
