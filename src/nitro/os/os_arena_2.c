#include "m2c.h"

s32 OS_GetArenaLo(s32 arg0) {
    return ((s32 *) (0x027FF000 + 0xDA0))[arg0];
}

s32 OS_GetArenaHi(s32 arg0) {
    return ((s32 *) (0x027FF000 + 0xDC4))[arg0];
}
