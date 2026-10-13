#include "m2c.h"

/* Written in assembly: for this call site mwcc 2.0/sp1p5 always emits the
 * outgoing-stack store of the last argument (str r2, [sp, #4]) before the
 * remaining register arguments are set up (ldr r1, [r5] / mov r3, r7), while
 * the target emits it after them.  Probed without success (every variant
 * reproduced the same 3-instruction ordering):
 *   - plain call with the value duplicated as argument 3 and argument 6;
 *   - fresh loads / assignment / comma expressions for the duplicated value;
 *   - extra copy locals and redundant second loads of the same field;
 *   - struct, array, typed-pointer, u32/s32 mixed and void* accesses;
 *   - 5-, 6-, 7- and 8-parameter prototypes, 64-bit parameter, variadic and
 *     unprototyped declarations, function-pointer call, struct-by-value;
 *   - do/while, while, for, goto and early-continue control flow shapes.
 * Compiler profiles tried: 2.0/{base,sp1,sp1p2,sp1p5,sp1p6,sp1p7,sp2,sp2p2,
 * sp2p3,sp2p4}, 1.2/sp2p3 (+ -proc arm7tdmi), -O1..-O4 with p/s, -proc
 * arm7tdmi/arm9tdmi/arm920t, -ipa file/off/function, -opt no{lifetimes,cse,
 * prop,loop,deadstore} and -lang=c++: all stop at the same 3 instructions.
 */
extern void func_02026034();
extern char data_020dcee0[];
// clang-format off
asm void func_0206a81c(void) {
    stmfd sp!, {r3, r4, r5, r6, r7, r8, r9, lr}
    sub sp, sp, #0x8
    ldr r1, [r1, #0x4]
    mov r4, r0
    ldr r8, [r1, #0x44]
    ldr r9, [r1, #0x40]
    cmp r8, #0x0
    addeq sp, sp, #0x8
    ldmeqfd sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
    ldr r5, =data_020dcee0
    mov r7, #0x0
    mvn r6, #0x0
L_0206a84c:
    ldr r0, [r9, #0x0]
    cmp r0, r4
    cmpne r0, #0x0
    bne L_0206a878
    ldr r2, [r9, #0x4]
    mov r0, r6
    str r7, [sp, #0x0]
    ldr r1, [r5, #0x0]
    mov r3, r7
    str r2, [sp, #0x4]
    bl func_02026034
L_0206a878:
    subs r8, r8, #0x1
    add r9, r9, #0x8
    bne L_0206a84c
    add sp, sp, #0x8
    ldmfd sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
}
// clang-format on
