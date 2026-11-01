#include "m2c.h"

s32 func_02084450(M2C_UNK, s32, s32 *);             /* extern */
void func_02048ea0(s32, s32, s32);                  /* extern */

s32 func_020a4cfc(M2C_UNK arg0, s32 arg1) {
    s32 sp0[4];
    s32 r4;
    s32 r5;
    s32 r6;
    s32 c1;
    s32 s2;
    s32 third;

    r4    = ((s32 *) arg1)[-2];
    c1    = func_02084450(arg0, arg1, &sp0[0]);
    r5    = (s16) sp0[0];
    r6    = func_02084450(arg0, c1, &sp0[0]);
    s2    = (s16) sp0[0];
    third = 0;
    if (r4 == 0x1E) {
        r6    = func_02084450(arg0, r6, &sp0[0]);
        third = (s16) sp0[0];
    }
    func_02048ea0(r5, s2, third);
    return r6;
}
