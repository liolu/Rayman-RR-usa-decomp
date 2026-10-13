#include "m2c.h"

extern M2C_UNK data_020d0102;

u8 func_020473d4(s32 arg0) {
    if ((arg0 < 0) || (arg0 >= 3)) {
        return 0U;
    }
    return *((u8 *) ((s8 *) &data_020d0102 + (arg0 * 0xA8)));
}
