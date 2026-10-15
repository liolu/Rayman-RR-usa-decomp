/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK PXI_Init();
M2C_UNK PXI_SetFifoRecvCallback(M2C_UNK, M2C_UNK *);
extern s32 CARD_UserCallback;
extern M2C_UNK CARDi_PulledOutCallback;

void CARD_InitPulledOutCallback(void) {
    PXI_Init();
    PXI_SetFifoRecvCallback(0xE, &CARDi_PulledOutCallback);
    CARD_UserCallback = 0;
}
