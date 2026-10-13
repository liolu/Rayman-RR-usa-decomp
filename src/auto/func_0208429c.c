#include "engine.h"
#include "m2c.h"

u8 *func_0208429c(u8 *arg0) {
    u8 c;
    u8 *p;

    c = arg0[6];
    p = arg0;
    for (p += 8; p[6] > c && p[7] != 8; p += 8) {
    }
    return p;
}
