/* compiler: 1.2/sp3 */
#include "m2c.h"

extern M2C_UNK func_0201fc70();
extern M2C_UNK func_0201fc74();
extern u8 data_020c4a64[];

void func_0201e4a0(s32 arg0) {
    s32 i;
    u8 *cur;

    if (*(s32 *) (data_020c4a64 + 4) == 0) {
        return;
    }
    cur                             = *(u8 **) (data_020c4a64 + 0x1c);
    i                               = 0;
    *(u8 **) (data_020c4a64 + 0x20) = cur;
    do {
        if (*(s32 *) (cur + 0x18) != 0) {
            func_0201fc70();
            (*(void (**)(s32))(*(u8 **) (data_020c4a64 + 0x20) + 0x18))(arg0);
            func_0201fc74();
        }
        i += 1;
        cur                             = *(u8 **) (data_020c4a64 + 0x20) + 0x54;
        *(u8 **) (data_020c4a64 + 0x20) = cur;
    } while (i < 2);
}
