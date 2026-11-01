#include "m2c.h"

s32 func_02084450(M2C_UNK, s32, s32 *);             /* extern */
void func_02048e44(s32);                            /* extern */
s32 func_02048e74(void);                            /* extern */
void func_02048e64(s32);                            /* extern */

s32 func_020a4eb0(M2C_UNK arg0, s32 arg1) {
    s32 sp0[4];
    s32 r4;
    s32 r5;
    s32 r0v;

    r4 = func_02084450(arg0, arg1, &sp0[0]);
    r5 = (s8) (s16) sp0[0];
    if (r5 < 0x40) {
        func_02048e44(r5);
    } else {
        r0v = func_02048e74();
        switch (r5 - 0x40) {
            case 0:
                r0v = (s8) (r0v & ~1);
                break;
            case 1:
                r0v = (s8) (r0v | 1);
                break;
            case 2:
                r0v = (s8) (r0v & ~2);
                break;
            case 3:
                r0v = (s8) (r0v | 2);
                break;
            default:
                break;
        }
        func_02048e64(r0v);
    }
    return r4;
}
