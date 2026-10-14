/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* OS_TryLockMutex from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/os/mutex.c (license: none), reused by
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
static inline OSThreadInfo *OS_GetThreadInfo(void) {
    return &data_020c0c5c;
}
static inline OSThread *OS_GetCurrentThread(void) {
    return OS_GetThreadInfo()->current;
}
typedef struct OSMutex {
    OSThreadQueue queue;
    OSThread *thread;
    s32 count;
    OSMutexLinkedList list;
} OSMutex;
extern BOOL func_0200d4bc(OSMutex *mutex);
extern void func_0200d498(OSThread *thread, OSMutex *mutex);
BOOL func_0200d4bc(OSMutex *mutex) {
    u32 prevIRQState = OS_DisableIrq();

    BOOL couldLock = 0;

    OSThread *currentThread = OS_GetCurrentThread();

    if (mutex->thread == 0) {
        mutex->thread = currentThread;
        mutex->count++;
        func_0200d498(currentThread, mutex);
        couldLock = 1;
    } else if (mutex->thread == currentThread) {
        mutex->count++;
        couldLock = 1;
    } else {
        couldLock = 0;
    }

    OS_RestoreIrq(prevIRQState);
    return couldLock;
}
void func_0200d498(OSThread *thread, OSMutex *mutex);
