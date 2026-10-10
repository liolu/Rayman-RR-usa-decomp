#include "m2c.h"

M2C_UNK func_02088e60(s32 *);                       /* extern */

s32 func_020838f8(s32 *arg0, s32 arg1, s32 *arg2) {
    func_02088e60(arg2);
    *arg0 = *arg2;
    return 1;
}
