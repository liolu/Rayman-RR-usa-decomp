#include "m2c.h"

M2C_UNK func_0201d3cc(M2C_UNK, void *);
M2C_UNK func_02024ed0(void *);
extern s32 data_020c5738;

void func_02024d30(void *arg0) {
    void *temp_r1;
    void *temp_r1_2;
    void *temp_r1_3;
    void *temp_r1_4;
    void *temp_r1_5;

    if (arg0 != NULL) {
        temp_r1 = M2C_FIELD(arg0, void **, 0x38);
        if (temp_r1 != NULL) {
            M2C_FIELD(temp_r1, void **, 0x3C) = (void *) M2C_FIELD(arg0, void **, 0x3C);
        }
        temp_r1_2 = M2C_FIELD(arg0, void **, 0x3C);
        if (temp_r1_2 != NULL) {
            M2C_FIELD(temp_r1_2, void **, 0x38) = (void *) M2C_FIELD(arg0, void **, 0x38);
        }
        temp_r1_3 = M2C_FIELD(arg0, void **, 0x40);
        if (temp_r1_3 != NULL) {
            M2C_FIELD(temp_r1_3, s32 *, 8) = (s32) (M2C_FIELD(temp_r1_3, s32 *, 8) - 1);
            temp_r1_4                      = M2C_FIELD(arg0, void **, 0x40);
            if (M2C_FIELD(temp_r1_4, void **, 0) == arg0) {
                M2C_FIELD(temp_r1_4, void **, 0) = (void *) M2C_FIELD(arg0, void **, 0x38);
            }
            temp_r1_5 = M2C_FIELD(arg0, void **, 0x40);
            if (M2C_FIELD(temp_r1_5, void **, 4) == arg0) {
                M2C_FIELD(temp_r1_5, void **, 4) = (void *) M2C_FIELD(arg0, void **, 0x3C);
            }
        }
        M2C_FIELD(arg0, void **, 0x38) = NULL;
        M2C_FIELD(arg0, void **, 0x3C) = NULL;
        M2C_FIELD(arg0, void **, 0x40) = NULL;
        func_0201d3cc(0, arg0);
        data_020c5738 -= 1;
    }
    func_02024ed0(arg0);
}
