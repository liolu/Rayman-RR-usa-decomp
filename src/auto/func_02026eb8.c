#include "m2c.h"

M2C_UNK func_02001588(void *, M2C_UNK *, M2C_UNK);  /* extern */
extern M2C_UNK data_020bc24c;

void func_02026eb8(void *arg0, void *arg1) {
    s32 temp_r0;
    s32 temp_r0_10;
    s32 temp_r0_2;
    s32 temp_r0_3;
    s32 temp_r0_4;
    s32 temp_r0_5;
    s32 temp_r0_6;
    s32 temp_r0_7;
    s32 temp_r0_8;
    s32 temp_r0_9;

    func_02001588(arg0, &data_020bc24c, 0x28);
    temp_r0 = M2C_FIELD(arg1, s32 *, 0);
    if (temp_r0 != 0) {
        M2C_FIELD(arg0, s32 *, 0) = temp_r0;
    }
    temp_r0_2 = M2C_FIELD(arg1, s32 *, 4);
    if (temp_r0_2 != 0) {
        M2C_FIELD(arg0, s32 *, 4) = temp_r0_2;
    }
    temp_r0_3 = M2C_FIELD(arg1, s32 *, 8);
    if (temp_r0_3 != 0) {
        M2C_FIELD(arg0, s32 *, 8) = temp_r0_3;
    }
    temp_r0_4 = M2C_FIELD(arg1, s32 *, 0xC);
    if (temp_r0_4 != 0) {
        M2C_FIELD(arg0, s32 *, 0xC) = temp_r0_4;
    }
    temp_r0_5 = M2C_FIELD(arg1, s32 *, 0x10);
    if (temp_r0_5 != 0) {
        M2C_FIELD(arg0, s32 *, 0x10) = temp_r0_5;
    }
    temp_r0_6 = M2C_FIELD(arg1, s32 *, 0x14);
    if (temp_r0_6 != 0) {
        M2C_FIELD(arg0, s32 *, 0x14) = temp_r0_6;
    }
    temp_r0_7 = M2C_FIELD(arg1, s32 *, 0x18);
    if (temp_r0_7 != 0) {
        M2C_FIELD(arg0, s32 *, 0x18) = temp_r0_7;
    }
    temp_r0_8 = M2C_FIELD(arg1, s32 *, 0x1C);
    if (temp_r0_8 != 0) {
        M2C_FIELD(arg0, s32 *, 0x1C) = temp_r0_8;
    }
    temp_r0_9 = M2C_FIELD(arg1, s32 *, 0x20);
    if (temp_r0_9 != 0) {
        M2C_FIELD(arg0, s32 *, 0x20) = temp_r0_9;
    }
    temp_r0_10 = M2C_FIELD(arg1, s32 *, 0x24);
    if (temp_r0_10 != 0) {
        M2C_FIELD(arg0, s32 *, 0x24) = temp_r0_10;
    }
}
