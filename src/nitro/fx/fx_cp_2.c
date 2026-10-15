/* compiler: 1.2/sp2p3 */
#include "engine.h"
#include "m2c.h"

fx32 FX_GetSqrtResult(void) {
    while (*(volatile u16 *) 0x040002B0 & 0x8000) {
    }
    return (*(volatile u32 *) 0x040002B4 + 0x200) >> 10;
}
