/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_0200c34c(M2C_UNK);                     /* extern */
M2C_UNK func_0200c450(M2C_UNK, M2C_UNK *);          /* extern */
M2C_UNK func_0200e2b0(M2C_UNK);                     /* extern */
extern u16 data_020c0f70;
extern s32 data_020c0f74;
extern M2C_UNK data_020c0f78;
extern M2C_UNK func_0200e37c;

void func_0200e404(void) {
    if (data_020c0f70 != 0) {
        return;
    }
    data_020c0f70 = 1;
    func_0200e2b0(0);
    M2C_FIELD(&data_020c0f78, s32 *, 0) = 0;
    M2C_FIELD(&data_020c0f78, s32 *, 4) = 0;
    *(s16 *) 0x04000102                 = 0;
    *(s16 *) 0x04000100                 = 0;
    *(s16 *) 0x04000102                 = 0xC1;
    func_0200c450(8, &func_0200e37c);
    func_0200c34c(8);
    data_020c0f74 = 0;
}
