#include "m2c.h"

s32 func_0206e438(s32);
s32 func_0206e468(s32);
M2C_UNK func_02084ea0(M2C_UNK, M2C_UNK);
s32 func_02093100(s32);
M2C_UNK func_0209c740(s32, M2C_UNK, s32 *);

void *func_02091dc0(M2C_UNK arg0, void *arg1, s32 *arg2) {
    s32 sp0;
    s32 temp_r4;

    temp_r4 = M2C_FIELD(arg1, s32 *, -8);
    func_0209c740(func_02093100(temp_r4), arg0, &sp0);
    if (temp_r4 == 0x47) {
        *arg2 = func_0206e468(sp0);
        return arg1;
    }
    if (temp_r4 == 0x3E) {
        *arg2 = func_0206e438(sp0);
        return arg1;
    }
    func_02084ea0(0x2B, 0);
    return arg1;
}
