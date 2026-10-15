#include "m2c.h"

M2C_UNK func_0202cb6c(M2C_UNK *, s32);
M2C_UNK func_0202d1e8(s32, M2C_UNK *, s32);

void func_0201c488(void *arg0, void *arg1, s32 arg2) {
    u8 sp0[100];
    void *temp_r2;
    void *temp_r2_2;
    void *temp_r2_3;
    void *temp_r2_4;
    void *temp_r2_5;
    void *temp_r2_6;
    void *temp_r2_7;
    void *temp_r2_8;
    void *temp_r2_9;
    void *temp_r3;
    void *temp_r3_2;
    void *temp_r3_3;
    void *temp_r3_4;
    void *temp_r3_5;

    temp_r3 = M2C_FIELD(arg0, void **, 0x14);
    if (temp_r3 != NULL) {
        M2C_FIELD(temp_r3, void **, 0x18) = (void *) M2C_FIELD(arg0, void **, 0x18);
    }
    temp_r3_2 = M2C_FIELD(arg0, void **, 0x18);
    if (temp_r3_2 != NULL) {
        M2C_FIELD(temp_r3_2, void **, 0x14) = (void *) M2C_FIELD(arg0, void **, 0x14);
    }
    temp_r3_3 = M2C_FIELD(arg0, void **, 0x1C);
    if (temp_r3_3 != NULL) {
        M2C_FIELD(temp_r3_3, s32 *, 0x10) = (s32) (M2C_FIELD(temp_r3_3, s32 *, 0x10) - 1);
        temp_r3_4                         = M2C_FIELD(arg0, void **, 0x1C);
        if (M2C_FIELD(temp_r3_4, void **, 8) == arg0) {
            M2C_FIELD(temp_r3_4, void **, 8) = (void *) M2C_FIELD(arg0, void **, 0x14);
        }
        temp_r3_5 = M2C_FIELD(arg0, void **, 0x1C);
        if (M2C_FIELD(temp_r3_5, void **, 0xC) == arg0) {
            M2C_FIELD(temp_r3_5, void **, 0xC) = (void *) M2C_FIELD(arg0, void **, 0x18);
        }
    }
    M2C_FIELD(arg0, void **, 0x14) = NULL;
    M2C_FIELD(arg0, void **, 0x18) = NULL;
    M2C_FIELD(arg0, void **, 0x1C) = NULL;
    temp_r2                        = M2C_FIELD(arg0, void **, 0x14);
    if (arg2 != 0) {
        if (temp_r2 != NULL) {
            M2C_FIELD(temp_r2, void **, 0x18) = (void *) M2C_FIELD(arg0, void **, 0x18);
        }
        temp_r2_2 = M2C_FIELD(arg0, void **, 0x18);
        if (temp_r2_2 != NULL) {
            M2C_FIELD(temp_r2_2, void **, 0x14) = (void *) M2C_FIELD(arg0, void **, 0x14);
        }
        temp_r2_3 = M2C_FIELD(arg0, void **, 0x1C);
        if (temp_r2_3 != NULL) {
            M2C_FIELD(temp_r2_3, s32 *, 0x10) = (s32) (M2C_FIELD(temp_r2_3, s32 *, 0x10) - 1);
            temp_r2_4                         = M2C_FIELD(arg0, void **, 0x1C);
            if (M2C_FIELD(temp_r2_4, void **, 8) == arg0) {
                M2C_FIELD(temp_r2_4, void **, 8) = (void *) M2C_FIELD(arg0, void **, 0x14);
            }
            temp_r2_5 = M2C_FIELD(arg0, void **, 0x1C);
            if (M2C_FIELD(temp_r2_5, void **, 0xC) == arg0) {
                M2C_FIELD(temp_r2_5, void **, 0xC) = (void *) M2C_FIELD(arg0, void **, 0x18);
            }
        }
        M2C_FIELD(arg0, void **, 0x14) = NULL;
        M2C_FIELD(arg0, void **, 0x18) = NULL;
        M2C_FIELD(arg0, void **, 0x1C) = NULL;
        M2C_FIELD(arg0, void **, 0x18) = NULL;
        M2C_FIELD(arg0, void **, 0x14) = (void *) M2C_FIELD(arg1, void **, 8);
        M2C_FIELD(arg0, void **, 0x1C) = arg1;
        if (M2C_FIELD(arg1, void **, 0xC) == NULL) {
            M2C_FIELD(arg1, void **, 0xC) = arg0;
        } else {
            M2C_FIELD(M2C_FIELD(arg1, void **, 8), void **, 0x18) = arg0;
        }
        M2C_FIELD(arg1, void **, 8)  = arg0;
        M2C_FIELD(arg1, s32 *, 0x10) = (s32) (M2C_FIELD(arg1, s32 *, 0x10) + 1);
    } else {
        if (temp_r2 != NULL) {
            M2C_FIELD(temp_r2, void **, 0x18) = (void *) M2C_FIELD(arg0, void **, 0x18);
        }
        temp_r2_6 = M2C_FIELD(arg0, void **, 0x18);
        if (temp_r2_6 != NULL) {
            M2C_FIELD(temp_r2_6, void **, 0x14) = (void *) M2C_FIELD(arg0, void **, 0x14);
        }
        temp_r2_7 = M2C_FIELD(arg0, void **, 0x1C);
        if (temp_r2_7 != NULL) {
            M2C_FIELD(temp_r2_7, s32 *, 0x10) = (s32) (M2C_FIELD(temp_r2_7, s32 *, 0x10) - 1);
            temp_r2_8                         = M2C_FIELD(arg0, void **, 0x1C);
            if (M2C_FIELD(temp_r2_8, void **, 8) == arg0) {
                M2C_FIELD(temp_r2_8, void **, 8) = (void *) M2C_FIELD(arg0, void **, 0x14);
            }
            temp_r2_9 = M2C_FIELD(arg0, void **, 0x1C);
            if (M2C_FIELD(temp_r2_9, void **, 0xC) == arg0) {
                M2C_FIELD(temp_r2_9, void **, 0xC) = (void *) M2C_FIELD(arg0, void **, 0x18);
            }
        }
        M2C_FIELD(arg0, void **, 0x14) = NULL;
        M2C_FIELD(arg0, void **, 0x18) = NULL;
        M2C_FIELD(arg0, void **, 0x1C) = NULL;
        M2C_FIELD(arg0, void **, 0x14) = NULL;
        M2C_FIELD(arg0, void **, 0x18) = (void *) M2C_FIELD(arg1, void **, 0xC);
        M2C_FIELD(arg0, void **, 0x1C) = arg1;
        if (M2C_FIELD(arg1, void **, 8) == NULL) {
            M2C_FIELD(arg1, void **, 8) = arg0;
        } else {
            M2C_FIELD(M2C_FIELD(arg1, void **, 0xC), void **, 0x14) = arg0;
        }
        M2C_FIELD(arg1, void **, 0xC) = arg0;
        M2C_FIELD(arg1, s32 *, 0x10)  = (s32) (M2C_FIELD(arg1, s32 *, 0x10) + 1);
    }
    func_0202cb6c(sp0, M2C_FIELD(M2C_FIELD(arg0, void **, 0x1C), s32 *, 0x24));
    func_0202d1e8(M2C_FIELD(arg0, s32 *, 0x20), sp0, M2C_FIELD(arg0, s32 *, 0x24));
}
