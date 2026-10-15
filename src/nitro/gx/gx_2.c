/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern s16 sIsDispOn;
extern s16 sDispMode;

void GX_DispOff(void) {
    s32 temp_ip;

    temp_ip             = *(s32 *) 0x04000000;
    sIsDispOn       = 0;
    sDispMode       = (s16) ((u32) (temp_ip & 0x30000) >> 0x10);
    *(s32 *) 0x04000000 = temp_ip & ~0x30000;
}
