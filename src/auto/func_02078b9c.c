#include "m2c.h"

s32 func_02078b9c(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_lr;
    u8 temp_r3;
    u8 temp_r3_2;
    void *temp_r4;

    temp_r4 = M2C_FIELD(arg0, s32 *, 0x34) + (arg1 * 8);
    temp_r3 = M2C_FIELD(temp_r4, u8 *, 1);
    temp_lr = (M2C_FIELD(temp_r4, s8 *, 3) * 0xC) + M2C_FIELD(arg0, s32 *, 0x38);
    if ((arg2 < (s32) temp_r3) || (arg2 > (s32) M2C_FIELD(temp_r4, u8 *, 2))) {
        return 0;
    }
    if (M2C_FIELD(arg0, s32 *, 0xB4) != 0) {
        temp_r3_2 = M2C_FIELD(temp_lr, u8 *, 8);
        if ((arg2 >= (s32) temp_r3_2) && (arg2 < (s32) (temp_r3_2 + M2C_FIELD(arg0, s16 *, 0x16)))) {
            return M2C_FIELD(temp_lr, s32 *, 4) + ((arg2 - temp_r3_2) * 2);
        }
        return M2C_FIELD(temp_lr, s32 *, 4) + M2C_FIELD(arg0, s16 *, 0x3E) + ((arg2 - M2C_FIELD(temp_lr, u8 *, 9)) * 2);
    }
    if (M2C_FIELD(arg0, s32 *, 0xB0) != 0) {
        return M2C_FIELD(temp_lr, s32 *, 4);
    }
    return M2C_FIELD(temp_lr, s32 *, 4) + ((arg2 - temp_r3) * 2);
}
