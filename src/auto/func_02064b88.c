#include "m2c.h"

M2C_UNK func_02057038(s32, M2C_UNK, M2C_UNK *, M2C_UNK, s32); /* extern */
M2C_UNK func_02057154(s32);                         /* extern */
M2C_UNK func_02058d88(s32);                         /* extern */
M2C_UNK func_0206505c(s32);                         /* extern */
M2C_UNK func_0206d968(M2C_UNK, s32 *);              /* extern */
M2C_UNK func_0207ac90(M2C_UNK);                     /* extern */
M2C_UNK func_0207ad9c(M2C_UNK, u8, M2C_UNK, M2C_UNK, s32, s32, s32, s32); /* extern */
extern u8 data_020bd280;
extern M2C_UNK data_020bd2ac;

void func_02064b88(s32 *arg0) {
    if (arg0 == NULL) {
        func_0207ac90(0);
        func_0207ad9c(0x30, data_020bd280, 0, 0xE, -1, 0xFF, 0xFF, 0);
    }
    if (*arg0 == 0) {
        func_0207ac90(0);
        func_0207ad9c(0x30, data_020bd280, 0, 0xF, -1, 0xFF, 0xFF, 0);
    }
    func_0206505c(*arg0);
    func_0206d968(0, arg0);
    func_02058d88(*arg0 + 0xBC);
    func_02057038(*arg0, 2, &data_020bd2ac, 0xBD, 0);
    func_02057154(*arg0);
    *arg0 = 0;
}
