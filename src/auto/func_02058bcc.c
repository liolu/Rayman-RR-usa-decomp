#include "m2c.h"

M2C_UNK func_0201a62c(s32 *);                       /* extern */

void func_02058bcc(s32 *arg0) {
    s32 sp0;
    s32 temp_r0;

    temp_r0 = *arg0;
    sp0     = temp_r0;
    if (temp_r0 == 0) {
        return;
    }
    func_0201a62c(&sp0);
    sp0 = 0;
}
