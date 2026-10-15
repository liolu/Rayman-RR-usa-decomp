/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

extern s32 sReserveList;
extern s32 sReserveListEnd;

void SND_PushCommand(s32 arg0) {
    u32 temp_r0;

    temp_r0 = OS_DisableIrq();
    if (sReserveListEnd == 0) {
        sReserveListEnd = arg0;
        sReserveList = arg0;
    } else {
        *(M2C_UNK *) sReserveListEnd = arg0;
        sReserveListEnd              = arg0;
    }
    *(M2C_UNK *) arg0 = 0;
    OS_RestoreIrq(temp_r0);
}
