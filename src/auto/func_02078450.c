#include "m2c.h"

extern void func_02078134(s32, s32, s32, s32);
extern s32 data_020dfbf4[];

void func_02078450(s32 *arg0, u8 *arg1, s32 arg2) {
    s32 *p;

    *(s32 *) arg1 = arg2;
    if (arg2 != 0) {
        p               = &arg0[arg1[120]];
        p[4]            = 1;
        arg0[arg1[120]] = 1;
        func_02078134(arg0[3], arg0[4], arg0[5], 1);
        if (data_020dfbf4[2] != 0) {
            *(volatile u32 *) 0x04001000 = (*(volatile u32 *) 0x04001000 & ~0xE000) | 0x2000;
            return;
        }
        *(volatile u32 *) 0x04001000 = *(volatile u32 *) 0x04001000 & ~0xE000;
        return;
    }
    p               = &arg0[arg1[120]];
    p[4]            = 0;
    arg0[arg1[120]] = 0;
    func_02078134(arg0[3], arg0[4], arg0[5], 1);
    *(volatile u32 *) 0x04001000 = *(volatile u32 *) 0x04001000 & ~0xE000;
}
