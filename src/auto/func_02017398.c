/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_02017c7c(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
void func_02017f18(M2C_UNK, M2C_UNK, M2C_UNK);

extern s32 data_020bbfe0;

void func_02017398(s32 arg0, s32 arg1, s32 arg2) {
    if ((data_020bbfe0 != -1) && ((u32) arg2 > 0x1CU)) {
        func_02017c7c(data_020bbfe0, arg0, arg1 + 0x05000400, arg2);
        return;
    }
    func_02017f18(arg0, arg1 + 0x05000400, arg2);
}
