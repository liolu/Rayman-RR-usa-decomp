#include "m2c.h"

s32 func_0201a588(s32);                             /* extern */
M2C_UNK func_0201a62c(void *);                      /* extern */

void func_0206529c(void *arg0, u32 arg1) {
    if (arg1 <= (u32) M2C_FIELD(arg0, u16 *, 0x8E)) {
        return;
    }
    if (M2C_FIELD(arg0, s32 *, 0xA8) != 0) {
        func_0201a62c(arg0 + 0xA8);
    }
    M2C_FIELD(arg0, s32 *, 0xA8) = func_0201a588(arg1 * 8);
    M2C_FIELD(arg0, u16 *, 0x8E) = (u16) arg1;
}
