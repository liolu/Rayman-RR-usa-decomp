/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_020b3450(M2C_UNK);                         /* extern */
extern M2C_UNK func_020b3ce8;
extern M2C_UNK func_020b3cec;
extern M2C_UNK func_020b3d0c;
extern M2C_UNK func_020b3d10;
extern M2C_UNK func_020b3d40;
extern M2C_UNK func_020b3d50;
extern M2C_UNK func_020b3d8c;
extern M2C_UNK func_020b3d9c;

void func_020b3e1c(void *arg0, M2C_UNK arg1) {
    if (func_020b3450(arg1) == 0) {
        M2C_FIELD(arg0, M2C_UNK **, 0x160) = &func_020b3d9c;
        M2C_FIELD(arg0, M2C_UNK **, 0x164) = &func_020b3d8c;
        M2C_FIELD(arg0, M2C_UNK **, 0x168) = &func_020b3d50;
        M2C_FIELD(arg0, M2C_UNK **, 0x16C) = &func_020b3d40;
        return;
    }
    M2C_FIELD(arg0, M2C_UNK **, 0x160) = &func_020b3d10;
    M2C_FIELD(arg0, M2C_UNK **, 0x164) = &func_020b3d0c;
    M2C_FIELD(arg0, M2C_UNK **, 0x168) = &func_020b3cec;
    M2C_FIELD(arg0, M2C_UNK **, 0x16C) = &func_020b3ce8;
}
