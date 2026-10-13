#include "m2c.h"

s32 func_0201c2e8(void *, s32);                     /* extern */
M2C_UNK func_020298a8(s32, void *);                 /* extern */
M2C_UNK func_020298d0(s32, s32);                    /* extern */
s32 func_020299c4(void *, void *);                  /* extern */
s32 func_02067fb4(s32);                             /* extern */
s32 func_020680d8(s32);                             /* extern */
M2C_UNK func_0206a6e8(s32, void *);                 /* extern */
extern void *data_020dc190;

void func_0206a65c(void *arg0, void *arg1) {
    u32 temp_r5;
    u32 temp_r7;
    u32 var_r0;
    void *temp_r6;

    temp_r6 = M2C_FIELD(M2C_FIELD(arg0, void **, 4), void **, 0x20);
    var_r0  = func_020299c4(data_020dc190, arg1);
    if (var_r0 == 0) {
        var_r0 = func_0201c2e8(data_020dc190, M2C_FIELD(data_020dc190, s32 *, 0x10) - 1);
    }
    M2C_FIELD(temp_r6, s32 *, 0) = var_r0;
    func_020298a8(M2C_FIELD(temp_r6, s32 *, 4), arg0);
    temp_r7 = M2C_FIELD(M2C_FIELD(arg0, void **, 4), s32 *, 0x1C);
    if (temp_r7 != 0) {
        temp_r5 = func_02067fb4(temp_r7);
        func_020298d0(temp_r5, func_020680d8(temp_r7));
    }
    func_0206a6e8(M2C_FIELD(temp_r6, s32 *, 0), arg0);
}
