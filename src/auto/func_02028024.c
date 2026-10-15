#include "m2c.h"

M2C_UNK func_0201fc70();
M2C_UNK func_0201fc74();
extern M2C_UNK data_020c57b4;

/* arg1 must be volatile: the target homes r0-r3 with "push {r0, r1, r2, r3}" and
 * reloads arg1 from its home slot (sp+0xC) inside each branch. */
s32 func_02028024(void *arg0, volatile s32 arg1) {
    func_0201fc70();
    M2C_FIELD(&data_020c57b4, void **, 0x10) = arg0;
    if (M2C_FIELD(arg0, s32 *, 0x4C) != 0) {
        M2C_FIELD(arg0, s32 *, 0x48) = arg1;
    } else {
        M2C_FIELD(arg0, s32 *, 0x44) = arg1;
    }
    func_0201fc74();
    return 1;
}
