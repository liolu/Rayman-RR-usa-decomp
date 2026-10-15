#include "m2c.h"

M2C_UNK func_0200e978();
extern M2C_UNK data_020bcbb8;

void func_0205318c(void) {
    if (M2C_FIELD(&data_020bcbb8, s32 *, 0x3C) == M2C_FIELD(&data_020bcbb8, s32 *, 0x40)) {
        return;
    }
    do {
        func_0200e978();
    } while (M2C_FIELD(&data_020bcbb8, s32 *, 0x3C) != M2C_FIELD(&data_020bcbb8, s32 *, 0x40));
}
