#include "m2c.h"

M2C_UNK func_020424f8();
M2C_UNK func_0205cf90();
extern M2C_UNK data_020dc19c;

void func_0205cf94(void) {
    if (M2C_FIELD(&data_020dc19c, s32 *, 0x60) != 0) {
        return;
    }
    func_020424f8();
    func_0205cf90();
}
