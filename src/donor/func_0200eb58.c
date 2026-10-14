/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_0200fc50 from projets/heroes-of-mana/src/donor/func_0200fc50.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef unsigned short int u16;
typedef unsigned long u32;
typedef signed long s32;
extern void func_0200eb58(void);
extern u32 data_020c0fa8;
extern u16 data_020c0fac[9];
#pragma thumb off
void func_0200eb58(void) {
    s32 i;

    data_020c0fa8 = 0x0000;

    for (i = 0; i < 9; i++) {
        data_020c0fac[i] = 0;
    }
}
