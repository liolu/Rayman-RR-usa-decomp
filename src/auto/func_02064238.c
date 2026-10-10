#include "m2c.h"

s32 func_0200a3b8();                                /* extern */
M2C_UNK func_0200a4bc(s32, s32);                    /* extern */
void *func_020414ac(M2C_UNK, M2C_UNK, M2C_UNK);     /* extern */
M2C_UNK func_02041da8(void *);                      /* extern */
s32 func_020672e0();                                /* extern */
M2C_UNK func_0206730c(s32, M2C_UNK, u8, M2C_UNK);   /* extern */
M2C_UNK func_020678f0(s32);                         /* extern */
void *func_02067900(s32);                           /* extern */

s32 func_02064238(M2C_UNK arg0) {
    s32 temp_r5;
    u8 temp_r0_2;
    void *temp_r0;
    void *temp_r0_3;

    temp_r5   = func_020672e0();
    temp_r0   = func_020414ac(0x9B, arg0, 0x10);
    temp_r0_2 = M2C_FIELD(temp_r0, u8 *, 0xE);
    switch (temp_r0_2) {                            /* irregular */
        case 0:
            func_0206730c(temp_r5, 0, M2C_FIELD(temp_r0, u8 *, 0xF), 0);
            break;
        case 1:
            func_0206730c(temp_r5, 1, M2C_FIELD(temp_r0, u8 *, 0xF), 0);
            break;
        case 2:
            func_0206730c(temp_r5, 2, M2C_FIELD(temp_r0, u8 *, 0xF), 0);
            break;
        default:
            func_0206730c(temp_r5, 2, 1U, 0);
            break;
    }
    func_020678f0(temp_r5);
    temp_r0_3 = func_02067900(temp_r5);
    if (M2C_FIELD(temp_r0_3, s32 *, 0xC) & 2) {
        func_0200a4bc(0x45800000, M2C_FIELD(temp_r0, s32 *, 0));
        M2C_FIELD(temp_r0_3, s32 *, 0x180) = func_0200a3b8();
        func_0200a4bc(0x45800000, M2C_FIELD(temp_r0, s32 *, 4));
        M2C_FIELD(temp_r0_3, s32 *, 0x184) = func_0200a3b8();
        func_0200a4bc(0x45800000, M2C_FIELD(temp_r0, s32 *, 8));
        M2C_FIELD(temp_r0_3, s32 *, 0x188) = func_0200a3b8();
    }
    func_02041da8(temp_r0);
    return temp_r5;
}
