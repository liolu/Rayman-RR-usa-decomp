#include "m2c.h"

M2C_UNK func_02009848(s32, s32);                    /* extern */
s32 func_0200a3b8();                                /* extern */
s32 func_0200a42c(s16);                             /* extern */
s32 func_0200a4bc(s32, s32);                        /* extern */
s32 func_0200a6a8(M2C_UNK, s32);                    /* extern */

s32 func_02078504(void *arg0, M2C_UNK arg1, M2C_UNK arg2, s32 *arg3, s32 *arg4) {
    s32 temp_r4;
    s32 temp_r4_2;

    temp_r4 = func_0200a42c(M2C_FIELD(arg0, s16 *, 0x48));
    func_02009848(temp_r4, func_0200a4bc(M2C_FIELD(arg0, s32 *, 0x58), func_0200a6a8(arg1, M2C_FIELD(arg0, s32 *, 0x40))));
    *arg3     = func_0200a3b8();
    temp_r4_2 = func_0200a42c(M2C_FIELD(arg0, s16 *, 0x4A));
    func_02009848(temp_r4_2, func_0200a4bc(M2C_FIELD(arg0, s32 *, 0x5C), func_0200a6a8(arg2, M2C_FIELD(arg0, s32 *, 0x44))));
    *arg4 = func_0200a3b8();
    return 1;
}
