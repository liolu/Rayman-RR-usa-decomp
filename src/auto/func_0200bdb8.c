#include "m2c.h"
extern s16 data_020c0a78[];
extern s16 data_020c0a7a[];
extern s16 data_020c0a7c[];
extern s32 func_02052424(u8 *buf, void *p, u32 a, u32 b);
extern void func_02052900(s32 a, s32 b);
extern s32 func_020525b8(s32 a, u8 *b, void *c);
extern s32 func_020528c4(s32 a, s32 b, void *c);

u32 func_0200bdb8(u32 arg0, u32 arg1) {
    u8 frame[0xa4];
    s32 v;

    *(u32 *) (frame + 0x20) = arg1;
    *(u32 *) (frame + 0x28) = 1;
    *(u32 *) (frame + 0x24) = 0x10;
    *(u32 *) (frame + 0x30) = 1;
    *(u32 *) (frame + 0x1c) = arg0;
    if (func_02052424(frame, data_020c0a78, 0x10, 1) == 0) {
        return 0;
    }
    func_02052900(data_020c0a78[0], 0);
    *(u32 *) (frame + 0x68) = 100;
    *(u32 *) (frame + 0x6c) = 100;
    *(u32 *) (frame + 0x90) = 0;
    *(u32 *) (frame + 0x94) = 0;
    *(u32 *) (frame + 0x80) = 100;
    *(u32 *) (frame + 0x84) = 100;
    *(u32 *) (frame + 0x88) = 100;
    *(u32 *) (frame + 0x8c) = 100;
    *(u32 *) (frame + 0x98) = 0;
    if (func_020525b8(data_020c0a78[0], frame + 0x38, data_020c0a7a) == 0) {
        return 0;
    }
    v = func_020528c4(data_020c0a78[0], data_020c0a7a[0], data_020c0a7c);
    if (v != 0) {
        return 1;
    }
    return 0;
}
