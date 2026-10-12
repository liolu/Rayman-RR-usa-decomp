#include "m2c.h"

M2C_UNK func_02003984(M2C_UNK *, M2C_UNK *, M2C_UNK, M2C_UNK *); /* extern */
s32 func_02003f74(M2C_UNK, M2C_UNK *, M2C_UNK);     /* extern */
s32 func_0205d0cc();                                /* extern */
M2C_UNK func_0205d0d4();                            /* extern */
M2C_UNK func_02074d4c(s32);                         /* extern */
M2C_UNK func_02074df8(M2C_UNK);                     /* extern */
s32 func_02078e14(M2C_UNK *, M2C_UNK *);            /* extern */
M2C_UNK func_0207956c(M2C_UNK *, M2C_UNK, M2C_UNK, M2C_UNK, s32); /* extern */
M2C_UNK func_0207a134(M2C_UNK *, s32, M2C_UNK, M2C_UNK, s32, s32, s32); /* extern */
M2C_UNK func_0207ab0c(M2C_UNK *, s32);              /* extern */
extern M2C_UNK data_020be7fc;
extern M2C_UNK data_020be804;
extern M2C_UNK data_020be808;
extern M2C_UNK data_020be810;
extern M2C_UNK data_020be81c;
extern M2C_UNK data_020de6a0;
extern M2C_UNK data_020dfbf4;
extern M2C_UNK data_020dfca0;
extern M2C_UNK data_020dfe18;

void func_020779b8(M2C_UNK arg0) {
    u8 spC[52];

    if (M2C_FIELD(&data_020de6a0, s32 *, 0x18) != M2C_FIELD(&data_020de6a0, s32 *, 0x14)) {
        func_02074df8(0xFF);
        func_0207ab0c(&data_020dfe18, M2C_FIELD(&data_020de6a0, s32 *, 0x3C));
        M2C_FIELD(&data_020de6a0, s32 *, 0x30) = (s32) M2C_FIELD(&data_020de6a0, s32 *, 0x40);
        M2C_FIELD(&data_020de6a0, s32 *, 0x34) = (s32) M2C_FIELD(&data_020de6a0, s32 *, 0x44);
        func_02074d4c(M2C_FIELD(&data_020de6a0, s32 *, 0x14));
    }
    if (M2C_FIELD(&data_020de6a0, s32 *, 0x20) == 0) {
        M2C_FIELD(&data_020dfbf4, s32 *, 4) = 0;
        return;
    }
    func_02003984(spC, &data_020be7fc, arg0, &data_020be804);
    if (func_02078e14(&data_020dfbf4, spC) == 0) {
        if (func_02003f74(arg0, &data_020be808, 4) == 0) {
            func_02078e14(&data_020dfbf4, &data_020be810);
            func_0207956c(&data_020dfca0, 0, 0, 0, 0);
        } else {
            func_02078e14(&data_020dfbf4, &data_020be81c);
            func_0207956c(&data_020dfca0, 0, 0, 0, 0);
        }
    }
    func_0205d0d4();
    func_0207a134(&data_020dfbf4, func_0205d0cc(), 0, 0x15, 0x12, 0x12, 0);
}
