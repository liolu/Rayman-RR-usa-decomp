#include "m2c.h"

void func_0205497c(void *arg0, void *arg1, void *arg2) {
    s32 temp_ip;
    s32 temp_ip_2;
    s32 temp_r3;

    temp_ip = M2C_FIELD(arg2, s32 *, 0);
    if (temp_ip < (s32) M2C_FIELD(arg0, s32 *, 0)) {
        M2C_FIELD(arg0, s32 *, 0) = temp_ip;
    } else if (temp_ip > (s32) M2C_FIELD(arg1, s32 *, 0)) {
        M2C_FIELD(arg1, s32 *, 0) = temp_ip;
    }
    temp_ip_2 = M2C_FIELD(arg2, s32 *, 4);
    if (temp_ip_2 < (s32) M2C_FIELD(arg0, s32 *, 4)) {
        M2C_FIELD(arg0, s32 *, 4) = temp_ip_2;
    } else if (temp_ip_2 > (s32) M2C_FIELD(arg1, s32 *, 4)) {
        M2C_FIELD(arg1, s32 *, 4) = temp_ip_2;
    }
    temp_r3 = M2C_FIELD(arg2, s32 *, 8);
    if (temp_r3 < (s32) M2C_FIELD(arg0, s32 *, 8)) {
        M2C_FIELD(arg0, s32 *, 8) = temp_r3;
        return;
    }
    if (temp_r3 > (s32) M2C_FIELD(arg1, s32 *, 8)) {
        M2C_FIELD(arg1, s32 *, 8) = temp_r3;
    }
}
