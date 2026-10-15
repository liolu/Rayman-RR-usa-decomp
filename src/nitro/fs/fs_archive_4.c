/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_02012ab0(void *, s32);
M2C_UNK FSi_ReleaseCommand(void *, s32);
M2C_UNK FSi_ExecuteAsyncCommand();
s32 func_02013bc4(s32);

s32 FSi_ExecuteSyncCommand(void *arg0) {
    FSi_ReleaseCommand(arg0, func_02012ab0(arg0, M2C_FIELD(arg0, s32 *, 0x10)));
    if (func_02013bc4(M2C_FIELD(arg0, s32 *, 8)) != 0) {
        FSi_ExecuteAsyncCommand();
    }
    if (M2C_FIELD(arg0, s32 *, 0x14) == 0) {
        return 1;
    }
    return 0;
}
