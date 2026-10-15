#include "m2c.h"

M2C_UNK func_0202c664();
s32 func_0205488c(M2C_UNK);
extern s32 data_020c3f94;
extern s32 data_020c47d4;

void func_0201b100(void) {
    s32 temp_r4;

    temp_r4 = func_0205488c(0x64);
    func_0202c664();
    data_020c47d4 = temp_r4;
    data_020c3f94 = 1;
}
