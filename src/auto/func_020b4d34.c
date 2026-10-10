/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_0200d578();                   /* extern */
M2C_UNK func_0200d5e8();                   /* extern */
M2C_UNK func_020b2e08();                      /* extern */
M2C_UNK func_020b4cc8();                      /* extern */
extern s32 data_020e9ca4;
extern M2C_UNK data_020ea528;

void func_020b4d34(void *arg0) {
    func_0200d5e8(&data_020ea528);
    if (data_020e9ca4 != 0) {
        func_0200d5e8(data_020e9ca4 + 0x4C8);
    }
    if (((s32) (M2C_FIELD(arg0, s32 *, 0x110) << 0x1E) >> 0x1F) != 0) {
        func_020b2e08(arg0);
    }
    if (((s32) (M2C_FIELD(arg0, s32 *, 0x110) << 0x1F) >> 0x1F) != 0) {
        M2C_FIELD(arg0, M2C_UNK(**)(void *), 0x16C)(arg0);
    }
    func_020b4cc8(arg0);
    func_0200d578(&data_020ea528);
    if (data_020e9ca4 == 0) {
        return;
    }
    func_0200d578(data_020e9ca4 + 0x4C8);
}
