#include "m2c.h"

s32 func_0200a3b8();                                /* extern */
M2C_UNK func_0200a4bc(s32, s32);                    /* extern */
s32 func_02035e90();                                /* extern */
void *func_0203ec64(s32);                           /* extern */
s32 func_020413b4(M2C_UNK, M2C_UNK);                /* extern */
void *func_0204141c(M2C_UNK, M2C_UNK, s32, M2C_UNK); /* extern */
M2C_UNK func_02041da8(void *);                      /* extern */

s32 func_02040464(M2C_UNK arg0) {
    s32 temp_r0;
    s32 temp_r0_2;
    void *temp_r4;
    void *temp_r5;

    temp_r0_2 = func_020413b4(0x25, arg0);
    if (temp_r0_2 != 0) {
        return temp_r0_2;
    }
    temp_r0 = func_02035e90();
    temp_r5 = func_0204141c(0x25, arg0, temp_r0, 8);
    temp_r4 = func_0203ec64(temp_r0);
    func_0200a4bc(0x45800000, M2C_FIELD(temp_r5, s32 *, 0));
    M2C_FIELD(temp_r4, s32 *, 0) = func_0200a3b8();
    func_0200a4bc(0x45800000, M2C_FIELD(temp_r5, s32 *, 4));
    M2C_FIELD(temp_r4, s32 *, 4) = func_0200a3b8();
    func_02041da8(temp_r5);
    return temp_r0;
}
