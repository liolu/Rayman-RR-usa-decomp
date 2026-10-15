#include "m2c.h"

s32 func_0206dc50(void *, s32, M2C_UNK, M2C_UNK);
s32 func_02082244();
M2C_UNK func_020823c0(M2C_UNK, void *, s32);
M2C_UNK func_02082420(M2C_UNK, void *, s32);
s32 func_02082450(M2C_UNK, void *);

s32 func_0208889c(void *arg0) {
    s32 temp_r4;
    s32 temp_r5;

    temp_r5                                            = func_02082244();
    temp_r4                                            = func_02082450(0, arg0);
    M2C_FIELD(*M2C_FIELD(arg0, void ***, 4), s32 *, 8) = 0;
    func_020823c0(0, arg0, func_0206dc50(arg0, temp_r4, 0, 0));
    func_02082420(1, arg0, temp_r4);
    return temp_r5;
}
