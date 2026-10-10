#include "m2c.h"

M2C_UNK func_020485e4(M2C_UNK, s16, s32);           /* extern */
M2C_UNK func_02048d3c(M2C_UNK, s16, s32);           /* extern */
s32 func_020525b8(M2C_UNK, M2C_UNK *, M2C_UNK *);   /* extern */
M2C_UNK func_020526ac(M2C_UNK, s16, M2C_UNK *);     /* extern */
s32 func_020528c4(M2C_UNK, s16, M2C_UNK *);         /* extern */
M2C_UNK func_02058938();                            /* extern */
M2C_UNK func_0207ac90(M2C_UNK);                     /* extern */
M2C_UNK func_0207ad9c(M2C_UNK, u8, M2C_UNK, M2C_UNK, s32, s32, s32, s32); /* extern */
extern u8 data_020bd280;
extern M2C_UNK data_020dc19c;
extern M2C_UNK data_020dc29c;
extern M2C_UNK data_020dc2d4;
extern M2C_UNK data_020dc2d8;
extern M2C_UNK data_020dc344;

void func_020587e0(M2C_UNK arg0) {
    M2C_FIELD(&data_020dc19c, s32 *, 0x16C) = 0x64;
    M2C_FIELD(&data_020dc19c, s32 *, 0x170) = 0x64;
    M2C_FIELD(&data_020dc19c, s32 *, 0x184) = 0;
    M2C_FIELD(&data_020dc19c, s32 *, 0x188) = 0x64;
    M2C_FIELD(&data_020dc19c, s32 *, 0x18C) = 0;
    M2C_FIELD(&data_020dc19c, s32 *, 0x190) = 0x64;
    M2C_FIELD(&data_020dc19c, s32 *, 0x194) = 0;
    M2C_FIELD(&data_020dc19c, s32 *, 0x198) = 0;
    M2C_FIELD(&data_020dc19c, s32 *, 0x19C) = 1;
    if (func_020525b8(arg0, &data_020dc2d8, &data_020dc2d4) == 0) {
        func_0207ac90(0);
        func_0207ad9c(0x30, data_020bd280, 0, 0x28, -1, 0xFF, 0xFF, 0);
    }
    if (func_020528c4(arg0, M2C_FIELD(&data_020dc29c, s16 *, 0x38), &data_020dc344) == 0) {
        func_0207ac90(0);
        func_0207ad9c(0x30, data_020bd280, 0, 0x28, -1, 0xFF, 0xFF, 0);
    }
    func_020526ac(arg0, M2C_FIELD(&data_020dc29c, s16 *, 0x38), &data_020dc2d8);
    if (M2C_FIELD(&data_020dc19c, s32 *, 0x204) == 0) {
        func_02058938();
    }
    func_020485e4(arg0, M2C_FIELD(&data_020dc29c, s16 *, 0x38), M2C_FIELD(&data_020dc19c, s32 *, 0x204));
    func_02048d3c(arg0, M2C_FIELD(&data_020dc29c, s16 *, 0x38), M2C_FIELD(&data_020dc19c, s32 *, 0x204));
}
