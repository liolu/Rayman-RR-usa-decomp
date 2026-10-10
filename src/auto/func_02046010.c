#include "m2c.h"

extern s16 data_020cfff0;
extern M2C_UNK data_020d0088;
extern s32 data_020d00c8;

s32 func_02046010(s32 arg0) {
    void *temp_r0;

    if (data_020cfff0 == 0) {
        data_020d00c8 = 0x1001;
        return 0x7FFF;
    }
    if ((arg0 < 0) || (arg0 > 0xF)) {
        data_020d00c8 = 0x1005;
        return 0x7FFF;
    }
    temp_r0 = *((M2C_UNK *) ((s8 *) &data_020d0088 + (arg0 * 4)));
    if (temp_r0 == NULL) {
        data_020d00c8 = 0x100C;
        return 0x7FFD;
    }
    if (M2C_FIELD(temp_r0, u16 *, 0xC) == 1) {
        return 0x7FFD;
    }
    return 0x7FFE;
}
