/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_020b25d0(s32);                         /* extern */
M2C_UNK func_020b5784(M2C_UNK *, void *);           /* extern */
extern M2C_UNK data_020e9b58;

void func_020b2c9c(void *arg0) {
    func_020b25d0(M2C_FIELD(arg0, s32 *, 0x40));
    func_020b5784(&data_020e9b58, arg0);
    M2C_FIELD(arg0, s32 *, 0x24) = (s32) (M2C_FIELD(arg0, s32 *, 0x24) & ~1);
}
