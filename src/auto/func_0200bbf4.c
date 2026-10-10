#include "m2c.h"

void func_0200bbf4(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    *(u16 *) 0x0400100C = (*(u16 *) 0x0400100C & 0x43) | (arg0 << 0xE) | (arg1 << 7) | (arg2 << 8) | (arg3 * 4);
}
