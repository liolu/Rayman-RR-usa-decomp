#include "m2c.h"

M2C_UNK func_020015f4(s32, M2C_UNK, M2C_UNK);       /* extern */
s32 func_0202fd3c(M2C_UNK, M2C_UNK);                /* extern */
M2C_UNK func_02030ac0(u8, u8, M2C_UNK);             /* extern */
M2C_UNK func_0207ad9c(M2C_UNK, u8, M2C_UNK, M2C_UNK, s32, s32, s32, s32); /* extern */
extern u8 data_020bbfe8;
extern u8 data_020c3e84;
extern u8 data_020c3e88;

s32 func_0201a588(M2C_UNK arg0) {
    s32 temp_r0;
    s32 var_r4;

    func_02030ac0(data_020bbfe8, data_020c3e84, 0);
    if ((data_020c3e88 != 0) || (temp_r0 = func_0202fd3c(arg0, 0), var_r4 = temp_r0, (var_r4 == 0))) {
        func_0207ad9c(5, data_020bbfe8, 0, 6, -1, 0xFF, 0xFF, 0);
        var_r4 = 0;
    } else {
        func_020015f4(temp_r0, 0, arg0);
    }
    return var_r4;
}
