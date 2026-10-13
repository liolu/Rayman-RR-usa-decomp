#include "m2c.h"

M2C_UNK func_0200d6fc();              /* extern */
M2C_UNK func_020151e8();                            /* extern */
M2C_UNK func_0201700c();         /* extern */
M2C_UNK func_02017400();     /* extern */
M2C_UNK func_02040e34();             /* extern */
M2C_UNK func_02041344();                    /* extern */
u16 *func_02041d5c();               /* extern */
M2C_UNK func_02041da8();                       /* extern */

void func_02061c84(u16 arg0) {
    u16 buf[12];
    s32 var_r8;
    s32 var_r9;
    s32 var_r10;
    u16 *temp_r4;

    func_02040e34(buf, func_02041344(0xA1, arg0), 0x18);
    temp_r4 = func_02041d5c(0x200, 4);
    func_02040e34(temp_r4, func_02041344(0xA0, buf[4]), buf[3] * 2);
    func_02040e34(temp_r4, func_02041344(0x15, *temp_r4), 0x200);
    func_0200d6fc(temp_r4, 0x200);
    func_02017400(temp_r4, 0, 0x200);
    var_r8  = func_02041344(0x9F, buf[2]);
    var_r9  = 0;
    var_r10 = 0;
    do {
        func_02040e34(temp_r4, var_r8, 0x100);
        func_0200d6fc(temp_r4, 0x100);
        func_0201700c(temp_r4, var_r10, 0x100);
        var_r9 += 1;
        var_r8 += 0x100;
        var_r10 += 0x100;
    } while (var_r9 < 0xC0);
    func_02041da8(temp_r4);
    func_020151e8();
}
