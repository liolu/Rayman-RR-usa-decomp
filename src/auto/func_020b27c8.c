/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02018a48(u8, s32);                     /* extern */
M2C_UNK func_02018aa4(u8);                          /* extern */
M2C_UNK func_020b2738(void *);                      /* extern */

void func_020b27c8(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 0x2C) == 2) {
        func_02018a48(M2C_FIELD(arg0, u8 *, 0x3C), 0xFFFFFD2D);
    }
    func_02018aa4(M2C_FIELD(arg0, u8 *, 0x3C));
    func_020b2738(arg0);
}
