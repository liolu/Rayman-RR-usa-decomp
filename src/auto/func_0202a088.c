#include "m2c.h"

void func_0202a088(void *arg0, void *arg1) {
    void *temp_r1;
    void *temp_r3;
    void *temp_r3_2;
    void *temp_r3_3;
    void *temp_r3_4;
    void *temp_r3_5;
    void *temp_r3_6;

    temp_r3 = M2C_FIELD(arg1, void **, 4);
    if (temp_r3 != NULL) {
        M2C_FIELD(temp_r3, void **, 8) = (void *) M2C_FIELD(arg1, void **, 8);
    }
    temp_r3_2 = M2C_FIELD(arg1, void **, 8);
    if (temp_r3_2 != NULL) {
        M2C_FIELD(temp_r3_2, void **, 4) = (void *) M2C_FIELD(arg1, void **, 4);
    }
    temp_r3_3 = M2C_FIELD(arg1, void **, 0xC);
    if (temp_r3_3 != NULL) {
        M2C_FIELD(temp_r3_3, s32 *, 8) = (s32) (M2C_FIELD(temp_r3_3, s32 *, 8) - 1);
        temp_r3_4                      = M2C_FIELD(arg1, void **, 0xC);
        if (M2C_FIELD(temp_r3_4, void **, 0) == arg1) {
            M2C_FIELD(temp_r3_4, void **, 0) = (void *) M2C_FIELD(arg1, void **, 4);
        }
        temp_r3_5 = M2C_FIELD(arg1, void **, 0xC);
        if (M2C_FIELD(temp_r3_5, void **, 4) == arg1) {
            M2C_FIELD(temp_r3_5, void **, 4) = (void *) M2C_FIELD(arg1, void **, 8);
        }
    }
    M2C_FIELD(arg1, void **, 4)   = NULL;
    M2C_FIELD(arg1, void **, 8)   = NULL;
    M2C_FIELD(arg1, void **, 0xC) = NULL;
    M2C_FIELD(arg1, void **, 8)   = NULL;
    M2C_FIELD(arg1, void **, 4)   = (void *) M2C_FIELD(M2C_FIELD(arg0, void **, 4), void **, 0);
    M2C_FIELD(arg1, void **, 0xC) = (void *) M2C_FIELD(arg0, void **, 4);
    temp_r3_6                     = M2C_FIELD(arg0, void **, 4);
    if (M2C_FIELD(temp_r3_6, void **, 4) == NULL) {
        M2C_FIELD(temp_r3_6, void **, 4) = arg1;
    } else {
        M2C_FIELD(M2C_FIELD(temp_r3_6, void **, 0), void **, 8) = arg1;
    }
    M2C_FIELD(M2C_FIELD(arg0, void **, 4), void **, 0) = arg1;
    temp_r1                                            = M2C_FIELD(arg0, void **, 4);
    M2C_FIELD(temp_r1, s32 *, 8)                       = (s32) (M2C_FIELD(temp_r1, s32 *, 8) + 1);
}
