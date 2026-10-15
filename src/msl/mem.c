#include "m2c.h"

M2C_UNK __fill_mem();

s32 memset(s32 arg0) {
    __fill_mem();
    return arg0;
}

u8 *memchr(u8 *arg0, s32 arg1, s32 arg2) {
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
