/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_0202b7b8 from projets/heroes-of-mana/src/donor/func_0202b7b8.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
extern int func_02008854(unsigned long long x);
int func_02008854(unsigned long long x) {
    x -= (x >> 1) & 0x5555555555555555ULL;
    x = (x & 0x3333333333333333ULL) + ((x >> 2) & 0x3333333333333333ULL);
    x = (x + (x >> 4)) & 0x0F0F0F0F0F0F0F0FULL;
    x += x >> 8;
    x += x >> 16;
    x += x >> 32;
    return (int) (x & 0xff);
}
