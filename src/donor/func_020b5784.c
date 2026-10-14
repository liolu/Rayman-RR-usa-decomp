/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020f27c8 from projets/resident-evil-deadly-silence/src/donor/func_020f27c8.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
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
extern void func_020b5784(UnkFndList *list, void *obj);
void func_020b5784(UnkFndList *list, void *obj) {
    UnkFndLink *link = ((UnkFndLink *) ((u32) (obj) + (list)->unk_0a));

    if (link->unk_00 == 0) {
        list->unk_00 = link->unk_04;
    } else {
        ((UnkFndLink *) ((u32) (link->unk_00) + (list)->unk_0a))->unk_04 = link->unk_04;
    }
    if (link->unk_04 == 0) {
        list->unk_04 = link->unk_00;
    } else {
        ((UnkFndLink *) ((u32) (link->unk_04) + (list)->unk_0a))->unk_00 = link->unk_00;
    }
    link->unk_00 = 0;
    link->unk_04 = 0;
    list->unk_08--;
}
