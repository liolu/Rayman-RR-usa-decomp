#include "m2c.h"

s16 func_02056e80(void *arg0, s32 arg1) {
    s16 kind;

    kind = ((s16 *) M2C_FIELD(arg0, void **, 0xC))[arg1];
    switch (kind) {
        case 1:
            return M2C_FIELD(((void **) M2C_FIELD(arg0, void **, 0x10))[arg1], s16 *, 0x1E);
        case 3:
            return M2C_FIELD(((void **) M2C_FIELD(arg0, void **, 0x10))[arg1], s16 *, 0xC);
        case 5:
            return M2C_FIELD(((void **) M2C_FIELD(arg0, void **, 0x10))[arg1], s16 *, 0xE);
        case 6:
            return M2C_FIELD(((void **) M2C_FIELD(arg0, void **, 0x10))[arg1], s16 *, 0x12);
        case 7:
            return M2C_FIELD(((void **) M2C_FIELD(arg0, void **, 0x10))[arg1], s16 *, 6);
        case 8:
            return M2C_FIELD(((void **) M2C_FIELD(arg0, void **, 0x10))[arg1], s16 *, 6);
        case 9:
            return M2C_FIELD(((void **) M2C_FIELD(arg0, void **, 0x10))[arg1], s16 *, 6);
        default:
            return -1;
    }
}
