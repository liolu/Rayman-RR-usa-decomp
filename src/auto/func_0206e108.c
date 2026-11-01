#include "m2c.h"

s32 func_0205ea28(void *);
s32 func_0205ea78(void *, s32);

s32 func_0206e108(u8 *arg0, s32 arg1) {
    u8 *temp_r4;

    temp_r4 = *(u8 **) *(u8 **) (arg0 + 4);
    if (arg1 == *(s32 *) (temp_r4 + 8)) {
        return 1;
    }
    if (func_0205ea28(*(void **) (temp_r4 + 0x94)) == 0) {
        if (func_0205ea78(*(void **) (temp_r4 + 0x94), arg1) != 0) {
            return 0;
        }
        if (*(u8 *) (*(u8 **) (temp_r4 + 0x94) + 0x1E) == 1) {
            return 0;
        }
    }
    return 1;
}
