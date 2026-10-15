#include "m2c.h"

M2C_UNK func_0207ac90(M2C_UNK);
M2C_UNK func_0207ad9c(M2C_UNK, u8, M2C_UNK, M2C_UNK, s32, s32, s32, s32);
extern u8 data_020bd280;
extern s8 data_020dbfd2;
extern s32 data_020dc19c;

void func_02058200(s32 arg0) {
    if (data_020dbfd2 == 1) {
        return;
    }
    if (data_020dc19c == 0) {
        func_0207ad9c(0x30, data_020bd280, 0, 0x31, -1, 0xFF, 0xFF, 0);
    }
    if ((arg0 == 0) || (arg0 >= 0xA)) {
        func_0207ac90(0);
        func_0207ad9c(0x30, data_020bd280, 0, 0x13, -1, 0xFF, 0xFF, 0);
    }
    data_020dc19c = arg0;
}
