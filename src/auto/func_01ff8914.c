#include "m2c.h"

s32 func_01ff8914(s32 a, s32 b) {
    *(volatile u16 *) 0x4000280 = 1;
    *(volatile s32 *) 0x4000290 = 0;
    *(volatile s32 *) 0x4000294 = a;
    *(volatile s32 *) 0x4000298 = b;
    *(volatile s32 *) 0x400029c = 0;
    while (*(volatile u16 *) 0x4000280 & 0x8000) {
    }
    return (s32) ((*(volatile s64 *) 0x40002a0 + 0x800) >> 12);
}
