/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK OS_WakeupThreadDirect();
M2C_UNK func_0200ce50();
M2C_UNK OS_InitMutex();
M2C_UNK NNS_FndInitList();
extern M2C_UNK StrmThread;

void CreateThread(void *arg0, s32 arg1) {
    func_0200ce50(arg0, &StrmThread, arg0, arg0 + 0x4C0, 0x400, arg1);
    NNS_FndInitList(arg0 + 0x4E0, 0);
    OS_InitMutex(arg0 + 0x4C8);
    M2C_FIELD(arg0, s32 *, 0x4C4) = 0;
    M2C_FIELD(arg0, s32 *, 0x4C0) = (s32) M2C_FIELD(arg0, s32 *, 0x4C4);
    OS_WakeupThreadDirect(arg0);
}
