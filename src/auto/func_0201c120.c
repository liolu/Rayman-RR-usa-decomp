#include "m2c.h"

void func_0201c120(void *arg0) {
    void *temp_r1;
    void *temp_r3;
    void *temp_r3_2;
    void *temp_r3_3;
    void *temp_r3_4;

    temp_r1 = M2C_FIELD(arg0, void **, 0x14);
    if (temp_r1 != NULL) {
        M2C_FIELD(temp_r1, void **, 0x18) = (void *) M2C_FIELD(arg0, void **, 0x18);
    }
    temp_r3 = M2C_FIELD(arg0, void **, 0x18);
    if (temp_r3 != NULL) {
        M2C_FIELD(temp_r3, void **, 0x14) = (void *) M2C_FIELD(arg0, void **, 0x14);
    }
    temp_r3_2 = M2C_FIELD(arg0, void **, 0x1C);
    if (temp_r3_2 != NULL) {
        M2C_FIELD(temp_r3_2, s32 *, 0x10) = (s32) (M2C_FIELD(temp_r3_2, s32 *, 0x10) - 1);
        temp_r3_3                         = M2C_FIELD(arg0, void **, 0x1C);
        if (M2C_FIELD(temp_r3_3, void **, 8) == arg0) {
            M2C_FIELD(temp_r3_3, void **, 8) = (void *) M2C_FIELD(arg0, void **, 0x14);
        }
        temp_r3_4 = M2C_FIELD(arg0, void **, 0x1C);
        if (M2C_FIELD(temp_r3_4, void **, 0xC) == arg0) {
            M2C_FIELD(temp_r3_4, void **, 0xC) = (void *) M2C_FIELD(arg0, void **, 0x18);
        }
    }
    M2C_FIELD(arg0, void **, 0x14) = NULL;
    M2C_FIELD(arg0, void **, 0x18) = NULL;
    M2C_FIELD(arg0, void **, 0x1C) = NULL;
    M2C_FIELD(arg0, void **, 0x14) = temp_r1;
}
