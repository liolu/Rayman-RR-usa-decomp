#include "m2c.h"

s32 func_0207d158(void *arg0, void *arg1, void *arg2) {
    s32 temp_ip;
    s32 temp_ip_2;
    s32 temp_r3;
    s32 var_lr;

    temp_ip = M2C_FIELD(arg0, s32 *, 0);
    var_lr  = 0;
    if (temp_ip < (s32) M2C_FIELD(arg1, s32 *, 0)) {
        var_lr |= 1;
    } else if (temp_ip > (s32) M2C_FIELD(arg2, s32 *, 0)) {
        var_lr |= 2;
    }
    temp_ip_2 = M2C_FIELD(arg0, s32 *, 4);
    if (temp_ip_2 < (s32) M2C_FIELD(arg1, s32 *, 4)) {
        var_lr |= 4;
    } else if (temp_ip_2 > (s32) M2C_FIELD(arg2, s32 *, 4)) {
        var_lr |= 8;
    }
    temp_r3 = M2C_FIELD(arg0, s32 *, 8);
    if (temp_r3 < (s32) M2C_FIELD(arg1, s32 *, 8)) {
        var_lr |= 0x10;
    } else if (temp_r3 > (s32) M2C_FIELD(arg2, s32 *, 8)) {
        var_lr |= 0x20;
    }
    return var_lr;
}
