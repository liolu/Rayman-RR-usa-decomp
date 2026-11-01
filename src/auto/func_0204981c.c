#include "m2c.h"

void func_0200eb98();

extern u8 data_020d26dc[];
extern void *data_020d26e4[];

void func_0204981c(u8 *arg0) {
    u16 idx;
    u16 base;
    s32 t;
    u32 c1;
    u32 c2;

    base = *(u16 *) (arg0 + 0x4);
    t    = *(u16 *) (arg0 + 0xE) & 0xF;
    if (t & 1) {
        idx = base + *(u16 *) (data_020d26dc + 0);
    } else if (t & 2) {
        idx = base + *(u16 *) (data_020d26dc + 2);
    } else if (t & 4) {
        idx = base + *(u16 *) (data_020d26dc + 4);
    } else {
        func_0200eb98();
    }
    if (idx >= 0x618) {
        func_0200eb98();
    }
    c1 = arg0[0xC];
    if (c1 < 3 || arg0[0xD] < 3 || c1 > 0xA || arg0[0xD] > 0xA) {
        func_0200eb98();
    }
    ((void **) data_020d26e4)[idx] = arg0;
}
