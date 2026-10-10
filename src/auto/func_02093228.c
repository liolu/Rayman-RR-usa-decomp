#include "m2c.h"

extern M2C_UNK data_020c02c0;

s32 func_02093228(s32 arg0) {
    return *((M2C_UNK *) ((s8 *) &data_020c02c0 + (arg0 * 0xC)));
}
