#include "m2c.h"

extern M2C_UNK data_020bf064;

s32 func_02093150(s32 arg0) {
    return *((M2C_UNK *) ((s8 *) &data_020bf064 + (arg0 * 0xC)));
}
