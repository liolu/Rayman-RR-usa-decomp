/* compiler: 1.2/sp2p3 */
#include "engine.h"
#include "m2c.h"

void FX_InvAsync(fx32 x) {
    *(volatile u16 *) 0x04000280 = 1;
    *(volatile u64 *) 0x04000290 = (u64) 0x1000 << 32;
    *(volatile u64 *) 0x04000298 = (u32) x;
}
