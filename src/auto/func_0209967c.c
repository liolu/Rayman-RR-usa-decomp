#include "m2c.h"

M2C_UNK func_0202c8a4(M2C_UNK, s32, M2C_UNK);
s32 func_02084450(M2C_UNK, void *, M2C_UNK);
s32 func_02093198(s32);
M2C_UNK func_0209c740(s32, M2C_UNK, void **);

s32 func_0209967c(M2C_UNK arg0, void *arg1, M2C_UNK arg2) {
    void *sp0;
    s32 temp_r4;

    func_0209c740(func_02093198(M2C_FIELD(arg1, s32 *, -8)), arg0, &sp0);
    temp_r4 = func_02084450(arg0, arg1, arg2);
    func_0202c8a4(arg2, M2C_FIELD(sp0, s32 *, 0x24), arg2);
    return temp_r4;
}
