/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02078af4 from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/os/os_thread.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned int u32;
typedef unsigned short u16;
typedef int s32;
typedef s32 BOOL;
extern u32 OS_DisableIrq(void);
extern u32 OS_RestoreIrq(u32 irq_flag);
typedef struct OSContext {
    u32 cpsr;
    u32 r[13];
    u32 sp;
    u32 lr;
    u32 pc;
    char unk_40[0x20];
} OSContext;
typedef struct OSThread OSThread;
typedef struct OSMutex OSMutex;
typedef void (*OSThreadSwitchCallback)(OSThread *oldThread, OSThread *newThread);
typedef void (*OSThreadDestructor)(void *);
typedef struct OSThreadLinkedList {
    OSThread *prev;
    OSThread *next;
} OSThreadLinkedList;
typedef struct OSMutexQueue {
    OSMutex *head;
    OSMutex *tail;
} OSMutexQueue;
typedef struct OSMutexLinkedList {
    OSMutex *next;
    OSMutex *prev;
} OSMutexLinkedList;
typedef struct OSThreadQueue {
    OSThread *head;
    OSThread *tail;
} OSThreadQueue;
typedef struct OSThreadInfo {
    u16 isSchedulerWaiting;
    u16 irqDepth;
    OSThread *current;
    OSThread *list;
    OSThreadSwitchCallback callback;
} OSThreadInfo;
typedef struct OSThread {
    OSContext context;
    s32 state;
    OSThread *next;
    u32 id;
    u32 priority;
    void *profiler;
    OSThreadQueue *queue;
    OSThreadLinkedList list;
    OSMutex *mutex;
    OSMutexQueue mutexQueue;
    u32 stackTop;
    u32 stackBottom;
    u32 stackOffset;
    OSThreadQueue joinQueue;
    void *unk_A4[3];
    void *unk_B0;
    OSThreadDestructor destructor;
    void *userParam;
    s32 error;
} OSThread;
extern OSThreadInfo data_020c0c5c;
typedef struct OSMutex {
    OSThreadQueue queue;
    OSThread *thread;
    s32 count;
    OSMutexLinkedList list;
} OSMutex;
extern void func_0200caf0(void);
extern OSThreadInfo data_020c0c5c;
extern OSThread data_020c0c6c;
void func_0200d0fc(OSThread *thread);
void func_0200caf0(void);
BOOL func_0200ca3c(OSThread *thread, u32 prio) {
    OSThread *t   = data_020c0c5c.list;
    OSThread *pre = 0;
    u32 prev      = OS_DisableIrq();

    while (t != 0 && t != thread) {
        pre = t;
        t   = t->next;
    }

    if (t == 0 || t == &data_020c0c6c) {
        OS_RestoreIrq(prev);
        return 0;
    }

    if (t->priority != prio) {
        if (pre == 0) {
            data_020c0c5c.list = thread->next;
        } else {
            pre->next = thread->next;
        }
        thread->priority = prio;
        func_0200d0fc(thread);
        func_0200caf0();
    }

    OS_RestoreIrq(prev);
    return 1;
}
