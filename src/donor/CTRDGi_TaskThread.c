/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0205f04c from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/ctrdg/ctrdg_task.c (license: none), reused
 * by tools/donor_match.py */
typedef signed long intptr_t;
typedef unsigned long uintptr_t;
typedef intptr_t ptrdiff_t;
typedef unsigned long size_t;
typedef unsigned short wchar_t;
typedef unsigned long long u64;
typedef unsigned int u32;
typedef unsigned short u16;
typedef unsigned char u8;
typedef long long s64;
typedef int s32;
typedef short s16;
typedef char s8;
typedef float f32;
typedef double f64;
typedef volatile u64 vu64;
typedef volatile u32 vu32;
typedef volatile u16 vu16;
typedef volatile u8 vu8;
typedef volatile s64 vs64;
typedef volatile s32 vs32;
typedef volatile s16 vs16;
typedef volatile s8 vs8;
typedef volatile f32 vf32;
typedef volatile f64 vf64;
typedef s32 BOOL;
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
extern OSThreadInfo ThreadInfo;
extern void OS_SleepThread(OSThreadQueue *queue);
extern void OS_UnpauseThread(OSThreadQueue *queue);
extern OSMutex *OS_RemoveMutexFromQueue(OSMutexQueue *queue);
extern OSThread *OS_SelectThread(void);
extern void OS_CreateThread(OSThread *thread, void (*func)(void *), void *arg, void *stack, u32 stackSize, u32 priority);
extern void OS_ExitThread(void);
extern void OS_WakeupThreadDirect(void *param1);
static inline void OS_InitThreadQueue(OSThreadQueue *queue) {
    queue->tail = 0;
    queue->head = 0;
}
static inline OSThreadInfo *OS_GetThreadInfo(void) {
    return &ThreadInfo;
}
static inline OSThread *OS_GetCurrentThread(void) {
    return OS_GetThreadInfo()->current;
}
static inline void OS_SetCurrentThread(OSThread *thread) {
    OS_GetThreadInfo()->current = thread;
}
static inline u32 OS_GetThreadId(OSThread *thread) {
    return thread->id;
}
extern u32 OS_EnableIRQ(void);
extern u32 OS_DisableIrq(void);
extern u32 OS_RestoreIrq(u32 irq_flag);
extern u32 OS_EnableFIQ(void);
extern u32 OS_DisableFIQ(void);
extern u32 OS_RestoreFIQ(u32 fiq_flag);
extern u32 OS_GetIRQFlag(void);
extern u32 OS_GetCPUMode(void);
extern void OS_Delay(u32 count);
extern void OS_Wait(void);
extern BOOL DC_Enable(void);
extern void DC_InvalidateAll(void);
extern void DC_CleanAll(void);
extern void DC_PurgeAll(void);
extern void DC_InvalidateRange(void *addr, u32 count);
extern void DC_CleanRange(const void *addr, u32 count);
extern void DC_PurgeRange(const void *addr, u32 count);
extern void DC_DrainWriteBuffer(void);
extern BOOL IC_Enable(void);
extern void IC_InvalidateAll(void);
extern void IC_InvalidateRange(void *addr, u32 count);
extern void MI_CpuFillU16(register u16 value, register u16 *dest, register u32 count);
extern void MI_CpuCopyU16(register const u16 *src, register u16 *dest, register u32 count);
extern void MI_CpuFillU32(register u32 value, register u32 *dest, register u32 count);
extern void MI_CpuCopyU32(register const u32 *src, register u32 *dest, register u32 count);
extern void MI_CpuFillFromSrc(register const u32 *src, register u32 *dest, register u32 count);
extern void MI_CpuFill(register u32 value, register void *dest, register u32 count);
extern void MI_CpuCopy(register const u32 *src, register u32 *dest, register u32 count);
extern void MI_CpuCopy36(register const u32 *src, register u32 *dest);
extern void MI_CpuCopy48(register const u32 *src, register u32 *dest);
extern void MI_CpuCopy64(register const u32 *src, register u32 *dest);
extern void MI_CpuFill8(register void *dest, register u8 value, register u32 count);
extern void MI_CpuCopyU8(register const void *src, register void *dest, register u32 count);
extern void MI_CpuClear24(register u32 *dest);
extern u32 MI_CpuSwap(register u32 value, register u32 *addr);
typedef struct UnkCtrdgInfo {
    u16 unk_00;
    u8 unk_02[3];
    u8 unk_05_0 : 1;
    u8 unk_05_1 : 1;
    u8 unk_05_2 : 6;
    u16 unk_06;
    u32 unk_08;
} UnkCtrdgInfo;
typedef struct UnkCtrdgCommon2 {
    vu16 unk_00;
    u16 unk_02;
} UnkCtrdgCommon2;
typedef BOOL (*UnkCtrdgPulledOutCallback)(void);
typedef struct UnkCtrdgState {
    u32 unk_00;
    BOOL unk_04;
    BOOL unk_08;
    u32 unk_0c[2];
    UnkCtrdgPulledOutCallback unk_14;
} UnkCtrdgState;
typedef struct UnkCtrdgLock {
    u32 unk_00;
    u32 unk_04;
} UnkCtrdgLock;
typedef struct UnkCtrdgCycles {
    s32 unk_00;
    s32 unk_04;
} UnkCtrdgCycles;
struct UnkCtrdgTask;
typedef u32 (*UnkCtrdgTaskFunc)(struct UnkCtrdgTask *task);
typedef void (*UnkCtrdgTaskCallback)(struct UnkCtrdgTask *task);
typedef struct UnkCtrdgTask {
    UnkCtrdgTaskFunc unk_00;
    UnkCtrdgTaskCallback unk_04;
    u32 unk_08;
    u32 unk_0c[5];
    u16 unk_20;
    u8 unk_22;
    u8 unk_23;
} UnkCtrdgTask;
typedef struct UnkCtrdgThread {
    OSThread unk_00;
    UnkCtrdgTask *volatile unk_c0;
    UnkCtrdgTask unk_c4;
} UnkCtrdgThread;
extern BOOL data_0210c7c8;
extern UnkCtrdgCommon2 data_0210c7cc;
extern UnkCtrdgState data_0210c7e4;
typedef struct UnkCtrdgAgbHeader {
    u32 unk_00;
    u8 unk_04[0x9C];
    u8 unk_a0[0x0C];
    u32 unk_ac;
    u16 unk_b0;
    u8 unk_b2;
    u8 unk_b3[2];
    u8 unk_b5[3];
    u8 unk_b8[6];
    u16 unk_be;
} UnkCtrdgAgbHeader;
extern UnkCtrdgAgbHeader data_0210c800;
extern UnkCtrdgThread data_0210c8c0;
extern UnkCtrdgThread *ctrdgi_task_work;
extern UnkCtrdgTask ctrdgi_task_list;
extern void OS_Terminate(void);
extern u32 OS_GetLockID(void);
extern void CpuSet(const void *src, void *dst, u32 control);
extern void WaitByLoop(s32 count);
extern s32 PXI_SendWordByFifo(u32 tag, u32 data, BOOL err);
extern void func_0207a074(void);
extern void func_0207a180(u32 tag, void (*callback)(u32 tag, u32 data, BOOL err));
extern BOOL func_0207a1cc(u32 tag, BOOL arm7);
extern u32 func_02077a0c(void *lockWord);
extern s32 func_02077954(u16 lockId);
extern void func_02077948(u16 lockId);
extern void func_020798f4(u32 mask, u32 flags);
extern u32 func_02077624(u32 mask);
extern void func_020671bc(u32 dma, const void *src, void *dst, u32 size);
extern void func_020787c4(OSThread *thread, void (*func)(void *), void *arg, void *stack, u32 stackSize, u32 prio);
extern void func_0200ce24(void);
extern void func_0205e93c(void);
extern BOOL func_0205e974(void);
extern BOOL func_0205e99c(void);
extern BOOL func_0205e9b4(void);
extern void func_0205eac0(UnkCtrdgCycles *cycles);
extern void func_0205eb08(const UnkCtrdgCycles *cycles);
extern void func_0205eb3c(u16 lockId, UnkCtrdgLock *lock);
extern void func_0205eb98(u16 lockId, UnkCtrdgLock *lock);
extern void func_0205ebbc(u32 data);
extern void func_0205ec0c(BOOL enable);
extern void func_0205ec54(void);
extern void func_0205ed08(void);
extern void func_0205eefc(u32 tag, u32 data, BOOL err);
extern void func_0205ef28(u32 tag, u32 data, BOOL err);
extern void func_0205ef84(void);
extern void func_0205ef98(u32 tag, u32 data, BOOL err);
extern void func_0205efac(UnkCtrdgThread *thread);
extern void func_0205f038(UnkCtrdgTask *task);
extern void CTRDGi_TaskThread(void *arg);
extern UnkCtrdgThread *ctrdgi_task_work;
extern UnkCtrdgTask ctrdgi_task_list;
extern u8 data_0210c9d0[0x400];
void func_0205efac(UnkCtrdgThread *thread);
void func_0205f038(UnkCtrdgTask *task);
void CTRDGi_TaskThread(void *arg) {
    UnkCtrdgThread *const thread = (UnkCtrdgThread *) arg;
    UnkCtrdgTask task;

    for (;;) {
        u32 prevIRQState;

        MI_CpuFill8(&task, 0, sizeof(task));

        prevIRQState = OS_DisableIrq();
        while (thread->unk_c0 == 0) {
            OS_SleepThread(0);
        }
        task = *thread->unk_c0;
        OS_RestoreIrq(prevIRQState);

        if (task.unk_00 != 0) {
            task.unk_08 = task.unk_00(&task);
        }

        prevIRQState = OS_DisableIrq();
        {
            const UnkCtrdgTaskCallback callback = task.unk_04;
            ctrdgi_task_list.unk_22             = 0;
            if (callback != 0) {
                callback(&task);
            }
        }
        if (ctrdgi_task_work == 0) {
            break;
        }
        thread->unk_c0 = 0;
        OS_RestoreIrq(prevIRQState);
    }
    func_0200ce24();
}
