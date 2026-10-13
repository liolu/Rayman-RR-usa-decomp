#include "m2c.h"

M2C_UNK func_020272f4(u8);                          /* extern */
s32 func_02084450(M2C_UNK, M2C_UNK, void *);        /* extern */

typedef struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
} Unk16;

s32 func_020a3028(M2C_UNK arg0, M2C_UNK arg1) {
    Unk16 sp0;
    s32 temp_r4;

    temp_r4 = func_02084450(arg0, arg1, &sp0);
    func_020272f4((u8) sp0.unk0);
    return temp_r4;
}
