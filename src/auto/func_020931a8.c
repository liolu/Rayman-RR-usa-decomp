#include "m2c.h"

extern M2C_UNK data_020bf124;

s32 func_020931a8(s32 arg0) {
    return *((M2C_UNK *) ((s8 *) &data_020bf124 + (arg0 * 8)));
}
