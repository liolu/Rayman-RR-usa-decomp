#include "m2c.h"

void func_02040068(void *arg0, void *arg1, void *arg2) {
    void *temp_r3;
    void *temp_r3_10;
    void *temp_r3_2;
    void *temp_r3_3;
    void *temp_r3_4;
    void *temp_r3_5;
    void *temp_r3_6;
    void *temp_r3_7;
    void *temp_r3_8;
    void *temp_r3_9;

    if (M2C_FIELD(arg0, s32 *, 8) & 0x40000000) {
        return;
    }
    M2C_FIELD(arg0, void **, 0x29C) = arg2;
    temp_r3                         = M2C_FIELD(arg1, void **, 0x14);
    if (temp_r3 != NULL) {
        M2C_FIELD(temp_r3, void **, 0x18) = (void *) M2C_FIELD(arg1, void **, 0x18);
    }
    temp_r3_2 = M2C_FIELD(arg1, void **, 0x18);
    if (temp_r3_2 != NULL) {
        M2C_FIELD(temp_r3_2, void **, 0x14) = (void *) M2C_FIELD(arg1, void **, 0x14);
    }
    temp_r3_3 = M2C_FIELD(arg1, void **, 0x1C);
    if (temp_r3_3 != NULL) {
        M2C_FIELD(temp_r3_3, s32 *, 0x10) = (s32) (M2C_FIELD(temp_r3_3, s32 *, 0x10) - 1);
        temp_r3_4                         = M2C_FIELD(arg1, void **, 0x1C);
        if (M2C_FIELD(temp_r3_4, void **, 8) == arg1) {
            M2C_FIELD(temp_r3_4, void **, 8) = (void *) M2C_FIELD(arg1, void **, 0x14);
        }
        temp_r3_5 = M2C_FIELD(arg1, void **, 0x1C);
        if (M2C_FIELD(temp_r3_5, void **, 0xC) == arg1) {
            M2C_FIELD(temp_r3_5, void **, 0xC) = (void *) M2C_FIELD(arg1, void **, 0x18);
        }
    }
    M2C_FIELD(arg1, void **, 0x14) = NULL;
    M2C_FIELD(arg1, void **, 0x18) = NULL;
    M2C_FIELD(arg1, void **, 0x1C) = NULL;
    temp_r3_6                      = M2C_FIELD(arg1, void **, 0x14);
    if (temp_r3_6 != NULL) {
        M2C_FIELD(temp_r3_6, void **, 0x18) = (void *) M2C_FIELD(arg1, void **, 0x18);
    }
    temp_r3_7 = M2C_FIELD(arg1, void **, 0x18);
    if (temp_r3_7 != NULL) {
        M2C_FIELD(temp_r3_7, void **, 0x14) = (void *) M2C_FIELD(arg1, void **, 0x14);
    }
    temp_r3_8 = M2C_FIELD(arg1, void **, 0x1C);
    if (temp_r3_8 != NULL) {
        M2C_FIELD(temp_r3_8, s32 *, 0x10) = (s32) (M2C_FIELD(temp_r3_8, s32 *, 0x10) - 1);
        temp_r3_9                         = M2C_FIELD(arg1, void **, 0x1C);
        if (M2C_FIELD(temp_r3_9, void **, 8) == arg1) {
            M2C_FIELD(temp_r3_9, void **, 8) = (void *) M2C_FIELD(arg1, void **, 0x14);
        }
        temp_r3_10 = M2C_FIELD(arg1, void **, 0x1C);
        if (M2C_FIELD(temp_r3_10, void **, 0xC) == arg1) {
            M2C_FIELD(temp_r3_10, void **, 0xC) = (void *) M2C_FIELD(arg1, void **, 0x18);
        }
    }
    M2C_FIELD(arg1, void **, 0x14) = NULL;
    M2C_FIELD(arg1, void **, 0x18) = NULL;
    M2C_FIELD(arg1, void **, 0x1C) = NULL;
    M2C_FIELD(arg1, void **, 0x14) = NULL;
    M2C_FIELD(arg1, void **, 0x18) = (void *) M2C_FIELD(arg2, void **, 0xC);
    M2C_FIELD(arg1, void **, 0x1C) = arg2;
    if (M2C_FIELD(arg2, void **, 8) == NULL) {
        M2C_FIELD(arg2, void **, 8) = arg1;
    } else {
        M2C_FIELD(M2C_FIELD(arg2, void **, 0xC), void **, 0x14) = arg1;
    }
    M2C_FIELD(arg2, void **, 0xC) = arg1;
    M2C_FIELD(arg2, s32 *, 0x10)  = (s32) (M2C_FIELD(arg2, s32 *, 0x10) + 1);
}
