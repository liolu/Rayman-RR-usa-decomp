/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK CpuSet(s32 *, M2C_UNK *, s32);              /* extern */
s16 OS_GetLockID();                                 /* extern */
extern M2C_UNK CTRDGi_Work;

void CTRDGi_InitCommon(void) {
    s32 sp0;

    sp0 = 0;
    CpuSet(&sp0, &CTRDGi_Work, 0x05000001);
    M2C_FIELD(&CTRDGi_Work, s16 *, 2) = OS_GetLockID();
}
