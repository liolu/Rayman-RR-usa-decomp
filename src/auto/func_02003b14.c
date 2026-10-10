#include "m2c.h"

extern u32 data_020bbebc;

s32 func_02003b14(void) {
    u32 temp_r0;

    temp_r0       = (data_020bbebc * 0x41C64E6D) + 0x3039;
    data_020bbebc = temp_r0;
    return 0x7FFF & (temp_r0 >> 0x10);
}
