#include "m2c.h"

s32 func_020526ac(M2C_UNK, M2C_UNK, M2C_UNK *);

void func_02048d84(M2C_UNK arg0, M2C_UNK arg1, s32 *arg2) {
    u8 buf[0x6c];

    if (func_020526ac(arg0, arg1, buf) != 0) {
        *arg2 = **(s32 **) (buf + 0x64);
    }
}
