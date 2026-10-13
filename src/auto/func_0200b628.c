#include "m2c.h"

M2C_UNK func_0200b750(M2C_UNK *);                   /* extern */
M2C_UNK *func_0200b768(M2C_UNK);                    /* extern */
s32 func_0200b780(M2C_UNK *);                       /* extern */
M2C_UNK func_0200d6fc(M2C_UNK *, s32);              /* extern */
M2C_UNK func_02013f34(M2C_UNK *, M2C_UNK *, s32);   /* extern */
M2C_UNK func_02014060(M2C_UNK *);                   /* extern */
s32 func_020140a8(M2C_UNK *, M2C_UNK *);            /* extern */
M2C_UNK func_020143a0(M2C_UNK *);                   /* extern */
M2C_UNK func_020171a4(M2C_UNK *, s32, s32);         /* extern */
M2C_UNK func_02017330(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
extern M2C_UNK data_020b6348;
extern M2C_UNK data_020b646c;
extern M2C_UNK data_020bbfac;
extern s32 data_020bcc3c;

void func_0200b628(s32 arg0) {
    u8 sp0[72];
    s32 var_r6;
    s32 var_r7;
    M2C_UNK *temp_r0;
    s32 temp_r4;
    s32 var_r9;

    data_020bcc3c = arg0;
    if (arg0 == 0) {
        func_020143a0(sp0);
        if (func_020140a8(sp0, &data_020bbfac) == 0) {
            return;
        }
        var_r6  = 0;
        temp_r4 = func_0200b780(sp0);
        temp_r0 = func_0200b768(0x400);
        func_0200d6fc(temp_r0, 0x200);
        func_02013f34(sp0, temp_r0, 0x200);
        func_02017330(temp_r0, 0, 0x200);
        var_r7 = temp_r4 - 0x200;
        if (var_r7 > 0) {
            do {
                if (var_r7 > 0x400) {
                    var_r9 = 0x400;
                } else {
                    var_r9 = var_r7;
                }
                func_0200d6fc(temp_r0, var_r9);
                func_02013f34(sp0, temp_r0, var_r9);
                func_020171a4(temp_r0, var_r6, var_r9);
                var_r7 -= var_r9;
                var_r6 += var_r9;
            } while (var_r7 > 0);
        }
        func_02014060(sp0);
        func_0200b750(temp_r0);
        return;
    }
    func_02017330(&data_020b6348, 0, 0x20);
    func_020171a4(&data_020b646c, 0, 0x1000);
}
