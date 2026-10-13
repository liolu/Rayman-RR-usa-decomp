#include "m2c.h"

extern M2C_UNK data_020bedb0;

u8 func_02093100(s32 arg0) {
    return *((u8 *) ((s8 *) &data_020bedb0 + (arg0 * 8)));
}
