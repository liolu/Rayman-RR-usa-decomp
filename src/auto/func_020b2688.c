/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_020188a8(s32, M2C_UNK);                /* extern */
extern s32 data_020e9278;

s32 func_020b2688(s32 arg0) {
    if (arg0 == 0) {
        return 1;
    }
    if (arg0 & data_020e9278) {
        return 0;
    }
    func_020188a8(arg0, 0);
    data_020e9278 |= arg0;
    return 1;
}
