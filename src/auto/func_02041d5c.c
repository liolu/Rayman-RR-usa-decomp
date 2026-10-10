#include "m2c.h"

M2C_UNK func_0200d578(M2C_UNK *);                   /* extern */
M2C_UNK func_0200d5e8(M2C_UNK *);                   /* extern */
s32 func_0200de10(M2C_UNK, s32, s32);               /* extern */
M2C_UNK func_0200eb98();                            /* extern */
extern M2C_UNK data_020c0a44;
extern s32 data_020cfa8c;

s32 func_02041d5c(s32 arg0) {
    s32 temp_r0;

    func_0200d5e8(&data_020c0a44);
    temp_r0 = func_0200de10(0, data_020cfa8c, (arg0 + 7) & ~7);
    if (temp_r0 == 0) {
        func_0200eb98();
    }
    func_0200d578(&data_020c0a44);
    return temp_r0;
}
