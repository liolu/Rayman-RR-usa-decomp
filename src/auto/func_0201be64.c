#include "m2c.h"

extern s16 data_020c3e8c;
extern M2C_UNK data_020c3f10;

s32 func_0201be64(s32 arg0) {
    if (arg0 < (s32) data_020c3e8c) {
        return *((M2C_UNK *) ((s8 *) &data_020c3f10 + (arg0 * 4)));
    }
    return 0;
}
