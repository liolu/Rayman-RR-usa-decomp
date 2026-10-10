#include "m2c.h"

M2C_UNK func_02057038(s32, M2C_UNK, M2C_UNK *, M2C_UNK, s32); /* extern */
M2C_UNK func_02057154(s32);                         /* extern */
M2C_UNK func_0206919c(s32);                         /* extern */
M2C_UNK func_0207ac90(M2C_UNK);                     /* extern */
M2C_UNK func_0207ad9c(M2C_UNK, u8, M2C_UNK, M2C_UNK, s32, s32, s32, s32); /* extern */
extern u8 data_020bd280;
extern M2C_UNK data_020bd338;

void func_02068f4c(void *arg0) {
    s32 temp_r5;

    if (arg0 == NULL) {
        func_0207ac90(0);
        func_0207ad9c(0x30, data_020bd280, 0, 0xE, -1, 0xFF, 0xFF, 0);
    }
    temp_r5 = M2C_FIELD(arg0, s32 *, 0x18);
    if (temp_r5 == 0) {
        func_0207ac90(0);
        func_0207ad9c(0x30, data_020bd280, 0, 0xF, -1, 0xFF, 0xFF, 0);
    }
    func_0206919c(temp_r5);
    func_02057038(M2C_FIELD(arg0, s32 *, 0x18), 2, &data_020bd338, 0x97, 0);
    func_02057154(M2C_FIELD(arg0, s32 *, 0x18));
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
}
