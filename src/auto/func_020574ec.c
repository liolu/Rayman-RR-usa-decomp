#include "m2c.h"

M2C_UNK func_02057d34();
extern M2C_UNK data_020dc098;

void func_020574ec(void) {
    func_02057d34();
    if (M2C_FIELD(&data_020dc098, s32 *, 0) == 0) {
        return;
    }
    M2C_FIELD(&data_020dc098, s32 *, 0x14) = 0;
    M2C_FIELD(&data_020dc098, s32 *, 0x10) = 0;
    M2C_FIELD(&data_020dc098, s32 *, 0x18) = 0;
}
