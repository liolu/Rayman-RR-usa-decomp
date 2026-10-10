#include "m2c.h"

extern M2C_UNK data_020dbb38;

s32 func_02052900(s32 arg0, s32 arg1) {
    M2C_FIELD(*((M2C_UNK *) ((s8 *) &data_020dbb38 + (arg0 * 4))), s32 *, 0x6C) = arg1;
    return 1;
}
