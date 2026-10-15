/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */

typedef unsigned int u32;
typedef unsigned short u16;
typedef struct UnkFndLink {
    void *unk_00;
    void *unk_04;
} UnkFndLink;
typedef struct UnkFndList {
    void *unk_00;
    void *unk_04;
    u16 unk_08;
    u16 unk_0a;
} UnkFndList;

/* func_020ae39c from projets/dragon-ball-origins/src/donor/func_020ae39c.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
void *NNS_FndGetPrevListObject(UnkFndList *list, void *obj) {
    if (obj == 0) {
        return list->unk_04;
    }
    return ((UnkFndLink *) ((u32) (obj) + (list)->unk_0a))->unk_00;
}
