/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK DC_InvalidateRange(void *, M2C_UNK);
extern void *SNDi_SharedWork;

s32 SND_GetPlayerStatus(void) {
    DC_InvalidateRange(SNDi_SharedWork + 4, 4);
    return M2C_FIELD(SNDi_SharedWork, s32 *, 4);
}
