/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK SND_StopTimer(s32, M2C_UNK, s32, M2C_UNK);
s32 SND_GetCurrentCommandTag();
M2C_UNK SND_WaitForCommandProc(s32);
M2C_UNK SND_FlushCommand(M2C_UNK);

void func_020b2b80(void *arg0) {
    s32 temp_r4;

    if (((s32) (M2C_FIELD(arg0, s32 *, 0x24) << 0x1E) >> 0x1F) == 0) {
        return;
    }
    SND_StopTimer(M2C_FIELD(arg0, s32 *, 0x44), 0, 1 << M2C_FIELD(arg0, s32 *, 0x40), 0);
    temp_r4 = SND_GetCurrentCommandTag();
    SND_FlushCommand(1);
    SND_WaitForCommandProc(temp_r4);
}
