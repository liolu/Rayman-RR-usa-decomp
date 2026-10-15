#include "m2c.h"

M2C_UNK strcpy(M2C_UNK *, s32);
M2C_UNK func_02048008();
M2C_UNK func_020581c8();
s32 func_02058404();
s32 func_02084450(M2C_UNK, s32, M2C_UNK *);
extern M2C_UNK data_020d0340;

s32 func_020a452c(M2C_UNK arg0, s32 arg1) {
    u8 sp0[16];
    s32 temp_r4;

    temp_r4 = func_02084450(arg0, func_02084450(arg0, func_02084450(arg0, func_02084450(arg0, arg1, sp0), sp0), sp0), sp0);
    strcpy(&data_020d0340, func_02058404());
    func_02048008();
    func_020581c8();
    return temp_r4;
}
