#include "m2c.h"

typedef struct Entry Entry;
struct Entry {
    s32 unk0;
    Entry *unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
    s32 *unk18;
    s32 unk1C;
};

/* 4-byte struct holding a pointer */
typedef struct Ref {
    Entry *p;
} Ref;

extern Entry data_020c4c00[64];

void *func_02021740(Entry *arg0, s32 arg1, Ref arg2, s32 arg3, s32 arg4, s32 arg5) {
    s32 i;
    s32 id;
    Entry *p;

    i = 0;
    p = data_020c4c00;
    do {
        if (p->unk8 == 0) {
            id = p->unk0;
            if (((id == -1) && (p->unkC == 0)) || ((arg1 != -1) && (id == arg1) && (arg2.p->unk4 == p->unk4->unk4)) ||
                (p->unk14 == 0)) {
                if (p->unk18 != NULL) {
                    *p->unk18 = 0;
                    p->unk18  = NULL;
                }
                p->unk8 = 1;
            }
        }
        i += 1;
        p += 1;
    } while (i < 0x40);
    if (arg1 != -1) {
        arg0->unk0  = arg1;
        arg0->unk4  = arg2.p;
        arg0->unk8  = 0;
        arg0->unkC  = 0;
        arg0->unk14 = 1;
        arg0->unk18 = (s32 *) arg4;
        arg0->unk10 = arg5;
        arg0->unk1C = 0;
        if (arg0->unk18 != NULL) {
            *arg0->unk18 = 1;
        }
        return arg0;
    }
    arg0->unk8  = 1;
    arg0->unk18 = NULL;
    return (void *) -1;
}
