#include "m2c.h"

s32 func_02093100(s32);
M2C_UNK func_0209c740(s32, M2C_UNK, void **);

void *func_0209156c(M2C_UNK arg0, void *arg1, s32 *arg2) {
    void *sp0;
    s32 var_r1;
    u8 var_r0_2;
    void *var_r0;

    func_0209c740(func_02093100(M2C_FIELD(arg1, s32 *, -8)), arg0, &sp0);
    if (M2C_FIELD(sp0, s32 *, 0) != 2) {
        var_r0 = NULL;
    } else {
        var_r0 = M2C_FIELD(sp0, void **, 4);
    }
    if (M2C_FIELD(M2C_FIELD(var_r0, void **, 4), u8 *, 0x25) & 2) {
        var_r0_2 = 1;
    } else {
        var_r0_2 = 0;
    }
    if (var_r0_2 == 1) {
        var_r1 = 1;
    } else {
        var_r1 = 0;
    }
    *arg2 = var_r1;
    return arg1;
}
