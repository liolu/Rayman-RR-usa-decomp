#include "engine.h"
#include "m2c.h"

M2C_UNK func_020414ac(M2C_UNK, M2C_UNK, M2C_UNK);
void func_02041da8(M2C_UNK);
M2C_UNK func_02061a78(M2C_UNK);
M2C_UNK func_02063b80(M2C_UNK, M2C_UNK);
M2C_UNK func_0206697c(void);

M2C_UNK func_02066e6c(s32, u8);                     /* extern */
M2C_UNK func_02066e78(s32, u8);                     /* extern */
M2C_UNK func_02066f94(s32, u8);                     /* extern */

s32 func_02064104(s32 arg0, s32 arg1) {
    s32 temp_r4;
    u16 temp_r0_2;
    u16 temp_r0_3;
    u16 temp_r0_4;
    u16 temp_r0_5;
    u16 temp_r0_6;
    u16 temp_r0_7;
    u16 temp_r0_8;
    u16 temp_r0_9;
    void *temp_r0;

    temp_r4   = func_0206697c();
    temp_r0   = (void *) func_020414ac(0x44, arg0, 0x14);
    temp_r0_2 = M2C_FIELD(temp_r0, u16 *, 2);
    if (temp_r0_2 != 0xFFFF) {
        M2C_FIELD(temp_r4, s32 *, 8) = func_02061a78((s32) temp_r0_2);
    }
    temp_r0_3 = M2C_FIELD(temp_r0, u16 *, 0);
    if (temp_r0_3 != 0xFFFF) {
        M2C_FIELD(temp_r4, s32 *, 0) = func_02061a78((s32) temp_r0_3);
    }
    temp_r0_4 = M2C_FIELD(temp_r0, u16 *, 4);
    if (temp_r0_4 != 0xFFFF) {
        M2C_FIELD(temp_r4, s32 *, 4) = func_02061a78((s32) temp_r0_4);
    }
    temp_r0_5 = M2C_FIELD(temp_r0, u16 *, 6);
    if (temp_r0_5 != 0xFFFF) {
        M2C_FIELD(temp_r4, s32 *, 0xC) = func_02061a78((s32) temp_r0_5);
    }
    temp_r0_6 = M2C_FIELD(temp_r0, u16 *, 8);
    if (temp_r0_6 != 0xFFFF) {
        M2C_FIELD(temp_r4, s32 *, 0x10) = func_02063b80((s32) temp_r0_6, arg1);
    }
    temp_r0_7 = M2C_FIELD(temp_r0, u16 *, 0xC);
    if (temp_r0_7 != 0xFFFF) {
        M2C_FIELD(temp_r4, s32 *, 0x14) = func_02063b80((s32) temp_r0_7, arg1);
    }
    temp_r0_8 = M2C_FIELD(temp_r0, u16 *, 0xA);
    if (temp_r0_8 != 0xFFFF) {
        M2C_FIELD(temp_r4, s32 *, 0x18) = func_02063b80((s32) temp_r0_8, arg1);
    }
    temp_r0_9 = M2C_FIELD(temp_r0, u16 *, 0xE);
    if (temp_r0_9 != 0xFFFF) {
        M2C_FIELD(temp_r4, s32 *, 0x1C) = func_02063b80((s32) temp_r0_9, arg1);
    }
    func_02066e6c(temp_r4, (u8) M2C_FIELD(temp_r0, s16 *, 0x10));
    func_02066e78(temp_r4, M2C_FIELD(temp_r0, u8 *, 0x12));
    func_02066f94(temp_r4, M2C_FIELD(temp_r0, u8 *, 0x13));
    func_02041da8((s32) temp_r0);
    return temp_r4;
}
