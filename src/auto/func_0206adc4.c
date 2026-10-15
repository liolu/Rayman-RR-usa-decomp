#include "engine.h"
#include "m2c.h"

void func_02057154(s32);
s32 func_0205d0cc(void *);
s32 func_0205d0d4(void);
void func_0206b35c(s32);
void func_0207ac90(s32);

M2C_UNK func_02057038(s32, M2C_UNK, M2C_UNK *, M2C_UNK, s32);
M2C_UNK func_0206b358(s32);
M2C_UNK func_0207ad9c(M2C_UNK, u8, M2C_UNK, M2C_UNK, s32, s32, s32, s32);
extern u8 data_020bd280;
extern M2C_UNK data_020bd358;

void func_0206adc4(s32 arg0) {
    if (arg0 == 0) {
        func_0207ac90(0);
        func_0207ad9c(0x30, data_020bd280, 0, 0xE, -1, 0xFF, 0xFF, 0);
    }
    if (M2C_FIELD(arg0, s32 *, 4) == 0) {
        func_0207ac90(0);
        func_0207ad9c(0x30, data_020bd280, 0, 0xF, -1, 0xFF, 0xFF, 0);
    }
    func_0206b358(M2C_FIELD(arg0, s32 *, 4));
    if (arg0 == M2C_FIELD((void *) func_0205d0cc((void *) func_0205d0d4()), s32 *, 4)) {
        func_0206b35c(M2C_FIELD(arg0, s32 *, 4));
    }
    func_02057038(M2C_FIELD(arg0, s32 *, 4), 2, &data_020bd358, 0x97, 0);
    func_02057154(M2C_FIELD(arg0, s32 *, 4));
    M2C_FIELD(arg0, s32 *, 4) = 0;
}
