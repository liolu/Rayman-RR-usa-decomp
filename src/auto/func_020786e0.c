#include "m2c.h"

M2C_UNK func_020782f4();                      /* extern */

void func_020786e0(void *arg0) {
    void *temp_r0;

    if (arg0 != NULL) {
        temp_r0 = M2C_FIELD(arg0, void **, 0x38);
        if (temp_r0 != NULL) {
            if (M2C_FIELD(temp_r0, s32 *, 4) != 0) {
                func_020782f4();
                M2C_FIELD(M2C_FIELD(arg0, void **, 0x38), s32 *, 4) = 0;
            }
            if (M2C_FIELD(M2C_FIELD(arg0, void **, 0x38), s32 *, 0) != 0) {
                func_020782f4();
                M2C_FIELD(M2C_FIELD(arg0, void **, 0x38), s32 *, 0) = 0;
            }
            func_020782f4(M2C_FIELD(arg0, void **, 0x38));
            M2C_FIELD(arg0, void **, 0x38) = NULL;
        }
    }
}
