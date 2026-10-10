#include "m2c.h"

void func_02022444(s32 arg0, s32 *arg1, s32 *arg2) {
    if (arg1 != NULL) {
        *arg1 = (arg0 >> 0x10) << 8;
    }
    if (arg2 != NULL) {
        *arg2 = (s32) (arg0 << 0x10) >> 8;
    }
}
