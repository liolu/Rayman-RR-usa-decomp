#include "m2c.h"

M2C_UNK func_02001588(s16 **, M2C_UNK, M2C_UNK);    /* extern */
s16 *func_0205488c(M2C_UNK);                        /* extern */

void func_0204c670(s16 **arg0, M2C_UNK arg1) {
    s16 *temp_r0;

    temp_r0                       = func_0205488c(0x24);
    *arg0                         = temp_r0;
    *temp_r0                      = -1;
    M2C_FIELD(*arg0, s16 *, 2)    = 0x7FFF;
    M2C_FIELD(*arg0, s16 *, 4)    = 0x7FFF;
    M2C_FIELD(*arg0, s32 *, 8)    = 0;
    M2C_FIELD(*arg0, s32 *, 0xC)  = 0;
    M2C_FIELD(*arg0, s32 *, 0x10) = 0;
    M2C_FIELD(*arg0, s32 *, 0x14) = 0;
    M2C_FIELD(*arg0, s32 *, 0x18) = 0;
    M2C_FIELD(*arg0, s32 *, 0x1C) = 0;
    M2C_FIELD(*arg0, s32 *, 0x20) = 0;
    func_02001588(arg0, arg1, 0x24);
}
