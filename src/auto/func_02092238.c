#include "m2c.h"

s32 func_02058b40();                                /* extern */

s32 func_02092238(s32 arg0, s32 arg1, s32 *arg2) {
    if (func_02058b40() != 0) {
        *arg2 = 1;
    } else {
        *arg2 = 0;
    }
    return arg1;
}
