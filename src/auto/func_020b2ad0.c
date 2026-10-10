#include "m2c.h"

extern M2C_UNK data_020e96f0;

void func_020b2ad0(s32 arg0, s32 arg1) {
    *((M2C_UNK *) ((s8 *) &data_020e96f0 + (arg0 * 0x24))) = arg1;
}
