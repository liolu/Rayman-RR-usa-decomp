#include "m2c.h"

s32 func_02016044();                                /* extern */
M2C_UNK func_02017d70(s32, s32, M2C_UNK, M2C_UNK);  /* extern */
extern s32 data_020bbfe0;

void func_02061b80(void) {
    s32 temp_r4;

    temp_r4 = data_020bbfe0;
    func_02017d70(temp_r4, func_02016044(), 0, 0xC000);
}
