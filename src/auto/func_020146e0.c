/* compiler: 1.2/sp2p3 */
#include "engine.h"
#include "m2c.h"

void func_020146e0(fx32 num, fx32 den) {
    *(volatile u16 *) 0x04000280 = 1;
    *(volatile u64 *) 0x04000290 = (u64) (u32) num << 32;
    *(volatile u64 *) 0x04000298 = (u32) den;
}
