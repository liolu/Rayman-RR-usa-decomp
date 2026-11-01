#include "m2c.h"

s32 func_02084fa4(u8 *arg0) {
    u8 cnt;
    u8 temp_r3;
    u32 temp_ip;
    u8 *p;

    temp_r3 = arg0[-2];
    cnt     = 0;
    temp_ip = temp_r3 + 1;
    p       = arg0;
    goto cond;
loop:
    if (p[6] == temp_ip) {
        cnt = cnt + 1;
    }
    p += 8;
cond:
    if (p[6] <= temp_r3) {
        goto done;
    }
    if (p[7] != 8) {
        goto loop;
    }
done:
    return cnt;
}
