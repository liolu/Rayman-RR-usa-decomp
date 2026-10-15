/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_0200c4f8();
M2C_UNK OS_RestoreIrq(s32);

void CTRDGi_UnlockByProcessor(s32 arg0, void *arg1) {
    if (M2C_FIELD(arg1, s32 *, 0) == 0) {
        func_0200c4f8(arg0);
    }
    OS_RestoreIrq(M2C_FIELD(arg1, s32 *, 4));
}
