#include "m2c.h"

s32 func_0201d730(s32);                             /* extern */
s32 *func_020414ac(M2C_UNK, u16, M2C_UNK);          /* extern */
M2C_UNK func_02041da8(s32 *);                       /* extern */

void func_02087b24(void *arg0, s32 *arg1) {
    s32 *temp_r0;

    temp_r0 = func_020414ac(0x63, M2C_FIELD(arg0, u16 *, 2), 4);
    *arg1   = func_0201d730(*temp_r0);
    func_02041da8(temp_r0);
}
