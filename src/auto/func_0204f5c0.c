#include "m2c.h"

s32 func_020548e0(M2C_UNK);
extern M2C_UNK data_020dba6c;
extern s32 data_020dbadc;

void func_0204f5c0(void) {
    M2C_FIELD(&data_020dba6c, s32 *, 0x2C) = 0;
    data_020dbadc                          = func_020548e0(0x4B0);
}
