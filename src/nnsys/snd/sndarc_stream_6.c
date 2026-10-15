/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 OS_DisableIrq();
M2C_UNK OS_RestoreIrq(s32);
M2C_UNK NNS_FndAppendListObject(M2C_UNK *, M2C_UNK);
extern M2C_UNK sFreeCommandList;

void FreeCommandBuffer(M2C_UNK arg0) {
    s32 temp_r4;

    temp_r4 = OS_DisableIrq();
    NNS_FndAppendListObject(&sFreeCommandList, arg0);
    OS_RestoreIrq(temp_r4);
}
