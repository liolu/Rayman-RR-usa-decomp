/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02018078(s32);                         /* extern */

s32 func_020b3cec(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_02018078(M2C_FIELD(arg0, s32 *, 0xA4) + arg3);
    return arg2;
}
