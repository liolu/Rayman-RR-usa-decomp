#include "m2c.h"

M2C_UNK func_0201d3cc(M2C_UNK, void *);             /* extern */
M2C_UNK func_02021c8c(s32);                         /* extern */
M2C_UNK func_02025d68();                            /* extern */
extern M2C_UNK data_020c5740;
extern s32 data_020c5788;
extern void *data_020c57a4;

void func_02026944(void) {
    s32 var_r4_2;
    s32 var_r5_2;
    void *temp_r1;
    void *temp_r1_2;
    void *temp_r1_3;
    void *temp_r1_4;
    void *temp_r1_5;
    void *var_r4;
    void *var_r5;

    var_r4 = data_020c57a4;
    if (var_r4 != NULL) {
        var_r5 = M2C_FIELD(var_r4, void **, 0x2C);
    } else {
        var_r5 = NULL;
    }
    if (var_r4 != NULL) {
        do {
            if (M2C_FIELD(var_r4, s32 *, 0x18) != 0) {
                func_02021c8c(M2C_FIELD(var_r4, s32 *, 0x10));
            }
            temp_r1 = M2C_FIELD(var_r4, void **, 0x2C);
            if (temp_r1 != NULL) {
                M2C_FIELD(temp_r1, void **, 0x30) = (void *) M2C_FIELD(var_r4, void **, 0x30);
            }
            temp_r1_2 = M2C_FIELD(var_r4, void **, 0x30);
            if (temp_r1_2 != NULL) {
                M2C_FIELD(temp_r1_2, void **, 0x2C) = (void *) M2C_FIELD(var_r4, void **, 0x2C);
            }
            temp_r1_3 = M2C_FIELD(var_r4, void **, 0x34);
            if (temp_r1_3 != NULL) {
                M2C_FIELD(temp_r1_3, s32 *, 8) = (s32) (M2C_FIELD(temp_r1_3, s32 *, 8) - 1);
                temp_r1_4                      = M2C_FIELD(var_r4, void **, 0x34);
                if (M2C_FIELD(temp_r1_4, void **, 0) == var_r4) {
                    M2C_FIELD(temp_r1_4, void **, 0) = (void *) M2C_FIELD(var_r4, void **, 0x2C);
                }
                temp_r1_5 = M2C_FIELD(var_r4, void **, 0x34);
                if (M2C_FIELD(temp_r1_5, void **, 4) == var_r4) {
                    M2C_FIELD(temp_r1_5, void **, 4) = (void *) M2C_FIELD(var_r4, void **, 0x30);
                }
            }
            M2C_FIELD(var_r4, void **, 0x2C) = NULL;
            M2C_FIELD(var_r4, void **, 0x30) = NULL;
            M2C_FIELD(var_r4, void **, 0x34) = NULL;
            func_0201d3cc(0, var_r4);
            var_r4 = var_r5;
            if (var_r5 != NULL) {
                var_r5 = M2C_FIELD(var_r5, void **, 0x2C);
            } else {
                var_r5 = NULL;
            }
        } while (var_r4 != NULL);
    }
    func_02025d68();
    var_r4_2 = 0;
    if ((s32) M2C_FIELD(&data_020c5740, s32 *, 8) <= 0) {
        return;
    }
    var_r5_2 = 0;
    do {
        var_r4_2 += 1;
        M2C_FIELD((data_020c5788 + var_r5_2), s32 *, 0x38) = 0x7F;
        var_r5_2 += 0x48;
    } while (var_r4_2 < (s32) M2C_FIELD(&data_020c5740, s32 *, 8));
}
