#include "m2c.h"

s32 func_02082244();                                /* extern */
M2C_UNK func_020823c0(M2C_UNK, M2C_UNK, s32);       /* extern */
s32 func_020823f0(M2C_UNK, M2C_UNK);                /* extern */
extern M2C_UNK data_020dc19c;

s32 func_02088994(M2C_UNK arg0) {
    s32 temp_r4;

    temp_r4 = func_02082244();
    func_020823c0(0, arg0, M2C_FIELD(&data_020dc19c, s32 *, 0x74) + func_020823f0(0, arg0));
    return temp_r4;
}
