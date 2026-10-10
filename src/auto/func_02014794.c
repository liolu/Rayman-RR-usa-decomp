/* compiler: 1.2/sp2p3 */
#include "m2c.h"
#include "engine.h"

void func_02014794(fx32 x) {
    *(volatile u16 *)0x04000280 = 1;
    *(volatile u64 *)0x04000290 = (u64)0x1000 << 32;
    *(volatile u64 *)0x04000298 = (u32)x;
}
