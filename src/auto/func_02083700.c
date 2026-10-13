#include "m2c.h"

s32 func_02083700(s32 *arg0, s32 arg1, s32 *arg2) {
    s32 var_r1;

    if (*(s32 *) ((s8 *) arg2 + 0xC) != 8) {
        var_r1 = *arg2 << 0xC;
    } else {
        var_r1 = *arg2;
    }
    *arg0 = var_r1;
    return 1;
}
