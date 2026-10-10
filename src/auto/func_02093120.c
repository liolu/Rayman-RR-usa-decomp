#include "m2c.h"

extern M2C_UNK data_020bf0ec;

s32 func_02093120(s32 arg0) {
    return *((M2C_UNK *) ((s8 *) &data_020bf0ec + (arg0 * 0xC)));
}
