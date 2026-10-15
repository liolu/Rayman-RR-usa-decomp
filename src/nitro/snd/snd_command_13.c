/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 IsCommandAvailable();
s32 AllocCommand();
M2C_UNK RequestCommandProc();
s32 SND_CountWaitingCommand(s32);
M2C_UNK SND_FlushCommand(M2C_UNK);
s32 SND_RecvCommandReply(M2C_UNK);

s32 SND_AllocCommand(s32 arg0) {
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r0_3;
    s32 temp_r0_4;

    if (IsCommandAvailable() == 0) {
        return 0;
    }
    temp_r0_3 = AllocCommand();
    if (temp_r0_3 != 0) {
        return temp_r0_3;
    }
    temp_r0_4 = arg0 & 1;
    if (temp_r0_4 == 0) {
        return 0;
    }
    if (SND_CountWaitingCommand(temp_r0_4) > 0) {
        do {

        } while (SND_RecvCommandReply(0) != 0);
        temp_r0_2 = AllocCommand();
        if (temp_r0_2 != 0) {
            return temp_r0_2;
        }
        goto block_12;
    }
    SND_FlushCommand(1);
block_12:
    RequestCommandProc();
    do {
        SND_RecvCommandReply(1);
        temp_r0 = AllocCommand();
    } while (temp_r0 == 0);
    return temp_r0;
}
