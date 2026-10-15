#include "m2c.h"

M2C_UNK func_0202c700(M2C_UNK *, M2C_UNK *, s32);
M2C_UNK func_0202cb6c(M2C_UNK *, M2C_UNK);
s32 func_020815e4(M2C_UNK *, M2C_UNK);

s32 func_020604dc(M2C_UNK arg0, s32 arg1, void *arg2) {
    u8 spC[100];
    u8 sp0[12];
    u8 var_r0;

    if (M2C_FIELD(M2C_FIELD(M2C_FIELD(arg2, void **, 4), void **, 4), u8 *, 0x25) & 4) {
        var_r0 = 1;
    } else {
        var_r0 = 0;
    }
    if (var_r0 != 1) {
        return 0;
    }
    func_0202cb6c(spC, arg1);
    func_0202c700(sp0, spC, M2C_FIELD(arg2, s32 *, 0x24) + 4);
    return func_020815e4(sp0, arg0);
}
