/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020772e8 from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/os/os_irqwait.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned int u32;
typedef unsigned char u8;
typedef int s32;
typedef volatile u32 vu32;
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
typedef void (*OSThreadDestructor)(void *);
typedef struct OSThreadLinkedList {
    OSThread *prev;
    OSThread *next;
} OSThreadLinkedList;
typedef struct OSMutexQueue {
    OSMutex *head;
    OSMutex *tail;
} OSMutexQueue;
typedef struct OSThreadQueue {
    OSThread *head;
    OSThread *tail;
} OSThreadQueue;
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
extern void OS_SleepThread(OSThreadQueue *queue);
extern u8 SDK_AUTOLOAD_DTCM_START[];
extern OSThreadQueue OSi_IrqThreadQueue;
void OS_WaitIrq(BOOL clear, u32 irqFlags) {
    u32 irq = OS_DisableIrq();
    if (clear) {
        (*(vu32 *) ((u32) SDK_AUTOLOAD_DTCM_START + 0x3FF8)) &= ~irqFlags;
    }
    OS_RestoreIrq(irq);

    if (irqFlags & (*(vu32 *) ((u32) SDK_AUTOLOAD_DTCM_START + 0x3FF8))) {
        return;
    }

    do {
        OS_SleepThread(&OSi_IrqThreadQueue);
    } while (!(irqFlags & (*(vu32 *) ((u32) SDK_AUTOLOAD_DTCM_START + 0x3FF8))));
}
