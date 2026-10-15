#include "m2c.h"

M2C_UNK MI_UncompressLZ8(void *, M2C_UNK *);
M2C_UNK *func_020413b4(M2C_UNK, u16);
void *func_0204141c(M2C_UNK, u16, M2C_UNK *, u16);
M2C_UNK func_02041da8(void *);
s32 func_0204b3d0(u16);
M2C_UNK *func_0205488c(M2C_UNK);
M2C_UNK *func_020548e0(u16);
extern M2C_UNK data_020db9e8;

M2C_UNK *func_0204b83c(u16 arg0) {
    M2C_UNK *var_r4;
    u16 temp_r6;
    u16 temp_r7;
    M2C_UNK *var_r8;
    u16 temp_r9;
    void *temp_r0;
    void *temp_r0_2;

    var_r4 = func_020413b4(0x18, arg0);
    if (var_r4 == NULL) {
        var_r4  = func_0205488c(0xC);
        temp_r0 = func_0204141c(0x18, arg0, var_r4, 0xAU);
        if (M2C_FIELD(temp_r0, u16 *, 0) != 0xFFFF) {
            M2C_FIELD(var_r4, s32 *, 0) = func_0204b3d0(M2C_FIELD(temp_r0, u16 *, 0));
        }
        M2C_FIELD(var_r4, M2C_UNK **, 4) = NULL;
        if (M2C_FIELD(temp_r0, u16 *, 2) != 0xFFFF) {
            temp_r9 = M2C_FIELD(temp_r0, u16 *, 4);
            if (temp_r9 != 0) {
                temp_r7 = M2C_FIELD(temp_r0, u16 *, 6);
                temp_r6 = M2C_FIELD(temp_r0, u16 *, 8);
                var_r8  = func_020413b4(0x17, temp_r7);
                if (var_r8 == NULL) {
                    var_r8    = func_020548e0(temp_r9);
                    temp_r0_2 = func_0204141c(0x17, temp_r7, var_r8, temp_r6);
                    MI_UncompressLZ8(temp_r0_2, var_r8);
                    func_02041da8(temp_r0_2);
                }
                M2C_FIELD(var_r4, M2C_UNK **, 4) = var_r8;
                M2C_FIELD(var_r4, s32 *, 8)      = (s32) M2C_FIELD(temp_r0, u16 *, 4);
            } else {
                M2C_FIELD(var_r4, M2C_UNK **, 4) = &data_020db9e8;
                M2C_FIELD(var_r4, s32 *, 8)      = 4;
            }
        }
        func_02041da8(temp_r0);
    }
    return var_r4;
}
