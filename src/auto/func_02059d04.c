#include "m2c.h"

s32 FX_Div(s32 xNum, s32 xDen);

extern u8 data_020dc19c[];
extern s32 data_020bd034[];

void func_02059d04(s32 arg0, s32 arg1) {
    s32 val;
    s64 prod;

    if (arg0 < 0 || arg1 < 0 || data_020dc19c[0xC7B] != 0) {
        *(s32 *) ((u8 *) data_020bd034) = -1;
        return;
    }
    prod                            = (s64) arg1 * 0x50000 + 0x800;
    val                             = FX_Div((s32) (prod >> 12), 0x6E000);
    prod                            = (s64) arg0 * val + 0x800;
    val                             = FX_Div((s32) (prod >> 12), 0x64000);
    *(s32 *) ((u8 *) data_020bd034) = val >> 12;
    if (*(s32 *) ((u8 *) data_020bd034) < 0) {
        *(s32 *) ((u8 *) data_020bd034) = 0;
    }
    if (*(s32 *) ((u8 *) data_020bd034) > 0x50) {
        *(s32 *) ((u8 *) data_020bd034) = 0x50;
    }
    *(s32 *) ((u8 *) data_020bd034 + 4) = 0xA;
}
