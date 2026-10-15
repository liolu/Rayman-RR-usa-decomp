#include "m2c.h"

M2C_UNK func_02037728(s32, M2C_UNK);
s32 func_02067900();

s32 func_02088f24(void *arg0, M2C_UNK arg1) {
    s32 temp_r0;

    if (M2C_FIELD(M2C_FIELD(arg0, void **, 4), s32 *, 8) != 0) {
        temp_r0 = func_02067900();
        if (temp_r0 != 0) {
            func_02037728(temp_r0, arg1);
            return 1;
        }
    }
    return 0;
}
