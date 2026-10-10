#include "m2c.h"

extern M2C_UNK data_020bf068;

s32 func_02093168(s32 arg0) {
    return *((M2C_UNK *) ((s8 *) &data_020bf068 + (arg0 * 0xC)));
}
