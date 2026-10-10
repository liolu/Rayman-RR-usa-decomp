/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_0200cc3c();                            /* extern */
void *func_0200d164(void *);                        /* extern */

void func_0200d530(void *arg0) {
    void *temp_r0;

    if (M2C_FIELD(arg0, s32 *, 0x88) == 0) {
        return;
    }
    do {
        temp_r0                        = func_0200d164(arg0 + 0x88);
        M2C_FIELD(temp_r0, s32 *, 0xC) = 0;
        M2C_FIELD(temp_r0, s32 *, 8)   = 0;
        func_0200cc3c();
    } while (M2C_FIELD(arg0, s32 *, 0x88) != 0);
}
