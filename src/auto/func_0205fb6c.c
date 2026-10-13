#include "m2c.h"

extern s32 data_020dcfc0[];

void func_0205fb6c(s32 arg0) {
    s32 i;

    for (i = 0; i < 0x100; i++) {
        data_020dcfc0[i] = arg0;
    }
}
