/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK PXI_Init();
s32 PXI_IsCallbackReady(M2C_UNK, M2C_UNK);
M2C_UNK PXI_SetFifoRecvCallback(M2C_UNK, M2C_UNK *);
extern u16 data_020c0fc0;
extern M2C_UNK tpState;
extern M2C_UNK func_0200f4a4;

void TP_Init(void) {
    if (data_020c0fc0 != 0) {
        return;
    }
    data_020c0fc0 = 1;
    PXI_Init();
    M2C_FIELD(&tpState, s16 *, 0x32) = 0;
    M2C_FIELD(&tpState, s16 *, 0x36) = 0;
    M2C_FIELD(&tpState, s16 *, 0xC)  = 0;
    M2C_FIELD(&tpState, s32 *, 0)    = 0;
    M2C_FIELD(&tpState, s32 *, 0x10) = 0;
    M2C_FIELD(&tpState, s16 *, 0x30) = 0;
    M2C_FIELD(&tpState, s16 *, 0x34) = 0;
    do {

    } while (PXI_IsCallbackReady(6, 1) == 0);
    PXI_SetFifoRecvCallback(6, &func_0200f4a4);
}
