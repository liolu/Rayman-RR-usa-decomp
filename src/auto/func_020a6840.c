#include "m2c.h"

M2C_UNK func_02001588(void *, void *, M2C_UNK);     /* extern */
s32 func_0200a3b8();                                /* extern */
s32 func_0200a42c(s32);                             /* extern */
M2C_UNK func_0200a6a8(s32, s32);                    /* extern */
extern M2C_UNK data_020e4f10;
extern s32 data_020e59bc;
extern M2C_UNK data_020e59cc;

void func_020a6840(s32 arg0) {
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r1;
    s32 temp_r1_2;
    s32 temp_r2;
    s32 temp_r3;
    u32 var_r8;
    void *var_r4;
    void *var_r5;

    temp_r1 = arg0 * 0x5C;
    temp_r3 = *((M2C_UNK *) ((s8 *) &data_020e59cc + temp_r1));
    var_r5  = (M2C_UNK *) ((s8 *) &data_020e59cc + temp_r1);
    var_r4  = var_r5 + 0x5C;
    if (temp_r3 & 0x200000) {
        temp_r1_2 = M2C_FIELD(var_r5, volatile s32 *, 0x58);
        if (temp_r1_2 & 0x100) {
            if ((u8) temp_r1_2 != 0) {
                M2C_FIELD(var_r5, volatile s32 *, 0x58) = (s32) ((temp_r1_2 & ~0xFF) | ((u8) temp_r1_2 - 1));
                goto block_4;
            }
            goto block_12;
        }
    block_4:
        temp_r0 = M2C_FIELD(var_r5, s32 *, 0);
        if (temp_r0 & 0x01000000) {
            M2C_FIELD(var_r5, s32 *, 0) -= 0x01000000;
        }
        func_0200a6a8(func_0200a42c(M2C_FIELD(&data_020e4f10, volatile s32 *, 0x14)), 0x3BA3D70A);
        M2C_FIELD(var_r5, volatile s32 *, 8)    = func_0200a3b8();
        M2C_FIELD(var_r5, volatile s32 *, 0x18) = (s32) M2C_FIELD(var_r5, volatile s32 *, 0xC);
        M2C_FIELD(var_r5, volatile s32 *, 0x1C) = (s32) M2C_FIELD(var_r5, volatile s32 *, 0x10);
        M2C_FIELD(var_r5, volatile s32 *, 0x20) = (s32) M2C_FIELD(var_r5, volatile s32 *, 0x14);
        temp_r2                                 = M2C_FIELD(var_r5, volatile s32 *, 0x50);
        M2C_FIELD(var_r5, volatile s32 *, 0x34) = temp_r2;
        M2C_FIELD(var_r5, volatile s32 *, 0x30) = temp_r2;
        data_020e59bc                           = M2C_FIELD(var_r5, volatile s32 *, 0x4C);
        M2C_FIELD(var_r5, volatile s32 *, 0x44) = 0xFF000;
        temp_r0_2                               = M2C_FIELD(var_r5, volatile s32 *, 0) & 0xF000;
        if ((temp_r0_2 != 0x7000) && (temp_r0_2 != 0xA000) && (temp_r0_2 != 0x9000)) {

        } else {
            M2C_FIELD(var_r5, volatile s32 *, 0x44) = 0x5000;
        }
        return;
    }
block_12:
    if (temp_r3 & 0x80000) {
        M2C_FIELD(&data_020e4f10, volatile s32 *, 0x28) = (s32) (M2C_FIELD(&data_020e4f10, volatile s32 *, 0x28) - 1);
    }
    var_r8 = arg0 + 1;
    if (var_r8 < (u32) M2C_FIELD(&data_020e4f10, volatile u32 *, 0)) {
        do {
            func_02001588(var_r5, var_r4, 0x5C);
            var_r8 += 1;
            var_r4 += 0x5C;
            var_r5 += 0x5C;
        } while (var_r8 < (u32) M2C_FIELD(&data_020e4f10, volatile u32 *, 0));
    }
    M2C_FIELD(&data_020e4f10, volatile u32 *, 0) = (u32) (M2C_FIELD(&data_020e4f10, volatile u32 *, 0) - 1);
}
