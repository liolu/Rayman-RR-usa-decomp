/* compiler: 1.2/sp2p3 */
#include "m2c.h"

u32 func_02017ad8(s32 arg0) {
    return (u32) (M2C_FIELD(((((arg0 * 3) + 2) * 4) + 0x04000000), s32 *, 0xB0) & 0x80000000) >> 0x1F;
}
