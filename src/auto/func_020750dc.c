#include "m2c.h"

M2C_UNK func_02003984(M2C_UNK *, M2C_UNK *, M2C_UNK, M2C_UNK *); /* extern */
M2C_UNK func_0200dd9c(M2C_UNK, M2C_UNK, M2C_UNK *); /* extern */
M2C_UNK *func_0200de10(M2C_UNK, M2C_UNK, M2C_UNK);  /* extern */
M2C_UNK func_02017398(M2C_UNK *, M2C_UNK, s32);     /* extern */
s32 func_02077fc4(M2C_UNK *, M2C_UNK *, M2C_UNK *, M2C_UNK); /* extern */
M2C_UNK func_02078194(s32, s32, M2C_UNK);           /* extern */
M2C_UNK func_0207ab5c(M2C_UNK *, M2C_UNK, M2C_UNK *, M2C_UNK); /* extern */
extern M2C_UNK data_020be768;
extern M2C_UNK data_020be770;
extern M2C_UNK data_020be774;
extern M2C_UNK data_020be778;
extern M2C_UNK data_020be780;
extern M2C_UNK data_020be784;
extern M2C_UNK data_020be788;
extern M2C_UNK data_020be790;
extern M2C_UNK data_020be794;
extern M2C_UNK data_020de6a0;
extern M2C_UNK data_020defa0;
extern void *data_020dfbb0;
extern M2C_UNK data_020dfbb4;
extern M2C_UNK data_020dfe24;

s32 func_020750dc(M2C_UNK arg0, M2C_UNK arg1) {
    u8 sp0[32];
    M2C_UNK *temp_r4;
    s32 temp_r0;

    temp_r4 = func_0200de10(0, -1, 0x6000);
    func_02003984(sp0, &data_020be768, arg0, &data_020be770);
    temp_r0 = func_02077fc4(&data_020be774, sp0, temp_r4, arg1);
    if (temp_r0 == 0) {
        return 0;
    }
    M2C_FIELD(&data_020dfbb4, s32 *, 0x2C) = temp_r0;
    func_0207ab5c(&data_020dfe24, 0, temp_r4, temp_r0);
    func_02003984(sp0, &data_020be778, arg0, &data_020be780);
    func_02017398(temp_r4, 0x20, func_02077fc4(&data_020be784, sp0, temp_r4, 1));
    if (M2C_FIELD(&data_020de6a0, s32 *, 8) != 0) {
        func_02017398(temp_r4, 0, 2);
    }
    func_02003984(sp0, &data_020be788, arg0, &data_020be790);
    func_02077fc4(&data_020be794, sp0, &data_020defa0, 1);
    func_02078194(M2C_FIELD(data_020dfbb0, s32 *, 0x18), (s32) M2C_FIELD(data_020dfbb0, s32 *, 0x20) >> 1, 1);
    func_0200dd9c(0, -1, temp_r4);
    return 1;
}
