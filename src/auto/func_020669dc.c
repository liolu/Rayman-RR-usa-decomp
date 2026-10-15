#include "m2c.h"

M2C_UNK func_02057038(s32, M2C_UNK, M2C_UNK *, M2C_UNK, s32);
M2C_UNK func_02057154(s32);
M2C_UNK func_020671f8(s32);
M2C_UNK func_0207ac90(M2C_UNK);
M2C_UNK func_0207ad9c(M2C_UNK, u8, M2C_UNK, M2C_UNK, s32, s32, s32, s32);
extern u8 data_020bd280;
extern M2C_UNK data_020bd2fc;

void func_020669dc(void *arg0) {
    if (arg0 == NULL) {
        func_0207ac90(0);
        func_0207ad9c(0x30, data_020bd280, 0, 0xE, -1, 0xFF, 0xFF, 0);
    }
    if (M2C_FIELD(arg0, s32 *, 0x14) == 0) {
        func_0207ac90(0);
        func_0207ad9c(0x30, data_020bd280, 0, 0xF, -1, 0xFF, 0xFF, 0);
    }
    func_020671f8(M2C_FIELD(arg0, s32 *, 0x14));
    func_02057038(M2C_FIELD(arg0, s32 *, 0x14), 2, &data_020bd2fc, 0xB0, 0);
    func_02057154(M2C_FIELD(arg0, s32 *, 0x14));
    M2C_FIELD(arg0, s32 *, 0x14) = 0;
}
