#include "m2c.h"

/* func_020146c8: leaf that initialises 16 bytes at r0 to the fixed pattern
 * {0x1000, 0, 0, 0x1000} (12-bit fixed-point identity: 0x1000 == 1.0), then
 * returns r0 advanced by 16.  Caller func_02076358 passes data_020de724 and
 * stores 4096.0f at +0xC afterwards.
 *
 * Written in assembly: the exact shape `mov r1,#0 / mov r2,#0x1000 /
 * mov r3,#0 / stm r0!,{r2,r3} / stm r0!,{r1,r2} / bx lr` is unique in the
 * whole ROM (only stm/stm pair in the image) and no C form reproduces it.
 * Probed with mwccarm 2.0/sp1p5 (all 25 bundled profiles, -O0..-O4, -O4,s,
 * -O4,p and -proc arm7tdmi):
 *   - four scalar stores `p[0]=0x1000; p[1]=0; p[2]=0; p[3]=0x1000;`
 *     (also via *p++ / array / struct-member forms) always give four `str`
 *     (size 0x1C); the store-merging pass only fires for the local
 *     array-initialiser idiom (`stm rX!,{...}`, see func_0201973c).
 *   - a 16-byte struct assignment from a local / compound literal is
 *     constant-folded into .rodata (`ldr r1,=pool; mov ip,r0;
 *     ldm r1,{r0..r3}; stm ip,{r0..r3}`), and when it is not foldable it is
 *     built in a stack temp (`str` x4 + `ldm`/`stm`) - never with immediates.
 *   - `u64` pair stores emit `stm rX,{r1,r2}` (no writeback) and the shifted
 *     value is then split into `str`, never two writeback `stm`.
 *   - memset/loop/array-initialiser, union/bitfield/packed/volatile variants
 *     and every compiler profile produce some other sequence. */
// clang-format off
asm void func_020146c8(void) {
    mov r1, #0x0
    mov r2, #0x1000
    mov r3, #0x0
    stmia r0!, {r2, r3}
    stmia r0!, {r1, r2}
    bx lr
}
// clang-format on
