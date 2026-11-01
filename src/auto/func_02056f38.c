#include "m2c.h"

void func_02056f38(void *arg0, s16 arg1, u16 arg2) {
    s16 kind;
    void *p;

    kind = ((s16 *) M2C_FIELD(arg0, void **, 12))[arg1];
    switch (kind) {
        case 1:
            p                       = ((void **) M2C_FIELD(arg0, void **, 16))[arg1];
            M2C_FIELD(p, u16 *, 30) = arg2;
            break;
        case 3:
            p                       = ((void **) M2C_FIELD(arg0, void **, 16))[arg1];
            M2C_FIELD(p, u16 *, 12) = arg2;
            break;
        case 5:
            p                       = ((void **) M2C_FIELD(arg0, void **, 16))[arg1];
            M2C_FIELD(p, u16 *, 14) = arg2;
            break;
        case 6:
            p                       = ((void **) M2C_FIELD(arg0, void **, 16))[arg1];
            M2C_FIELD(p, u16 *, 18) = arg2;
            break;
        case 7:
            p                      = ((void **) M2C_FIELD(arg0, void **, 16))[arg1];
            M2C_FIELD(p, u16 *, 6) = arg2;
            break;
        case 8:
            p                      = ((void **) M2C_FIELD(arg0, void **, 16))[arg1];
            M2C_FIELD(p, u16 *, 6) = arg2;
            break;
        case 9:
            p                      = ((void **) M2C_FIELD(arg0, void **, 16))[arg1];
            M2C_FIELD(p, u16 *, 6) = arg2;
            break;
        default:
            return;
    }
}
