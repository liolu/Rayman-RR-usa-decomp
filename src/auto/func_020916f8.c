#include "m2c.h"

s32 func_02057fb4(s32, s32);
s32 func_0206b3c4();
s32 func_02084450(M2C_UNK, M2C_UNK, void **);
s32 func_02093100(M2C_UNK);
M2C_UNK func_0209c740(s32, M2C_UNK, s32 *);

s32 func_020916f8(M2C_UNK arg0, M2C_UNK arg1, s32 *arg2) {
    void *sp4[4];
    s32 sp0;
    s32 var_r0;

    func_0209c740(func_02093100(0x28), arg0, &sp0);
    arg1 = func_02084450(arg0, arg1, sp4);
    if ((sp4[0] != NULL) && (M2C_FIELD(sp4[0], s32 *, 4) != 0)) {
        var_r0 = func_02057fb4(func_0206b3c4(), sp0);
    } else {
        var_r0 = 0;
    }
    *arg2 = var_r0;
    return arg1;
}
