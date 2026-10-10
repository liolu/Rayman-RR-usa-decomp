#include "m2c.h"

M2C_UNK func_0201512c(s32, s32);                    /* extern */
extern M2C_UNK data_020bcbb8;

void func_0205332c(s32 arg0) {
    if (arg0 != 0) {
        func_0201512c(0x0400006C, M2C_FIELD(&data_020bcbb8, s32 *, 0x3C));
        func_0201512c(0x0400106C, M2C_FIELD(&data_020bcbb8, s32 *, 0x54));
        return;
    }
    func_0201512c(0x0400006C, -0x10);
    func_0201512c(0x0400106C, -0x10);
}
