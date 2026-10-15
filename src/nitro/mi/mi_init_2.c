/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK MI_SetWramBank(M2C_UNK);
M2C_UNK MI_StopDma(M2C_UNK);

void MI_Init(void) {
    MI_SetWramBank(3);
    MI_StopDma(0);
}
