#include "m2c.h"

M2C_UNK func_02020020(void *, M2C_UNK);
extern M2C_UNK data_020c4b60;
extern M2C_UNK data_020c4b78;

void func_020204b4(void *arg0, s32 arg1, M2C_UNK arg2) {
    M2C_UNK *temp_r1_10;
    M2C_UNK *temp_r1_13;
    M2C_UNK *temp_r1_14;
    M2C_UNK *temp_r1_15;
    M2C_UNK *temp_r1_18;
    M2C_UNK *temp_r1_19;
    M2C_UNK *temp_r1_20;
    M2C_UNK *temp_r1_3;
    M2C_UNK *temp_r1_4;
    M2C_UNK *temp_r1_5;
    M2C_UNK *temp_r1_8;
    M2C_UNK *temp_r1_9;
    void *temp_r1;
    void *temp_r1_11;
    void *temp_r1_12;
    void *temp_r1_16;
    void *temp_r1_17;
    void *temp_r1_2;
    void *temp_r1_6;
    void *temp_r1_7;

    M2C_FIELD(arg0, s32 *, 0) = arg1;
    if (arg1 & 1) {
        temp_r1 = M2C_FIELD(arg0, void **, 0x2C);
        if (temp_r1 != NULL) {
            M2C_FIELD(temp_r1, void **, 0x30) = (void *) M2C_FIELD(arg0, void **, 0x30);
        }
        temp_r1_2 = M2C_FIELD(arg0, void **, 0x30);
        if (temp_r1_2 != NULL) {
            M2C_FIELD(temp_r1_2, void **, 0x2C) = (void *) M2C_FIELD(arg0, void **, 0x2C);
        }
        temp_r1_3 = M2C_FIELD(arg0, M2C_UNK **, 0x34);
        if (temp_r1_3 != NULL) {
            M2C_FIELD(temp_r1_3, s32 *, 8) = (s32) (M2C_FIELD(temp_r1_3, s32 *, 8) - 1);
            temp_r1_4                      = M2C_FIELD(arg0, M2C_UNK **, 0x34);
            if (M2C_FIELD(temp_r1_4, void **, 0) == arg0) {
                M2C_FIELD(temp_r1_4, void **, 0) = (void *) M2C_FIELD(arg0, void **, 0x2C);
            }
            temp_r1_5 = M2C_FIELD(arg0, M2C_UNK **, 0x34);
            if (M2C_FIELD(temp_r1_5, void **, 4) == arg0) {
                M2C_FIELD(temp_r1_5, void **, 4) = (void *) M2C_FIELD(arg0, void **, 0x30);
            }
        }
        M2C_FIELD(arg0, void **, 0x2C)    = NULL;
        M2C_FIELD(arg0, void **, 0x30)    = NULL;
        M2C_FIELD(arg0, M2C_UNK **, 0x34) = NULL;
        temp_r1_6                         = M2C_FIELD(arg0, void **, 0x2C);
        if (temp_r1_6 != NULL) {
            M2C_FIELD(temp_r1_6, void **, 0x30) = (void *) M2C_FIELD(arg0, void **, 0x30);
        }
        temp_r1_7 = M2C_FIELD(arg0, void **, 0x30);
        if (temp_r1_7 != NULL) {
            M2C_FIELD(temp_r1_7, void **, 0x2C) = (void *) M2C_FIELD(arg0, void **, 0x2C);
        }
        temp_r1_8 = M2C_FIELD(arg0, M2C_UNK **, 0x34);
        if (temp_r1_8 != NULL) {
            M2C_FIELD(temp_r1_8, s32 *, 8) = (s32) (M2C_FIELD(temp_r1_8, s32 *, 8) - 1);
            temp_r1_9                      = M2C_FIELD(arg0, M2C_UNK **, 0x34);
            if (M2C_FIELD(temp_r1_9, void **, 0) == arg0) {
                M2C_FIELD(temp_r1_9, void **, 0) = (void *) M2C_FIELD(arg0, void **, 0x2C);
            }
            temp_r1_10 = M2C_FIELD(arg0, M2C_UNK **, 0x34);
            if (M2C_FIELD(temp_r1_10, void **, 4) == arg0) {
                M2C_FIELD(temp_r1_10, void **, 4) = (void *) M2C_FIELD(arg0, void **, 0x30);
            }
        }
        M2C_FIELD(arg0, void **, 0x2C)    = NULL;
        M2C_FIELD(arg0, void **, 0x30)    = NULL;
        M2C_FIELD(arg0, M2C_UNK **, 0x34) = NULL;
        M2C_FIELD(arg0, void **, 0x2C)    = NULL;
        M2C_FIELD(arg0, void **, 0x30)    = (void *) M2C_FIELD(&data_020c4b78, void **, 4);
        M2C_FIELD(arg0, M2C_UNK **, 0x34) = &data_020c4b78;
        if (M2C_FIELD(&data_020c4b78, void **, 0) == NULL) {
            M2C_FIELD(&data_020c4b78, void **, 0) = arg0;
        } else {
            M2C_FIELD(M2C_FIELD(&data_020c4b78, void **, 4), void **, 0x2C) = arg0;
        }
        M2C_FIELD(&data_020c4b78, void **, 4) = arg0;
        M2C_FIELD(&data_020c4b78, s32 *, 8)   = (s32) (M2C_FIELD(&data_020c4b78, s32 *, 8) + 1);
        func_02020020(arg0, arg2);
    }
    if (!(arg1 & 2)) {
        return;
    }
    temp_r1_11 = M2C_FIELD(arg0, void **, 0x2C);
    if (temp_r1_11 != NULL) {
        M2C_FIELD(temp_r1_11, void **, 0x30) = (void *) M2C_FIELD(arg0, void **, 0x30);
    }
    temp_r1_12 = M2C_FIELD(arg0, void **, 0x30);
    if (temp_r1_12 != NULL) {
        M2C_FIELD(temp_r1_12, void **, 0x2C) = (void *) M2C_FIELD(arg0, void **, 0x2C);
    }
    temp_r1_13 = M2C_FIELD(arg0, M2C_UNK **, 0x34);
    if (temp_r1_13 != NULL) {
        M2C_FIELD(temp_r1_13, s32 *, 8) = (s32) (M2C_FIELD(temp_r1_13, s32 *, 8) - 1);
        temp_r1_14                      = M2C_FIELD(arg0, M2C_UNK **, 0x34);
        if (M2C_FIELD(temp_r1_14, void **, 0) == arg0) {
            M2C_FIELD(temp_r1_14, void **, 0) = (void *) M2C_FIELD(arg0, void **, 0x2C);
        }
        temp_r1_15 = M2C_FIELD(arg0, M2C_UNK **, 0x34);
        if (M2C_FIELD(temp_r1_15, void **, 4) == arg0) {
            M2C_FIELD(temp_r1_15, void **, 4) = (void *) M2C_FIELD(arg0, void **, 0x30);
        }
    }
    M2C_FIELD(arg0, void **, 0x2C)    = NULL;
    M2C_FIELD(arg0, void **, 0x30)    = NULL;
    M2C_FIELD(arg0, M2C_UNK **, 0x34) = NULL;
    temp_r1_16                        = M2C_FIELD(arg0, void **, 0x2C);
    if (temp_r1_16 != NULL) {
        M2C_FIELD(temp_r1_16, void **, 0x30) = (void *) M2C_FIELD(arg0, void **, 0x30);
    }
    temp_r1_17 = M2C_FIELD(arg0, void **, 0x30);
    if (temp_r1_17 != NULL) {
        M2C_FIELD(temp_r1_17, void **, 0x2C) = (void *) M2C_FIELD(arg0, void **, 0x2C);
    }
    temp_r1_18 = M2C_FIELD(arg0, M2C_UNK **, 0x34);
    if (temp_r1_18 != NULL) {
        M2C_FIELD(temp_r1_18, s32 *, 8) = (s32) (M2C_FIELD(temp_r1_18, s32 *, 8) - 1);
        temp_r1_19                      = M2C_FIELD(arg0, M2C_UNK **, 0x34);
        if (M2C_FIELD(temp_r1_19, void **, 0) == arg0) {
            M2C_FIELD(temp_r1_19, void **, 0) = (void *) M2C_FIELD(arg0, void **, 0x2C);
        }
        temp_r1_20 = M2C_FIELD(arg0, M2C_UNK **, 0x34);
        if (M2C_FIELD(temp_r1_20, void **, 4) == arg0) {
            M2C_FIELD(temp_r1_20, void **, 4) = (void *) M2C_FIELD(arg0, void **, 0x30);
        }
    }
    M2C_FIELD(arg0, void **, 0x2C)    = NULL;
    M2C_FIELD(arg0, void **, 0x30)    = NULL;
    M2C_FIELD(arg0, M2C_UNK **, 0x34) = NULL;
    M2C_FIELD(arg0, void **, 0x2C)    = NULL;
    M2C_FIELD(arg0, void **, 0x30)    = (void *) M2C_FIELD(&data_020c4b60, void **, 4);
    M2C_FIELD(arg0, M2C_UNK **, 0x34) = &data_020c4b60;
    if (M2C_FIELD(&data_020c4b60, void **, 0) == NULL) {
        M2C_FIELD(&data_020c4b60, void **, 0) = arg0;
    } else {
        M2C_FIELD(M2C_FIELD(&data_020c4b60, void **, 4), void **, 0x2C) = arg0;
    }
    M2C_FIELD(&data_020c4b60, void **, 4) = arg0;
    M2C_FIELD(&data_020c4b60, s32 *, 8)   = (s32) (M2C_FIELD(&data_020c4b60, s32 *, 8) + 1);
}
