#include "m2c.h"

/* func_02072470 - copies the 8-byte-per-entry table selected by func_02072874(0xB, n)
   into the 4-byte aligned write pointer data_020ddfa0, then advances both pointers and
   saves the destination in data_020ddf74 / the source in data_020ddf40.

   LAST RESORT assembly. The C draft is 11/45 instructions off and every C shape probed
   below is stuck at 8..12/45, all of them inside the block after the func_02072874 call.
   What was probed (each variant compiles to 0xb4 bytes and is semantically identical to
   the draft in build/agent_drafts/func_02072470.c):
     - draft order (data_020ddf40 = ptr, then data_020ddf74 = data_020ddfa0), and the
       swapped store order: 11/45
     - the pointer/size kept in locals, the pointer argument read back from
       data_020ddf40 or data_020ddf74, assignments nested inside the func_02042364
       argument list: 11..12/45 (one variant changed the object size)
     - struct type for data_020de068 (8-byte entries, scaled index), pointer-typed
       data_020ddfa0/data_020ddf40/data_020ddf74: 11..12/45
     - func_02072874 declared s16/s32/u16, count declared u16/u32/s32, size written
       temp_r4 * 8 / temp_r4 << 3 / 8 * temp_r4, pointer written data_020de068 + v * 8 /
       (v << 3) + data_020de068 / &data_020de068[v]: 11/45
     - explicit local holding data_020ddfa0 that feeds both the store and the call
       (closest C, 8/45: rows 16..22 and 25 differ)
     - compilers 2.0/sp1p5, 1.2/sp2p3 and 1.2/sp2p3 -proc arm7tdmi, each with and
       without the complete build flag set (-Cpp_exceptions off -RTTI off -sym on
       -gccinc -msgstyle gcc); 1.2/sp2p3 gives the wrong 0xb8 prologue.
   Diagnosis: the nine differing instructions are a load-address-hoisting and register
   allocation choice, not a different computation. mwcc hoists the destination address of
   the first pointer store into the slot in front of the `strh` and keeps the
   data_020de068 value in lr, whereas the game hoists the load address of
   data_020ddfa0 into that slot and keeps the data_020de068 value in r2. The two matched
   siblings of this family that do show the game's schedule (func_020716e4 and
   func_02071624) both contain an extra statement that re-reads the field just stored and
   saves it to a second global between the field store and the two pointer stores;
   func_02072470 has no such instruction, so that source shape cannot be reconstructed
   from the observable behaviour of the function. */

M2C_UNK func_02042364(s32, s32, s32);               /* extern */
s16 func_02072874(M2C_UNK, u16);                    /* extern */
extern s32 data_020ddf40;
extern void *data_020ddf70;
extern s32 data_020ddf74;
extern s32 data_020ddfa0;
extern s32 data_020de068;

// clang-format off
asm void func_02072470(void) {
    stmfd sp!, {r4, lr}
    ldr r0, =data_020ddfa0
    ldr r2, [r0]
    tst r2, #0x3
    beq L_02072490
L_02072484:
    add r2, r2, #0x1
    tst r2, #0x3
    bne L_02072484
L_02072490:
    ldr r0, =data_020ddf70
    ldr r1, =data_020ddfa0
    ldr r0, [r0]
    str r2, [r1]
    ldrh r4, [r0, #0x22]
    mov r0, #0xb
    mov r1, r4
    bl func_02072874
    ldr r1, =data_020ddf70
    ldr r2, =data_020de068
    ldr r3, [r1]
    ldr r1, =data_020ddfa0
    strh r0, [r3, #0x32]
    ldr r2, [r2]
    ldr r1, [r1]
    ldr r3, =data_020ddf74
    ldr ip, =data_020ddf40
    add r0, r2, r0, lsl #0x3
    mov r2, r4, lsl #0x3
    str r0, [ip]
    str r1, [r3]
    bl func_02042364
    ldr r1, =data_020ddf74
    ldr r0, =data_020ddf40
    ldr r3, [r1]
    ldr r2, [r0]
    ldr r1, =data_020ddfa0
    add r3, r3, r4, lsl #0x3
    add r2, r2, r4, lsl #0x3
    str r3, [r1]
    str r2, [r0]
    ldmfd sp!, {r4, pc}
}
// clang-format on
