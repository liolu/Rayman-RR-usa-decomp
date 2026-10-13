#include "m2c.h"

extern s16 data_020c3e8c;
extern M2C_UNK data_020c3f10;

typedef struct {
    u8 pad[0x30];
    s32 flags;
} Obj;

void func_0201be88(Obj *arg0) {
    if ((arg0->flags & 0x20) == 0x20) {
        return;
    }
    arg0->flags |= 0x21;
    if ((s32) data_020c3e8c >= 0x20) {
        return;
    }
    *((M2C_UNK *) ((s8 *) &data_020c3f10 + (data_020c3e8c * 4))) = arg0;
    data_020c3e8c += 1;
}
