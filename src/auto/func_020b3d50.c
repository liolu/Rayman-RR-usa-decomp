/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02013ec8(void *, s32, M2C_UNK);        /* extern */
M2C_UNK func_02013f34(void *, M2C_UNK, M2C_UNK);    /* extern */

void func_020b3d50(void *arg0, M2C_UNK arg1, M2C_UNK arg2, s32 arg3) {
    func_02013ec8(arg0 + 0x5C, M2C_FIELD(arg0, s32 *, 0xA4) + arg3, 0);
    func_02013f34(arg0 + 0x5C, arg1, arg2);
}
