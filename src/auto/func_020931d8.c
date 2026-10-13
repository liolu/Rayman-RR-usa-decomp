#include "m2c.h"

extern M2C_UNK data_020bf7b4;

u8 func_020931d8(s32 arg0) {
    return *((u8 *) ((s8 *) &data_020bf7b4 + (arg0 * 8)));
}
