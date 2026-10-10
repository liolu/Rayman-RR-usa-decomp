#include "m2c.h"

M2C_UNK func_020015f4(s32, M2C_UNK, M2C_UNK);       /* extern */
s32 func_0202fd3c(M2C_UNK, M2C_UNK);                /* extern */
M2C_UNK func_02030ac0(u8, u8, M2C_UNK);             /* extern */
extern u8 data_020becb8;
extern u8 data_020e39ec;
extern u8 data_020e39ed;

s32 func_02082918(M2C_UNK arg0) {
    s32 var_r4;

    var_r4 = 0;
    func_02030ac0(data_020becb8, data_020e39ed, 0);
    if (data_020e39ec == 0) {
        var_r4 = func_0202fd3c(arg0, 0);
    }
    func_020015f4(var_r4, 0, arg0);
    return var_r4;
}
