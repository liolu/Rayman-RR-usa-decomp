#include "m2c.h"

M2C_UNK func_0205b914(s32);                         /* extern */
M2C_UNK func_0205bb58();                            /* extern */
M2C_UNK func_0205be5c(s32, u8);                     /* extern */
void *func_0205d0cc();                              /* extern */
M2C_UNK func_0205d0d4();                            /* extern */
s32 func_0206a7dc(s32);                             /* extern */
extern s32 data_020dc17c;
extern s32 data_020dc180;

void func_0205c050(void) {
    s32 temp_r0;
    s32 temp_r3;
    u8 var_r4;

    func_0205d0d4();
    temp_r0 = func_0206a7dc(M2C_FIELD(M2C_FIELD(func_0205d0cc(), void **, 4), s32 *, 0x20));
    temp_r3 = data_020dc180;
    if (temp_r0 == temp_r3) {
        return;
    }
    if (temp_r3 == 0) {
        var_r4 = 1;
    } else {
        var_r4 = 0;
    }
    data_020dc17c = temp_r3;
    data_020dc180 = temp_r0;
    func_0205b914(temp_r3);
    func_0205be5c(data_020dc180, var_r4);
    func_0205bb58();
}
