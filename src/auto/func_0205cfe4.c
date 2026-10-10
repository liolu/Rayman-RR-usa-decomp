#include "m2c.h"

M2C_UNK func_0202b800(void *, M2C_UNK);             /* extern */
void *func_0205cfb8();                              /* extern */
M2C_UNK func_0205d0c4(void *, M2C_UNK);             /* extern */
extern M2C_UNK data_020dc19c;
extern M2C_UNK data_020dc3c0;

void func_0205cfe4(M2C_UNK arg0) {
    M2C_UNK *temp_r1_3;
    M2C_UNK *temp_r1_4;
    M2C_UNK *temp_r1_5;
    void *temp_r0;
    void *temp_r1;
    void *temp_r1_2;

    temp_r0 = func_0205cfb8();
    func_0205d0c4(temp_r0, arg0);
    temp_r1 = M2C_FIELD(temp_r0, void **, 8);
    if (temp_r1 != NULL) {
        M2C_FIELD(temp_r1, void **, 0xC) = (void *) M2C_FIELD(temp_r0, void **, 0xC);
    }
    temp_r1_2 = M2C_FIELD(temp_r0, void **, 0xC);
    if (temp_r1_2 != NULL) {
        M2C_FIELD(temp_r1_2, void **, 8) = (void *) M2C_FIELD(temp_r0, void **, 8);
    }
    temp_r1_3 = M2C_FIELD(temp_r0, M2C_UNK **, 0x10);
    if (temp_r1_3 != NULL) {
        M2C_FIELD(temp_r1_3, s32 *, 8) = (s32) (M2C_FIELD(temp_r1_3, s32 *, 8) - 1);
        temp_r1_4                      = M2C_FIELD(temp_r0, M2C_UNK **, 0x10);
        if (M2C_FIELD(temp_r1_4, void **, 0) == temp_r0) {
            M2C_FIELD(temp_r1_4, void **, 0) = (void *) M2C_FIELD(temp_r0, void **, 8);
        }
        temp_r1_5 = M2C_FIELD(temp_r0, M2C_UNK **, 0x10);
        if (M2C_FIELD(temp_r1_5, void **, 4) == temp_r0) {
            M2C_FIELD(temp_r1_5, void **, 4) = (void *) M2C_FIELD(temp_r0, void **, 0xC);
        }
    }
    M2C_FIELD(temp_r0, void **, 8)       = NULL;
    M2C_FIELD(temp_r0, void **, 0xC)     = NULL;
    M2C_FIELD(temp_r0, M2C_UNK **, 0x10) = NULL;
    M2C_FIELD(temp_r0, void **, 8)       = NULL;
    M2C_FIELD(temp_r0, void **, 0xC)     = (void *) M2C_FIELD(&data_020dc19c, void **, 0x228);
    M2C_FIELD(temp_r0, M2C_UNK **, 0x10) = &data_020dc3c0;
    if (M2C_FIELD(&data_020dc19c, void **, 0x224) == NULL) {
        M2C_FIELD(&data_020dc19c, void **, 0x224) = temp_r0;
    } else {
        M2C_FIELD(M2C_FIELD(&data_020dc19c, void **, 0x228), void **, 8) = temp_r0;
    }
    M2C_FIELD(&data_020dc19c, void **, 0x228) = temp_r0;
    M2C_FIELD(&data_020dc19c, s32 *, 0x22C)   = (s32) (M2C_FIELD(&data_020dc19c, s32 *, 0x22C) + 1);
    func_0202b800(temp_r0 + 4, 0x32);
}
