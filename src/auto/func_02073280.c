#include "m2c.h"

extern M2C_UNK data_020de148;
extern s32 data_020de150;

s32 func_02073280(void) {
    if ((M2C_FIELD(&data_020de148, u16 *, 4) != 0) && (data_020de150 == 1)) {
        return 1;
    }
    return 0;
}
