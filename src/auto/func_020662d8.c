#include "m2c.h"

void *func_0205703c(M2C_UNK);
extern M2C_UNK data_020dc19c;
extern M2C_UNK data_020dc3a8;

void func_020662d8(s32 arg0) {
    M2C_UNK *temp_r2_3;
    M2C_UNK *temp_r2_4;
    M2C_UNK *temp_r2_5;
    void *temp_r0;
    void *temp_r2;
    void *temp_r2_2;

    temp_r0                             = func_0205703c(0x10);
    M2C_FIELD(temp_r0, s32 *, 0)        = arg0;
    M2C_FIELD(temp_r0, void **, 4)      = NULL;
    M2C_FIELD(temp_r0, void **, 8)      = NULL;
    M2C_FIELD(temp_r0, M2C_UNK **, 0xC) = NULL;
    temp_r2                             = M2C_FIELD(temp_r0, void **, 4);
    if (temp_r2 != NULL) {
        M2C_FIELD(temp_r2, void **, 8) = (void *) M2C_FIELD(temp_r0, void **, 8);
    }
    temp_r2_2 = M2C_FIELD(temp_r0, void **, 8);
    if (temp_r2_2 != NULL) {
        M2C_FIELD(temp_r2_2, void **, 4) = (void *) M2C_FIELD(temp_r0, void **, 4);
    }
    temp_r2_3 = M2C_FIELD(temp_r0, M2C_UNK **, 0xC);
    if (temp_r2_3 != NULL) {
        M2C_FIELD(temp_r2_3, s32 *, 8) = (s32) (M2C_FIELD(temp_r2_3, s32 *, 8) - 1);
        temp_r2_4                      = M2C_FIELD(temp_r0, M2C_UNK **, 0xC);
        if (M2C_FIELD(temp_r2_4, void **, 0) == temp_r0) {
            M2C_FIELD(temp_r2_4, void **, 0) = (void *) M2C_FIELD(temp_r0, void **, 4);
        }
        temp_r2_5 = M2C_FIELD(temp_r0, M2C_UNK **, 0xC);
        if (M2C_FIELD(temp_r2_5, void **, 4) == temp_r0) {
            M2C_FIELD(temp_r2_5, void **, 4) = (void *) M2C_FIELD(temp_r0, void **, 8);
        }
    }
    M2C_FIELD(temp_r0, void **, 4)      = NULL;
    M2C_FIELD(temp_r0, void **, 8)      = NULL;
    M2C_FIELD(temp_r0, M2C_UNK **, 0xC) = NULL;
    M2C_FIELD(temp_r0, void **, 4)      = NULL;
    M2C_FIELD(temp_r0, void **, 8)      = (void *) M2C_FIELD(&data_020dc19c, void **, 0x210);
    M2C_FIELD(temp_r0, M2C_UNK **, 0xC) = &data_020dc3a8;
    if (M2C_FIELD(&data_020dc19c, void **, 0x20C) == NULL) {
        M2C_FIELD(&data_020dc19c, void **, 0x20C) = temp_r0;
    } else {
        M2C_FIELD(M2C_FIELD(&data_020dc19c, void **, 0x210), void **, 4) = temp_r0;
    }
    M2C_FIELD(&data_020dc19c, void **, 0x210) = temp_r0;
    M2C_FIELD(&data_020dc19c, s32 *, 0x214)   = (s32) (M2C_FIELD(&data_020dc19c, s32 *, 0x214) + 1);
}
