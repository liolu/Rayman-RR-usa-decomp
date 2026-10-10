/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_0200cc08();                      /* extern */
M2C_UNK func_0200ce50(); /* extern */
M2C_UNK func_0200d674();                      /* extern */
M2C_UNK func_020b5884();             /* extern */
extern M2C_UNK func_020b3c88;

void func_020b4bd4(void *arg0, s32 arg1) {
    func_0200ce50(arg0, &func_020b3c88, arg0, arg0 + 0x4C0, 0x400, arg1);
    func_020b5884(arg0 + 0x4E0, 0);
    func_0200d674(arg0 + 0x4C8);
    M2C_FIELD(arg0, s32 *, 0x4C4) = 0;
    M2C_FIELD(arg0, s32 *, 0x4C0) = (s32) M2C_FIELD(arg0, s32 *, 0x4C4);
    func_0200cc08(arg0);
}
