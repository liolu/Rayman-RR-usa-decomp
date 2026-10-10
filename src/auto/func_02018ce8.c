/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_02018d08();                                /* extern */
s32 func_02018d48();                                /* extern */

s32 func_02018ce8(void) {
    s32 temp_r4;

    temp_r4 = func_02018d48();
    return (0x100 - temp_r4) - func_02018d08();
}
