#include "m2c.h"

s32 func_0206e16c(M2C_UNK, s32);                    /* extern */
s32 func_0206e438(M2C_UNK);                         /* extern */
s32 func_020823f0(M2C_UNK, M2C_UNK);                /* extern */
s32 func_02082450(M2C_UNK, M2C_UNK);                /* extern */

s32 func_02088904(M2C_UNK arg0) {
    s32 temp_r4;

    temp_r4 = func_02082450(1, arg0);
    if (func_020823f0(0, arg0) == 0) {
        return 4;
    }
    if (func_0206e16c(arg0, temp_r4) == 0) {
        return 4;
    }
    if (func_0206e438(arg0) != 0) {
        return 4;
    }
    return 1;
}
