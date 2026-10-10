/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_02016024();                                /* extern */
M2C_UNK func_02017cf4(s32, M2C_UNK, s32, u32);      /* extern */
M2C_UNK func_02017f48(M2C_UNK, s32, u32);           /* extern */
extern s32 data_020bbfe0;

void func_02016fa4(M2C_UNK arg0, s32 arg1, u32 arg2) {
    s32 temp_ip;

    temp_ip = func_02016024();
    if ((data_020bbfe0 != -1) && (arg2 > 0x30U)) {
        func_02017cf4(data_020bbfe0, arg0, temp_ip + arg1, arg2);
        return;
    }
    func_02017f48(arg0, temp_ip + arg1, arg2);
}
