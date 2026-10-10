/* compiler: 1.2/sp2p3 */
#include "m2c.h"
#include "engine.h"

fx32 func_02014718(void) {
    while (*(volatile u16 *)0x040002B0 & 0x8000) {}
    return (*(volatile u32 *)0x040002B4 + 0x200) >> 10;
}
