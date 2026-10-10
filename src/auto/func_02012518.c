/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_020123e4();                                /* extern */
s32 func_02012500();                                /* extern */

s32 func_02012518(void) {
    if ((func_020123e4() != 0) && (func_02012500() == 0)) {
        return 1;
    }
    return 0;
}
