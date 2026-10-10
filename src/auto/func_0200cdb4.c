/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_0200cd70(s32);                         /* extern */
M2C_UNK func_0200d2ac(void *, M2C_UNK (*)(s32));    /* extern */
M2C_UNK func_0200d364(void *);                      /* extern */
extern s32 data_020c0c44;

void func_0200cdb4(void *arg0, s32 arg1) {
    if (data_020c0c44 != 0) {
        func_0200d2ac(arg0, func_0200cd70);
        M2C_FIELD(arg0, s32 *, 4)    = arg1;
        M2C_FIELD(arg0, s32 *, 0)    = (s32) (M2C_FIELD(arg0, s32 *, 0) | 0x80);
        M2C_FIELD(arg0, s32 *, 0x64) = 1;
        func_0200d364(arg0);
        return;
    }
    func_0200cd70(arg1);
}
