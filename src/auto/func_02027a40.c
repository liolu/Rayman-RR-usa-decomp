#include "m2c.h"

extern s32 data_020c57b4;
void func_0201fc70();
void func_0201fc74();

void func_02027a40(u32 arg0) {
    u8 *p;
    u8 *q;

    p                                       = *(u8 **) ((u8 *) &data_020c57b4 + 0xC);
    *(u8 **) ((u8 *) &data_020c57b4 + 0x10) = p;
    if (*(s32 *) (p + 0x18) == 0) {
        return;
    }
    func_0201fc70();
    q = *(u8 **) ((u8 *) &data_020c57b4 + 0x10);
    (*(void (**)(u32))(q + 0x18))(arg0);
    func_0201fc74();
}
