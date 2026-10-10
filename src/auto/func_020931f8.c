#include "m2c.h"

extern M2C_UNK data_020c02c4;

s32 func_020931f8(s32 arg0) {
    return *((M2C_UNK *) ((s8 *) &data_020c02c4 + (arg0 * 0xC)));
}
