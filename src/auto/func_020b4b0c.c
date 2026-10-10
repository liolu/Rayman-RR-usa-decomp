/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_0200e908();                                /* extern */
M2C_UNK func_0200e91c(s32);                         /* extern */
void *func_020b576c(M2C_UNK, M2C_UNK);              /* extern */
M2C_UNK func_020b5784(M2C_UNK, void *);             /* extern */

void *func_020b4b0c(M2C_UNK arg0) {
    s32 temp_r5;
    void *temp_r0;
    void *temp_r1;

    temp_r5 = func_0200e908();
    temp_r0 = func_020b576c(arg0, 0);
    if (temp_r0 != NULL) {
        func_020b5784(arg0, temp_r0);
        temp_r1                          = M2C_FIELD(temp_r0, void **, 8);
        M2C_FIELD(temp_r1, s32 *, 0x11C) = (s32) (M2C_FIELD(temp_r1, s32 *, 0x11C) - 1);
    }
    func_0200e91c(temp_r5);
    return temp_r0;
}
