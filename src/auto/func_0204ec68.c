#include "m2c.h"

M2C_UNK MI_WaitDma();
extern M2C_UNK data_020dba6c;

void func_0204ec68(void *arg0) {
    s32 temp_r5;
    s32 scale_x;
    s32 scale_y;
    s32 trans_z;
    u8 *temp_r6;

    if ((M2C_FIELD(&data_020dba6c, s32 *, 0x40) != 0) && (arg0 != NULL)) {
        temp_r6 = M2C_FIELD(arg0, u8 **, 0x64);
        temp_r5 = (s32) ((((s64) -M2C_FIELD(temp_r6, s32 *, 0x38)) * (M2C_FIELD(temp_r6, s32 *, 8) - 1) + 0x800) >> 0xC);
        scale_x = (s32) (((s64) temp_r5 * M2C_FIELD(temp_r6, s32 *, 0x4C) + 0x80000) >> 0x14);
        scale_y = (s32) (((s64) temp_r5 * M2C_FIELD(temp_r6, s32 *, 0x50) + 0x80000) >> 0x14);
        MI_WaitDma(0);
        M2C_FIELD((void *) 0x040004A4, volatile s32 *, 0)     = 0x011F0880;
        M2C_FIELD((void *) 0x040004A4, volatile s32 *, 4)     = 0;
        M2C_FIELD((void *) 0x040004A4, volatile s32 *, -0x64) = 2;
        M2C_FIELD((void *) 0x040004A4, volatile s32 *, -0x50) = 0;
        trans_z                                               = 1 - M2C_FIELD(temp_r6, s32 *, 8);
        M2C_FIELD((void *) 0x040004A4, volatile s32 *, -0x34) = 0;
        M2C_FIELD((void *) 0x040004A4, volatile s32 *, -0x34) = 0;
        M2C_FIELD((void *) 0x040004A4, volatile s32 *, -0x34) = trans_z;
        M2C_FIELD((void *) 0x040004A4, volatile s32 *, -0x38) = scale_x;
        M2C_FIELD((void *) 0x040004A4, volatile s32 *, -0x38) = scale_y;
        M2C_FIELD((void *) 0x040004A4, volatile s32 *, -0x38) = 0x1000;
        M2C_FIELD((void *) 0x040004A4, volatile s32 *, 0x5C)  = 1;
        M2C_FIELD((void *) 0x040004A4, volatile s32 *, -0x24) = 0;
        M2C_FIELD((void *) 0x040004A4, volatile s32 *, -0x18) = 0x60FF80;
        M2C_FIELD((void *) 0x040004A4, volatile s32 *, -0x18) = 0;
        M2C_FIELD((void *) 0x040004A4, volatile s32 *, -0x10) = -0x5F0080;
        M2C_FIELD((void *) 0x040004A4, volatile s32 *, -0x10) = -0x5FFF80;
        M2C_FIELD((void *) 0x040004A4, volatile s32 *, -0x10) = 0x600080;
        M2C_FIELD((void *) 0x040004A4, volatile s32 *, 0x60)  = 0;
    }
}
