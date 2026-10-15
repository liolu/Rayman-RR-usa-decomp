#include "m2c.h"

M2C_UNK func_0201d3cc(M2C_UNK, void *);
M2C_UNK func_02021eac(s32);
extern s32 data_020c5740;

void func_02026cb0(void *arg0) {
    void *temp_r1;
    void *temp_r1_2;
    void *temp_r1_3;
    void *temp_r1_4;
    void *temp_r1_5;

    data_020c5740 -= 1;
    temp_r1 = M2C_FIELD(arg0, void **, 4);
    if (temp_r1 != NULL) {
        M2C_FIELD(temp_r1, void **, 8) = (void *) M2C_FIELD(arg0, void **, 8);
    }
    temp_r1_2 = M2C_FIELD(arg0, void **, 8);
    if (temp_r1_2 != NULL) {
        M2C_FIELD(temp_r1_2, void **, 4) = (void *) M2C_FIELD(arg0, void **, 4);
    }
    temp_r1_3 = M2C_FIELD(arg0, void **, 0xC);
    if (temp_r1_3 != NULL) {
        M2C_FIELD(temp_r1_3, s32 *, 8) = (s32) (M2C_FIELD(temp_r1_3, s32 *, 8) - 1);
        temp_r1_4                      = M2C_FIELD(arg0, void **, 0xC);
        if (M2C_FIELD(temp_r1_4, void **, 0) == arg0) {
            M2C_FIELD(temp_r1_4, void **, 0) = (void *) M2C_FIELD(arg0, void **, 4);
        }
        temp_r1_5 = M2C_FIELD(arg0, void **, 0xC);
        if (M2C_FIELD(temp_r1_5, void **, 4) == arg0) {
            M2C_FIELD(temp_r1_5, void **, 4) = (void *) M2C_FIELD(arg0, void **, 8);
        }
    }
    M2C_FIELD(arg0, void **, 4)   = NULL;
    M2C_FIELD(arg0, void **, 8)   = NULL;
    M2C_FIELD(arg0, void **, 0xC) = NULL;
    func_02021eac(M2C_FIELD(arg0, s32 *, 0));
    func_0201d3cc(0, arg0);
}
