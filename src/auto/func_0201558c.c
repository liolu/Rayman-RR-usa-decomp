#include "m2c.h"

M2C_UNK disableBankForX_(M2C_UNK *);
extern M2C_UNK data_020c200e;

void func_0201558c(void) {
    *(s32 *) 0x04000000 &= ~0x40000000;
    disableBankForX_(&data_020c200e);
}
