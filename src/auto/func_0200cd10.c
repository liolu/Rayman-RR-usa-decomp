/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_0200c8b8();                            /* extern */
M2C_UNK func_0200c8f0();                            /* extern */
M2C_UNK func_0200caf0();                            /* extern */
M2C_UNK func_0200cc3c(void *);                      /* extern */
M2C_UNK func_0200d0b4(void *);                      /* extern */
M2C_UNK func_0200d194(s32, void *);                 /* extern */
M2C_UNK func_0200d530(void *);                      /* extern */
M2C_UNK func_0200eb98();                            /* extern */
extern void **data_020c0c54;

void func_0200cd10(void) {
    s32 temp_r0;
    void *temp_r4;

    temp_r4 = *data_020c0c54;
    func_0200c8f0();
    func_0200d530(temp_r4);
    temp_r0 = M2C_FIELD(temp_r4, s32 *, 0x78);
    if (temp_r0 != 0) {
        func_0200d194(temp_r0, temp_r4);
    }
    func_0200d0b4(temp_r4);
    M2C_FIELD(temp_r4, s32 *, 0x64) = 2;
    func_0200cc3c(temp_r4 + 0x9C);
    func_0200c8b8();
    func_0200caf0();
    func_0200eb98();
}
