#include "m2c.h"

s32 func_020787ec(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_ip;
    u8 temp_r1;
    u8 temp_r3;

    temp_ip = (M2C_FIELD((M2C_FIELD(arg0, s32 *, 0x34) + (arg1 * 8)), s8 *, 3) * 0xC) + M2C_FIELD(arg0, s32 *, 0x38);
    temp_r3 = M2C_FIELD(temp_ip, u8 *, 8);
    if ((arg2 >= (s32) temp_r3) && (arg2 < (s32) (temp_r3 + M2C_FIELD(arg0, s16 *, 0x16)))) {
        return 0;
    }
    temp_r1 = M2C_FIELD(temp_ip, u8 *, 9);
    if ((arg2 >= (s32) temp_r1) && (arg2 < (s32) (temp_r1 + M2C_FIELD(arg0, s16 *, 0x16)))) {
        return 1;
    }
    return -1;
}
