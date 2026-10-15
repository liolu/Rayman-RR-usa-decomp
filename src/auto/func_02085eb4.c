#include "m2c.h"

M2C_UNK *func_0208699c(s32, M2C_UNK);

s32 func_02085eb4(void *arg0, s32 arg1, M2C_UNK arg2) {
    M2C_UNK *temp_r0;
    M2C_UNK *temp_r2;
    M2C_UNK *temp_r2_2;
    void *temp_r2_3;
    void *temp_r2_4;
    void *temp_r2_5;

    if ((arg0 != NULL) && (arg1 != 0)) {
        temp_r0 = func_0208699c(arg1, arg2);
        temp_r2 = M2C_FIELD(temp_r0, M2C_UNK **, 0);
        if (temp_r2 != NULL) {
            M2C_FIELD(temp_r2, M2C_UNK **, 4) = (M2C_UNK *) M2C_FIELD(temp_r0, M2C_UNK **, 4);
        }
        temp_r2_2 = M2C_FIELD(temp_r0, M2C_UNK **, 4);
        if (temp_r2_2 != NULL) {
            *temp_r2_2 = M2C_FIELD(temp_r0, M2C_UNK **, 0);
        }
        temp_r2_3 = M2C_FIELD(temp_r0, void **, 8);
        if (temp_r2_3 != NULL) {
            M2C_FIELD(temp_r2_3, s32 *, 8) = (s32) (M2C_FIELD(temp_r2_3, s32 *, 8) - 1);
            temp_r2_4                      = M2C_FIELD(temp_r0, void **, 8);
            if (M2C_FIELD(temp_r2_4, M2C_UNK **, 0) == temp_r0) {
                M2C_FIELD(temp_r2_4, M2C_UNK **, 0) = (M2C_UNK *) M2C_FIELD(temp_r0, M2C_UNK **, 0);
            }
            temp_r2_5 = M2C_FIELD(temp_r0, void **, 8);
            if (M2C_FIELD(temp_r2_5, M2C_UNK **, 4) == temp_r0) {
                M2C_FIELD(temp_r2_5, M2C_UNK **, 4) = (M2C_UNK *) M2C_FIELD(temp_r0, M2C_UNK **, 4);
            }
        }
        M2C_FIELD(temp_r0, M2C_UNK **, 0) = NULL;
        M2C_FIELD(temp_r0, M2C_UNK **, 4) = NULL;
        M2C_FIELD(temp_r0, void **, 8)    = NULL;
        M2C_FIELD(temp_r0, M2C_UNK **, 0) = NULL;
        M2C_FIELD(temp_r0, M2C_UNK **, 4) = (M2C_UNK *) M2C_FIELD(arg0, M2C_UNK **, 4);
        M2C_FIELD(temp_r0, void **, 8)    = arg0;
        if (M2C_FIELD(arg0, M2C_UNK **, 0) == NULL) {
            M2C_FIELD(arg0, M2C_UNK **, 0) = temp_r0;
        } else {
            *M2C_FIELD(arg0, M2C_UNK **, 4) = temp_r0;
        }
        M2C_FIELD(arg0, M2C_UNK **, 4) = temp_r0;
        M2C_FIELD(arg0, s32 *, 8)      = (s32) (M2C_FIELD(arg0, s32 *, 8) + 1);
        return 0;
    }
    return -1;
}
