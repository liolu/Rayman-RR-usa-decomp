/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_0200ccbc(void *);                      /* extern */
M2C_UNK func_0200d498(void *, void *);              /* extern */
s32 func_0200e908();                                /* extern */
M2C_UNK func_0200e91c(s32);                         /* extern */
extern M2C_UNK data_020c0c5c;

void func_0200d5e8(void *arg0) {
    s32 temp_r4;
    void *temp_r0;
    void *temp_r7;

    temp_r4 = func_0200e908();
    temp_r7 = M2C_FIELD(&data_020c0c5c, void **, 4);
loop_1:
    temp_r0 = M2C_FIELD(arg0, void **, 8);
    if (temp_r0 == NULL) {
        M2C_FIELD(arg0, void **, 8) = temp_r7;
        M2C_FIELD(arg0, s32 *, 0xC) = (s32) (M2C_FIELD(arg0, s32 *, 0xC) + 1);
        func_0200d498(temp_r7, arg0);
    } else if (temp_r0 == temp_r7) {
        M2C_FIELD(arg0, s32 *, 0xC) = (s32) (M2C_FIELD(arg0, s32 *, 0xC) + 1);
    } else {
        M2C_FIELD(temp_r7, void **, 0x84) = arg0;
        func_0200ccbc(arg0);
        M2C_FIELD(temp_r7, void **, 0x84) = NULL;
        goto loop_1;
    }
    func_0200e91c(temp_r4);
}
