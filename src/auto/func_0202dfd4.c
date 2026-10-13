#include "m2c.h"

#define STEP(off)                                                                              \
    M2C_FIELD(arg0, s32 *, 0x40 + (off) * 4) =                                                 \
        (s32) ((((long long) arg1 * M2C_FIELD(arg0, s32 *, 0x1C + (off) * 4)) + 0x800) >> 0xC)

void func_0202dfd4(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x10) = arg1;
    M2C_FIELD(arg0, s32 *, 0x14) = arg1;
    M2C_FIELD(arg0, s32 *, 0x18) = arg1;
    STEP(0);
    STEP(1);
    STEP(2);
    STEP(3);
    STEP(4);
    STEP(5);
    STEP(6);
    STEP(7);
    STEP(8);
    M2C_FIELD(arg0, s32 *, 0) = 4;
}
