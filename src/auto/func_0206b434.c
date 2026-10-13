#include "m2c.h"

u8 func_0206b434(u8 *arg0) {
    u8 *p;

    p = *(u8 **) (arg0 + 4);
    p = *(u8 **) (p + 4);
    return (p != NULL) ? p[0x26] : 0x46;
}
