#include "m2c.h"

s32 func_02084248(u8 *arg0) {
    u8 c;
    u8 *p;

    c = arg0[6];
    p = arg0 + 8;
    while (p[6] >= c && p[7] != 8) {
        p += 8;
    }
    return (s32) p;
}
