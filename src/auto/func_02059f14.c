#include "m2c.h"

extern s32 data_020dc19c;

s32 func_02059f14(void) {
    s32 r = 0;
    if (data_020dc19c == 2 || data_020dc19c == 6 || data_020dc19c == 8) {
        r = 1;
    }
    return r;
}
