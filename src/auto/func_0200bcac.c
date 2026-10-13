#include "m2c.h"

void func_0200bcac(s32 arg0) {
    if (arg0 != 0) {
        *(volatile u16 *) 0x04000304 |= 0x200;
        return;
    }
    *(volatile u16 *) 0x04000304 &= ~0x200;
}
