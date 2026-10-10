#include "m2c.h"

extern M2C_UNK data_020c02c8;

s32 func_02093210(s32 arg0) {
    return *((M2C_UNK *) ((s8 *) &data_020c02c8 + (arg0 * 0xC)));
}
