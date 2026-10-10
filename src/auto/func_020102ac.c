/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_020102e8(M2C_UNK *, s32 *);                /* extern */
M2C_UNK func_020109b0();                            /* extern */
extern M2C_UNK func_020109a8;

s32 func_020102ac(void) {
    s32 sp0;
    s32 temp_r0;

    temp_r0 = func_020102e8(&func_020109a8, &sp0);
    if (temp_r0 != 0) {
        return temp_r0;
    }
    func_020109b0();
    return sp0;
}
