/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_020b50dc(void *arg0) {
    s32 *temp_r2;

    temp_r2 = M2C_FIELD(arg0, s32 **, 0x14C);
    if (temp_r2 != NULL) {
        *temp_r2                       = 0;
        M2C_FIELD(arg0, s32 **, 0x14C) = NULL;
    }
    M2C_FIELD(arg0, s32 *, 0x110) = (s32) (M2C_FIELD(arg0, s32 *, 0x110) & ~1);
    M2C_FIELD(arg0, s32 *, 0x110) = (s32) (M2C_FIELD(arg0, s32 *, 0x110) & ~4);
    M2C_FIELD(arg0, s32 *, 0x110) = (s32) (M2C_FIELD(arg0, s32 *, 0x110) & ~2);
}
