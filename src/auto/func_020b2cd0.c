/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_0200fd30(void *);                      /* extern */
M2C_UNK func_0200fd48(void *);                      /* extern */
M2C_UNK func_02018954(s32, M2C_UNK, s32, M2C_UNK);  /* extern */
s32 func_02018ddc();                                /* extern */
M2C_UNK func_02018e1c(s32);                         /* extern */
M2C_UNK func_02018eac(M2C_UNK);                     /* extern */
M2C_UNK func_020b2c9c(void *);                      /* extern */

void func_020b2cd0(void *arg0) {
    s32 temp_r5;

    if (((s32) (M2C_FIELD(arg0, s32 *, 0x24) << 0x1E) >> 0x1F) != 0) {
        func_02018954(M2C_FIELD(arg0, s32 *, 0x44), 0, 1 << M2C_FIELD(arg0, s32 *, 0x40), 0);
        func_0200fd48(arg0 + 8);
        func_0200fd30(arg0 + 0x14);
        M2C_FIELD(arg0, s32 *, 0x24) = (s32) (M2C_FIELD(arg0, s32 *, 0x24) & ~2);
        temp_r5                      = func_02018ddc();
        func_02018eac(1);
        func_02018e1c(temp_r5);
    }
    func_020b2c9c(arg0);
}
