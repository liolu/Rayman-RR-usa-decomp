#include "m2c.h"

M2C_UNK disableBankForX_(M2C_UNK *);
extern M2C_UNK data_020c2018;

void func_020154b0(void) {
    *(s32 *) 0x04001000 &= ~0x80000000;
    disableBankForX_(&data_020c2018);
}
