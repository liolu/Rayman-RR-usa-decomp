#include "m2c.h"

/* 0x24-byte record; the 8-entry table starting at data_020e54f0 is also
   walked by func_020a69dc (stride 0x24, count 8). */
typedef struct {
    u8 pad00[0x18];
    s32 field_18;
    s32 field_1C;
    u8 pad20[0x4];
} T;

extern T data_020e54f0[];

void func_020a6988(void) {
    s32 i;

    for (i = 0; i < 8; i++) {
        data_020e54f0[i].field_1C = 0;
        data_020e54f0[i].field_18 = 0;
    }
}
