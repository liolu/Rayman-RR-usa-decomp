#include "m2c.h"

M2C_UNK func_0201d3cc();
extern s32 data_020c5788;

void func_02024f54(s32 arg0, s32 arg1) {
    s32 var_ip;
    void *temp_r2;
    void *temp_r2_2;
    void *temp_r2_3;
    void *temp_r2_4;
    void *temp_r2_5;
    void *var_r1;

    var_ip = 0;
    var_r1 = M2C_FIELD(((arg1 * 0x48) + data_020c5788), void **, 0x3C);
    if (var_r1 != NULL) {
    loop_1:
        if (M2C_FIELD(var_r1, s32 *, 4) == arg0) {
            var_ip = 1;
        } else {
            var_r1 = M2C_FIELD(var_r1, void **, 8);
            if (var_r1 != NULL) {
                goto loop_1;
            }
        }
    }
    if (var_ip == 0) {
        return;
    }
    temp_r2 = M2C_FIELD(var_r1, void **, 8);
    if (temp_r2 != NULL) {
        M2C_FIELD(temp_r2, void **, 0xC) = (void *) M2C_FIELD(var_r1, void **, 0xC);
    }
    temp_r2_2 = M2C_FIELD(var_r1, void **, 0xC);
    if (temp_r2_2 != NULL) {
        M2C_FIELD(temp_r2_2, void **, 8) = (void *) M2C_FIELD(var_r1, void **, 8);
    }
    temp_r2_3 = M2C_FIELD(var_r1, void **, 0x10);
    if (temp_r2_3 != NULL) {
        M2C_FIELD(temp_r2_3, s32 *, 8) = (s32) (M2C_FIELD(temp_r2_3, s32 *, 8) - 1);
        temp_r2_4                      = M2C_FIELD(var_r1, void **, 0x10);
        if (M2C_FIELD(temp_r2_4, void **, 0) == var_r1) {
            M2C_FIELD(temp_r2_4, void **, 0) = (void *) M2C_FIELD(var_r1, void **, 8);
        }
        temp_r2_5 = M2C_FIELD(var_r1, void **, 0x10);
        if (M2C_FIELD(temp_r2_5, void **, 4) == var_r1) {
            M2C_FIELD(temp_r2_5, void **, 4) = (void *) M2C_FIELD(var_r1, void **, 0xC);
        }
    }
    M2C_FIELD(var_r1, void **, 8)    = NULL;
    M2C_FIELD(var_r1, void **, 0xC)  = NULL;
    M2C_FIELD(var_r1, void **, 0x10) = NULL;
    func_0201d3cc();
}
