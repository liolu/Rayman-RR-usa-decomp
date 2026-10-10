#include "m2c.h"

M2C_UNK func_0202b788(void *, M2C_UNK);             /* extern */
M2C_UNK func_0202b828(void *, M2C_UNK);             /* extern */
M2C_UNK func_0202b850(void *, M2C_UNK);             /* extern */
M2C_UNK func_0202b944(s32, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_0204a8a0(s32, M2C_UNK);                /* extern */

void func_02067cb0(void *arg0) {
    func_0204a8a0(M2C_FIELD(arg0, s32 *, 0x2C), 0x32);
    func_0202b850(arg0 + 4, 0x32);
    func_0202b850(arg0 + 0x10, 0x32);
    func_0202b788(arg0 + 3, 0x32);
    func_0202b828(arg0 + 0x20, 0x32);
    func_0202b828(arg0 + 0x24, 0x32);
    func_0202b788(arg0, 0x32);
    func_0202b788(arg0 + 1, 0x32);
    func_0202b788(arg0 + 2, 0x32);
    func_0202b828(arg0 + 0x1C, 0x32);
    func_0202b828(arg0 + 0x28, 0x32);
    func_0202b944(M2C_FIELD(arg0, s32 *, 0x2C) + 0x2C, 0xC, 0x32);
    func_0202b944(M2C_FIELD(arg0, s32 *, 0x2C) + 0x44, 0xC, 0x32);
    func_0202b944(M2C_FIELD(arg0, s32 *, 0x2C) + 0x38, 0xC, 0x32);
    func_0202b944(M2C_FIELD(arg0, s32 *, 0x2C) + 0x50, 0xC, 0x32);
    func_0202b828(M2C_FIELD(arg0, s32 *, 0x2C) + 0x6C, 0x32);
    func_0202b828(M2C_FIELD(arg0, s32 *, 0x2C) + 0x70, 0x32);
}
