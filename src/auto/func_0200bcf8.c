#include "m2c.h"

void func_0200bcf8(s32 arg0) {
    *(s32 *) 0x04000000 = (*(s32 *) 0x04000000 & ~0x1F00) | (arg0 << 8);
}
