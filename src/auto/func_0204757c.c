#include "m2c.h"

M2C_UNK memset(void *, M2C_UNK, M2C_UNK);           /* extern */
extern M2C_UNK data_020d00f4;

s32 func_0204757c(s32 arg0) {
    s32 temp_r4;
    void *temp_r5;
    void *temp_r6;

    if ((arg0 < 0) || (arg0 >= 3)) {
        return 0;
    }
    temp_r4 = arg0 * 0xA8;
    temp_r5 = &data_020d00f4;
    temp_r6 = temp_r5 + temp_r4;
    memset(temp_r6 + 4, 0, 0xA4);
    M2C_FIELD(temp_r5, s16 *, temp_r4) = GetCRC16(0xDCDCDCDC, temp_r6 + 4, 0xA4);
    return 1;
}
