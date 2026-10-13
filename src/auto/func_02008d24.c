#include "m2c.h"

/* __aeabi-d2uiz-style double->unsigned-int conversion, hand-written ARM runtime library
   code (same family as func_02009a6c.c, which is also asm for the same reason).
   Probed and never produced by mwccarm 2.0/sp1p5 or 1.2/sp2p3:
     - `cmn r3, #0x200000` : every C spelling of the comparison
       (`(u32)(x << 21) < 0x200000U`, `< -0x200000U`, `>= 0xFFE00000U`,
       `(u64)x < 0x200000`, `-(s32)0x200000 > (s32)x`, `x + 0x200000U < 0x200000U`)
       yields `cmp r3, #0x200000` or a materialised constant, never `cmn`.
     - `bics ip, ip, #0x800` : `(hi >> 20) & 0x7ff` / `& ~0x800` / two-step
       `e = hi >> 20; e &= 0x7ff;` all yield `ldr r3, =0x7ff; and r3, r1, r3, lsr #20`
       or `ands`.
     - The `movs / ANDEQS / addne` rounding tail and the `orr r0, r2, r0, lsr #1`
       huge-value return are likewise never emitted together.
   The instruction sequence below is the target's, with its labels and no prologue. */
// clang-format off
asm void func_02008d24(void) {
    and r2, r1, #0x80000000
    mov ip, r1, lsr #0x14
    bics ip, ip, #0x800
    beq L_02008d9c
    mov r3, ip, lsl #0x15
    cmn r3, #0x200000
    bhs L_02008d80
    subs ip, ip, #0x380
    bls L_02008dac
    cmp ip, #0xff
    bge L_02008e1c
    mov r1, r1, lsl #0xc
    orr r3, r2, r1, lsr #0x9
    orr r3, r3, r0, lsr #0x1d
    movs r1, r0, lsl #0x3
    orr r0, r3, ip, lsl #0x17
    bxeq lr
    tst r1, #0x80000000
    bxeq lr
    movs r1, r1, lsl #0x1
    ANDEQS r1, r0, #0x1
    addne r0, r0, #0x1
    bx lr
L_02008d80:
    orrs r3, r0, r1, lsl #0xc
    bne L_02008d94
    mov r0, #0xff000000
    orr r0, r2, r0, lsr #0x1
    bx lr
L_02008d94:
    mvn r0, #0x80000000
    bx lr
L_02008d9c:
    orrs r3, r0, r1, lsl #0xc
    bne L_02008e14
    mov r0, r2
    bx lr
L_02008dac:
    cmn ip, #0x17
    beq L_02008e00
    bmi L_02008e14
    mov r1, r1, lsl #0xb
    orr r1, r1, #0x80000000
    mov r3, r1, lsr #0x8
    orr r3, r3, r0, lsr #0x1d
    rsb ip, ip, #0x1
    movs r1, r0, lsl #0x3
    orr r0, r2, r3, lsr ip
    rsb ip, ip, #0x20
    mov r3, r3, lsl ip
    orrne r3, r3, #0x1
    movs r1, r3
    bxeq lr
    tst r1, #0x80000000
    bxeq lr
    movs r1, r1, lsl #0x1
    ANDEQS r1, r0, #0x1
    addne r0, r0, #0x1
    bx lr
L_02008e00:
    orr r0, r0, r1, lsl #0xc
    movs r1, r0
    mov r0, r2
    addne r0, r0, #0x1
    bx lr
L_02008e14:
    mov r0, r2
    bx lr
L_02008e1c:
    mov r0, #0xff000000
    orr r0, r2, r0, lsr #0x1
    bx lr
}
// clang-format on
