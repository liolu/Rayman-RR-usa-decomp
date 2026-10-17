/* compiler: 1.2/sp3 */
#include "m2c.h"
void *func_020015a8(void *dst, const void *src, u32 n) {
    char *d;
    const char *s;
    if (src >= dst) {
        d = dst;
        s = src;
        while (n != 0) {
            *d++ = *s++;
            n--;
        }
    } else {
        s = (const char *) src + n;
        d = (char *) dst + n;
        while (n != 0) {
            *--d = *--s;
            n--;
        }
    }
    return dst;
}
