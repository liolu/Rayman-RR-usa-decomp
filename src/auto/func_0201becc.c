#include "m2c.h"
extern s16 data_020c3e8c[];
extern u32 data_020c3f10[];
void func_0201becc(u32 *arg0) {
    s16 i;
    s16 cnt;
    u32 cur;
    if ((arg0[12] & 0x20) != 0x20) {
        return;
    }
    arg0[12] = arg0[12] & ~0x21;
    if (data_020c3e8c[0] == 0) {
        return;
    }
    for (i = 0; i < 0x20; i++) {
        cur = data_020c3f10[i];
        if (cur == (u32) arg0) {
            data_020c3e8c[0]--;
            cnt = data_020c3e8c[0];
            if (cnt != 0) {
                data_020c3f10[i] = data_020c3f10[cnt];
            }
            data_020c3f10[cnt] = 0;
            return;
        }
    }
}
