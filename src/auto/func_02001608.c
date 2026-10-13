#include "m2c.h"

u8 *func_02001608(u8 *arg0, s32 arg1, s32 arg2) {
    u8 c = arg1;

    while (arg2 != 0) {
        u8 b = *arg0++;
        if (b == c) {
            return arg0 - 1;
        }
        arg2--;
    }
    return 0;
}
