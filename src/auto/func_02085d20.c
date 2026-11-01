#include "m2c.h"

s32 func_02085d20(u8 **arg0, s32 arg1, s32 *arg2) {
    u8 *p;

    if (arg0 != NULL && arg1 != 0) {
        p = *arg0;
        if (p != NULL) {
            do {
                if (*(s32 *) (p + 0xC) == arg1) {
                    *arg2 = *(s32 *) (p + 0x18);
                    return 0;
                }
                p = *(u8 **) p;
            } while (p != NULL);
        }
    }
    return -1;
}
