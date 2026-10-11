#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_020481fc();
extern void func_02048284();
extern void func_020482d0();
extern void func_020482e0();
extern void func_02084450();
extern void func_02084ea0();
extern void func_02088e08();
extern void func_02093198();
extern void func_0209c740();
// clang-format off
asm void func_02097100(void) {
    stmfd sp!, {r3, r4, r5, r6, r7, r8, r9, lr}
    sub sp, sp, #0x10
    mov r8, r1
    ldr r4, [r8, #-0x8]
    mov r6, r0
    mov r0, r4
    mov r7, r2
    mov r5, #0x0
    bl func_02093198
    add r2, sp, #0x0
    mov r1, r6
    bl func_0209c740
    ldr r0, [sp, #0x0]
    bl func_02088e08
    sub r1, r4, #0x7d
    mov r4, r0
    cmp r1, #0x5
    addls pc, pc, r1, lsl #0x2
    b L_02097650
L_0209714c:
    b L_02097578
    b L_02097438
    b L_02097530
    b L_020975bc
    b L_02097164
    b L_0209735c
L_02097164:
    ldr r6, [r4, #0x4]
    and r0, r6, #0x10000
    cmp r0, #0x10000
    bne L_020971b8
    adds r0, r4, #0x80
    beq L_020971b0
    ldr r9, [r0, #0x20]
    mov r0, r9
    bl func_02048284
    cmp r0, #0x0
    beq L_020971b0
    mov r0, r9
    bl func_020482d0
    cmp r0, #0x0
    mvnne r1, #0x0
    cmpne r0, r1
    beq L_020971b0
    bl func_020481fc
    b L_020971b4
L_020971b0:
    mov r0, #0x0
L_020971b4:
    orr r5, r5, r0
L_020971b8:
    and r0, r6, #0x1
    cmp r0, #0x1
    bne L_02097208
    adds r0, r4, #0x30
    beq L_02097200
    ldr r9, [r0, #0x20]
    mov r0, r9
    bl func_02048284
    cmp r0, #0x0
    beq L_02097200
    mov r0, r9
    bl func_020482d0
    cmp r0, #0x0
    mvnne r1, #0x0
    cmpne r0, r1
    beq L_02097200
    bl func_020481fc
    b L_02097204
L_02097200:
    mov r0, #0x0
L_02097204:
    orr r5, r5, r0
L_02097208:
    and r0, r6, #0x4
    cmp r0, #0x4
    bne L_02097258
    adds r0, r4, #0x58
    beq L_02097250
    ldr r9, [r0, #0x20]
    mov r0, r9
    bl func_02048284
    cmp r0, #0x0
    beq L_02097250
    mov r0, r9
    bl func_020482d0
    cmp r0, #0x0
    mvnne r1, #0x0
    cmpne r0, r1
    beq L_02097250
    bl func_020481fc
    b L_02097254
L_02097250:
    mov r0, #0x0
L_02097254:
    orr r5, r5, r0
L_02097258:
    and r0, r6, #0x40
    cmp r0, #0x40
    bne L_020972a8
    adds r0, r4, #0xa8
    beq L_020972a0
    ldr r9, [r0, #0x20]
    mov r0, r9
    bl func_02048284
    cmp r0, #0x0
    beq L_020972a0
    mov r0, r9
    bl func_020482d0
    cmp r0, #0x0
    mvnne r1, #0x0
    cmpne r0, r1
    beq L_020972a0
    bl func_020481fc
    b L_020972a4
L_020972a0:
    mov r0, #0x0
L_020972a4:
    orr r5, r5, r0
L_020972a8:
    and r0, r6, #0x10
    cmp r0, #0x10
    bne L_020972f8
    adds r0, r4, #0xd0
    beq L_020972f0
    ldr r9, [r0, #0x20]
    mov r0, r9
    bl func_02048284
    cmp r0, #0x0
    beq L_020972f0
    mov r0, r9
    bl func_020482d0
    cmp r0, #0x0
    mvnne r1, #0x0
    cmpne r0, r1
    beq L_020972f0
    bl func_020481fc
    b L_020972f4
L_020972f0:
    mov r0, #0x0
L_020972f4:
    orr r5, r5, r0
L_020972f8:
    cmp r6, #0x0
    bne L_02097344
    adds r0, r4, #0x8
    beq L_0209733c
    ldr r4, [r0, #0x20]
    mov r0, r4
    bl func_02048284
    cmp r0, #0x0
    beq L_0209733c
    mov r0, r4
    bl func_020482d0
    cmp r0, #0x0
    mvnne r1, #0x0
    cmpne r0, r1
    beq L_0209733c
    bl func_020481fc
    b L_02097340
L_0209733c:
    mov r0, #0x0
L_02097340:
    orr r5, r5, r0
L_02097344:
    str r5, [r7, #0x0]
    mov r1, #0x1a
    add sp, sp, #0x10
    mov r0, r8
    str r1, [r7, #0xc]
    ldmfd sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
L_0209735c:
    mov r0, r6
    mov r1, r8
    mov r2, r7
    bl func_02084450
    ldr r1, [r7, #0x0]
    mov r8, r0
    cmp r1, #0x5
    addls pc, pc, r1, lsl #0x2
    b L_02097398
L_02097380:
    b L_020973b4
    b L_020973bc
    b L_020973c4
    b L_020973cc
    b L_020973d4
    b L_020973dc
L_02097398:
    mov r0, #0x0
    str r0, [r7, #0x0]
    mov r1, #0x1a
    add sp, sp, #0x10
    mov r0, r8
    str r1, [r7, #0xc]
    ldmfd sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
L_020973b4:
    add r0, r4, #0x8
    b L_020973e0
L_020973bc:
    add r0, r4, #0x30
    b L_020973e0
L_020973c4:
    add r0, r4, #0x58
    b L_020973e0
L_020973cc:
    add r0, r4, #0x80
    b L_020973e0
L_020973d4:
    add r0, r4, #0xa8
    b L_020973e0
L_020973dc:
    add r0, r4, #0xd0
L_020973e0:
    cmp r0, #0x0
    beq L_0209741c
    ldr r4, [r0, #0x20]
    mov r0, r4
    bl func_02048284
    cmp r0, #0x0
    beq L_0209741c
    mov r0, r4
    bl func_020482d0
    cmp r0, #0x0
    mvnne r1, #0x0
    cmpne r0, r1
    beq L_0209741c
    bl func_020481fc
    b L_02097420
L_0209741c:
    mov r0, #0x0
L_02097420:
    str r0, [r7, #0x0]
    mov r1, #0x1a
    add sp, sp, #0x10
    mov r0, r8
    str r1, [r7, #0xc]
    ldmfd sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
L_02097438:
    add r5, sp, #0x4
    mov r3, #0x0
    mov r0, r6
    mov r1, r8
    mov r2, r7
    str r3, [r5, #0x0]
    str r3, [r5, #0x4]
    str r3, [r5, #0x8]
    bl func_02084450
    ldr r1, [r7, #0x0]
    cmp r1, #0x5
    addls pc, pc, r1, lsl #0x2
    b L_02097484
L_0209746c:
    b L_020974c4
    b L_020974cc
    b L_020974d4
    b L_020974dc
    b L_020974e4
    b L_020974ec
L_02097484:
    add r5, sp, #0x4
    mov r4, r7
    mov r3, #0x6
L_02097490:
    ldrb r1, [r5, #0x0]
    ldrb r2, [r5, #0x1]
    add r5, r5, #0x2
    subs r3, r3, #0x1
    swpb r1, r1, [r4]
    add r4, r4, #0x1
    swpb r1, r2, [r4]
    add r4, r4, #0x1
    bne L_02097490
    mov r1, #0x15
    add sp, sp, #0x10
    str r1, [r7, #0xc]
    ldmfd sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
L_020974c4:
    add r1, r4, #0x8
    b L_020974f0
L_020974cc:
    add r1, r4, #0x30
    b L_020974f0
L_020974d4:
    add r1, r4, #0x58
    b L_020974f0
L_020974dc:
    add r1, r4, #0x80
    b L_020974f0
L_020974e4:
    add r1, r4, #0xa8
    b L_020974f0
L_020974ec:
    add r1, r4, #0xd0
L_020974f0:
    mov r4, r7
    add r5, r1, #0x10
    mov r3, #0x6
L_020974fc:
    ldrb r1, [r5, #0x0]
    ldrb r2, [r5, #0x1]
    add r5, r5, #0x2
    subs r3, r3, #0x1
    swpb r1, r1, [r4]
    add r4, r4, #0x1
    swpb r1, r2, [r4]
    add r4, r4, #0x1
    bne L_020974fc
    mov r1, #0x15
    add sp, sp, #0x10
    str r1, [r7, #0xc]
    ldmfd sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
L_02097530:
    mov r0, #0x15
    str r0, [r7, #0xc]
    ldr r0, [r4, #0x50]
    mov r1, #0x2
    bl func_020482e0
    cmp r0, #0x0
    beq L_0209755c
    add r0, r4, #0x40
    ldmia r0, {r0, r1, r2}
    stmia r7, {r0, r1, r2}
    b L_0209756c
L_0209755c:
    mov r0, r5
    str r0, [r7, #0x0]
    str r0, [r7, #0x4]
    str r0, [r7, #0x8]
L_0209756c:
    add sp, sp, #0x10
    mov r0, r8
    ldmfd sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
L_02097578:
    mov r3, r7
    add r4, r4, #0x18
    mov r2, #0x6
L_02097584:
    ldrb r0, [r4, #0x0]
    ldrb r1, [r4, #0x1]
    add r4, r4, #0x2
    subs r2, r2, #0x1
    swpb r0, r0, [r3]
    add r3, r3, #0x1
    swpb r0, r1, [r3]
    add r3, r3, #0x1
    bne L_02097584
    mov r1, #0x15
    add sp, sp, #0x10
    mov r0, r8
    str r1, [r7, #0xc]
    ldmfd sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
L_020975bc:
    mov r0, r6
    mov r1, r8
    mov r2, r7
    bl func_02084450
    ldr r1, [r7, #0x0]
    cmp r1, #0x5
    addls pc, pc, r1, lsl #0x2
    b L_020975f4
L_020975dc:
    b L_0209760c
    b L_02097614
    b L_0209761c
    b L_02097624
    b L_0209762c
    b L_02097634
L_020975f4:
    mov r1, #0x0
    str r1, [r7, #0x0]
    mov r1, #0x8
    add sp, sp, #0x10
    str r1, [r7, #0xc]
    ldmfd sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
L_0209760c:
    add r1, r4, #0x8
    b L_02097638
L_02097614:
    add r1, r4, #0x30
    b L_02097638
L_0209761c:
    add r1, r4, #0x58
    b L_02097638
L_02097624:
    add r1, r4, #0x80
    b L_02097638
L_0209762c:
    add r1, r4, #0xa8
    b L_02097638
L_02097634:
    add r1, r4, #0xd0
L_02097638:
    ldr r2, [r1, #0x0]
    mov r1, #0x8
    str r2, [r7, #0x0]
    add sp, sp, #0x10
    str r1, [r7, #0xc]
    ldmfd sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
L_02097650:
    mov r0, #0x27
    mov r1, #0x0
    bl func_02084ea0
    mov r0, r8
    add sp, sp, #0x10
    ldmfd sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
}
// clang-format on
