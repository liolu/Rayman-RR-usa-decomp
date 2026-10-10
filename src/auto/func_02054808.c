#include "m2c.h"

M2C_UNK func_0202fd1c(u32, u8, s32);                /* extern */
M2C_UNK func_0207ac90(M2C_UNK);                     /* extern */
M2C_UNK func_0207ad9c(M2C_UNK, u8, M2C_UNK, M2C_UNK, s32, s32, s32, M2C_UNK *); /* extern */
extern u8 data_020bd004;
extern M2C_UNK data_020bd01c;
extern M2C_UNK data_020cf6cc;

void func_02054808(u32 arg0) {
    if ((arg0 > 5U) && (arg0 != 0xFF)) {
        func_0207ac90(0);
        func_0207ad9c(4, data_020bd004, 0, 2, -1, 0xFF, 0xFF, &data_020bd01c);
    }
    func_0202fd1c(arg0, data_020bd004, *((M2C_UNK *) ((s8 *) &data_020cf6cc + (data_020bd004 * 4))));
}
