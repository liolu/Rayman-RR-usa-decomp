/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_01ff8214(s32 i, s32 a, s32 b, s32 c) {
    s32 *p;

    p                                    = (s32 *) (0x40000b0 + i * 12);
    *(s32 *) (0x4000000 + 0xb0 + i * 12) = a;
    p[1]                                 = b;
    p[2]                                 = c;
}
