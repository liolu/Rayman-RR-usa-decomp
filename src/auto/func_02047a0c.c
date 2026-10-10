#include "m2c.h"

void func_02047a0c(s32 arg0, void *arg1, void *arg2) {
    s32 temp_r3;
    s32 temp_r3_2;

    M2C_FIELD(arg1, s32 *, 0) = 0;
    temp_r3                   = M2C_FIELD(arg1, s32 *, 0x18);
    if (temp_r3 < (s32) M2C_FIELD(arg2, s32 *, 0x1C)) {
        M2C_FIELD(arg1, s32 *, 0) = (s32) (M2C_FIELD(arg1, s32 *, 0) | 1);
    } else if (temp_r3 > (s32) M2C_FIELD(arg2, s32 *, 0x18)) {
        M2C_FIELD(arg1, s32 *, 0) = (s32) (M2C_FIELD(arg1, s32 *, 0) | 2);
    }
    temp_r3_2 = M2C_FIELD(arg1, s32 *, 0x14);
    if (temp_r3_2 < (s32) M2C_FIELD(arg2, s32 *, 0x2C)) {
        M2C_FIELD(arg1, s32 *, 0) = (s32) (M2C_FIELD(arg1, s32 *, 0) | 4);
        return;
    }
    if (temp_r3_2 > (s32) M2C_FIELD(arg2, s32 *, 0x28)) {
        M2C_FIELD(arg1, s32 *, 0) = (s32) (M2C_FIELD(arg1, s32 *, 0) | 8);
    }
}
