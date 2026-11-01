#include "m2c.h"

extern s32 func_02086aa4(void *, void *, M2C_UNK);

s32 func_020860e4(void **arg0, s32 arg1, s32 arg2, M2C_UNK arg3) {
    u8 *head;
    u8 *hit;
    u8 *cur;

    if (arg0 != NULL && arg1 != 0 && arg2 != 0) {
        head = (u8 *) *arg0;
        hit  = head;
        if (hit != NULL) {
            do {
                if (*(s32 *) (hit + 0xc) == arg2) {
                    break;
                }
                hit = *(u8 **) hit;
            } while (hit != NULL);
        }
        if (hit != NULL && head != NULL) {
            cur = head;
            do {
                if (*(s32 *) (cur + 0xc) == arg1) {
                    return func_02086aa4(cur, hit, arg3);
                }
                cur = *(u8 **) cur;
            } while (cur != NULL);
        }
    }
    return -1;
}
