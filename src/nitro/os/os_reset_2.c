/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK PXI_Init();
s32 PXI_IsCallbackReady(M2C_UNK, M2C_UNK);
M2C_UNK PXI_SetFifoRecvCallback(M2C_UNK, M2C_UNK *);
extern u16 OSi_IsInitReset;
extern M2C_UNK OSi_CommonCallback;

void OS_InitReset(void) {
    if (OSi_IsInitReset != 0) {
        return;
    }
    OSi_IsInitReset = 1;
    PXI_Init();
    do {

    } while (PXI_IsCallbackReady(0xC, 1) == 0);
    PXI_SetFifoRecvCallback(0xC, &OSi_CommonCallback);
}
