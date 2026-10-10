/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02018078(s32, void *, M2C_UNK);        /* extern */
s32 func_020b3450(M2C_UNK);                         /* extern */

s32 func_020b3d10(void *arg0, M2C_UNK arg1) {
    M2C_FIELD(arg0, s32 *, 0xA4) = func_020b3450(arg1);
    func_02018078(M2C_FIELD(arg0, s32 *, 0xA4), arg0 + 0xA8, 0x40);
    return 1;
}
