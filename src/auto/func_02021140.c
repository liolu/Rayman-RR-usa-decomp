#include "m2c.h"

M2C_UNK func_0202032c(void *);                      /* extern */
M2C_UNK func_02020bc8();                            /* extern */
extern M2C_UNK data_020c4b78;
extern s32 data_020c4b90;
extern s32 data_020c4b94;
extern s32 data_020c4b98;
extern s32 data_020c4b9c;
extern s32 data_020c4ba0;

void func_02021140(void) {
    void *var_r5;

    if ((s32) M2C_FIELD(&data_020c4b78, s32 *, 8) > 0) {
        do {
            var_r5 = M2C_FIELD(&data_020c4b78, void **, 0);
            if (var_r5 != NULL) {
                do {
                    M2C_FIELD(var_r5, s32 *, 0) = (s32) (M2C_FIELD(var_r5, s32 *, 0) | 8);
                    func_0202032c(var_r5);
                    var_r5 = M2C_FIELD(var_r5, void **, 0x2C);
                } while (var_r5 != NULL);
            }
        } while ((s32) M2C_FIELD(&data_020c4b78, s32 *, 8) > 0);
    }
    func_02020bc8();
    data_020c4ba0 = 0;
    data_020c4b9c = 0;
    data_020c4b98 = 0;
    data_020c4b94 = 0;
    data_020c4b90 = 0;
}
