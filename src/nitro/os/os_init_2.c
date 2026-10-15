/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK OS_SetIrqStackChecker();
M2C_UNK OS_InitIrqTable();
M2C_UNK OS_InitLock();
M2C_UNK OS_InitThread();
M2C_UNK OS_InitArenaEx();
M2C_UNK OS_InitArena();
M2C_UNK OS_InitException();
M2C_UNK OS_InitVAlarm();
M2C_UNK OS_InitReset();
M2C_UNK OSi_InitVramExclusive();
M2C_UNK func_02010890();
M2C_UNK CARD_Init();
M2C_UNK CTRDG_Init();
M2C_UNK MI_Init();
M2C_UNK PXI_Init();

void OS_Init(void) {
    OS_InitArena();
    PXI_Init();
    OS_InitLock();
    OS_InitArenaEx();
    OS_InitIrqTable();
    OS_SetIrqStackChecker();
    OS_InitException();
    MI_Init();
    OS_InitVAlarm();
    OSi_InitVramExclusive();
    OS_InitThread();
    OS_InitReset();
    CTRDG_Init();
    CARD_Init();
    func_02010890();
}
