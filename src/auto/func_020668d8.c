#include "m2c.h"

s32 func_0206697c();
M2C_UNK func_020671d0();
M2C_UNK func_0207ac90(M2C_UNK);
M2C_UNK func_0207ad9c(M2C_UNK, u8, M2C_UNK, M2C_UNK, s32, s32, s32, s32);
extern u8 data_020bd280;

void func_020668d8(void *arg0) {
    if (arg0 == NULL) {
        func_0207ac90(0);
        func_0207ad9c(0x30, data_020bd280, 0, 0xE, -1, 0xFF, 0xFF, 0);
    }
    if (M2C_FIELD(arg0, s32 *, 0x14) != 0) {
        func_0207ac90(0);
        func_0207ad9c(0x30, data_020bd280, 0, 0xD, -1, 0xFF, 0xFF, 0);
    }
    M2C_FIELD(arg0, s32 *, 0x14) = func_0206697c();
    func_020671d0();
}
