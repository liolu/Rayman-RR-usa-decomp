#include "m2c.h"

/* Word fill: for (p = dst; p < dst + size; p++) *p = value;
   The compiler never emits a single-register `stm`: it uses `str` for a scalar store
   (the best C draft is 3 instructions off: `strlt r0, [r1], #4` in `r2` instead of
   `stmlt r1!, {r0}` in `ip`), and `ldm`/`stm` only for structure copies of 12 bytes
   and more. This routine is part of the same hand-written runtime library as
   func_02017f34/func_02017f48/func_02017f60, so it is written in assembly. */
// clang-format off
asm void func_02000930(void) {
    add ip, r1, r2
L_02000934:
    cmp r1, ip
    stmltia r1!, {r0}
    blt L_02000934
    bx lr
}
// clang-format on
