/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_0200d578();
M2C_UNK OS_LockMutex();
M2C_UNK NNS_SndStrmFreeChannel();
M2C_UNK func_020b4d34();
extern s32 sPrepareThread;
extern M2C_UNK data_020ea528;

void DisposeCallback(s32 arg0, s32 arg1, void *arg2) {
    if (arg0 != M2C_FIELD(arg2, s32 *, 0x12C)) {
        return;
    }
    OS_LockMutex(&data_020ea528);
    if (sPrepareThread != 0) {
        OS_LockMutex(sPrepareThread + 0x4C8);
    }
    func_020b4d34(arg2);
    M2C_FIELD(arg2, s32 *, 0x12C) = 0;
    M2C_FIELD(arg2, s32 *, 0x130) = 0;
    M2C_FIELD(arg2, s8 *, 0x124)  = 0;
    if ((s32) M2C_FIELD(arg2, s32 *, 0x120) > 0) {
        NNS_SndStrmFreeChannel(arg2);
        M2C_FIELD(arg2, s32 *, 0x120) = 0;
    }
    func_0200d578(&data_020ea528);
    if (sPrepareThread == 0) {
        return;
    }
    func_0200d578(sPrepareThread + 0x4C8);
}
