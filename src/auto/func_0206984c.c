#include "m2c.h"

extern u32 data_020dd834;

s32 func_0206984c(s32 arg0) {
    u8 *p;

    p = (u8 *) data_020dd834;
    while (p != 0) {
        if (*(s32 *) (p + 0xC) == arg0) {
            return *(s32 *) (p + 0x10);
        }
        p = *(u8 **) p;
    }
    return 0;
}
