#include "m2c.h"

extern u8 data_020cfff0[];
extern s32 data_020d00c8;
extern u8 data_020d0048[];
extern u8 data_020d0008[];

s32 func_0204679c(s32 arg0) {
    u8 *temp;
    s32 idx;
    u8 *ent;
    s16 k;
    s32 code;

    if (*(s16 *) data_020cfff0 == 0) {
        code          = 0x1001;
        data_020d00c8 = code;
        return 0x9000 - code;
    }
    if (arg0 < 0 || arg0 > 0xF) {
        data_020d00c8 = 0x1005;
        return 0x7FFF;
    }
    if (!(*(u16 *) (data_020cfff0 + 0xC) & (1 << arg0))) {
        data_020d00c8 = 0x1002;
        return 0x7FFF;
    }
    temp = *(u8 **) (data_020d0048 + arg0 * 4);
    if (*(u16 *) (temp + 0xE) < 2) {
        return 0x7FFD;
    }
    if (*(u32 *) temp & 8) {
        k = *(u16 *) (temp + 0xC) - 1;
        if (k < 0) {
            k = k + *(s16 *) (data_020cfff0 + 0x14);
        }
        idx = k;
        ent = *(u8 **) (data_020d0008 + arg0 * 4) + idx * 16;
        return ((*(u32 *) ent & 8) == 0) ? 0x7FFE : 0x7FFD;
    }
    return 0x7FFD;
}
