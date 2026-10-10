/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_020b3064();                            /* extern */

void func_020b4c40(void *arg0) {
    s32 temp_r1;

    temp_r1 = M2C_FIELD(arg0, s32 *, 0x120);
    if (temp_r1 == 0) {
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x120) = (s32) (temp_r1 - 1);
    if (M2C_FIELD(arg0, s32 *, 0x120) != 0) {
        return;
    }
    func_020b3064(arg0);
}
