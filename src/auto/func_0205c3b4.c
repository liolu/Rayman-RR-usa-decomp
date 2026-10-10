#include "m2c.h"

void *func_02067900();                              /* extern */

void func_0205c3b4(void *arg0, s32 arg1) {
    void *temp_r0;
    void *temp_r1;

    if (M2C_FIELD(M2C_FIELD(arg0, void **, 4), s32 *, 8) == 0) {
        return;
    }
    temp_r0 = func_02067900();
    if (temp_r0 != NULL) {
        temp_r1 = M2C_FIELD(temp_r0, void **, 0x168);
        if (temp_r1 != NULL) {
            M2C_FIELD(temp_r1, s32 *, 0xA4) = arg1;
            if (arg1 == 0) {
                M2C_FIELD(temp_r1, s32 *, 4) = (s32) (M2C_FIELD(temp_r1, s32 *, 4) & ~0x10000);
            }
        }
    }
}
