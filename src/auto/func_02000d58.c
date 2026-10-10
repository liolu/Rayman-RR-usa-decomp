#define M2C_SELF_func_02000d58
#include "m2c_protos.h"

M2C_UNK func_02003bcc(M2C_UNK);                     /* extern */
extern M2C_UNK data_020c04e0;

void func_02000d58(void) {
    func_02003bcc(1);
    M2C_FIELD(&data_020c04e0, s32 *, 0xC) = 1;
    func_02000d7c(1);
}
