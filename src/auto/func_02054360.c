#include "m2c.h"
extern s32 func_020543d0(M2C_UNK);
void func_02054360(u8 *arg0, s16 *arg1, M2C_UNK arg2) {
    s16 *flags;
    s16 cnt;
    s16 i;
    cnt = *(s16 *) (arg0 + 0x38);
    i   = 0;
    if (cnt > 0) {
        flags = *(s16 **) (arg0 + 0xc);
        do {
            if (flags[i] == 0) {
                break;
            }
            i++;
        } while (cnt > i);
    }
    if (i == cnt) {
        return;
    }
    (*(s16 **) (arg0 + 0xc))[i]          = 8;
    *arg1                                = i;
    ((s32 *) *(s32 **) (arg0 + 0x10))[i] = func_020543d0(arg2);
}
