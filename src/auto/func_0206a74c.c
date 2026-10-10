#define M2C_SELF_func_0206a74c
#include "m2c_protos.h"

void func_0206a74c(void *arg0, void *arg1) {
    u8 *temp_r4;

    temp_r4 = M2C_FIELD(M2C_FIELD(arg1, void **, 4), u8 **, 0x1C);
    if (func_020680f0(temp_r4) != 0) {
        func_0201c094(arg1, (s32) func_02068104(temp_r4));
        return;
    }
    func_0202a144((void *) func_02067fb4(temp_r4));
    func_0202a1b8(arg0, (void *) func_02067fb4(temp_r4));
}
