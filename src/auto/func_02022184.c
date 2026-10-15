#include "m2c.h"

M2C_UNK func_0201d43c(M2C_UNK, M2C_UNK *);
M2C_UNK func_0201f9c4(s32);
M2C_UNK func_0202806c(s32);
extern M2C_UNK data_020bc224;

void func_02022184(void *arg0) {
    s32 *temp_r1;
    s32 temp_r0;

    if (M2C_FIELD(arg0, s32 *, 8) == 0) {
        temp_r0 = M2C_FIELD(M2C_FIELD(arg0, void **, 4), s32 *, 4);
        switch (temp_r0) {
            case 1:
                func_0202806c(M2C_FIELD(arg0, s32 *, 0));
                break;
            case 2:
                func_0201f9c4(M2C_FIELD(arg0, s32 *, 0));
                break;
            default:
                func_0201d43c(0x15, &data_020bc224);
                break;
        }
    }
    temp_r1 = M2C_FIELD(arg0, s32 **, 0x18);
    if (temp_r1 != NULL) {
        *temp_r1                      = 0;
        M2C_FIELD(arg0, s32 **, 0x18) = NULL;
    }
    M2C_FIELD(arg0, s32 *, 8) = 1;
}
