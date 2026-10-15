#include "m2c.h"

/* func_020499c0 - "flush the two pending copies, then process the object list".
 *
 * The m2c draft is a 4/86 near miss: every instruction matches except that the
 * three argument loads feeding each copy call come out in source order
 * (r0 = [r2,#0x10], r1 = [r2,#0x18], r2 = [r2,#0x14]) instead of the ROM's
 * r1 = [r2,#0x18], r0 = [r2,#0x10], r2 = [r2,#0x14] (same swap in both blocks).
 * The base pointer sits in r2, so the load that overwrites it is last in both
 * cases; only the scheduling of the other two differs, so this is a pure
 * scheduler tie-break, not a source-shape difference.
 *
 * Probed before falling back to assembly:
 *  - C source shapes: named-field struct (with u32/s32/u16 members and a
 *    sub-struct ring), raw M2C_FIELD with s32/u32/int loads, typed callee
 *    prototypes (void*, u32, u32) vs old-style declarations, variadic callee,
 *    assignment and comma-operator temporaries, a separate statement for the
 *    middle argument, unused locals/parameters, "if (0)" and "(void)0" noise,
 *    truthiness vs "!= 0" conditions, local declaration order, u32 temporaries,
 *    volatile fields, and dummy neighbouring functions in the unit. Nothing
 *    changed the emitted load order.
 *  - Compiler profiles: all ten bundled mwccarm 2.0 builds (base, sp1, sp1p2,
 *    sp1p5, sp1p6, sp1p7, sp2, sp2p2, sp2p3, sp2p4), 1.2/sp2p3 and
 *    1.2/sp2p3 -proc arm7tdmi.
 *  - Flags: -O2,p, -O3,p, -O4,p, -O4,s, -O4, -opt speed/space/level=4 and
 *    -opt with nolifetimes/noprop/nocse/noloop/nostrength.
 *  - Processor models: generic, v4, v4t, v5t, v5te, v6, arm7tdmi, arm710t,
 *    arm720t, arm740t, arm7ej, arm9tdmi, arm920t, arm922t, arm940t, arm9ej,
 *    arm946e, arm966e, arm1020e, xscale.
 * Every 2.0 profile emits the arguments in source order, so the ROM's schedule
 * is not reproducible from C with the toolchain available here. A scan of the
 * whole arm9 image finds this "ldr r1 ... ldr r0 ... ldr r2 ... bl" setup only
 * at these two call sites, which supports the scheduler-artifact diagnosis.
 */

extern void GX_EndLoadTexPltt();
extern void func_020174b4();
extern void GX_BeginLoadTexPltt();
extern void GX_EndLoadTex();
extern void GX_LoadTex();
extern void GX_BeginLoadTex();
extern void MI_IsDmaBusy();
extern void func_020491d0();
extern char GXi_DmaId[];
extern char data_020d0e50[];
extern char data_020d0e7c[];

// clang-format off
asm void func_020499c0(void) {
    stmfd sp!, {r4, lr}
    bl func_020491d0
    ldr r0, =data_020d0e50
    ldr r1, [r0, #0x14]
    ldr r0, [r0, #0x20]
    adds r0, r1, r0
    ldmeqfd sp!, {r4, pc}
    ldr r0, =GXi_DmaId
    ldr r0, [r0, #0x0]
    bl MI_IsDmaBusy
    cmp r0, #0x0
    ldmnefd sp!, {r4, pc}
    ldr r0, =data_020d0e50
    ldr r0, [r0, #0x14]
    cmp r0, #0x0
    beq L_02049a38
    bl GX_BeginLoadTex
    ldr r2, =data_020d0e50
    ldr r1, [r2, #0x18]
    ldr r0, [r2, #0x10]
    ldr r2, [r2, #0x14]
    bl GX_LoadTex
    bl GX_EndLoadTex
    ldr r0, =data_020d0e50
    mov r1, #0x0
    ldr r3, [r0, #0x18]
    ldr r2, [r0, #0x14]
    add r2, r3, r2
    str r2, [r0, #0x18]
    str r1, [r0, #0x14]
L_02049a38:
    ldr r0, =data_020d0e50
    ldr r0, [r0, #0x20]
    cmp r0, #0x0
    beq L_02049a80
    bl GX_BeginLoadTexPltt
    ldr r2, =data_020d0e50
    ldr r1, [r2, #0x24]
    ldr r0, [r2, #0x1c]
    ldr r2, [r2, #0x20]
    bl func_020174b4
    bl GX_EndLoadTexPltt
    ldr r0, =data_020d0e50
    mov r1, #0x0
    ldr r3, [r0, #0x24]
    ldr r2, [r0, #0x20]
    add r2, r3, r2
    str r2, [r0, #0x24]
    str r1, [r0, #0x20]
L_02049a80:
    ldr r2, =data_020d0e50
    mov r0, #0x0
    str r0, [r2, #0x28]
    ldr r0, [r2, #0x8]
    ldr r1, [r2, #0xc]
    cmp r0, r1
    ldmeqfd sp!, {r4, pc}
    ldr lr, =data_020d0e7c
    ldr r1, =0x618
    mov ip, #0x0
L_02049aa8:
    ldr r4, [lr, r0, lsl #0x2]
    ldrh r3, [r4, #0x8]
    tst r3, #0x10
    beq L_02049acc
    bic r3, r3, #0x10
    strh r3, [r4, #0x8]
    ldrh r3, [r4, #0x8]
    orr r3, r3, #0x1
    strh r3, [r4, #0x8]
L_02049acc:
    ldrh r3, [r4, #0x8]
    tst r3, #0x20
    beq L_02049aec
    bic r3, r3, #0x20
    strh r3, [r4, #0x8]
    ldrh r3, [r4, #0x8]
    orr r3, r3, #0x2
    strh r3, [r4, #0x8]
L_02049aec:
    add r0, r0, #0x1
    cmp r0, r1
    ldr r3, [r2, #0xc]
    moveq r0, ip
    cmp r0, r3
    bne L_02049aa8
    ldmfd sp!, {r4, pc}
}
// clang-format on
