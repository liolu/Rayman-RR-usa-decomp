#include "m2c.h"

M2C_UNK func_02021ce4(s32);                         /* extern */
extern M2C_UNK data_020c5410;
extern M2C_UNK data_020c5414;
extern M2C_UNK data_020c5418;
extern M2C_UNK data_020c5430;

void func_02022ee8(s32 arg0) {
    s32 temp_r4;

    temp_r4 = arg0 * 0x44;
    if ((*((M2C_UNK *) ((s8 *) &data_020c5410 + temp_r4)) != 0) && (*((M2C_UNK *) ((s8 *) &data_020c5414 + temp_r4)) != 0)) {
        if (*((M2C_UNK *) ((s8 *) &data_020c5418 + temp_r4)) != 0) {
            return;
        }
        func_02021ce4(*((M2C_UNK *) ((s8 *) &data_020c5430 + temp_r4)));
        *((M2C_UNK *) ((s8 *) &data_020c5418 + temp_r4)) = 1;
    }
}
