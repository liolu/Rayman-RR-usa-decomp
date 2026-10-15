/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0200f298 from projets/heroes-of-mana/src/donor/func_0200f298.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef unsigned int u32;
extern u32 OSi_DebuggerHandler;
extern void OSi_ExceptionHandler(void);
extern void OSi_GetAndDisplayContext(void);
// clang-format off
asm void OSi_ExceptionHandler(void) {
    ldr     r12, =OSi_DebuggerHandler
    ldr     r12, [r12]
    cmp     r12, #0
    movne   lr, pc
    bxne    r12

    ldr     r12, =0x02000000
    stmdb   r12!, {r0-r3, sp, lr}
    and     r0, sp, #1
    mov     sp, r12

    mrs     r1, cpsr
    and     r1, r1, #0x1f
    teq     r1, #0x17
    bne     _not_abort
    bl      OSi_GetAndDisplayContext
    b       _done
_not_abort:
    teq     r1, #0x1b
    bne     _done
    bl      OSi_GetAndDisplayContext
_done:
    ldr     r12, =OSi_DebuggerHandler
    ldr     r12, [r12]
    cmp     r12, #0
_stop:
    beq     _stop
_loop:
    mov     r0, r0
    b       _loop

    ldmia   sp!, {r0-r3, r12, lr}
    mov     sp, r12
    bx      lr
}
// clang-format on
extern void OSi_GetAndDisplayContext(void);
