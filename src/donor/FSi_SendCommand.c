/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02097848 from https://github.com/cntrl-alt-lenny/gx-spirit-caller src/main/func_02097848.legacy.c (license: MIT),
 * reused by tools/donor_match.py */
typedef struct Node Node;
typedef struct Context Context;
struct Node {
    Node *prev, *next;
    Context *ctx;
    volatile unsigned flags;
    int type, result;
    char queue[1];
};
struct Context {
    char pad[0x1c];
    volatile unsigned flags;
    Node head;
    char pad2[0x54 - 0x20 - sizeof(Node)];
    void (*callback)(Node *, int);
    unsigned callbackFlags;
};
extern int OS_DisableIrq(void);
extern void OS_RestoreIrq(int);
extern void FSi_ReleaseCommand(void *, int);
extern void OS_SleepThread(void *);
extern int FSi_ExecuteSyncCommand(Node *);
extern void FSi_ExecuteAsyncCommand(Node *);
int FSi_SendCommand(Node *self, int type) {
    Context *ctx = self->ctx;
    int mask     = 1 << type;
    int irq;
    Node *head, *cur, *next;
    int active;
    self->type   = type;
    self->result = 2;
    self->flags |= 1;
    irq = OS_DisableIrq();
    if (ctx->flags & 0x80) {
        FSi_ReleaseCommand(self, 3);
        OS_RestoreIrq(irq);
        return 0;
    }
    head = &ctx->head;
    if (mask & 0x1fc) {
        self->flags |= 4;
    }
    cur  = self->prev;
    next = self->next;
    if (cur) {
        cur->next = next;
    }
    if (next) {
        next->prev = cur;
    }
    cur  = head;
    next = cur->next;
    while (next) {
        cur  = next;
        next = next->next;
    }
    cur->next  = self;
    self->prev = cur;
    self->next = 0;
    active     = 0;
    if (ctx->flags & 8) {
        active = 1;
    }
    if (!active && !(ctx->flags & 0x10)) {
        ctx->flags |= 0x10;
        OS_RestoreIrq(irq);
        if (ctx->callbackFlags & 0x200) {
            ctx->callback(self, 9);
        }
        irq = OS_DisableIrq();
        self->flags |= 0x40;
        active = (self->flags & 4) ? 1 : 0;
        if (!active) {
            OS_RestoreIrq(irq);
            FSi_ExecuteAsyncCommand(self);
            return 1;
        }
        OS_RestoreIrq(irq);
    } else {
        active = (self->flags & 4) ? 1 : 0;
        if (!active) {
            OS_RestoreIrq(irq);
            return 1;
        }
        do {
            OS_SleepThread(self->queue);
        } while (!(self->flags & 0x40));
        OS_RestoreIrq(irq);
    }
    return FSi_ExecuteSyncCommand(self);
}
