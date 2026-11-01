#include "m2c.h"

void func_0206d270(u8 *arg0) {
    u32 w;
    u8 *cur;
    u32 val;
    u8 flag;
    u8 *base;
    u8 *obj;
    w    = *(u32 *) (arg0 + 0x2C);
    val  = *(u32 *) (arg0 + 0x38);
    base = *(u8 **) (arg0 + 4);
    flag = ((w & 8) == 8) ? 1 : 0;
    cur  = *(u8 **) (*(u8 **) base + 0xA4);
    if (cur == 0) {
        return;
    }
    do {
        obj = *(u8 **) cur;
        if ((*(u32 *) (obj + 0x30) & 0x10000) != 0x10000) {
            *(u32 *) (obj + 0x38) = val;
            if (flag != 0) {
                *(u32 *) (obj + 0x2C) = *(u32 *) (obj + 0x2C) | 8;
            }
        }
        cur = *(u8 **) (cur + 8);
    } while (cur != 0);
}
