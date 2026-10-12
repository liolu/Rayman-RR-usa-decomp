#include "m2c.h"

M2C_UNK func_02021d10(s32);                         /* extern */
extern M2C_UNK data_020c5410;
extern M2C_UNK data_020c5418;
extern M2C_UNK data_020c5430;

void func_02022f48(s32 arg0) {
    s32 temp_r5;

    temp_r5 = arg0 * 0x44;
    if ((*((M2C_UNK *) ((s8 *) &data_020c5410 + temp_r5)) != 0) && (*((M2C_UNK *) ((s8 *) &data_020c5418 + temp_r5)) != 0)) {
        func_02021d10(*((M2C_UNK *) ((s8 *) &data_020c5430 + temp_r5)));
        *((M2C_UNK *) ((s8 *) &data_020c5418 + temp_r5)) = 0;
    }
}
