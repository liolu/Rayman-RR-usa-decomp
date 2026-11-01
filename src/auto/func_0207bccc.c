#include "m2c.h"

s32 func_0207cf3c(M2C_UNK, M2C_UNK, void *, s32);   /* extern */
extern s16 data_020dfe60;
extern s16 data_020dfe70;

void func_0207bccc(void *arg0, M2C_UNK arg1, M2C_UNK arg2, s32 arg3, s16 *arg4) {
    s16 temp_r0_2;
    void *temp_r0;

    data_020dfe70 += 1;
    if (func_0207cf3c(arg1, arg2, arg0, arg0 + 0xC) != 0) {
        temp_r0 = M2C_FIELD(arg0, void **, 0x18);
        if (temp_r0 != NULL) {
            func_0207bccc(M2C_FIELD(temp_r0, void **, 0), arg1, arg2, arg3, arg4);
            func_0207bccc(M2C_FIELD(M2C_FIELD(arg0, void **, 0x18), void **, 4), arg1, arg2, arg3, arg4);
            func_0207bccc(M2C_FIELD(M2C_FIELD(arg0, void **, 0x18), void **, 8), arg1, arg2, arg3, arg4);
            func_0207bccc(M2C_FIELD(M2C_FIELD(arg0, void **, 0x18), void **, 0xC), arg1, arg2, arg3, arg4);
            func_0207bccc(M2C_FIELD(M2C_FIELD(arg0, void **, 0x18), void **, 0x10), arg1, arg2, arg3, arg4);
            func_0207bccc(M2C_FIELD(M2C_FIELD(arg0, void **, 0x18), void **, 0x14), arg1, arg2, arg3, arg4);
            func_0207bccc(M2C_FIELD(M2C_FIELD(arg0, void **, 0x18), void **, 0x18), arg1, arg2, arg3, arg4);
            func_0207bccc(M2C_FIELD(M2C_FIELD(arg0, void **, 0x18), void **, 0x1C), arg1, arg2, arg3, arg4);
        } else if (M2C_FIELD(arg0, s32 *, 0x1C) != 0) {
            temp_r0_2 = *arg4;
            if ((s32) temp_r0_2 < 0x64) {
                *(s32 *) (arg3 + (temp_r0_2 * 4)) = (s32) arg0;
                *arg4 += 1;
                data_020dfe60 = data_020dfe70;
            }
        }
    }
    data_020dfe70 -= 1;
}