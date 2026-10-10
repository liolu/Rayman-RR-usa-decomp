#include "m2c.h"

M2C_UNK func_02001588(void *, void *, M2C_UNK);     /* extern */

void func_0203592c(void *arg0, void *arg1) {
    s32 temp_r0;
    void *var_r4;

    var_r4  = NULL;
    temp_r0 = M2C_FIELD(arg1, s32 *, 0xC);
    if (M2C_FIELD(arg0, s32 *, 0xC) & 0x4000) {
        var_r4 = M2C_FIELD(arg0, void **, 0x168);
    }
    if (temp_r0 & 4) {
        func_02001588(arg0, arg1, 0x368);
    } else if (temp_r0 & 2) {
        func_02001588(arg0, arg1, 0x1F4);
    } else {
        func_02001588(arg0, arg1, 0x16C);
    }
    if (var_r4 == NULL) {
        return;
    }
    M2C_FIELD(arg0, void **, 0x168) = var_r4;
    if (!(M2C_FIELD(arg1, s32 *, 0xC) & 0x4000)) {
        return;
    }
    func_02001588(var_r4, M2C_FIELD(arg1, void **, 0x168), 0x16C);
}
