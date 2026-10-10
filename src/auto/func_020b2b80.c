/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02018954(s32, M2C_UNK, s32, M2C_UNK);  /* extern */
s32 func_02018ddc();                                /* extern */
M2C_UNK func_02018e1c(s32);                         /* extern */
M2C_UNK func_02018eac(M2C_UNK);                     /* extern */

void func_020b2b80(void *arg0) {
    s32 temp_r4;

    if (((s32) (M2C_FIELD(arg0, s32 *, 0x24) << 0x1E) >> 0x1F) == 0) {
        return;
    }
    func_02018954(M2C_FIELD(arg0, s32 *, 0x44), 0, 1 << M2C_FIELD(arg0, s32 *, 0x40), 0);
    temp_r4 = func_02018ddc();
    func_02018eac(1);
    func_02018e1c(temp_r4);
}
