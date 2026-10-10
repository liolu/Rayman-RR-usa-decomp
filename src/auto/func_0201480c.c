/* compiler: 1.2/sp2p3 */
#include "m2c.h"
#include "engine.h"

u64 func_0201480c(void) {
    while (*(volatile u16 *)0x04000280 & 0x8000) {}
    return *(volatile u64 *)0x040002A0;
}
