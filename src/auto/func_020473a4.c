#include "m2c.h"

extern M2C_UNK data_020d00f4;

s32 func_020473a4(s32 arg0) {
    if ((arg0 < 0) || (arg0 >= 3)) {
        return 0;
    }
    return (arg0 * 0xA8) + (s32) &data_020d00f4 + 4;
}
