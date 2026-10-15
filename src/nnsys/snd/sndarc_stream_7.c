/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 OS_DisableIrq();
M2C_UNK OS_RestoreIrq(s32);
void *NNS_FndGetNextListObject(M2C_UNK, M2C_UNK);
M2C_UNK NNS_FndRemoveListObject(M2C_UNK, void *);

void *ReadCommandBuffer(M2C_UNK arg0) {
    s32 temp_r5;
    void *temp_r0;
    void *temp_r1;

    temp_r5 = OS_DisableIrq();
    temp_r0 = NNS_FndGetNextListObject(arg0, 0);
    if (temp_r0 != NULL) {
        NNS_FndRemoveListObject(arg0, temp_r0);
        temp_r1                          = M2C_FIELD(temp_r0, void **, 8);
        M2C_FIELD(temp_r1, s32 *, 0x11C) = (s32) (M2C_FIELD(temp_r1, s32 *, 0x11C) - 1);
    }
    OS_RestoreIrq(temp_r5);
    return temp_r0;
}
