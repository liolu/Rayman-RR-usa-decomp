#include "m2c.h"

extern M2C_UNK data_020bf128;

u8 func_02093198(s32 arg0) {
    return *((u8 *) ((s8 *) &data_020bf128 + (arg0 * 8)));
}
