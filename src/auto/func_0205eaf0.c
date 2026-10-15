#include "m2c.h"

M2C_UNK func_0205fb6c();
extern M2C_UNK data_020bd288;

void func_0205eaf0(s32 arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(&data_020bd288, s32 *, 4) = 0;
    if (arg1 >= 0) {
        M2C_FIELD(&data_020bd288, s32 *, 8) = arg1;
    }
    if (arg2 >= 0) {
        M2C_FIELD(&data_020bd288, s32 *, 0xC) = arg2;
    }
    func_0205fb6c(arg0);
}
