/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_0200f1d4 from projets/heroes-of-mana/src/donor/func_0200f1d4.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
// clang-format off
#pragma cplusplus off
#pragma ipa file
asm void func_0200e05c(void) {
    mrc     p15, 0, r0, c1, c0, 0
    orr     r0, r0, #1
    mcr     p15, 0, r0, c1, c0, 0
    bx      lr
}
// clang-format on
