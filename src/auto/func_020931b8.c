#include "m2c.h"

extern M2C_UNK data_020bf6f4;

s32 func_020931b8(s32 arg0) {
    return *((M2C_UNK *) ((s8 *) &data_020bf6f4 + (arg0 * 4)));
}
