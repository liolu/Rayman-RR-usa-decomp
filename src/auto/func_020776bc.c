#include "m2c.h"

M2C_UNK func_020764ec();                            /* extern */
M2C_UNK func_02076640();                     /* extern */
M2C_UNK func_02076878();                            /* extern */
M2C_UNK func_02079a04();                   /* extern */
M2C_UNK func_0207a38c();                   /* extern */
M2C_UNK func_0207a488();                   /* extern */
M2C_UNK func_0207a61c();                   /* extern */
extern s32 data_020dbfcc;
extern M2C_UNK data_020dfbf4;

/* The C body below compiles to only 3 differing instructions. Every C spelling
   probed puts the 'ldr' of the pointer field and of the 0x98 word in r0, while
   the target uses r1 (r0 stays the base of data_020dfbf4):
       ldr r1, [r0, #0x14] ; ldr r1, [r1, #0xbc] ; cmp r1, #0
   Probed (all with -O4,p, 148 bytes / 37 instructions, always the same 3 diffs):
   the m2c draft (nested M2C_FIELD chain), a struct-typed pointer local, a
   named local pointer, a named local assigned inside the if, pointer/void/u8
   and array-index casts, s32 data_020dfbf4 + adjacent symbol split,
   'v = <field>;' then 'v->field', a trailing dummy use of the value,
   volatile pointer local, for(;;) rewrite, reversed/shuffled condition order,
   inverted if/else for the 0xbc test, whole condition split into three nested
   ifs, (a & b) bitwise form, static const pointer base. Compilers tried:
   2.0/base..2.0/sp2p4, 1.2/base..1.2/sp4, dsi/1.1..dsi/1.6sp2, and flags
   -O4,p / -O4,s / -O3,p / -O2,p / -O4 / -O1,p / -inline on|all.
   The function is pure register allocation here, so it is written out. */
// clang-format off
asm void func_020776bc(void) {
    stmfd sp!, {r3, lr}
    ldr r0, =data_020dfbf4
    ldr r1, [r0, #0x0]
    cmp r1, #0x0
    ldrne r1, [r0, #0x4]
    cmpne r1, #0x0
    beq end
    ldr r1, [r0, #0x14]
    ldr r1, [r1, #0xbc]
    cmp r1, #0x0
    bne else1
    bl func_0207a38c
    ldr r0, =data_020dfbf4
    bl func_0207a488
    ldr r0, =data_020dbfcc
    ldr r0, [r0, #0x0]
    cmp r0, #0x2
    bgt skip1
    ldr r0, =data_020dfbf4
    bl func_0207a61c
skip1:
    ldr r0, =data_020dfbf4
    bl func_02079a04
    ldr r0, =data_020dfbf4
    ldr r1, [r0, #0x98]
    cmp r1, #0x0
    beq end
    bl func_02076878
    b end
else1:
    bl func_0207a488
    ldr r0, =data_020dfbf4
    bl func_02079a04
end:
    mov r0, #0x0
    bl func_02076640
    bl func_020764ec
    ldmfd sp!, {r3, pc}
}
// clang-format on
