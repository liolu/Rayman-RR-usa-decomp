#include "m2c.h"

M2C_UNK func_02001588(void *, M2C_UNK *, M2C_UNK);  /* extern */
extern s32 data_020cf718;
extern M2C_UNK data_020cf71c;
extern M2C_UNK data_020cf784;
extern M2C_UNK data_020cf7ec;
extern M2C_UNK data_020cf854;
extern M2C_UNK data_020cf8bc;
extern M2C_UNK data_020cf924;

void func_0203df54(void *arg0) {
    void *temp_r4;

    if ((M2C_FIELD(arg0, s32 *, 0xC) & 0x4000) && (data_020cf718 != 0)) {
        temp_r4 = M2C_FIELD(arg0, void **, 0x168);
        func_02001588(temp_r4 + 8, &data_020cf71c, 0x28);
        if (data_020cf718 & 0x10000) {
            M2C_FIELD(temp_r4, s32 *, 4) = (s32) (M2C_FIELD(temp_r4, s32 *, 4) | 0x10000);
            func_02001588(temp_r4 + 0x80, &data_020cf854, 0x28);
        }
        if (data_020cf718 & 0x40) {
            M2C_FIELD(temp_r4, s32 *, 4) = (s32) (M2C_FIELD(temp_r4, s32 *, 4) | 0x40);
            func_02001588(temp_r4 + 0xA8, &data_020cf8bc, 0x28);
        }
        if (data_020cf718 & 1) {
            M2C_FIELD(temp_r4, s32 *, 4) = (s32) (M2C_FIELD(temp_r4, s32 *, 4) | 1);
            func_02001588(temp_r4 + 0x30, &data_020cf784, 0x28);
        }
        if (data_020cf718 & 4) {
            M2C_FIELD(temp_r4, s32 *, 4) = (s32) (M2C_FIELD(temp_r4, s32 *, 4) | 4);
            func_02001588(temp_r4 + 0x58, &data_020cf7ec, 0x28);
        }
        if (!(data_020cf718 & 0x10)) {
            return;
        }
        M2C_FIELD(temp_r4, s32 *, 4) = (s32) (M2C_FIELD(temp_r4, s32 *, 4) | 0x10);
        func_02001588(temp_r4 + 0xD0, &data_020cf924, 0x28);
    }
}
