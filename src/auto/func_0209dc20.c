#include "m2c.h"

s32 func_02084450(M2C_UNK, s32, s32 *);             /* extern */
s32 func_02084f6c(s32, s32);                        /* extern */
void func_020841dc(s32);                            /* extern */
extern s32 data_020e4c60;

s32 func_0209dc20(M2C_UNK arg0, s32 arg1) {
    s32 sp0[4];
    s32 r3;
    s32 r4;
    s32 r5;
    s32 r0v;

    r3  = ((s32 *) arg0)[1];
    r3  = ((s32 *) r3)[3];
    r4  = ((s32 *) r3)[0];
    r5  = func_02084450(arg0, arg1, &sp0[0]);
    r0v = ((s32 *) r4)[2];
    r4  = ((u8 *) r4)[0x10];
    if (((s32 *) r0v)[2] != sp0[0]) {
        if (func_02084f6c(r0v, sp0[0]) != 0) {
            if (r4 == 0) {
                data_020e4c60 = 0;
                func_020841dc(8);
            }
        }
    }
    return r5;
}
