#include "m2c.h"

M2C_UNK func_02001588(s32, s32, s32);               /* extern */
s32 func_0201a588(s32);                             /* extern */
M2C_UNK func_0201a62c(s32 *);                       /* extern */
s32 func_0205488c(s32);                             /* extern */
M2C_UNK func_0207af6c(void *, void *);              /* extern */
extern s32 data_020dfe5c;
extern s32 data_020dfe68;
extern s16 data_020dfe74;

void func_0207b03c(void *arg0, void *arg1) {
    s32 sp0;
    s16 temp_r1;

    M2C_FIELD(arg1, s32 *, 8) = func_0201a588(M2C_FIELD(arg0, s16 *, 0x38) * 2);
    func_0207af6c(arg0, arg1);
    if ((s32) M2C_FIELD(arg1, s16 *, 4) < (s32) data_020dfe74) {
        func_0201a62c(arg1 + 8);
        M2C_FIELD(arg1, s32 *, 8) = 0;
        return;
    }
    sp0                       = M2C_FIELD(arg1, s32 *, 8);
    M2C_FIELD(arg1, s32 *, 8) = func_0205488c(M2C_FIELD(arg0, s16 *, 0x38) * 2);
    data_020dfe68 += M2C_FIELD(arg0, s16 *, 0x38) * 2;
    func_02001588(M2C_FIELD(arg1, s32 *, 8), sp0, M2C_FIELD(arg0, s16 *, 0x38) * 2);
    func_0201a62c(&sp0);
    data_020dfe68 += M2C_FIELD(arg0, s16 *, 0x36) * 4;
    temp_r1 = M2C_FIELD(arg1, s16 *, 4);
    if ((s32) temp_r1 > (s32) data_020dfe5c) {
        data_020dfe5c = (s32) temp_r1;
    }
    data_020dfe68 += M2C_FIELD(arg1, s16 *, 4) * 4;
}
