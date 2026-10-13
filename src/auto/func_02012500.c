#include "m2c.h"

/* Bit 0 of byte 5 at 0x027FFC30: loaded through a pointer local so the
   compiler keeps the base constant and the +5 byte offset separate. */
typedef struct {
    u8 unk0[5];
    u8 flag : 1;
} UnkStruct;

u32 func_02012500(void) {
    UnkStruct *p = (UnkStruct *) 0x027FFC30;
    return p->flag;
}
