/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_02016044();                                /* extern */
M2C_UNK func_02017c7c(s32, M2C_UNK, s32, u32);      /* extern */
M2C_UNK func_02017f18(M2C_UNK, s32, u32);           /* extern */
extern s32 data_020bbfe0;

void func_0201700c(M2C_UNK arg0, s32 arg1, u32 arg2) {
    s32 temp_ip;

    temp_ip = func_02016044();
    if ((data_020bbfe0 != -1) && (arg2 > 0x1CU)) {
        func_02017c7c(data_020bbfe0, arg0, temp_ip + arg1, arg2);
        return;
    }
    func_02017f18(arg0, temp_ip + arg1, arg2);
}
