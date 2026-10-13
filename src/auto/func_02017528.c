/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020156a8();                                /* extern */
extern M2C_UNK data_020bb594;
extern s32 data_020c2020;
extern s32 data_020c2024;

void func_02017528(void) {
    s32 temp_r0;

    temp_r0       = func_020156a8();
    data_020c2024 = temp_r0;
    data_020c2020 = *((u16 *) ((s8 *) &data_020bb594 + ((temp_r0 >> 4) * 2))) << 0xC;
}
