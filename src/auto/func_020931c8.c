#include "m2c.h"

extern M2C_UNK data_020bf740;

s32 func_020931c8(s32 arg0) {
    return *((M2C_UNK *) ((s8 *) &data_020bf740 + (arg0 * 4)));
}
