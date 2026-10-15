/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 PM_GetLCDPower(void) {
    if (*(u16 *) 0x04000304 & 1) {
        return 1;
    }
    return 0;
}
