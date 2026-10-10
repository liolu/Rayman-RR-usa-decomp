#include "m2c.h"

extern M2C_UNK data_020cfff0;
extern M2C_UNK data_020d0088;
extern s32 data_020d00c8;

s32 func_020460b4(s32 arg0) {
    if (M2C_FIELD(&data_020cfff0, s16 *, 0) == 0) {
        data_020d00c8 = 0x1001;
        return 0x7FFF;
    }
    if ((arg0 < 0) || (arg0 > 0xF)) {
        data_020d00c8 = 0x1005;
        return 0x7FFF;
    }
    if (*((M2C_UNK *) ((s8 *) &data_020d0088 + (arg0 * 4))) == 0) {
        data_020d00c8 = 0x100C;
        return 0x7FFF;
    }
    M2C_FIELD(&data_020cfff0, u16 *, 0xC) = (u16) (M2C_FIELD(&data_020cfff0, u16 *, 0xC) | (1 << arg0));
    return 0;
}
