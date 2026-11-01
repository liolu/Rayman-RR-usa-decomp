#include "m2c.h"

s64 func_02014bec(s32 x);

s32 func_01ff8ae8(s32 a) {
    if (a == 0 || a == 0x3244 || a == 0x6488) {
        return 0;
    }
    if (a == 0x1922) {
        return 0x100000;
    }
    return (s32) (func_02014bec(a) >> 12);
}
