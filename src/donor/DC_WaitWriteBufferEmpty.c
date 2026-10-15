/* compiler: 2.0/sp1p5  */
/* func_0200e828 from projets/heroes-of-mana/src/auto/func_0200e828.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
#pragma cplusplus off
void DC_WaitWriteBufferEmpty(void) {
    __asm__ volatile("mov r0, #0\n"
                     "mcr p15, 0, r0, c7, c10, 4\n"
                     :
                     :
                     : "r0", "memory");
}
