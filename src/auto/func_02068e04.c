#include "m2c.h"

s32 func_02068e04(s32 *arg0, s32 *arg1) {
    s32 *q;

    if (arg0 == 0 || arg0 == (s32 *) -1) {
        return 0;
    }
    q = *(s32 **) ((u8 *) arg0[1] + 0x28);
    if (q == 0) {
        return 0;
    }
    arg1[0] = q[0];
    arg1[1] = q[1];
    return 1;
}
