#include "m2c.h"

M2C_UNK func_02073b30();
M2C_UNK func_02073b54();
s32 func_02084450(M2C_UNK, M2C_UNK, s32 *);

s32 func_020a5924(M2C_UNK arg0, M2C_UNK arg1) {
    s32 sp0[4];
    s32 temp_r4;

    temp_r4 = func_02084450(arg0, arg1, sp0);
    if (sp0[0] & 0xFF) {
        func_02073b30();
    } else {
        func_02073b54();
    }
    return temp_r4;
}
