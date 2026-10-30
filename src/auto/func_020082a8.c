#include "m2c.h"

typedef struct {
    u16 a[19];
} Buf;

extern u8 data_020bbecc;
extern u8 data_020bbefc;
extern u8 data_020bbf24;
extern u8 data_020bbf3c;
extern u8 data_020bbf4c;
extern u8 data_020bbf54;
extern u8 data_020bbf5c;
extern u8 data_020bbf64;
extern u8 data_020bbf6c;
extern u8 data_020bbf70;
extern u8 data_020bbf74;
extern u8 data_020bbf78;
extern u8 data_020bbf7c;
extern u8 data_020bbf80;
extern u8 data_020bbf84;
extern u8 data_020bbf88;
extern u8 data_020bbf8c;
extern u8 data_020bbf90;
extern u8 data_020bbf94;
extern u8 data_020bbf98;
extern u8 data_020bbf9c;

void __str2dec(Buf *, void *, s32);
void __timesdec(Buf *, Buf *, Buf *);

void func_020082a8(Buf *dst, s32 n) {
    Buf tmp2;
    Buf tmp;

    switch (n) {
        case -64:
            __str2dec(dst, &data_020bbecc, -20);
            return;
        case -53:
            __str2dec(dst, &data_020bbefc, -16);
            return;
        case -32:
            __str2dec(dst, &data_020bbf24, -10);
            return;
        case -16:
            __str2dec(dst, &data_020bbf3c, -5);
            return;
        case -8:
            __str2dec(dst, &data_020bbf4c, -3);
            return;
        case -7:
            __str2dec(dst, &data_020bbf54, -3);
            return;
        case -6:
            __str2dec(dst, &data_020bbf5c, -2);
            return;
        case -5:
            __str2dec(dst, &data_020bbf64, -2);
            return;
        case -4:
            __str2dec(dst, &data_020bbf6c, -2);
            return;
        case -3:
            __str2dec(dst, &data_020bbf70, -1);
            return;
        case -2:
            __str2dec(dst, &data_020bbf74, -1);
            return;
        case -1:
            __str2dec(dst, &data_020bbf78, -1);
            return;
        case 0:
            __str2dec(dst, &data_020bbf7c, 0);
            return;
        case 1:
            __str2dec(dst, &data_020bbf80, 0);
            return;
        case 2:
            __str2dec(dst, &data_020bbf84, 0);
            return;
        case 3:
            __str2dec(dst, &data_020bbf88, 0);
            return;
        case 4:
            __str2dec(dst, &data_020bbf8c, 1);
            return;
        case 5:
            __str2dec(dst, &data_020bbf90, 1);
            return;
        case 6:
            __str2dec(dst, &data_020bbf94, 1);
            return;
        case 7:
            __str2dec(dst, &data_020bbf98, 2);
            return;
        case 8:
            __str2dec(dst, &data_020bbf9c, 2);
            return;
        default:
            func_020082a8(&tmp2, ((s32) (n + ((u32) (n & 0x80000000) >> 31)) >> 1));
            __timesdec(dst, &tmp2, &tmp2);
            if (n & 1) {
                tmp = *dst;
                if (n > 0) {
                    __str2dec(&tmp2, &data_020bbf80, 0);
                } else {
                    __str2dec(&tmp2, &data_020bbf78, -1);
                }
                __timesdec(dst, &tmp, &tmp2);
            }
            return;
    }
}
