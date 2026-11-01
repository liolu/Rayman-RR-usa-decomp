#include "m2c.h"

M2C_UNK func_02058d30(M2C_UNK *);                   /* extern */

typedef struct Owner {
    struct Node *head;
    struct Node *tail;
    s32 count;
} Owner;

typedef struct Node {
    struct Node *next;
    struct Node *prev;
    Owner *owner;
    u16 key;
} Node;

void func_02059028(Owner *arg0, s32 arg1) {
    Node *cur;
    Node *nxt;

    if (arg0 == NULL) {
        return;
    }
    cur = arg0->head;
    if (cur != NULL) {
        nxt = cur->next;
    } else {
        nxt = NULL;
    }
    if (cur == NULL) {
        return;
    }
    do {
        if (cur->key == arg1) {
            if (arg0->count == 0) {
                return;
            }
            if (cur->next != NULL) {
                cur->next->prev = cur->prev;
            }
            if (cur->prev != NULL) {
                cur->prev->next = cur->next;
            }
            if (cur->owner != NULL) {
                cur->owner->count = cur->owner->count - 1;
                if (cur->owner->head == cur) {
                    cur->owner->head = cur->next;
                }
                if (cur->owner->tail == cur) {
                    cur->owner->tail = cur->prev;
                }
            }
            cur->next  = NULL;
            cur->prev  = NULL;
            cur->owner = NULL;
            func_02058d30((M2C_UNK *) cur);
            return;
        }
        cur = nxt;
        if (nxt != NULL) {
            nxt = nxt->next;
        } else {
            nxt = NULL;
        }
    } while (cur != NULL);
}
