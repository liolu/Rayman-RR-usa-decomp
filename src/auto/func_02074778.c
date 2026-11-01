#include "m2c.h"

s32 func_02074778(void *arg0) {
    u8 *p;

    p = *(u8 **) arg0;
    while (p != 0) {
        if (p[0x28] != 0) {
            return 1;
        }
        p = *(u8 **) (p + 0x2C);
    }
    return 0;
}
