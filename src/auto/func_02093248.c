#include "m2c.h"

extern M2C_UNK data_020c03ec;

u16 func_02093248(s32 arg0) {
    return *((u16 *) ((s8 *) &data_020c03ec + (arg0 * 2)));
}
