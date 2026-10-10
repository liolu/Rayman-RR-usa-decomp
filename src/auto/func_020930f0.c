#include "m2c.h"

extern M2C_UNK data_020bed70;

s32 func_020930f0(s32 arg0) {
    return *((M2C_UNK *) ((s8 *) &data_020bed70 + (arg0 * 0x10)));
}
