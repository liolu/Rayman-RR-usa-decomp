#include "engine.h"
#include "m2c.h"

typedef struct {
    u8 pad[0x10];
    s32 **unk10;
} T;

s32 func_020542d4(T *arg0, s32 arg1, s16 arg2) {
    s32 *q = arg0->unk10[arg1];
    return *(s32 *) ((u8 *) *q + arg2 * 12);
}
