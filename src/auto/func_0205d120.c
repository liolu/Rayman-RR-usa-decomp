#include "m2c.h"

typedef struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} UnkBuf;

void func_0202e1e0(s32, UnkBuf *);

s32 func_0205d120(void *arg0) {
    UnkBuf buf;

    func_0202e1e0(M2C_FIELD(arg0, s32 *, 0x24), &buf);
    return buf.unk4 * 0x10;
}
