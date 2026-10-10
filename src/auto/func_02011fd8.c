/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_0200e96c(s32);                         /* extern */
M2C_UNK func_0200eb98();                            /* extern */
s32 func_020102ac();                                /* extern */
M2C_UNK func_02011f04(M2C_UNK, M2C_UNK);            /* extern */

void func_02011fd8(void) {
    s32 var_r0;
    s32 var_r5;

    var_r5 = 1;
    if (((s32) (*(u16 *) 0x027FFFA8 & 0x8000) >> 0xF) != 0) {
        var_r0 = func_020102ac();
        if (var_r0 == 4) {
            do {
                func_0200e96c(0xA3A47);
                var_r0 = func_020102ac();
            } while (var_r0 == 4);
        }
        if (var_r0 == 0) {
            var_r5 = 0;
        }
    }
    if (var_r5 != 0) {
        func_02011f04(1, 1);
    }
    func_0200eb98();
}
