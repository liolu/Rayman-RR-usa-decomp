#include "m2c.h"
extern u8 data_020bc0ec[];
void func_02021c8c(u32 *p) {
    if (p[2] == 0) {
        u32 *s = (u32 *) p[1];
        ((void (*)(u32))(*(void **) (data_020bc0ec + s[1] * 0x18)))(p[0]);
    }
    if ((u32 *) p[6] != 0) {
        *(u32 *) p[6] = 0;
        p[6]          = 0;
    }
    p[2] = 1;
}
