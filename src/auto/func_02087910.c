#include "m2c.h"

M2C_UNK func_02040d90(s32 *, M2C_UNK, u16);
s32 func_02062160(u16, M2C_UNK);

void func_02087910(void *arg0, s32 *arg1) {
    s32 temp_r0;

    temp_r0 = func_02062160(M2C_FIELD(arg0, u16 *, 2), 0);
    *arg1   = temp_r0;
    if (temp_r0 != 0) {
        return;
    }
    func_02040d90(arg1, 5, M2C_FIELD(arg0, u16 *, 2));
}
