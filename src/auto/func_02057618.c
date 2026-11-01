#include "m2c.h"

s32 func_0205da34(s32, s32);
s32 func_0206a388(s32);
extern s32 data_020dc098;

void func_02057618(void) {
    s32 *var_r5;
    s32 *var_r6;
    s32 *temp_r1;
    s32 *temp_r1_2;
    s32 *temp_r1_3;
    s32 *temp_r1_4;
    s32 *temp_r1_5;

    var_r5 = M2C_FIELD(&data_020dc098, s32 **, 4);
    if (var_r5 != NULL) {
        var_r6 = *(s32 **) var_r5;
    } else {
        var_r6 = NULL;
    }
    if (var_r5 == NULL) {
        return;
    }
    do {
        if (func_0206a388(M2C_FIELD(var_r5, s32 *, 0x10)) != 0) {
            func_0205da34(M2C_FIELD(var_r5, s32 *, 0x10), 1);
        } else {
            temp_r1 = M2C_FIELD(var_r5, s32 **, 0);
            if (temp_r1 != NULL) {
                M2C_FIELD(temp_r1, s32 **, 4) = M2C_FIELD(var_r5, s32 **, 4);
            }
            temp_r1_2 = M2C_FIELD(var_r5, s32 **, 4);
            if (temp_r1_2 != NULL) {
                *(s32 **) temp_r1_2 = M2C_FIELD(var_r5, s32 **, 0);
            }
            temp_r1_3 = M2C_FIELD(var_r5, s32 **, 8);
            if (temp_r1_3 != NULL) {
                M2C_FIELD(temp_r1_3, s32 *, 8) = M2C_FIELD(temp_r1_3, s32 *, 8) - 1;
                temp_r1_4                      = M2C_FIELD(var_r5, s32 **, 8);
                if (M2C_FIELD(temp_r1_4, s32 **, 0) == var_r5) {
                    M2C_FIELD(temp_r1_4, s32 **, 0) = M2C_FIELD(var_r5, s32 **, 0);
                }
                temp_r1_5 = M2C_FIELD(var_r5, s32 **, 8);
                if (M2C_FIELD(temp_r1_5, s32 **, 4) == var_r5) {
                    M2C_FIELD(temp_r1_5, s32 **, 4) = M2C_FIELD(var_r5, s32 **, 4);
                }
            }
            M2C_FIELD(var_r5, s32 **, 0)   = NULL;
            M2C_FIELD(var_r5, s32 **, 4)   = NULL;
            M2C_FIELD(var_r5, s32 **, 8)   = NULL;
            M2C_FIELD(var_r5, s32 *, 0x10) = 0;
        }
        var_r5 = var_r6;
        if (var_r6 != NULL) {
            var_r6 = *(s32 **) var_r6;
        } else {
            var_r6 = NULL;
        }
    } while (var_r5 != NULL);
}
