#include "m2c.h"

M2C_UNK func_0202c664();                   /* extern */
M2C_UNK func_0202e19c();           /* extern */
s32 func_02057748();                          /* extern */
void *func_0205779c(); /* extern */
void *func_02057dd8();                              /* extern */
M2C_UNK func_0206b3c4();                         /* extern */
void *func_02084450();       /* extern */
extern s32 data_020dc194;
extern M2C_UNK data_020dc19c;

void *func_0209a9c8(M2C_UNK arg0, void *arg1, void *arg2) {
    u8 sp4[100];
    s32 temp_r3;
    s32 temp_r7_2;
    void *temp_r0;
    void *temp_r1;
    void *temp_r4;
    void *temp_r4_2;
    void *temp_r7;
    void *var_r0;
    void *var_r8;

    temp_r3 = M2C_FIELD(arg1, s32 *, -8);
    switch (temp_r3) {                              /* irregular */
        case 0x37:
            M2C_FIELD(arg2, void **, 0) = (void *) M2C_FIELD(&data_020dc19c, u8 *, 0xC7A);
            M2C_FIELD(arg2, s32 *, 0xC) = 6;
            return arg1;
        case 0x36:
            temp_r4 = func_02084450();
            func_0206b3c4(M2C_FIELD(M2C_FIELD(arg2, void **, 0), s32 *, 4));
            M2C_FIELD(arg2, void **, 0) = func_02057dd8();
            M2C_FIELD(arg2, s32 *, 0xC) = 6;
            return temp_r4;
        case 0x8F:
            temp_r0                     = func_02084450();
            M2C_FIELD(arg2, s32 *, 0xC) = 0x16;
            return temp_r0;
        case 0x35:
            var_r8    = NULL;
            temp_r1   = func_02084450();
            temp_r7   = M2C_FIELD(arg2, void **, 0);
            temp_r4_2 = func_02084450(arg0, temp_r1, arg2);
            if ((temp_r7 != NULL) && (func_02057748(temp_r7) != 0)) {
                temp_r7_2 = M2C_FIELD(M2C_FIELD(temp_r7, void **, 4), s32 *, 4);
                func_0202c664(sp4);
                func_0202e19c(sp4, arg2);
                var_r8 = func_0205779c(temp_r7_2, data_020dc194, arg0, 0, sp4);
            }
            if (var_r8 == NULL) {
                var_r0 = NULL;
            } else if (M2C_FIELD(var_r8, s32 *, 0) != 2) {
                var_r0 = NULL;
            } else {
                var_r0 = M2C_FIELD(var_r8, void **, 4);
            }
            M2C_FIELD(arg2, void **, 0) = var_r0;
            M2C_FIELD(arg2, s32 *, 0xC) = 0xB;
            return temp_r4_2;
        default:
            return arg1;
    }
}
