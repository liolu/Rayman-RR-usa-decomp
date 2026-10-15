/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK PM_DeletePostSleepCallback(void *);
M2C_UNK PM_DeletePreSleepCallback(void *);
M2C_UNK SND_StopTimer(s32, M2C_UNK, s32, M2C_UNK);
s32 SND_GetCurrentCommandTag();
M2C_UNK SND_WaitForCommandProc(s32);
M2C_UNK SND_FlushCommand(M2C_UNK);
M2C_UNK ShutdownStrm(void *);

void ForceStopStrm(void *arg0) {
    s32 temp_r5;

    if (((s32) (M2C_FIELD(arg0, s32 *, 0x24) << 0x1E) >> 0x1F) != 0) {
        SND_StopTimer(M2C_FIELD(arg0, s32 *, 0x44), 0, 1 << M2C_FIELD(arg0, s32 *, 0x40), 0);
        PM_DeletePreSleepCallback(arg0 + 8);
        PM_DeletePostSleepCallback(arg0 + 0x14);
        M2C_FIELD(arg0, s32 *, 0x24) = (s32) (M2C_FIELD(arg0, s32 *, 0x24) & ~2);
        temp_r5                      = SND_GetCurrentCommandTag();
        SND_FlushCommand(1);
        SND_WaitForCommandProc(temp_r5);
    }
    ShutdownStrm(arg0);
}
