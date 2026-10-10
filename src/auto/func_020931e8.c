#include "m2c.h"

extern M2C_UNK data_020bf7b0;

s32 func_020931e8(s32 arg0) {
    return *((M2C_UNK *) ((s8 *) &data_020bf7b0 + (arg0 * 8)));
}
