#include "m2c.h"

M2C_UNK func_02054124(s32, M2C_UNK *, M2C_UNK);
M2C_UNK func_020541d8(s32, M2C_UNK *, M2C_UNK);
M2C_UNK func_02054360(s32, M2C_UNK *, M2C_UNK);
M2C_UNK func_02054468(s32, M2C_UNK *, M2C_UNK);
M2C_UNK func_02055908(s32 *, M2C_UNK, M2C_UNK);
M2C_UNK func_020563d8(s32);
M2C_UNK func_02056400(s32);
M2C_UNK func_02056668(s32);
extern s32 data_020dc150;
extern s32 data_020dc154;

void func_020618f4(void) {
    M2C_UNK sp0;

    func_02055908(&data_020dc154, 0x1E, 4);
    func_020541d8(data_020dc154, &sp0, 0xA);
    func_02054360(data_020dc154, &sp0, 0xA);
    func_02054468(data_020dc154, &sp0, 0xA);
    func_02054124(data_020dc154, &sp0, 0xA);
    func_02056668(data_020dc154);
    func_020563d8(data_020dc154);
    func_02056400(data_020dc154);
    func_02055908(&data_020dc150, 0x1E, 4);
    func_020541d8(data_020dc150, &sp0, 0xA);
    func_02054360(data_020dc150, &sp0, 0xA);
    func_02054468(data_020dc150, &sp0, 0xA);
    func_02054124(data_020dc150, &sp0, 0xA);
    func_02056668(data_020dc150);
    func_020563d8(data_020dc150);
    func_02056400(data_020dc150);
}
