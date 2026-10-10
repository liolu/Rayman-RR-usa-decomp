#include "m2c.h"

M2C_UNK func_0202fd1c(M2C_UNK, u8, s32);            /* extern */
extern u8 data_020becb8;
extern M2C_UNK data_020cf6cc;

void func_020828c8(void) {
    func_0202fd1c(1, data_020becb8, *((M2C_UNK *) ((s8 *) &data_020cf6cc + (data_020becb8 * 4))));
}
