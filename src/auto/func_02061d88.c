#include "m2c.h"

void *func_020413b4(M2C_UNK, M2C_UNK);              /* extern */
void *func_0204141c(M2C_UNK, M2C_UNK, void *, M2C_UNK); /* extern */
M2C_UNK func_02041da8(void *);                      /* extern */
void *func_0205703c(M2C_UNK);                       /* extern */
M2C_UNK func_02070d2c(void *, M2C_UNK);             /* extern */
extern s32 data_020bd2a8;

void *func_02061d88(M2C_UNK arg0) {
    u16 temp_r3;
    void *temp_r0;
    void *temp_r0_2;
    void *temp_r0_3;
    s32 n;

    temp_r0_2 = func_020413b4(8, arg0);
    if (temp_r0_2 != NULL) {
        return temp_r0_2;
    }
    temp_r0   = func_0205703c(0x1C);
    temp_r0_3 = func_0204141c(8, arg0, temp_r0, 8);
    temp_r3   = M2C_FIELD(temp_r0_3, u16 *, 6);
    if (temp_r3 == 0xFFFF) {
        return NULL;
    }
    n                               = data_020bd2a8;
    M2C_FIELD(temp_r0, u16 *, 0x18) = temp_r3;
    data_020bd2a8                   = n + 1;
    func_02070d2c(temp_r0, n);
    func_02041da8(temp_r0_3);
    return temp_r0;
}
