/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_0200d578();                   /* extern */
M2C_UNK func_0200d5e8();                   /* extern */
M2C_UNK func_020b3064();                      /* extern */
M2C_UNK func_020b4d34();                      /* extern */
extern s32 data_020e9ca4;
extern M2C_UNK data_020ea528;

void func_020b49dc(s32 arg0, s32 arg1, void *arg2) {
    if (arg0 != M2C_FIELD(arg2, s32 *, 0x12C)) {
        return;
    }
    func_0200d5e8(&data_020ea528);
    if (data_020e9ca4 != 0) {
        func_0200d5e8(data_020e9ca4 + 0x4C8);
    }
    func_020b4d34(arg2);
    M2C_FIELD(arg2, s32 *, 0x12C) = 0;
    M2C_FIELD(arg2, s32 *, 0x130) = 0;
    M2C_FIELD(arg2, s8 *, 0x124)  = 0;
    if ((s32) M2C_FIELD(arg2, s32 *, 0x120) > 0) {
        func_020b3064(arg2);
        M2C_FIELD(arg2, s32 *, 0x120) = 0;
    }
    func_0200d578(&data_020ea528);
    if (data_020e9ca4 == 0) {
        return;
    }
    func_0200d578(data_020e9ca4 + 0x4C8);
}
