#include "m2c.h"

u8 func_0207d1c8(void *arg0, void *arg1, void *arg2) {
    s32 temp_ip;
    s32 temp_ip_2;
    s32 temp_r3;
    u8 var_r0;

    temp_ip = M2C_FIELD(arg0, s32 *, 0);
    if (temp_ip < (s32) M2C_FIELD(arg1, s32 *, 0)) {
        return 0U;
    }
    if (temp_ip > (s32) M2C_FIELD(arg2, s32 *, 0)) {
        return 0U;
    }
    temp_ip_2 = M2C_FIELD(arg0, s32 *, 4);
    if (temp_ip_2 < (s32) M2C_FIELD(arg1, s32 *, 4)) {
        return 0U;
    }
    if (temp_ip_2 > (s32) M2C_FIELD(arg2, s32 *, 4)) {
        return 0U;
    }
    temp_r3 = M2C_FIELD(arg0, s32 *, 8);
    if (temp_r3 < (s32) M2C_FIELD(arg1, s32 *, 8)) {
        return 0U;
    }
    if (temp_r3 <= (s32) M2C_FIELD(arg2, s32 *, 8)) {
        var_r0 = 1;
    } else {
        var_r0 = 0;
    }
    return var_r0;
}
