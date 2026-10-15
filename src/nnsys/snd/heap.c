/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 SND_GetCurrentCommandTag();
M2C_UNK SND_WaitForCommandProc(s32);
M2C_UNK SND_FlushCommand(M2C_UNK);

void EraseSync(void) {
    s32 temp_r4;

    temp_r4 = SND_GetCurrentCommandTag();
    SND_FlushCommand(1);
    SND_WaitForCommandProc(temp_r4);
}
