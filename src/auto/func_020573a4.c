#include "m2c.h"

void *func_0205703c(M2C_UNK);                       /* extern */
M2C_UNK func_020649cc(void *);                      /* extern */
M2C_UNK func_0206531c(void *);                      /* extern */
M2C_UNK func_0206acb8();                            /* extern */

void *func_020573a4(s32 arg0, s32 arg1, s32 arg2) {
    void *temp_r4;

    temp_r4 = func_0205703c(0x2C);
    func_0206acb8();
    func_020649cc(temp_r4);
    func_0206531c(temp_r4);
    M2C_FIELD(M2C_FIELD(temp_r4, void **, 4), s32 *, 0) = arg0;
    M2C_FIELD(M2C_FIELD(temp_r4, void **, 4), s32 *, 4) = arg2;
    return temp_r4;
}
