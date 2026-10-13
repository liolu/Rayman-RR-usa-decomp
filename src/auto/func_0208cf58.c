#include "m2c.h"

void func_02066228(s32 arg0);

void func_0208cf58(s32 arg0, u16 *arg1, u16 *arg2, u16 *arg3, s32 arg4, s32 arg5, s32 arg6) {
    s32 temp_r3;

    if (arg4 == 1) {
        func_02066228(arg0);
        if (arg5 != 0) {
            *arg3 |= arg6;
        } else {
            *arg3 &= ~arg6;
        }
    } else if (arg5 != 0) {
        *arg1 |= arg6;
        *arg2 |= arg6;
        *arg3 |= arg6;
    } else {
        temp_r3 = ~arg6;
        *arg1 &= temp_r3;
        *arg2 &= temp_r3;
        *arg3 &= temp_r3;
    }
}
