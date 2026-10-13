#include "m2c.h"

void *func_02001588(void *arg0, const void *arg1, u32 arg2) {
    s8 *d       = (s8 *) arg0;
    const s8 *s = (const s8 *) arg1;
    if (arg2 != 0) {
        do {
            *d++ = *s++;
        } while (--arg2 != 0);
    }
    return arg0;
}
