#include "m2c.h"

M2C_UNK func_01ff8310();                            /* extern */
M2C_UNK func_0200b628(M2C_UNK);                     /* extern */
M2C_UNK func_0200b790();                            /* extern */
M2C_UNK func_0200baf4(s32, s32);                    /* extern */
M2C_UNK func_0200bd10();                            /* extern */
M2C_UNK func_0200bd28();                            /* extern */
M2C_UNK func_0200bd40(s32, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_0200bd58(s32, M2C_UNK);                /* extern */
M2C_UNK func_0200bd70();                            /* extern */
M2C_UNK func_0200bd88(M2C_UNK);                     /* extern */
M2C_UNK func_0200bda0(M2C_UNK);                     /* extern */
M2C_UNK func_0200bf4c();                            /* extern */
M2C_UNK func_0200c34c(M2C_UNK);                     /* extern */
M2C_UNK func_0200c450(M2C_UNK, M2C_UNK *);          /* extern */
s16 func_0200c504();                                /* extern */
M2C_UNK func_0200d674(M2C_UNK *);                   /* extern */
M2C_UNK func_0200d748();                            /* extern */
M2C_UNK func_0200e404();                            /* extern */
M2C_UNK func_0200e978();                            /* extern */
M2C_UNK func_0200eb98();                            /* extern */
M2C_UNK func_020143d0(M2C_UNK);                     /* extern */
M2C_UNK func_02015128();                            /* extern */
M2C_UNK func_020151e8();                            /* extern */
M2C_UNK func_02015234();                            /* extern */
M2C_UNK func_0201527c(M2C_UNK);                     /* extern */
M2C_UNK func_020152ac();                            /* extern */
M2C_UNK func_02015528();                            /* extern */
M2C_UNK func_02015830(s32);                         /* extern */
M2C_UNK func_0201661c();                            /* extern */
M2C_UNK func_02016788();                            /* extern */
M2C_UNK func_0204113c(M2C_UNK);                     /* extern */
void *func_020414ac(M2C_UNK, M2C_UNK, M2C_UNK);     /* extern */
M2C_UNK func_02041540();                            /* extern */
M2C_UNK func_02041804(u16, u16);                    /* extern */
M2C_UNK func_02041a00(u16, u16);                    /* extern */
M2C_UNK func_02041da8();                            /* extern */
M2C_UNK func_02041ec0();                            /* extern */
M2C_UNK func_02041f38();                            /* extern */
M2C_UNK func_02041f3c();                            /* extern */
s32 func_020470d8();                                /* extern */
M2C_UNK func_0204789c();                            /* extern */
M2C_UNK func_020478b0();                            /* extern */
M2C_UNK func_020730f0(M2C_UNK);                     /* extern */
M2C_UNK func_02073100();                            /* extern */
M2C_UNK func_02073588();                            /* extern */
M2C_UNK func_02073938();                            /* extern */
M2C_UNK func_020739c4();                            /* extern */
M2C_UNK func_02073b30();                            /* extern */
extern M2C_UNK data_020bbfa0;
extern s16 data_020c0a38;
extern M2C_UNK data_020c0a44;
extern M2C_UNK data_020c0a5c;
extern M2C_UNK func_02053380;

void main(void) {
    s16 temp_r0;
    u16 temp_r4;
    u16 temp_r5;
    u16 temp_r6;
    u16 temp_r7;
    void *temp_r0_2;

    func_02041f38();
    func_0200d748();
    func_02015128();
    func_020152ac();
    func_0200bda0(-0x10);
    func_0200bd88(-0x10);
    func_02015234();
    func_0200bd70();
    func_02015830(0x1FF);
    func_0200bd58(0x06800000, 0xA4000);
    func_02015528();
    func_0200bd40(0x07000000, 0xC0, 0x400);
    func_0200bd58(0x05000000, 0x400);
    func_0200bd40(0x07000400, 0xC0, 0x400);
    func_0200bd58(0x05000400, 0x400);
    func_02016788();
    func_0201661c();
    func_0200baf4(M2C_FIELD(&data_020bbfa0, s32 *, 4), M2C_FIELD(&data_020bbfa0, s32 *, 8));
    func_0200e404();
    func_0200d674(&data_020c0a5c);
    func_0200d674(&data_020c0a44);
    func_02041ec0();
    func_02041f3c();
    func_0200b790();
    func_0200c450(1, &func_02053380);
    func_0200c34c(1);
    func_0201527c(1);
    func_0200bd28();
    func_0200e978();
    func_020151e8();
    func_0200bd10();
    func_020143d0(1);
    temp_r0 = func_0200c504();
    if (temp_r0 == -3) {
        func_0200eb98();
    }
    data_020c0a38 = temp_r0;
    func_0200e978();
    func_02073588();
    func_02073100();
    func_02073938();
    func_020730f0(1);
    func_01ff8310();
    func_020739c4();
    func_02073b30();
    func_02041540();
    func_0204113c(-1);
    temp_r0_2 = func_020414ac(0, 0x8000, 0x24);
    temp_r4   = M2C_FIELD(temp_r0_2, u16 *, 6);
    temp_r5   = M2C_FIELD(temp_r0_2, u16 *, 0x14);
    temp_r6   = M2C_FIELD(temp_r0_2, u16 *, 8);
    temp_r7   = M2C_FIELD(temp_r0_2, u16 *, 0x16);
    func_02041da8();
    func_02041804(temp_r4, temp_r5);
    func_02041a00(temp_r6, temp_r7);
    if (func_020470d8() != 0) {
        M2C_FIELD(&data_020bbfa0, s8 *, 0) = 0;
    }
    func_0200b628(0);
    func_0204789c();
    func_020478b0();
    func_0200bf4c();
    func_0200eb98();
}
