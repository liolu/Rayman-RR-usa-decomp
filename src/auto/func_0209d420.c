#include "m2c.h"

M2C_UNK func_02084450(void *, void *, s32 *);

M2C_UNK func_0209d420(void *arg0, void *arg1) {
    s32 sp0[4];
    s32 temp_r4;
    M2C_UNK res;

    temp_r4 = M2C_FIELD(arg1, s32 *, -8);
    res     = func_02084450(arg0, arg1, sp0);
    if (temp_r4 != 0x3F) {
        return res;
    }
    M2C_FIELD(*M2C_FIELD(arg0, void ***, 4), s32 *, 0x10) = sp0[0];
    return res;
}
