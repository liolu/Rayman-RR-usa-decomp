/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_0200cc08(void *);                      /* extern */
M2C_UNK func_0200ce50(void *, M2C_UNK *, void *, M2C_UNK *, s32, s32); /* extern */
s32 OS_DisableIrq();                                /* extern */
M2C_UNK OS_RestoreIrq(s32);                         /* extern */
M2C_UNK func_02012a0c(M2C_UNK *);                   /* extern */
extern void *data_020c1b48;
extern M2C_UNK data_020c1b4c;
extern M2C_UNK data_020c1f70;
extern M2C_UNK func_02012920;

void func_02012a20(void *arg0) {
    s32 temp_r4;

    temp_r4 = OS_DisableIrq();
    if (data_020c1b48 == NULL) {
        data_020c1b48 = arg0;
        func_02012a0c(arg0 + 0xC4);
        func_02012a0c(&data_020c1b4c);
        M2C_FIELD(arg0, s32 *, 0xC0) = 0;
        func_0200ce50(arg0, &func_02012920, arg0, &data_020c1f70, 0x400, 0x14);
        func_0200cc08(arg0);
    }
    OS_RestoreIrq(temp_r4);
}
