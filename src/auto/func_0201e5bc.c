#include "m2c.h"

typedef struct {
    M2C_UNK *p;
} M2C_REF;

M2C_UNK func_020188d4(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
M2C_UNK func_02018a48(M2C_UNK, s16);                /* extern */
M2C_UNK func_02018aa4(M2C_UNK);                     /* extern */
M2C_UNK func_02018ad0(M2C_UNK, s32, M2C_UNK, s32);  /* extern */
s32 func_02019568();                                /* extern */
s32 func_0201ecb0(M2C_REF);                         /* extern */
M2C_UNK func_0201fc34();                            /* extern */
extern M2C_UNK data_020bb604;
extern M2C_UNK data_020c4a64;
extern s32 data_020c4a8c;
extern M2C_UNK func_0201e748;

void func_0201e5bc(void) {
    M2C_REF sp0;

    sp0.p = (M2C_UNK *) M2C_FIELD(M2C_FIELD(&data_020c4a64, void **, 0x20), s32 **, 0x48);
    if (M2C_FIELD(M2C_FIELD(&data_020c4a64, void **, 0x20), s32 *, 0x10) != 0) {
        if (*sp0.p == M2C_FIELD(&data_020c4a64, s32 *, 0x18)) {
            if (func_02019568() & 1) {
                func_02018aa4(0);
                func_0201fc34();
            }
            M2C_FIELD(&data_020c4a64, void **, 0x24) = NULL;
        }
        M2C_FIELD(M2C_FIELD(&data_020c4a64, void **, 0x20), s32 *, 0x10) = 0;
    }
    if ((func_0201ecb0(sp0) != 0) && (data_020c4a8c != 0) && (M2C_FIELD(&data_020c4a64, s32 *, 0x14) != 0)) {
        func_02018ad0(0, data_020c4a8c, 0, M2C_FIELD(&data_020c4a64, s32 *, 0x10));
        func_0201fc34();
        func_02018a48(0,
                      ((s16 *) &data_020bb604)[((s16) M2C_FIELD(M2C_FIELD(&data_020c4a64, void **, 0x20), s16 *, 0x3E) >> 8)]);
        func_020188d4(0, M2C_FIELD(M2C_FIELD(&data_020c4a64, void **, 0x20), u16 *, 0x40), 1);
        func_020188d4(0, ~M2C_FIELD(M2C_FIELD(&data_020c4a64, void **, 0x20), u16 *, 0x40), 0);
        M2C_FIELD(M2C_FIELD(&data_020c4a64, void **, 0x20), s32 *, 0x10) = 1;
        M2C_FIELD(&data_020c4a64, void **, 0x24)                         = (void *) M2C_FIELD(&data_020c4a64, void **, 0x20);
    }
    M2C_FIELD(M2C_FIELD(&data_020c4a64, void **, 0x20), M2C_UNK(**)(s32),
              0x24)(M2C_FIELD(M2C_FIELD(&data_020c4a64, void **, 0x20), s32 *, 0x28));
    if (M2C_FIELD(M2C_FIELD(&data_020c4a64, void **, 0x20), s32 *, 0x10) != 0) {
        if (func_02019568() & 1) {
            func_02018aa4(0);
            func_0201fc34();
        }
        M2C_FIELD(&data_020c4a64, void **, 0x24)                         = NULL;
        M2C_FIELD(M2C_FIELD(&data_020c4a64, void **, 0x20), s32 *, 0x10) = 0;
    }
    M2C_FIELD(M2C_FIELD(&data_020c4a64, void **, 0x20), M2C_UNK **, 0x18) = &func_0201e748;
}
