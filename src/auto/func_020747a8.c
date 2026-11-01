#include "m2c.h"

extern u32 data_020dc19c[];
extern s32 func_02008998(void *arg0, void *arg1);

void *func_020747a8(void *arg0) {
    u8 *p;

    p = (u8 *) ((u32 *) data_020dc19c)[0xc84 / 4];
    while (p != 0) {
        if (func_02008998(arg0, p + 0x20) == 0) {
            return p;
        }
        p = *(u8 **) (p + 0xC);
    }
    return 0;
}
