#include "m2c.h"

void func_02078134(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 var_ip;

    var_ip = 0;
    if (arg0 != 0) {
        var_ip |= 0x10;
    }
    if (arg1 != 0) {
        var_ip |= 1;
    }
    if (arg2 != 0) {
        var_ip |= 2;
    }
    M2C_FIELD((void *) 0x04001000, s32 *, 0) = (s32) ((M2C_FIELD((void *) 0x04001000, s32 *, 0) & ~0x1F00) | (var_ip << 8));
    M2C_FIELD((void *) 0x04001000, u16 *, 8) = (u16) ((M2C_FIELD((void *) 0x04001000, u16 *, 8) & 0x43) | 0xF00);
    if (arg3 == 0) {
        return;
    }
    M2C_FIELD((void *) 0x04001000, u16 *, 0xA) = (u16) ((M2C_FIELD((void *) 0x04001000, u16 *, 0xA) & 0x43) | 0xE00);
}
