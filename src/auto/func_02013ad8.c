/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_02012ab0(void *, s32);                     /* extern */
M2C_UNK func_02012c2c(void *, s32);                 /* extern */
M2C_UNK func_02013b20();                            /* extern */
s32 func_02013bc4(s32);                             /* extern */

s32 func_02013ad8(void *arg0) {
    func_02012c2c(arg0, func_02012ab0(arg0, M2C_FIELD(arg0, s32 *, 0x10)));
    if (func_02013bc4(M2C_FIELD(arg0, s32 *, 8)) != 0) {
        func_02013b20();
    }
    if (M2C_FIELD(arg0, s32 *, 0x14) == 0) {
        return 1;
    }
    return 0;
}
