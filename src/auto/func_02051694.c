#include "m2c.h"

extern s32 data_020dba6c;

s32 func_02051694(s32 arg0) {
    s32 temp_r1;
    s32 temp_r2;
    s32 temp_r2_2;
    s32 temp_r1_2;

    temp_r2 = M2C_FIELD(&data_020dba6c, s32 *, 0x60);
    if ((temp_r2 & 0x02000000) != 0x02000000) {
        return 0;
    }
    temp_r2 = *(s32 *) temp_r2;
    if ((temp_r2 & 0x02000000) != 0x02000000) {
        return 0;
    }
    temp_r2_2 = M2C_FIELD(temp_r2, s32 *, 0x10);
    if ((temp_r2_2 & 0x02000000) != 0x02000000) {
        return 0;
    }
    if (arg0 <= (s32) M2C_FIELD(temp_r2_2, u16 *, 4)) {
        temp_r1_2 = M2C_FIELD((M2C_FIELD(temp_r2_2, s32 *, 0) + (arg0 * 0x10)), s32 *, 4);
        if (temp_r1_2 != 0) {
            if ((temp_r1_2 & 0x02000000) != 0x02000000) {
                return 0;
            }
            temp_r1 = *(s32 *) temp_r1_2;
            if ((temp_r1 != 0) && ((temp_r1 & 0x02000000) != 0x02000000)) {
                return 0;
            }
            if (temp_r1 != 0) {
                if ((M2C_FIELD(temp_r1, s16 *, 0x38) == 1) && (*(s16 *) M2C_FIELD(temp_r1, s16 **, 0xC) == 0x80)) {
                    return **M2C_FIELD(temp_r1, s32 ***, 0x10);
                }
            }
        }
    }
    return 0;
}
