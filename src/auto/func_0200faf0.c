/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK MicWaitBusy();
s32 func_0200fb34(M2C_UNK, M2C_UNK *, M2C_UNK);
extern M2C_UNK micWork;
extern M2C_UNK MicGetResultCallback;

s32 func_0200faf0(M2C_UNK arg0) {
    s32 temp_r0;

    temp_r0                         = func_0200fb34(arg0, &MicGetResultCallback, 0);
    M2C_FIELD(&micWork, s32 *, 0xC) = temp_r0;
    if (temp_r0 == 0) {
        MicWaitBusy();
    }
    return M2C_FIELD(&micWork, s32 *, 0xC);
}
