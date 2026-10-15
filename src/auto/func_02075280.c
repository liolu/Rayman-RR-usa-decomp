#include "m2c.h"

M2C_UNK func_0200e978();
M2C_UNK func_02074f14(s32);
M2C_UNK func_02075040();
extern M2C_UNK data_020de6a0;

s32 func_02075280(void) {
    func_02074f14(M2C_FIELD(&data_020de6a0, u8 *, 0x1E) + 1);
    func_0200e978();
    func_02075040();
    return 1;
}
