#include "m2c.h"

M2C_UNK func_020015f4(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
s32 func_02047434(s32, s32, u8);                    /* extern */
s32 func_02047518(s32, M2C_UNK *);                  /* extern */
M2C_UNK func_0204757c(s32);                         /* extern */
s32 func_020475dc(s32);                             /* extern */
extern M2C_UNK data_020bd49d;
extern M2C_UNK data_020dc19c;
extern M2C_UNK data_020de0d4;
extern M2C_UNK data_020de0f7;

s32 func_02072f54(s32 arg0) {
    s32 temp_r4;

    if (((s8 *) &data_020de0f7)[arg0] == -1) {
        func_0204757c(arg0 - 1);
        func_020015f4(&data_020bd49d, 0, 0xC0);
    }
    temp_r4 = arg0 - 1;
    if ((func_02047434(temp_r4, (temp_r4 * 0xA) + (s32) &data_020de0d4, M2C_FIELD(&data_020dc19c, u8 *, 0xC78)) != 0) &&
        (func_02047518(temp_r4, &data_020bd49d) != 0) && (func_020475dc(temp_r4) != 0)) {
        return 1;
    }
    return 0;
}
