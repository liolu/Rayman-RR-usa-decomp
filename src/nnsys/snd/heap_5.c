/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 NNS_FndGetPrevListObject(void *, M2C_UNK);
M2C_UNK NNS_FndAppendListObject(s32, void *);
void *func_020b5a24(s32, s32, M2C_UNK);

void *NNS_SndHeapAlloc(s32 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 temp_r0_2;
    void *temp_r0;

    temp_r0 = func_020b5a24(*arg0, ((arg1 + 0x1F) & ~0x1F) + 0x20, 0x20);
    if (temp_r0 == NULL) {
        return NULL;
    }
    temp_r0_2                       = NNS_FndGetPrevListObject(((s8 *) arg0 + 4), 0);
    M2C_FIELD(temp_r0, s32 *, 8)    = arg1;
    M2C_FIELD(temp_r0, s32 *, 0xC)  = arg2;
    M2C_FIELD(temp_r0, s32 *, 0x10) = arg3;
    M2C_FIELD(temp_r0, s32 *, 0x14) = arg4;
    NNS_FndAppendListObject(temp_r0_2, temp_r0);
    return temp_r0 + 0x20;
}
