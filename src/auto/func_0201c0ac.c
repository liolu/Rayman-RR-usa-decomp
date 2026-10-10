#include "m2c.h"

void func_0201c0ac(void *arg0) {
    void *temp_r2;
    void *temp_r2_2;
    void *temp_r2_3;
    void *temp_r2_4;
    void *temp_r2_5;

    temp_r2 = M2C_FIELD(arg0, void **, 0x14);
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
}
