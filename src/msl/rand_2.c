#include "m2c.h"

extern u32 random_next;

s32 rand(void) {
    u32 temp_r0;

    temp_r0       = (random_next * 0x41C64E6D) + 0x3039;
    random_next = temp_r0;
    return 0x7FFF & (temp_r0 >> 0x10);
}
