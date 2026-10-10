#include "m2c.h"

M2C_UNK func_020750dc(void *, M2C_UNK);             /* extern */
M2C_UNK func_02078260(M2C_UNK *, M2C_UNK);          /* extern */
extern M2C_UNK data_020be18c;
extern M2C_UNK data_020dfbb4;

void func_02075240(s32 arg0, s32 arg1) {
    func_020750dc((void *) ((s8 *) &data_020be18c + (arg0 * 0x1F) + 1), 1);
    if (arg1 == 0) {
        return;
    }
    func_02078260(&data_020dfbb4, 0);
}
