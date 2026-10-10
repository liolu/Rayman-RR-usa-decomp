#include "m2c.h"

M2C_UNK func_0208cf1c(M2C_UNK *, M2C_UNK *, M2C_UNK); /* extern */
extern M2C_UNK data_020dd724;
extern M2C_UNK data_020dd7a4;

void *func_0208cb10(s32 arg0, void *arg1) {
    s32 temp_r1;

    temp_r1 = M2C_FIELD(arg1, s32 *, -8);
    switch (temp_r1) {                              /* irregular */
        case 0x145:
            func_0208cf1c(&data_020dd724, &data_020dd7a4, 0x80);
            break;
        case 0x146:
            func_0208cf1c(&data_020dd7a4, &data_020dd724, 0x80);
            break;
    }
    return arg1;
}
