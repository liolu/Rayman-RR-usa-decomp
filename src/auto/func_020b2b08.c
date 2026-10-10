/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_0200e908();                                /* extern */
M2C_UNK func_0200e91c(s32);                         /* extern */
s32 func_020189c4(s32, M2C_UNK, s32, M2C_UNK);      /* extern */
M2C_UNK func_020b2bd4(void *, M2C_UNK);             /* extern */

s32 func_020b2b08(void *arg0) {
    s32 temp_r0;
    s32 temp_r6;

    temp_r0 = (s32) (M2C_FIELD(arg0, s32 *, 0x24) << 0x1E) >> 0x1F;
    if (temp_r0 == 0) {
        return temp_r0;
    }
    if (M2C_FIELD(arg0, s32 *, 0x38) != 0) {
        do {
            temp_r6 = func_0200e908();
            func_020b2bd4(arg0, 1);
            func_0200e91c(temp_r6);
        } while (M2C_FIELD(arg0, s32 *, 0x38) != 0);
    }
    return func_020189c4(M2C_FIELD(arg0, s32 *, 0x44), 0, 1 << M2C_FIELD(arg0, s32 *, 0x40), 0);
}
