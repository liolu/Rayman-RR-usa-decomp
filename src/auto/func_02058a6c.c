#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02058200();
extern void func_02058420();
extern char data_020bd560[];
extern char data_020dbfbc[];
// clang-format off
asm void func_02058a6c(void) {
    stmfd sp!, {r3, lr}
    ldr r2, =data_020dbfbc
    ldr ip, =data_020bd560
    add r3, r2, #0x1
    mov r2, #0x1
    swpb r2, r2, [r3]
    swpb r1, r1, [ip]
    bl func_02058420
    mov r0, #0x6
    bl func_02058200
    ldmfd sp!, {r3, pc}
}
// clang-format on
