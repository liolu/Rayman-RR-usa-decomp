#include "m2c.h"

extern M2C_UNK data_020bf06c;

s32 func_02093180(s32 arg0) {
    return *((M2C_UNK *) ((s8 *) &data_020bf06c + (arg0 * 0xC)));
}
