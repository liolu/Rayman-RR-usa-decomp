#include "m2c.h"

M2C_UNK func_0201a548();                            /* extern */
M2C_UNK func_0201e3bc();                            /* extern */
M2C_UNK func_0202b09c();                            /* extern */
M2C_UNK func_0202fbf4(M2C_UNK, u8, s32);            /* extern */
M2C_UNK func_0202fd1c(M2C_UNK, u8, s32);            /* extern */
M2C_UNK func_02054794(M2C_UNK);                     /* extern */
M2C_UNK func_02054808(M2C_UNK);                     /* extern */
M2C_UNK func_02057010();                            /* extern */
M2C_UNK func_020828a0();                            /* extern */
M2C_UNK func_020828c8();                            /* extern */
M2C_UNK func_020828f0();                            /* extern */
extern u8 data_020bd280;
extern M2C_UNK data_020cf6cc;

void func_020571d0(void) {
    func_0202fbf4(1, data_020bd280, *((M2C_UNK *) ((s8 *) &data_020cf6cc + (data_020bd280 * 4))));
    func_0202fd1c(1, data_020bd280, *((M2C_UNK *) ((s8 *) &data_020cf6cc + (data_020bd280 * 4))));
    func_0201e3bc();
    func_02054808(1);
    func_02054808(3);
    func_02054808(4);
    func_020828a0();
    func_020828c8();
    func_0202b09c();
    func_0201a548();
    func_02054794(0);
    func_020828f0();
    func_02057010();
}
