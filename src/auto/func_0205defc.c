#include "m2c.h"

M2C_UNK func_02057c04(s32);                         /* extern */
M2C_UNK func_0205de48();                            /* extern */
M2C_UNK func_0207ad9c(M2C_UNK, u8, M2C_UNK, M2C_UNK, s32, s32, s32, s32); /* extern */
extern u8 data_020bd280;

void func_0205defc(void *arg0) {
    s32 temp_r1;
    void *temp_r3;

    temp_r3 = M2C_FIELD(arg0, void **, 4);
    if (M2C_FIELD(temp_r3, s32 *, 0) != -1) {
        temp_r1 = M2C_FIELD(temp_r3, s32 *, 4);
        if (temp_r1 >= 0x10000) {
            func_02057c04(temp_r1);
            return;
        }
        func_0205de48(arg0);
        return;
    }
    func_0207ad9c(0x30, data_020bd280, 0, 0x38, -1, 0xFF, 0xFF, 0);
}
