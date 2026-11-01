#include "m2c.h"

extern u8 data_020dc19c[];
extern u8 data_020dce94;

typedef struct Owner {
    struct Node *head;
    struct Node *tail;
    s32 count;
} Owner;

typedef struct Node {
    struct Node *next;
    struct Node *prev;
    Owner *owner;
    u8 pad[0x20];
    u8 kind;
} Node;

void func_0205a958(void) {
    Node *cur;
    Node *nxt;
    Node *tmp;
    u8 key;

    cur = *(Node **) (data_020dc19c + 0x218);
    if (cur != NULL) {
        nxt = cur->next;
    } else {
        nxt = NULL;
    }
    if (cur == NULL) {
        return;
    }
    key = data_020dce94;
    do {
        if (cur->kind == key) {
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
        }
        cur = nxt;
        if (nxt != NULL) {
            nxt = nxt->next;
        } else {
            nxt = NULL;
        }
    } while (cur != NULL);
}
