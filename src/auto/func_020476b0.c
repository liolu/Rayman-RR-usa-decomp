#include "m2c.h"

extern M2C_UNK data_020d00d8;

s32 func_020476b0(void) {
    if (M2C_FIELD(&data_020d00d8, s32 *, 0x18) != 0) {
        return 1;
    }
    return 0;
}
