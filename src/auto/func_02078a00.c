#include "m2c.h"

s32 func_02078a00(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_r1;
    u8 temp_ip;
    u8 temp_ip_2;
    void *temp_r4;

    temp_r4 = M2C_FIELD(arg0, s32 *, 0x34) + (arg1 * 8);
    temp_ip = M2C_FIELD(temp_r4, u8 *, 1);
    temp_r1 = (M2C_FIELD(temp_r4, s8 *, 3) * 0xC) + M2C_FIELD(arg0, s32 *, 0x38);
    if ((arg2 < (s32) temp_ip) || (arg2 > (s32) M2C_FIELD(temp_r4, u8 *, 2))) {
        return 0;
    }
    if (M2C_FIELD(arg0, s32 *, 0xB4) != 0) {
        temp_ip_2 = M2C_FIELD(temp_r1, u8 *, 8);
        if ((arg2 >= (s32) temp_ip_2) && (arg2 < (s32) (temp_ip_2 + M2C_FIELD(arg0, s16 *, 0x16)))) {
            return M2C_FIELD(temp_r1, s32 *, 0) + ((arg2 - temp_ip_2) << M2C_FIELD(arg0, s8 *, 0xC3));
        }
        return M2C_FIELD(temp_r1, s32 *, 0) + M2C_FIELD(arg0, s16 *, 0x3C) +
               ((arg2 - M2C_FIELD(temp_r1, u8 *, 9)) << M2C_FIELD(arg0, s8 *, 0xC3));
    }
    return M2C_FIELD(temp_r1, s32 *, 0) + ((arg2 - temp_ip) << M2C_FIELD(arg0, s8 *, 0xC3));
}
