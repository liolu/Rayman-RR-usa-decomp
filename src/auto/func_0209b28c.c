#include "m2c.h"

extern u8 *func_02084248(u8 *arg0);

u8 *func_0209b28c(s32 arg0, u8 *arg1) {
    u16 count;
    s32 diff;
    s32 temp;
    u8 *ret;

    count = *(u16 *) (arg1 - 4);
    if (count != 0) {
        return arg1 - 8 + (count << 3);
    }
    ret                 = func_02084248(arg1);
    diff                = (s32) ret - (s32) (arg1 - 8);
    temp                = diff >> 2;
    temp                = diff + ((u32) temp >> 29);
    *(u16 *) (arg1 - 4) = (u16) (temp >> 3);
    return ret;
}
