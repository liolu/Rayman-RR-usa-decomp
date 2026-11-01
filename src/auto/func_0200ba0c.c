#include "m2c.h"

void func_0200ba0c(s32 arg0) {
    if (arg0 != 0) {
        *(volatile u16 *) 0x04000060 = (*(volatile u16 *) 0x04000060 & ~0x3000) | 0x8;
    } else {
        *(volatile u16 *) 0x04000060 = *(volatile u16 *) 0x04000060 & 0xcff7;
    }
}
