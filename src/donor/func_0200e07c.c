/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_0200f1f4 from projets/heroes-of-mana/src/donor/func_0200f1f4.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef unsigned int u32;
// clang-format off
asm void func_0200e07c(register u32 clearBits, register u32 setBits) {
    mrc     p15, 0, r2, c5, c0, 2
    bic     r2, r2, r0
    orr     r2, r2, r1
    mcr     p15, 0, r2, c5, c0, 2
    bx      lr
}
// clang-format on
