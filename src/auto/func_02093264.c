#include "m2c.h"

extern M2C_UNK data_020c03f4;

s32 func_02093264(s32 arg0) {
    return *((M2C_UNK *) ((s8 *) &data_020c03f4 + (arg0 * 4)));
}
