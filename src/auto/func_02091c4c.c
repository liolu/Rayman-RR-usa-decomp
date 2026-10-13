#include "m2c.h"

/* func_02091c4c -- asm fallback after ~38 hand-written C hypotheses.
 *
 * The C shape is fully recovered (see the probes below): the only difference
 * left is the register allocation of one basic block (.L_02091d1c), where the
 * target keeps the sp0 base in r0 and reuses r0 for the struct-copy source
 * address, while mwcc 2.0/sp1p5 puts the base in r1 (coalescing it with the
 * chain loads) and hoists "add r0, r4, #0x214" ahead of the "ldr r8, [r7], #8"
 * load.  That shifts 4 instructions and swaps "and r0, r8, #0xff" with
 * "mov r2, ip" in the same block; every other instruction matches.
 *
 * Probed here (mwccarm 2.0/sp1p5 -O4,p and 1.2/sp2p3 -O4,p):
 *   - call arity/type: func_02067900() takes 1 argument (the value tested for
 *     NULL goes straight into it, r1 still holds arg0 - not a second argument);
 *     func_02083978() takes 4 (r3 = &sp8);
 *   - 12-byte struct assignment for the ldm/stm copy vs. three M2C_FIELD
 *     stores (the draft) vs. separate Vec3/s32 locals (store deleted, smaller
 *     frame) - only the 16-byte local whose address escapes gives both the
 *     0x18 frame and the ldm/stm;
 *   - the double load in case 0/1 needs a volatile field access (two plain
 *     reads are CSE'd into one ldr);
 *   - case order in the source must be 2,3,0/1,4,default to reproduce the
 *     block layout;
 *   - one variable carrying both the tag and the object (s32*), separate
 *     variables, temp_r0 reused as the object, declaration order, u8/s32/u32
 *     flag, *arg2 = (flag != 0) vs. an if/else, explicit intermediate pointers
 *     for the sp0 chain, and six statement orders of the case-3 body;
 *   - 2.0/sp1p5 is the right profile (1.2/sp2p3 gives 0x178 bytes).
 * Best C candidate: build/agent_work/func_02091c4c/v28.c, 6/93 differing
 * instructions, all of them register/scheduling-only inside .L_02091d1c.
 * Assembled with stmfd/ldmfd because mwcc's assembler rejects push/pop. */

extern M2C_UNK func_02067900();
extern M2C_UNK func_02083978();
extern M2C_UNK func_0208429c();
extern M2C_UNK func_02093100();
extern M2C_UNK func_0209bb0c();
extern M2C_UNK func_0209c740();

// clang-format off
asm void func_02091c4c(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, lr}
    sub sp, sp, #0x18
    mov r7, r1
    ldr r4, [r7, #-0x8]
    mov r8, r0
    mov r0, r4
    mov r6, r2
    bl func_02093100
    add r2, sp, #0x4
    mov r1, r8
    bl func_0209c740
    ldr r0, [sp, #0x4]
    ldr r0, [r0, #0x4]
    ldr r0, [r0, #0x8]
    cmp r0, #0x0
    bne L_02091ca0
    mov r1, #0x0
    add sp, sp, #0x18
    mov r0, r7
    str r1, [r6, #0x0]
    ldmfd sp!, {r4, r5, r6, r7, r8, pc}
L_02091ca0:
    bl func_02067900
    sub r1, r4, #0x40
    mov r4, r0
    cmp r1, #0x4
    addls pc, pc, r1, lsl #0x2
    b L_02091da0
L_02091cb8:
    b L_02091d6c
    b L_02091d6c
    b L_02091ccc
    b L_02091ce0
    b L_02091d8c
L_02091ccc:
    ldr r0, [r4, #0x8]
    tst r0, #0x800
    movne r5, #0x1
    moveq r5, #0x0
    b L_02091da4
L_02091ce0:
    ldr r0, [r4, #0xc]
    tst r0, #0x40
    movne r5, #0x1
    moveq r5, #0x0
    cmp r5, #0x0
    beq L_02091d5c
    ldrb r0, [r7, #0x7]
    cmp r0, #0x2
    strne r8, [sp, #0x0]
    bne L_02091d1c
    add r2, sp, #0x0
    mov r0, r8
    add r1, r7, #0x8
    bl func_0209bb0c
    mov r7, r0
L_02091d1c:
    ldr r0, [sp, #0x0]
    ldr r8, [r7], #0x8
    ldr r1, [r0, #0x4]
    add r0, r4, #0x214
    ldr r1, [r1, #0xc]
    add r3, sp, #0x8
    ldr ip, [r1]
    ldmia r0, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    mov r4, #0x15
    and r0, r8, #0xff
    mov r2, ip
    mov r1, #0x0
    str r4, [sp, #0x14]
    bl func_02083978
    b L_02091da4
L_02091d5c:
    mov r0, r7
    bl func_0208429c
    mov r7, r0
    b L_02091da4
L_02091d6c:
    ldr r0, [r4, #0xc]
    tst r0, #0x10000
    ldr r0, [r4, #0xc]
    movne r5, #0x1
    bic r0, r0, #0x10000
    moveq r5, #0x0
    str r0, [r4, #0xc]
    b L_02091da4
L_02091d8c:
    ldr r0, [r4, #0xc]
    tst r0, #0x80000
    movne r5, #0x1
    moveq r5, #0x0
    b L_02091da4
L_02091da0:
    mov r5, #0x0
L_02091da4:
    cmp r5, #0x0
    movne r1, #0x1
    moveq r1, #0x0
    mov r0, r7
    str r1, [r6, #0x0]
    add sp, sp, #0x18
    ldmfd sp!, {r4, r5, r6, r7, r8, pc}
}
// clang-format on
