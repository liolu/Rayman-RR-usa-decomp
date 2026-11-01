#include "m2c.h"

u8 func_02066fa0(void *arg0);

u8 func_02066fb4(void *arg0) {
    s32 r = arg0 != 0 ? (s32) ((void **) ((void **) arg0)[1])[5] : 0;
    u32 x;

    if (r == 0) {
        x = 1;
    } else {
        x = func_02066fa0((void *) r);
    }
    return x & 0xff;
}
