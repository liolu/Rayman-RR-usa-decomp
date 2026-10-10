#include "m2c.h"

M2C_UNK func_02048530(s32, M2C_UNK);                /* extern */
M2C_UNK func_02048d04(s32, M2C_UNK, M2C_UNK);       /* extern */
s32 func_0205703c(M2C_UNK);                         /* extern */
void *func_0205fcc0(s32);                           /* extern */
M2C_UNK func_0205fd20();                            /* extern */
M2C_UNK func_020656c4();                            /* extern */
extern M2C_UNK data_020dc19c;

void func_0205fdc0(void) {
    s32 var_r8;
    void *temp_r0;

    M2C_FIELD(&data_020dc19c, s32 *, 0x208) = func_0205703c(0x20);
    func_0205fd20();
    var_r8 = 1;
    do {
        temp_r0 = func_0205fcc0(var_r8);
        func_02048530(temp_r0 + 8, 0x67);
        func_02048d04(M2C_FIELD(temp_r0, s32 *, 8), 0x1800, 0xC00);
        var_r8 += 1;
    } while (var_r8 <= 2);
    func_020656c4();
}
