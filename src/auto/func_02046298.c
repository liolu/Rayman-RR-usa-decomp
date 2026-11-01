#include "m2c.h"

extern u8 data_020cfff0[];
extern u32 data_020d00c8;
extern u32 data_020d0048[];

s32 func_02046298(s32 idx) {
    if (*(s16 *) data_020cfff0 == 0) {
        data_020d00c8 = 0x1001;
        return 0x9000 - 0x1001;
    }
    if (idx < 0 || idx > 0xf) {
        data_020d00c8 = 0x1005;
        return 0x7fff;
    }
    if ((*(u16 *) (data_020cfff0 + 0xc) & (1 << idx)) == 0) {
        data_020d00c8 = 0x1002;
        return 0x8000 - 1;
    }
    if (*(u32 *) data_020d0048[idx] & 2) {
        return 0x7ffe;
    }
    return 0x7ffd;
}
