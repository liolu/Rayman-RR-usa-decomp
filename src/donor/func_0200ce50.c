/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* OS_CreateThread from https://github.com/ntrtwl/NitroSDK libraries/os/src/os_thread.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned short int u16;
typedef unsigned long u32;
typedef unsigned long long int u64;
typedef signed long s32;
typedef u32 OSIntrMode;
extern OSIntrMode OS_DisableIrq(void);
extern OSIntrMode OS_RestoreIrq(OSIntrMode state);
typedef struct CPContext {
    u64 div_numer;
    u64 div_denom;
    u64 sqrt;
    u16 div_mode;
    u16 sqrt_mode;
} CPContext;
typedef struct OSContext {
    u32 cpsr;
    u32 r[13];
    u32 sp;
    u32 lr;
    u32 pc_plus4;

    u32 sp_svc;

    CPContext cp_context;

} OSContext;
extern void OS_InitContext(OSContext *context, u32 newpc, u32 newsp);
typedef struct _OSThread OSThread;
typedef struct _OSThreadQueue OSThreadQueue;
typedef struct _OSThreadLink OSThreadLink;
typedef struct _OSMutexQueue OSMutexQueue;
typedef struct _OSMutexLink OSMutexLink;
typedef struct OSMutex OSMutex;
typedef struct OSiAlarm OSAlarm;
struct _OSThreadQueue {
    OSThread *head;
    OSThread *tail;
};
struct _OSThreadLink {
    OSThread *prev;
    OSThread *next;
};
struct _OSMutexQueue {
    OSMutex *head;
    OSMutex *tail;
};
struct _OSMutexLink {
    OSMutex *next;
    OSMutex *prev;
};
typedef enum {
    OS_THREAD_STATE_WAITING    = 0,
    OS_THREAD_STATE_READY      = 1,
    OS_THREAD_STATE_TERMINATED = 2
} OSThreadState;
typedef void (*OSThreadDestructor)(void *);
struct _OSThread {
    OSContext context;
    OSThreadState state;
    OSThread *next;
    u32 id;
    u32 priority;
    void *profiler;

    OSThreadQueue *queue;
    OSThreadLink link;

    OSMutex *mutex;
    OSMutexQueue mutexQueue;

    u32 stackTop;
    u32 stackBottom;
    u32 stackWarningOffset;

    OSThreadQueue joinQueue;
    void *specific[3];
    OSAlarm *alarmForSleep;
    OSThreadDestructor destructor;
    void *userParameter;
    int systemErrno;
};
extern void func_0200ce50(OSThread *thread, void (*func)(void *), void *arg, void *stack, u32 stackSize, u32 prio);
extern void func_0200ce24(void);
static inline void OS_InitThreadQueue(OSThreadQueue *queue) {

    queue->head = queue->tail = ((void *) 0);
}
extern void OS_SetThreadDestructor(OSThread *thread, OSThreadDestructor dtor);
struct OSMutex {
    OSThreadQueue queue;
    OSThread *thread;
    s32 count;

    OSMutexLink link;
};
typedef u64 OSTick;
typedef void (*OSAlarmHandler)(void *);
struct OSiAlarm {
    OSAlarmHandler handler;
    void *arg;
    u32 tag;
    OSTick fire;
    OSAlarm *prev;
    OSAlarm *next;
    OSTick period;
    OSTick start;
};
extern void MIi_CpuClear32(u32 data, void *destp, u32 size);
static inline void MI_CpuFill32(void *dest, u32 data, u32 size) {
    ((void) 0);
    ((void) 0);

    MIi_CpuClear32(data, dest, size);
}
static inline void MI_CpuClear32(void *dest, u32 size) {
    MI_CpuFill32(dest, 0, size);
}
extern void OSi_InsertThreadToList(OSThread *thread);
int OSi_GetUnusedThreadId(void);
void OSi_InsertThreadToList(OSThread *thread);
void func_0200ce50(OSThread *thread, void (*func)(void *), void *arg, void *stack, u32 stackSize, u32 prio) {

    OSIntrMode enable;
    int index;

    ((void) 0);
    ((void) 0);
    ((void) 0);
    ((void) 0);

    enable = OS_DisableIrq();
#line 401
    index = OSi_GetUnusedThreadId();

    thread->priority = prio;
    thread->id       = (u32) index;
    thread->state    = OS_THREAD_STATE_WAITING;
    thread->profiler = ((void *) 0);

    OSi_InsertThreadToList(thread);

    thread->stackBottom        = (u32) stack;
    thread->stackTop           = (u32) stack - stackSize;
    thread->stackWarningOffset = 0;

    *(u32 *) (thread->stackBottom - sizeof(u32)) = 0xfddb597dUL;
    *(u32 *) thread->stackTop                    = 0x7bf9dd5bUL;

    OS_InitThreadQueue(&thread->joinQueue);
    OS_InitContext(&thread->context, (u32) func, (u32) stack - sizeof(u32));

    thread->context.r[0] = (u32) arg;
    thread->context.lr   = (u32) func_0200ce24;

    MI_CpuClear32((void *) ((u32) stack - stackSize + sizeof(u32)), stackSize - sizeof(u32) * 2);

    thread->mutex = ((void *) 0);

    thread->mutexQueue.head = ((void *) 0);
    thread->mutexQueue.tail = ((void *) 0);

    OS_SetThreadDestructor(thread, ((void *) 0));

    thread->queue     = ((void *) 0);
    thread->link.prev = thread->link.next = ((void *) 0);
    MI_CpuClear32(&thread->specific[0], sizeof(void *) * 3);

    thread->alarmForSleep = ((void *) 0);
    (void) OS_RestoreIrq(enable);
}
void func_0200ce24(void);
void OS_SetThreadDestructor(OSThread *thread, OSThreadDestructor dtor);
