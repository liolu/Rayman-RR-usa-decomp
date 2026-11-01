/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern void CARDi_SetRomOp(u32, u32);

u32 CARDi_ReadRomIDCore(void) {
    u32 v;

    CARDi_SetRomOp(0xB8000000, 0);
    v                            = *(s32 *) 0x027FFE60;
    v                            = (v & ~0x07000000) | 0xA7000000;
    *(volatile s32 *) 0x040001A4 = v & ~0x1FFF;
    while (!(*(volatile s32 *) 0x040001A4 & 0x800000)) {
    }
    return *(s32 *) 0x04100010;
}
