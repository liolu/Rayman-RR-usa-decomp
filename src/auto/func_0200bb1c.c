#include "m2c.h"

void func_0200bb1c(s32 arg0) {
    *(u16 *) 0x04000060 = (*(u16 *) 0x04000060 & 0xFFFFCFFD) | (arg0 * 2);
}
