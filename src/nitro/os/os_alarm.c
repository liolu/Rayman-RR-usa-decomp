#include "m2c.h"

/* Probed: no C form and no compiler profile produces this frame. The target is
 *   push {r0, lr} / bl / pop {r0, lr} / bx lr
 * mwcc pads a 8-byte frame with r3 and merges the epilogue into pop {r3, pc};
 * the 1.2 family emits stmfd+sub sp / add sp+ldmfd. Tried 33 C shapes (void/int
 * returns, pass-through and live parameters, locals, volatile homes, address
 * taken parameters, K&R and old-style definitions, 4/8/12-byte struct returns
 * by value and by hidden pointer, 5/6-argument calls, float/double/u64) across
 * 2.0/base..sp2p4, the whole 1.2 and dsi families and -O0..-O4 with ,p/,s.
 * None produced this non-merged epilogue. The surrounding functions
 * (OSi_SetExContext, OSi_DisplayExContext, func_0200e048, func_0200e8f4) are the same
 * hand-written OS scheduling/IRQ assembly, so this stub is written in assembly. */
extern void OSi_ArrangeTimer();
// clang-format on

// clang-format off
asm void OSi_AlarmHandler(void) {
    stmfd sp!, {r0, lr}
    bl OSi_ArrangeTimer
    ldmfd sp!, {r0, lr}
    bx lr
}
