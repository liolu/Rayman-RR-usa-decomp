#include "m2c.h"

extern M2C_UNK data_020c4b6c;

void func_02020208(void *arg0) {
    M2C_UNK *temp_r2_10;
    M2C_UNK *temp_r2_3;
    M2C_UNK *temp_r2_4;
    M2C_UNK *temp_r2_5;
    M2C_UNK *temp_r2_8;
    M2C_UNK *temp_r2_9;
    void *temp_r2;
    void *temp_r2_2;
    void *temp_r2_6;
    void *temp_r2_7;

    temp_r2 = M2C_FIELD(arg0, void **, 0x2C);
    if (temp_r2 != NULL) {
        M2C_FIELD(temp_r2, void **, 0x30) = (void *) M2C_FIELD(arg0, void **, 0x30);
    }
    temp_r2_2 = M2C_FIELD(arg0, void **, 0x30);
    if (temp_r2_2 != NULL) {
        M2C_FIELD(temp_r2_2, void **, 0x2C) = (void *) M2C_FIELD(arg0, void **, 0x2C);
    }
    temp_r2_3 = M2C_FIELD(arg0, M2C_UNK **, 0x34);
    if (temp_r2_3 != NULL) {
        M2C_FIELD(temp_r2_3, s32 *, 8) = (s32) (M2C_FIELD(temp_r2_3, s32 *, 8) - 1);
        temp_r2_4                      = M2C_FIELD(arg0, M2C_UNK **, 0x34);
        if (M2C_FIELD(temp_r2_4, void **, 0) == arg0) {
            M2C_FIELD(temp_r2_4, void **, 0) = (void *) M2C_FIELD(arg0, void **, 0x2C);
        }
        temp_r2_5 = M2C_FIELD(arg0, M2C_UNK **, 0x34);
        if (M2C_FIELD(temp_r2_5, void **, 4) == arg0) {
            M2C_FIELD(temp_r2_5, void **, 4) = (void *) M2C_FIELD(arg0, void **, 0x30);
        }
    }
    M2C_FIELD(arg0, void **, 0x2C)    = NULL;
    M2C_FIELD(arg0, void **, 0x30)    = NULL;
    M2C_FIELD(arg0, M2C_UNK **, 0x34) = NULL;
    temp_r2_6                         = M2C_FIELD(arg0, void **, 0x2C);
    if (temp_r2_6 != NULL) {
        M2C_FIELD(temp_r2_6, void **, 0x30) = (void *) M2C_FIELD(arg0, void **, 0x30);
    }
    temp_r2_7 = M2C_FIELD(arg0, void **, 0x30);
    if (temp_r2_7 != NULL) {
        M2C_FIELD(temp_r2_7, void **, 0x2C) = (void *) M2C_FIELD(arg0, void **, 0x2C);
    }
    temp_r2_8 = M2C_FIELD(arg0, M2C_UNK **, 0x34);
    if (temp_r2_8 != NULL) {
        M2C_FIELD(temp_r2_8, s32 *, 8) = (s32) (M2C_FIELD(temp_r2_8, s32 *, 8) - 1);
        temp_r2_9                      = M2C_FIELD(arg0, M2C_UNK **, 0x34);
        if (M2C_FIELD(temp_r2_9, void **, 0) == arg0) {
            M2C_FIELD(temp_r2_9, void **, 0) = (void *) M2C_FIELD(arg0, void **, 0x2C);
        }
        temp_r2_10 = M2C_FIELD(arg0, M2C_UNK **, 0x34);
        if (M2C_FIELD(temp_r2_10, void **, 4) == arg0) {
            M2C_FIELD(temp_r2_10, void **, 4) = (void *) M2C_FIELD(arg0, void **, 0x30);
        }
    }
    M2C_FIELD(arg0, void **, 0x2C)    = NULL;
    M2C_FIELD(arg0, void **, 0x30)    = NULL;
    M2C_FIELD(arg0, M2C_UNK **, 0x34) = NULL;
    M2C_FIELD(arg0, void **, 0x2C)    = NULL;
    M2C_FIELD(arg0, void **, 0x30)    = (void *) M2C_FIELD(&data_020c4b6c, void **, 4);
    M2C_FIELD(arg0, M2C_UNK **, 0x34) = &data_020c4b6c;
    if (M2C_FIELD(&data_020c4b6c, void **, 0) == NULL) {
        M2C_FIELD(&data_020c4b6c, void **, 0) = arg0;
    } else {
        M2C_FIELD(M2C_FIELD(&data_020c4b6c, void **, 4), void **, 0x2C) = arg0;
    }
    M2C_FIELD(&data_020c4b6c, void **, 4) = arg0;
    M2C_FIELD(&data_020c4b6c, s32 *, 8)   = (s32) (M2C_FIELD(&data_020c4b6c, s32 *, 8) + 1);
}
