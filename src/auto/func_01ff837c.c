#include "m2c.h"

extern s32 data_020cb6a8[];

s32 func_01ff837c(s32 x) {
    if (x < -0x1000) {
        x = -0x1000;
    }
    if (x > 0x1000) {
        x = 0x1000;
    }
    return data_020cb6a8[x] >> 8;
}
