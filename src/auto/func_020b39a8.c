/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_020b3958();                           /* extern */
M2C_UNK func_020b5884();                /* extern */

s32 func_020b39a8(s32 *arg0, s32 arg1) {
    func_020b5884(((s8 *) arg0 + 4), 0xC);
    *arg0 = arg1;
    if (func_020b3958(arg0) != 0) {
        return 1;
    }
    return 0;
}
