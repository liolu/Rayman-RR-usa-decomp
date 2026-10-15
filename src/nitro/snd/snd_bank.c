/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK DC_StoreRange(void *, M2C_UNK);
M2C_UNK SNDi_UnlockMutex();
M2C_UNK SNDi_LockMutex();

void SND_DestroyWaveArc(void *arg0) {
    void *temp_r6;
    void *var_r0;

    SNDi_LockMutex();
    var_r0 = M2C_FIELD(arg0, void **, 0x18);
    if (var_r0 != NULL) {
        do {
            temp_r6                       = M2C_FIELD(var_r0, void **, 4);
            M2C_FIELD(var_r0, s32 *, 0)   = 0;
            M2C_FIELD(var_r0, void **, 4) = NULL;
            DC_StoreRange(var_r0, 8);
            var_r0 = temp_r6;
        } while (temp_r6 != NULL);
    }
    SNDi_UnlockMutex();
}
