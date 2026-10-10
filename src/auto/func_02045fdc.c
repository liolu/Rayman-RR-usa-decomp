#include "m2c.h"

extern M2C_UNK data_020cfff0;
extern s32 data_020d00c8;

s16 func_02045fdc(void) {
    if (M2C_FIELD(&data_020cfff0, s16 *, 0) != 0) {
        return M2C_FIELD(&data_020cfff0, s16 *, 2);
    }
    data_020d00c8 = 0x1001;
    return 0x7FFF;
}
