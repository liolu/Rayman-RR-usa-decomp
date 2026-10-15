#include "m2c.h"

M2C_UNK func_02073f90(M2C_UNK, s16, M2C_UNK, s16, s32);
extern M2C_UNK data_020bd568;

void func_02073d44(void) {
    s16 temp_r1;

    func_02073f90(0x80, 0, 0x80, 0xBF, 0x7C00);
    func_02073f90(0, 0, 0, 0xBF, 0x7C00);
    func_02073f90(0xFF, 0, 0xFF, 0xBF, 0x7C00);
    func_02073f90(0, 0, 0xFF, 0, 0x7C00);
    func_02073f90(0, 0xBF, 0xFF, 0xBF, 0x7C00);
    temp_r1 = 0xBF - M2C_FIELD(&data_020bd568, s16 *, 2);
    func_02073f90(0, temp_r1, 0xFF, temp_r1, 0x7C00);
}
