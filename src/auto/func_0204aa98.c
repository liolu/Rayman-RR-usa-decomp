#include "m2c.h"

s32 func_0200a3b8();                                /* extern */
M2C_UNK func_0200a4bc(s32, s32);                    /* extern */
void *func_02041d5c(M2C_UNK, M2C_UNK);              /* extern */
extern s32 data_020cf9dc;

void *func_0204aa98(s32 arg0) {
    s32 temp_r2;
    void *temp_r0;
    void *temp_r5;

    temp_r0 = func_02041d5c(0xC, 4);
    if (temp_r0 == NULL) {
        return NULL;
    }
    temp_r2 = arg0 * 0xC;
    temp_r5 = data_020cf9dc + temp_r2;
    func_0200a4bc(0x45800000, *(s32 *) (data_020cf9dc + temp_r2));
    M2C_FIELD(temp_r0, s32 *, 0) = func_0200a3b8();
    func_0200a4bc(0x45800000, M2C_FIELD(temp_r5, s32 *, 4));
    M2C_FIELD(temp_r0, s32 *, 4) = func_0200a3b8();
    func_0200a4bc(0x45800000, M2C_FIELD(temp_r5, s32 *, 8));
    M2C_FIELD(temp_r0, s32 *, 8) = func_0200a3b8();
    return temp_r0;
}