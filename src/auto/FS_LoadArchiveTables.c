#include "m2c.h"

long func_0202b174(long p);

s32 FS_LoadArchiveTables(u8 *tbl, u32 a1, u32 a2) {
    u8 *prev;
    u8 *cur;
    s32 found;
    s32 key;
    u8 *root;
    u32 id;

    root  = tbl;
    id    = a1;
    prev  = 0;
    found = 0;
    cur   = *(u8 **) root;
    key   = func_0202b174(a2);
    while (cur != 0) {
        if (*(u32 *) (cur + 4) == id && (*(u16 *) (cur + 0x10) & 0x3ff) == key) {
            found = 1;
            break;
        }
        prev = cur;
        cur  = *(u8 **) cur;
    }
    if (found != 0) {
        if (prev != 0) {
            *(u8 **) prev = *(u8 **) cur;
        } else {
            *(u8 **) root = *(u8 **) cur;
        }
        if (*(u8 **) cur == 0) {
            *(u8 **) (root + 4) = prev;
        }
    }
    return found;
}
