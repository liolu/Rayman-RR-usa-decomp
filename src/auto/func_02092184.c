#include "m2c.h"

extern s32 data_020bc570;
extern s8 data_020bca4d;
extern u8 data_020dba7e;

s32 func_02092184(s32 arg0, s32 arg1, s32 *arg2) {
    if ((data_020bc570 != 0x12C) && (data_020bca4d != 1)) {
        goto block_5;
    }
    if (data_020bca4d != 2) {
        *arg2 = (s32) data_020dba7e;
    } else {
    block_5:
        *arg2 = 1;
    }
    return arg1;
}
