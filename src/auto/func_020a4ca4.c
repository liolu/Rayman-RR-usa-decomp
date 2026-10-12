#include "m2c.h"

void *func_02084450(M2C_UNK, void *, M2C_UNK *);    /* extern */
M2C_UNK func_02088a04(M2C_UNK *);                   /* extern */

void *func_020a4ca4(M2C_UNK arg0, void *arg1) {
    u8 sp0[16];
    s32 temp_r2;
    void *temp_r4;

    temp_r2 = M2C_FIELD(arg1, s32 *, -8);
    switch (temp_r2) {                              /* irregular */
        case 0x4E:
            temp_r4 = func_02084450(arg0, arg1, sp0);
            func_02088a04(sp0);
            return temp_r4;
        case 0x4F:
            return arg1;
        default:
            return arg1;
    }
}
