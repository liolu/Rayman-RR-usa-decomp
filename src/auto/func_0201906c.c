/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

extern s32 data_020c20fc;
extern s32 data_020c2100;

void func_0201906c(s32 arg0) {
    u32 temp_r0;

    temp_r0 = OS_DisableIrq();
    if (data_020c2100 == 0) {
        data_020c2100 = arg0;
        data_020c20fc = arg0;
    } else {
        *(M2C_UNK *) data_020c2100 = arg0;
        data_020c2100              = arg0;
    }
    *(M2C_UNK *) arg0 = 0;
    OS_RestoreIrq(temp_r0);
}
