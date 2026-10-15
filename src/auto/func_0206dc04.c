#include "m2c.h"

M2C_UNK func_0202d1e8(s32, s32, s32);

void func_0206dc04(void *arg0) {
    void *var_r4;

    if (!(M2C_FIELD(arg0, s32 *, 0) & 0x19)) {
        return;
    }
    func_0202d1e8(M2C_FIELD(arg0, s32 *, 0x24), M2C_FIELD(M2C_FIELD(arg0, void **, 0x1C), s32 *, 0x24),
                  M2C_FIELD(arg0, s32 *, 0x20));
    var_r4 = M2C_FIELD(arg0, void **, 8);
    if (var_r4 == NULL) {
        return;
    }
    do {
        func_0206dc04(var_r4);
        var_r4 = M2C_FIELD(var_r4, void **, 0x14);
    } while (var_r4 != NULL);
}
