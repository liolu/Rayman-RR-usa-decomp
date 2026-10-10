/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_02018b78();                                /* extern */
s32 func_02018bc0();                                /* extern */
M2C_UNK func_02018c18();                            /* extern */
s32 func_02018ce8(s32);                             /* extern */
M2C_UNK func_02018eac(M2C_UNK);                     /* extern */
s32 func_02019150(M2C_UNK);                         /* extern */

s32 func_020190b4(s32 arg0) {
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r0_3;
    s32 temp_r0_4;

    if (func_02018b78() == 0) {
        return 0;
    }
    temp_r0_3 = func_02018bc0();
    if (temp_r0_3 != 0) {
        return temp_r0_3;
    }
    temp_r0_4 = arg0 & 1;
    if (temp_r0_4 == 0) {
        return 0;
    }
    if (func_02018ce8(temp_r0_4) > 0) {
        do {

        } while (func_02019150(0) != 0);
        temp_r0_2 = func_02018bc0();
        if (temp_r0_2 != 0) {
            return temp_r0_2;
        }
        goto block_12;
    }
    func_02018eac(1);
block_12:
    func_02018c18();
    do {
        func_02019150(1);
        temp_r0 = func_02018bc0();
    } while (temp_r0 == 0);
    return temp_r0;
}
