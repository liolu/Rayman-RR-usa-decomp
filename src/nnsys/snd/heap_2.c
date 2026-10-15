/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK InitHeapSection();
M2C_UNK NNS_FndAppendListObject(void *, s32);
s32 func_020b5a24(s32, M2C_UNK, M2C_UNK);

s32 NewSection(s32 *arg0) {
    s32 temp_r0;

    temp_r0 = func_020b5a24(*arg0, 0x14, 4);
    if (temp_r0 == 0) {
        return 0;
    }
    InitHeapSection();
    NNS_FndAppendListObject(((s8 *) arg0 + 4), temp_r0);
    return 1;
}
