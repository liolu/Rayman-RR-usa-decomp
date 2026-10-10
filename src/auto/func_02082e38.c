#include "m2c.h"

M2C_UNK func_02001588(s32, s32, s32);               /* extern */
M2C_UNK func_02084f50();                            /* extern */
M2C_UNK func_0209c724(M2C_UNK, M2C_UNK);            /* extern */

void func_02082e38(void *arg0) {
    s32 temp_r1;
    void *temp_r0;
    void *temp_r2;

    if (arg0 == NULL) {
        return;
    }
    func_0209c724(0, 0);
    if (arg0 != NULL) {
        if (M2C_FIELD(arg0, s32 *, 4) != 0) {
            func_02084f50();
        }
        if (M2C_FIELD(arg0, s32 *, 8) != 0) {
            func_02084f50();
        }
    }
    if (arg0 != NULL) {
        temp_r0 = M2C_FIELD(arg0, void **, 0xC);
        if (temp_r0 != NULL) {
            temp_r1 = M2C_FIELD(temp_r0, s32 *, 4);
            if (temp_r1 == 0) {
                temp_r2 = M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 8);
                func_02001588(M2C_FIELD(temp_r0, s32 *, 8), M2C_FIELD(temp_r2, s32 *, 0), M2C_FIELD(temp_r2, s32 *, 8));
                return;
            }
            func_02001588(M2C_FIELD(temp_r0, s32 *, 8), temp_r1,
                          M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 8), s32 *, 8));
        }
    }
}
