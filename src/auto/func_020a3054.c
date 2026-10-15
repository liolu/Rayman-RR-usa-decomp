#include "m2c.h"

M2C_UNK func_02068df4(s32, s32);
M2C_UNK func_02068dfc(s32, s32);
void *func_02084450(M2C_UNK, void *, s32 *);
s32 func_020931d8(s32);
M2C_UNK func_0209c740(s32, M2C_UNK, void **);

void *func_020a3054(M2C_UNK arg0, void *arg1) {
    s32 sp4[4];
    void *sp0;
    s32 temp_r5;
    void *temp_r4;
    void *var_r4;

    var_r4 = arg1;
    func_0209c740(func_020931d8(M2C_FIELD(var_r4, s32 *, -8)), arg0, &sp0);
    temp_r5 = M2C_FIELD(M2C_FIELD(sp0, void **, 4), s32 *, 0x28);
    if (temp_r5 != 0) {
        temp_r4 = func_02084450(arg0, var_r4, sp4);
        func_02068df4(temp_r5, sp4[0] << 0x10);
        var_r4 = func_02084450(arg0, temp_r4, sp4);
        func_02068dfc(temp_r5, sp4[0] << 0x10);
    }
    return var_r4;
}
