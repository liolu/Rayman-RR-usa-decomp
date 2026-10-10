/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02017fe4(void *, M2C_UNK, M2C_UNK);    /* extern */

void func_020138e4(void *arg0) {
    func_02017fe4(arg0, 0, 0x5C);
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
    M2C_FIELD(arg0, s32 *, 0xC)  = (s32) M2C_FIELD(arg0, s32 *, 0x10);
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
    M2C_FIELD(arg0, s32 *, 0x14) = (s32) M2C_FIELD(arg0, s32 *, 0x18);
}
