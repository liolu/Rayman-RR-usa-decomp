#include "m2c.h"

M2C_UNK func_020155c4(M2C_UNK *);                   /* extern */
extern M2C_UNK data_020c200e;

void func_0201558c(void) {
    *(s32 *) 0x04000000 &= ~0x40000000;
    func_020155c4(&data_020c200e);
}
