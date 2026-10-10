#include "m2c.h"

s32 func_02031e50(s32 arg0) {
    s32 temp_r1;
    s32 temp_r1_2;

    if (arg0 >= 0x1000) {
        return arg0;
    }
    if (arg0 <= 0) {
        return 0;
    }
    temp_r1_2 = 0x1000 - arg0;
    temp_r1   = (s32) (((s32) (temp_r1_2 * temp_r1_2) >> 8) + 1) >> 1;
    return 0x1000 - ((s32) (((s32) (temp_r1 * temp_r1) >> 0x11) + 1) >> 1);
}
