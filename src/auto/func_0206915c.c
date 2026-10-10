#include "m2c.h"

M2C_UNK func_02001588(s32, s32, s32);               /* extern */
s32 func_02068e88();                                /* extern */
M2C_UNK func_02069190(s32);                         /* extern */
M2C_UNK func_0206919c(s32);                         /* extern */

void func_0206915c(void *arg0, void *arg1) {
    func_0206919c(M2C_FIELD(arg0, s32 *, 0x18));
    func_02001588(M2C_FIELD(arg0, s32 *, 0x18), M2C_FIELD(arg1, s32 *, 0x18), func_02068e88());
    func_02069190(M2C_FIELD(arg0, s32 *, 0x18));
}
