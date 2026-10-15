/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK OSi_ExitThread_ArgSpecified(s32, M2C_UNK);
M2C_UNK OS_DisableIrq();
extern M2C_UNK OSi_ThreadInfo;

void func_0200ce24(void) {
    OS_DisableIrq();
    OSi_ExitThread_ArgSpecified(M2C_FIELD(&OSi_ThreadInfo, s32 *, 4), 0);
}
