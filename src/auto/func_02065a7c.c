#include "engine.h"
#include "m2c.h"

void func_02057154(s32);
void func_0207ac90(s32);

M2C_UNK func_02057038(s32, M2C_UNK, M2C_UNK *, s32, s32);
M2C_UNK func_0207ad9c(M2C_UNK, u8, M2C_UNK, M2C_UNK, s32, s32, s32, s32);
extern u8 data_020bd280;
extern M2C_UNK data_020bd2c0;
extern M2C_UNK data_020bd2cc;
extern M2C_UNK data_020bd2d8;
extern M2C_UNK data_020bd2e4;
extern M2C_UNK data_020bd2f0;

void func_02065a7c(s32 arg0) {
    if (arg0 == 0) {
        func_0207ac90(0);
        func_0207ad9c(0x30, data_020bd280, 0, 0xE, -1, 0xFF, 0xFF, 0);
    }
    if (M2C_FIELD(arg0, void **, 0x10) == NULL) {
        func_0207ac90(0);
        func_0207ad9c(0x30, data_020bd280, 0, 0xF, -1, 0xFF, 0xFF, 0);
    }
    if (M2C_FIELD(M2C_FIELD(arg0, void **, 0x10), s32 *, 0) == 0) {
        func_0207ac90(0);
        func_0207ad9c(0x30, data_020bd280, 0, 0xF, -1, 0xFF, 0xFF, 0);
    }
    func_02057038(M2C_FIELD(M2C_FIELD(arg0, void **, 0x10), s32 *, 0), 2, &data_020bd2c0, 0xF4, 0);
    func_02057154(M2C_FIELD(M2C_FIELD(arg0, void **, 0x10), s32 *, 0));
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x10), s32 *, 0) = 0;
    if (M2C_FIELD(M2C_FIELD(arg0, void **, 0x10), s32 *, 4) == 0) {
        func_0207ac90(0);
        func_0207ad9c(0x30, data_020bd280, 0, 0xF, -1, 0xFF, 0xFF, 0);
    }
    func_02057038(M2C_FIELD(M2C_FIELD(arg0, void **, 0x10), s32 *, 4), 2, &data_020bd2cc, 0xF9, 0);
    func_02057154(M2C_FIELD(M2C_FIELD(arg0, void **, 0x10), s32 *, 4));
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x10), s32 *, 4) = 0;
    if (M2C_FIELD(M2C_FIELD(arg0, void **, 0x10), s32 *, 8) == 0) {
        func_0207ac90(0);
        func_0207ad9c(0x30, data_020bd280, 0, 0xF, -1, 0xFF, 0xFF, 0);
    }
    func_02057038(M2C_FIELD(M2C_FIELD(arg0, void **, 0x10), s32 *, 8), 2, &data_020bd2d8, 0xFE, 0);
    func_02057154(M2C_FIELD(M2C_FIELD(arg0, void **, 0x10), s32 *, 8));
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x10), s32 *, 8) = 0;
    if (M2C_FIELD(M2C_FIELD(arg0, void **, 0x10), s32 *, 0xC) == 0) {
        func_0207ac90(0);
        func_0207ad9c(0x30, data_020bd280, 0, 0xF, -1, 0xFF, 0xFF, 0);
    }
    func_02057038(M2C_FIELD(M2C_FIELD(arg0, void **, 0x10), s32 *, 0xC), 2, &data_020bd2e4, 0x103, 0);
    func_02057154(M2C_FIELD(M2C_FIELD(arg0, void **, 0x10), s32 *, 0xC));
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x10), s32 *, 0xC) = 0;
    func_02057038((s32) M2C_FIELD(arg0, void **, 0x10), 2, &data_020bd2f0, 0x105, 0);
    func_02057154((s32) M2C_FIELD(arg0, void **, 0x10));
    M2C_FIELD(arg0, void **, 0x10) = NULL;
}
