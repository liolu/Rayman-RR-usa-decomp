/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK CTRDG_Enable(M2C_UNK);
M2C_UNK CTRDGi_InitCommon();
M2C_UNK CTRDGi_InitModuleInfo();
M2C_UNK CTRDGi_InitTaskThread(M2C_UNK *);
M2C_UNK PXI_Init();
s32 PXI_IsCallbackReady(M2C_UNK, M2C_UNK);
M2C_UNK PXI_SetFifoRecvCallback(M2C_UNK, M2C_UNK *);
extern s32 data_020c1978;
extern s32 ctrdg_already_pullout;
extern s32 CTRDG_UserCallback;
extern M2C_UNK data_020c1a60;
extern M2C_UNK CTRDGi_CallbackForSetPhi;
extern M2C_UNK CTRDGi_PulledOutCallback;
extern M2C_UNK CTRDGi_CallbackForInitModuleInfo;

void CTRDG_Init(void) {
    if (data_020c1978 != 0) {
        return;
    }
    data_020c1978 = 1;
    CTRDGi_InitCommon();
    ctrdg_already_pullout = 0;
    PXI_Init();
    do {

    } while (PXI_IsCallbackReady(0xD, 1) == 0);
    PXI_SetFifoRecvCallback(0xD, &CTRDGi_CallbackForInitModuleInfo);
    CTRDGi_InitModuleInfo();
    PXI_SetFifoRecvCallback(0xD, NULL);
    PXI_SetFifoRecvCallback(0xD, &CTRDGi_PulledOutCallback);
    CTRDG_UserCallback = 0;
    CTRDGi_InitTaskThread(&data_020c1a60);
    PXI_SetFifoRecvCallback(0x11, &CTRDGi_CallbackForSetPhi);
    CTRDG_Enable(0);
}
