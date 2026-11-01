#include "m2c.h"

s32 func_020526ac(M2C_UNK, M2C_UNK, M2C_UNK *);
void func_020485e4(M2C_UNK, M2C_UNK, M2C_UNK);

void func_02048d3c(void *arg0, s32 arg1, s32 arg2) {
    u8 buf[0x6c];

    if (func_020526ac(arg0, arg1, buf) == 0) {
        return;
    }
    *(s32 *) (*(u8 **) (buf + 0x64)) = arg2;
    func_020485e4(arg0, arg1, arg2);
}
