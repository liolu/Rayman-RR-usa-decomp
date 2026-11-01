#include "m2c.h"

u32 func_02084cc4(u8 *arg0, u32 arg1) {
    u8 n;

    n = arg0[0];
    if (n == 0) {
        return 0;
    }
    if (arg1 >= n) {
        if (arg1 != 0xFF) {
            return 0;
        }
    }
    if (arg1 == 0xFF) {
        return *(u32 *) (arg0 + (n - 1) * 4 + 4);
    }
    return *(u32 *) (arg0 + arg1 * 4 + 4);
}
