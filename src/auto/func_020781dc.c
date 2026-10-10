#include "m2c.h"

M2C_UNK func_0200d6fc(s32, s32);                    /* extern */
M2C_UNK func_02017074(s32, M2C_UNK, s32);           /* extern */
M2C_UNK func_020170dc(s32, M2C_UNK, s32);           /* extern */
M2C_UNK func_02017204(s32, M2C_UNK, s32);           /* extern */

void func_020781dc(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0) != 0) {
        func_0200d6fc(M2C_FIELD(arg0, s32 *, 0x18), M2C_FIELD(arg0, s32 *, 0x20));
        func_020170dc(M2C_FIELD(arg0, s32 *, 0x18), 0, M2C_FIELD(arg0, s32 *, 0x20));
    }
    if (M2C_FIELD(arg0, s32 *, 4) != 0) {
        func_0200d6fc(M2C_FIELD(arg0, s32 *, 0x1C), M2C_FIELD(arg0, s32 *, 0x20));
        func_02017074(M2C_FIELD(arg0, s32 *, 0x1C), 0, M2C_FIELD(arg0, s32 *, 0x20));
    }
    if (M2C_FIELD(arg0, s32 *, 8) == 0) {
        return;
    }
    func_0200d6fc(M2C_FIELD(arg0, s32 *, 0x28), M2C_FIELD(arg0, s32 *, 0x24));
    func_02017204(M2C_FIELD(arg0, s32 *, 0x28), 0, M2C_FIELD(arg0, s32 *, 0x24));
}
