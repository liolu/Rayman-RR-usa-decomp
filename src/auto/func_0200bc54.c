#include "m2c.h"

void func_0200bc54(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    *(u16 *) 0x04001008 =
        (*(u16 *) 0x04001008 & 0x43) | (arg0 << 0xE) | (arg1 << 7) | (arg2 << 8) | (arg3 * 4) | (arg4 << 0xD);
}
