#include "m2c.h"

typedef struct {
    u8 unk0[0x28];
    s32 unk28;
    u8 unk2C[0x8];
} Obj_02044c70;

typedef struct {
    u8 unk0[0x354];
    u32 count;
    Obj_02044c70 *objs;
} Data_020cfc80;

extern Data_020cfc80 data_020cfc80;

void func_02044c70(void) {
    u32 i;

    for (i = 0; i < data_020cfc80.count; i++) {
        data_020cfc80.objs[i].unk28 = -2;
    }
}
