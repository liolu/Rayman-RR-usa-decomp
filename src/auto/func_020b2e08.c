/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_020b2cd0();                            /* extern */

void func_020b2e08(void *arg0) {
    if (((s32) (M2C_FIELD(arg0, s32 *, 0x24) << 0x1F) >> 0x1F) == 0) {
        return;
    }
    func_020b2cd0(arg0);
}
