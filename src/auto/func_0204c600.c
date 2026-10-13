#include "m2c.h"

s16 *func_0205488c(M2C_UNK);                        /* extern */

void func_0204c600(s16 **arg0) {
    *arg0                         = func_0205488c(0x24);
    (*arg0)[0]                    = -1;
    (*arg0)[1]                    = 0x7FFF;
    (*arg0)[2]                    = 0x7FFF;
    M2C_FIELD(*arg0, s32 *, 8)    = 0;
    M2C_FIELD(*arg0, s32 *, 0xC)  = 0;
    M2C_FIELD(*arg0, s32 *, 0x10) = 0;
    M2C_FIELD(*arg0, s32 *, 0x14) = 0;
    M2C_FIELD(*arg0, s32 *, 0x18) = 0;
    M2C_FIELD(*arg0, s32 *, 0x1C) = 0;
    M2C_FIELD(*arg0, s32 *, 0x20) = 0;
}
