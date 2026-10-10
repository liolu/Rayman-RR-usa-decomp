#define M2C_SELF_func_0206a6e8
#include "m2c_protos.h"

M2C_UNK func_0206a74c(void *, void *);              /* extern */

void func_0206a6e8(void *arg0, void *arg1) {
    void *temp_r1;
    void *temp_r6;

    temp_r6 = M2C_FIELD(M2C_FIELD(arg1, void **, 4), void **, 0x20);
    func_02029f58(M2C_FIELD(temp_r6, void **, 4));
    temp_r1 = M2C_FIELD(temp_r6, void **, 4);
    if (M2C_FIELD(M2C_FIELD(M2C_FIELD(arg1, void **, 4), void **, 4), u8 *, 0x24) != 0) {
        func_0202a088(arg0, temp_r1);
    } else {
        func_02029fcc(arg0, temp_r1);
    }
    if (M2C_FIELD(M2C_FIELD(arg1, void **, 4), s32 *, 0x1C) == 0) {
        return;
    }
    func_0206a74c(arg0, arg1);
}
