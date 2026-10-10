#include "m2c.h"

M2C_UNK (*func_02093138(s32))(M2C_UNK);             /* extern */
s32 func_02093150();                                /* extern */
M2C_UNK (*func_02093180(M2C_UNK))(M2C_UNK, M2C_UNK); /* extern */

void func_02083a1c(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2) {
    M2C_UNK (*temp_r4)(M2C_UNK, M2C_UNK);
    s32 temp_r5;

    temp_r5 = func_02093150();
    temp_r4 = func_02093180(arg0);
    func_02093138(temp_r5)(arg2);
    temp_r4(arg1, arg2);
}
