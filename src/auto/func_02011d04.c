/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 OS_DisableIrq();                                /* extern */
M2C_UNK OS_RestoreIrq(s32);                         /* extern */
M2C_UNK func_0200ccbc(M2C_UNK);                     /* extern */
M2C_UNK func_0200d6c4(s32 *, M2C_UNK);              /* extern */
M2C_UNK func_0200d6fc(s32 *, M2C_UNK);              /* extern */
M2C_UNK func_0200d720();                            /* extern */
M2C_UNK func_0200e96c(M2C_UNK);                     /* extern */
s32 func_02018424(M2C_UNK, s32 *, M2C_UNK);         /* extern */
s32 func_020184d8(M2C_UNK, M2C_UNK);                /* extern */

s32 func_02011d04(void *arg0, s32 *arg1, s32 arg2) {
    s32 *temp_r10;
    s32 temp_r0;
    s32 temp_r10_2;
    s32 var_r4;

    var_r4 = arg2;
    if (!(M2C_FIELD(arg0, volatile s32 *, 0x114) & 2)) {
        M2C_FIELD(arg0, volatile s32 *, 0x114) = (s32) (M2C_FIELD(arg0, volatile s32 *, 0x114) | 2);
        if (func_020184d8(0xB, 1) == 0) {
            do {
                func_0200e96c(0x64);
            } while (func_020184d8(0xB, 1) == 0);
        }
        func_02011d04(arg0, NULL, 1);
    }
    func_0200d6fc(M2C_FIELD(arg0, s32 **, 0), 0x60);
    func_0200d720();
loop_6:
    M2C_FIELD(arg0, s32 **, 4)             = arg1;
    M2C_FIELD(arg0, volatile s32 *, 0x114) = (s32) (M2C_FIELD(arg0, volatile s32 *, 0x114) | 0x20);
    do {

    } while (func_02018424(0xB, arg1, 1) < 0);
    if (arg1 == NULL) {
        temp_r10 = M2C_FIELD(arg0, s32 **, 0);
        do {

        } while (func_02018424(0xB, temp_r10, 1) < 0);
    }
    temp_r10_2 = OS_DisableIrq();
    if (M2C_FIELD(arg0, volatile s32 *, 0x114) & 0x20) {
        do {
            func_0200ccbc(0);
        } while (M2C_FIELD(arg0, volatile s32 *, 0x114) & 0x20);
    }
    OS_RestoreIrq(temp_r10_2);
    func_0200d6c4(M2C_FIELD(arg0, s32 **, 0), 0x60);
    temp_r0 = *M2C_FIELD(arg0, s32 **, 0);
    if (temp_r0 == 4) {
        var_r4 -= 1;
        if (var_r4 > 0) {
            goto loop_6;
        }
    }
    if (temp_r0 == 0) {
        return 1;
    }
    return 0;
}
