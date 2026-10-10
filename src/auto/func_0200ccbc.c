/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_0200caf0();                            /* extern */
M2C_UNK func_0200d21c(s32, void *);                 /* extern */
s32 func_0200e908();                                /* extern */
M2C_UNK func_0200e91c(s32);                         /* extern */
extern void **data_020c0c54;

void func_0200ccbc(s32 arg0) {
    s32 temp_r5;
    void *temp_r4;

    temp_r5 = func_0200e908();
    temp_r4 = *data_020c0c54;
    if (arg0 != 0) {
        M2C_FIELD(temp_r4, s32 *, 0x78) = arg0;
        func_0200d21c(arg0, temp_r4);
    }
    M2C_FIELD(temp_r4, s32 *, 0x64) = 0;
    func_0200caf0();
    func_0200e91c(temp_r5);
}
