#include "m2c.h"

extern M2C_UNK data_020d0e50;
extern M2C_UNK data_020d3f44;

typedef struct {
    u8 pad0[8];
    s16 f8;
    u8 padA[0x14 - 0xA];
} TItem;

void func_020496a0(void) {
    u32 i;
    TItem *p;

    p = (TItem *) &data_020d3f44;
    for (i = 0; i < 0x618; i++) {
        p->f8 = 0;
        p++;
    }
    M2C_FIELD(&data_020d0e50, s32 *, 0x14) = 0;
    M2C_FIELD(&data_020d0e50, s32 *, 0x20) = 0;
    M2C_FIELD(&data_020d0e50, s32 *, 0x28) = 0;
    M2C_FIELD(&data_020d0e50, s32 *, 0xC)  = 0;
    M2C_FIELD(&data_020d0e50, s32 *, 8)    = 0;
    M2C_FIELD(&data_020d0e50, s32 *, 0x18) = 0;
    M2C_FIELD(&data_020d0e50, s32 *, 0x24) = 0;
}
