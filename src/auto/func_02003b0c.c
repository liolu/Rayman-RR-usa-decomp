/* 0x02003b0c is the trailing (unreachable) epilogue of func_020039b0:
 * func_020039b0 (0x020039b0..0x02003b0c) opens with
 *     stmfd sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
 *     sub   sp, sp, #0x10
 * and closes every exit with exactly this pair (`addlo sp, sp, #0x10` +
 * `poplo {...}`, `addeq` + `popeq`).  Its last instruction is the backward
 * `b .L_02003a08` at 0x02003b08, so the 8 bytes at 0x02003b0c are the
 * function's dead trailing epilogue; the symbol boundary between the two
 * "functions" is a function-detection artifact.
 *
 * Evidence: a scan of the whole arm9 image finds no B/BL and no literal-pool
 * word anywhere that targets 0x02003b0c (only the symbol definition itself),
 * so those 8 bytes are unreachable code, not a real entry point.
 *
 * Probed before falling back to asm (mwccarm -O4,p, every installed profile:
 * 1.2/base, 1.2/b56, 1.2/sp2, 1.2/sp2p3, 1.2/sp3, 1.2/sp4, 2.0/base,
 * 2.0/sp1, 2.0/sp1p2, 2.0/sp1p5, 2.0/sp1p6, 2.0/sp1p7, 2.0/sp2, 2.0/sp2p2,
 * 2.0/sp2p3, 2.0/sp2p4, dsi/1.1, dsi/1.1p1, dsi/1.2, dsi/1.2p1, dsi/1.2p2,
 * dsi/1.3, dsi/1.3p1, dsi/1.6sp1, dsi/1.6sp2, plus -proc arm7tdmi):
 *   - empty body, unused int[4], unused volatile int[4]  -> 4 bytes, `bx lr`
 *     (the frame is dropped with the dead body, so nothing is left to pop);
 *   - endless loop with an unreachable `return`           -> 0x18 bytes,
 *     prologue + loop only (the dead epilogue is not emitted);
 *   - the only return inside a loop                       -> prologue, body
 *     and epilogue, never an epilogue alone.
 * No C function can begin with an epilogue: the `stmfd`/`sub sp` frame it
 * pops exists only if the same function's body needs those registers, and
 * then the body is emitted too.  A prologue-free 8-byte epilogue therefore
 * cannot be written in C at all.
 */
// clang-format off
asm void func_02003b0c(void) {
    add sp, sp, #0x10
    ldmfd sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}
// clang-format on
