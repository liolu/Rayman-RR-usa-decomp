/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_0200d578();
M2C_UNK OS_LockMutex();
M2C_UNK NNS_SndStrmStop();
M2C_UNK func_020b4cc8();
extern s32 sPrepareThread;
extern M2C_UNK data_020ea528;

void func_020b4d34(void *arg0) {
    OS_LockMutex(&data_020ea528);
    if (sPrepareThread != 0) {
        OS_LockMutex(sPrepareThread + 0x4C8);
    }
    if (((s32) (M2C_FIELD(arg0, s32 *, 0x110) << 0x1E) >> 0x1F) != 0) {
        NNS_SndStrmStop(arg0);
    }
    if (((s32) (M2C_FIELD(arg0, s32 *, 0x110) << 0x1F) >> 0x1F) != 0) {
        M2C_FIELD(arg0, M2C_UNK(**)(void *), 0x16C)(arg0);
    }
    func_020b4cc8(arg0);
    func_0200d578(&data_020ea528);
    if (sPrepareThread == 0) {
        return;
    }
    func_0200d578(sPrepareThread + 0x4C8);
}
