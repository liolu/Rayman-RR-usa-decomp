#include "m2c.h"

void func_0202a144(void *arg0) {
    void *temp_r2;
    void *temp_r2_2;
    void *temp_r2_3;
    void *temp_r2_4;
    void *temp_r2_5;

    temp_r2 = M2C_FIELD(arg0, void **, 4);
    if (temp_r2 != NULL) {
        M2C_FIELD(temp_r2, void **, 8) = (void *) M2C_FIELD(arg0, void **, 8);
    }
    temp_r2_2 = M2C_FIELD(arg0, void **, 8);
    if (temp_r2_2 != NULL) {
        M2C_FIELD(temp_r2_2, void **, 4) = (void *) M2C_FIELD(arg0, void **, 4);
    }
    temp_r2_3 = M2C_FIELD(arg0, void **, 0xC);
    if (temp_r2_3 != NULL) {
        M2C_FIELD(temp_r2_3, s32 *, 8) = (s32) (M2C_FIELD(temp_r2_3, s32 *, 8) - 1);
        temp_r2_4                      = M2C_FIELD(arg0, void **, 0xC);
        if (M2C_FIELD(temp_r2_4, void **, 0) == arg0) {
            M2C_FIELD(temp_r2_4, void **, 0) = (void *) M2C_FIELD(arg0, void **, 4);
        }
        temp_r2_5 = M2C_FIELD(arg0, void **, 0xC);
        if (M2C_FIELD(temp_r2_5, void **, 4) == arg0) {
            M2C_FIELD(temp_r2_5, void **, 4) = (void *) M2C_FIELD(arg0, void **, 8);
        }
    }
    M2C_FIELD(arg0, void **, 4)   = NULL;
    M2C_FIELD(arg0, void **, 8)   = NULL;
    M2C_FIELD(arg0, void **, 0xC) = NULL;
}
