#include "m2c.h"

M2C_UNK func_0202d964(s32, s32 *, s32 *, s32 *);
s32 *func_020695c0();
M2C_UNK func_0207ac90(M2C_UNK);
M2C_UNK func_0207ad9c(M2C_UNK, u8, M2C_UNK, M2C_UNK, s32, s32, s32, s32);
extern u8 data_020bd280;

void func_020694bc(void *arg0) {
    s32 c[3];
    s32 b[3];
    s32 a[3];

    if (arg0 == NULL) {
        func_0207ac90(0);
        func_0207ad9c(0x30, data_020bd280, 0, 0xE, -1, 0xFF, 0xFF, 0);
    }
    if (M2C_FIELD(arg0, s32 **, 0x24) != NULL) {
        func_0207ac90(0);
        func_0207ad9c(0x30, data_020bd280, 0, 0xD, -1, 0xFF, 0xFF, 0);
    }
    M2C_FIELD(arg0, s32 **, 0x24) = func_020695c0();
    b[0]                          = -0x1000;
    b[1]                          = 0;
    b[2]                          = 0;
    a[0]                          = 0;
    a[1]                          = 0;
    a[2]                          = 0x1000;
    if (M2C_FIELD(arg0, s32 *, 0x10) != 0) {
        c[0] = 0;
        c[1] = -0x1000;
        c[2] = 0;
    } else {
        c[0] = 0;
        c[1] = 0x1000;
        c[2] = 0;
    }
    func_0202d964(*M2C_FIELD(arg0, s32 **, 0x24), c, b, a);
}
