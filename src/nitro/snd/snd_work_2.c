/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK DC_InvalidateRange(s32 *, M2C_UNK);
extern s32 *SNDi_SharedWork;

s32 SNDi_GetFinishedCommandTag(void) {
    DC_InvalidateRange(SNDi_SharedWork, 4);
    return *SNDi_SharedWork;
}
