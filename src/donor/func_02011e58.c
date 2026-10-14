/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0205e4b0 from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/card/card_request.c (license: none),
 * reused by tools/donor_match.py */
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
extern void func_0200ccbc(OSThreadQueue *queue);
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
extern void MI_CpuSet(register void *dest, register u8 value, register u32 count);
extern void MI_CpuCopyU8(register const void *src, register void *dest, register u32 count);
extern void MI_CpuClear24(register u32 *dest);
extern u32 MI_CpuSwap(register u32 value, register u32 *addr);
typedef struct UnkCardCmd {
    u32 unk_00;
    u32 unk_04;
    u32 unk_08;
    u32 unk_0c;
    u32 unk_10;
    u32 unk_14;
    u32 unk_18;
    u32 unk_1c;
    u32 unk_20;
    u32 unk_24;
    u32 unk_28;
    u32 unk_2c;
    u32 unk_30;
    u32 unk_34;
    u32 unk_38;
    u32 unk_3c;
    u32 unk_40;
    u32 unk_44;
    u8 unk_48;
    u8 unk_49[3];
    u32 unk_4c;
    u8 unk_50[0x10];
} UnkCardCmd;
struct UnkCardCommon;
typedef void (*UnkCardTask)(struct UnkCardCommon *common);
typedef void (*UnkCardCallback)(void *arg);
typedef struct UnkCardCommon {
    UnkCardCmd *unk_000;
    u32 unk_004;
    vs32 unk_008;
    vs32 unk_00c;
    OSThreadQueue unk_010;
    u32 unk_018;
    u32 unk_01c;
    u32 unk_020;
    u32 unk_024;
    u32 unk_028;
    u32 unk_02c;
    u32 unk_030;
    u32 unk_034;
    UnkCardCallback unk_038;
    void *unk_03c;
    UnkCardTask unk_040;
    OSThread unk_044;
    OSThread *unk_104;
    u32 unk_108;
    OSThreadQueue unk_10c;
    vu32 unk_114;
    u32 unk_118[2];
    u8 unk_120[0x100];
} UnkCardCommon;
typedef struct UnkCardRom {
    void (*unk_000)(struct UnkCardRom *rom);
    u32 unk_004;
    u32 unk_008;
    u32 unk_00c[5];
    u32 unk_020[0x80];
} UnkCardRom;
extern UnkCardCmd data_0210bf00;
extern UnkCardCommon data_020c1100;
extern u32 data_0210c580;
extern UnkCardRom data_0210c5a0;
extern BOOL data_0210bee0;
extern void OS_Terminate(void);
extern u32 OS_GetLockID(void);
extern void func_02000b60(const char *marker);
extern void func_020787c4(OSThread *thread, void (*func)(void *), void *arg, void *stack, u32 stackSize, u32 prio);
extern void func_02078af4(OSThread *thread, u32 prio);
extern void func_0207a180(u32 tag, void (*callback)(u32 tag, u32 data, BOOL err));
extern BOOL func_0207a1cc(u32 tag, BOOL arm7);
extern s32 PXI_SendWordByFifo(u32 tag, u32 data, BOOL err);
extern void func_0207a074(void);
extern s32 func_020779a4(u16 lockId);
extern s32 func_020779c0(u16 lockId);
extern void func_020673ec(u32 dma);
extern u32 func_020798c0(void);
extern void func_02067d60(u32 dma, const void *src, void *dst, u32 size);
extern void func_02077480(u32 mask, void (*handler)(void));
extern u32 func_02077650(u32 mask);
extern u32 func_02077680(u32 mask);
extern u32 func_020776b0(u32 mask);
extern void WaitByLoop(s32 count);
extern u32 func_0207bd04(void);
static inline void CARDi_WaitAndLock(UnkCardCommon *p, UnkCardCallback callback, void *arg) {
    u32 prevIRQState = OS_DisableIrq();
    while (p->unk_114 & 4) {
        func_0200ccbc(&p->unk_10c);
    }
    p->unk_114 |= 4;
    p->unk_038 = callback;
    p->unk_03c = arg;
    OS_RestoreIrq(prevIRQState);
}
static inline void CARDi_EndTask(UnkCardCommon *p) {
    const UnkCardCallback callback = p->unk_038;
    void *const arg                = p->unk_03c;
    {
        u32 prevIRQState = OS_DisableIrq();
        p->unk_114 &= ~0x4C;
        OS_UnpauseThread(&p->unk_10c);
        if (p->unk_114 & 0x10) {
            OS_WakeupThreadDirect(&p->unk_044);
        }
        OS_RestoreIrq(prevIRQState);
    }
    if (callback != 0) {
        callback(arg);
    }
}
extern void func_0205d3bc(UnkCardTask task);
extern void func_0205d3f8(u16 lockId, u32 target);
extern void func_0205d47c(u16 lockId, u32 target);
extern void func_0205d508(void);
extern BOOL func_0205d60c(void);
extern void func_0205d61c(void);
extern void func_0205d634(BOOL enable);
extern BOOL func_0205d644(void);
extern BOOL func_0205d690(void);
extern u32 func_0205d6ac(void);
extern void CARD_LockRom(u16 lockId);
extern void CARD_UnlockRom(u16 lockId);
extern void func_0205d6f8(u16 lockId);
extern void func_0205d708(u16 lockId);
extern void func_0205d718(u32 type);
extern void func_0205d9a0(UnkCardCommon *common);
extern BOOL func_0205db78(u32 src, u32 dst, u32 len, UnkCardCallback callback, void *arg, BOOL async, u32 req, u32 retry,
                          u32 mode);
extern u32 func_0205dc60(void);
extern BOOL func_0205dc74(u32 type);
extern BOOL func_0205ddac(void);
extern BOOL func_0205ddb8(UnkCardRom *rom);
extern void func_0205de44(u32 hi, u32 lo);
extern void func_0205dea4(void);
extern void func_0205def8(void);
extern BOOL func_0205dfc8(UnkCardRom *rom);
extern void func_0205e12c(UnkCardRom *rom);
extern u32 func_0205e214(void);
extern void func_0205e270(UnkCardCommon *common);
extern void CARDi_ReadRom(u32 dma, const void *src, void *dst, u32 len, UnkCardCallback callback, void *arg, BOOL async);
extern void CARD_Init(void);
extern BOOL func_0205e464(void);
extern void *func_0205e470(void);
extern void func_0205e47c(u32 tag, u32 data, BOOL err);
extern void func_02011e58(void *arg);
extern BOOL func_0205e508(UnkCardCommon *common, u32 req, s32 retry);
extern void func_0205e65c(void);
extern void func_0205e688(u32 tag, u32 data, BOOL err);
extern BOOL CARD_IsPulledOut(void);
extern void func_0205e6ec(void);
extern void func_0205e778(u32 id);
extern void func_0205e7d8(u32 data, s32 wait);
void func_0205e47c(u32 tag, u32 data, BOOL err);
void func_02011e58(void *arg) {
    UnkCardCommon *const p = &data_020c1100;

    for (;;) {
        u32 prevIRQState = OS_DisableIrq();
        while (!(p->unk_114 & 8)) {
            p->unk_104 = &p->unk_044;
            func_0200ccbc(0);
        }
        OS_RestoreIrq(prevIRQState);
        p->unk_040(p);
    }
}
BOOL func_0205e508(UnkCardCommon *p, u32 req, s32 retry);
