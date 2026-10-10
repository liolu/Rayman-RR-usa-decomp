#include "m2c.h"

M2C_UNK func_0204aa90(M2C_UNK *);                   /* extern */
s32 func_0205274c(M2C_UNK, M2C_UNK);                /* extern */
M2C_UNK func_0206002c();                            /* extern */
M2C_UNK func_020728b0(M2C_UNK);                     /* extern */
M2C_UNK func_0207ac90(M2C_UNK);                     /* extern */
M2C_UNK func_0207ad9c(M2C_UNK, u8, M2C_UNK, M2C_UNK, s32, s32, s32, s32); /* extern */
extern u8 data_020bd280;
extern M2C_UNK data_020dc264;

void func_0205b82c(void) {
    func_0204aa90(&data_020dc264);
    func_020728b0(1);
    func_0206002c();
    if (func_0205274c(0, 0) != 0) {
        return;
    }
    func_0207ac90(0);
    func_0207ad9c(0x30, data_020bd280, 0, 0x2B, -1, 0xFF, 0xFF, 0);
}
