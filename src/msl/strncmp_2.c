#include "engine.h"
#include "m2c.h"

s32 strncmp(const u8 *s1, const u8 *s2, s32 n) {
    u8 c1;
    u8 c2;

    for (; n != 0; n--) {
        c2 = *s2++;
        c1 = *s1++;
        if (c1 != c2) {
            return c1 - c2;
        }
        if (c1 == 0) {
            break;
        }
    }
    return 0;
}
