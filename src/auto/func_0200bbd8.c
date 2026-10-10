#include "m2c.h"

void func_0200bbd8(s32 arg0) {
    *(s32 *) 0x04001000 = (*(s32 *) 0x04001000 & ~0x1F00) | (arg0 << 8);
}
