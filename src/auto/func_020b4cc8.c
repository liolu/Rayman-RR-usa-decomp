/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_020b4b60();           /* extern */
M2C_UNK func_020b4c40();                            /* extern */
M2C_UNK func_020b50dc();                      /* extern */
extern s32 data_020e9ca4;
extern M2C_UNK data_020ea540;

void func_020b4cc8(void *arg0) {
    if (((s32) (M2C_FIELD(arg0, s32 *, 0x110) << 0x1F) >> 0x1F) == 0) {
        return;
    }
    func_020b4c40(arg0);
    M2C_FIELD(arg0, M2C_UNK(**)(void *), 0x164)(arg0);
    func_020b4b60(&data_020ea540, arg0);
    if (data_020e9ca4 != 0) {
        func_020b4b60(data_020e9ca4 + 0x4E0, arg0);
    }
    func_020b50dc(arg0);
}
