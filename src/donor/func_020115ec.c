/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* CARDi_ReadRom from https://github.com/Yokimitsuro/khdays-decomp libs/nitro/card/calls/CARDi_ReadRom.c (license: CC0-1.0),
 * reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned long u32;
typedef unsigned long long u64;
typedef signed char s8;
typedef short s16;
typedef signed long s32;
typedef long long s64;
typedef volatile u8 vu8;
typedef volatile u16 vu16;
typedef volatile u32 vu32;
typedef volatile u64 vu64;
typedef volatile s8 vs8;
typedef volatile s16 vs16;
typedef volatile s32 vs32;
typedef volatile s64 vs64;
typedef float f32;
typedef int BOOL;
typedef volatile u8 REGType8v;
typedef volatile u16 REGType16v;
typedef volatile u32 REGType32v;
enum {
    HW_ITCM      = 0x01ff8000,
    HW_ITCM_SIZE = 0x8000,
    HW_DTCM_SIZE = 0x4000
};
struct MIAllocator;
typedef void (*MIDmaCallback)(void *);
typedef int (*MIDeviceReadFunction)(void *userdata, void *buffer, u32 offset, u32 length);
typedef int (*MIDeviceWriteFunction)(void *userdata, const void *buffer, u32 offset, u32 length);
typedef void *(*MIAllocatorAllocFunction)(void *userdata, u32 length, u32 alignment);
typedef void (*MIAllocatorFreeFunction)(void *userdata, void *buffer);
typedef struct MIAllocator {
    void *userdata;
    MIAllocatorAllocFunction Alloc;
    MIAllocatorFreeFunction Free;
} MIAllocator;
typedef enum {
    MI_CTRDG_ROMCYCLE1_10 = 0,
    MI_CTRDG_ROMCYCLE1_8,
    MI_CTRDG_ROMCYCLE1_6,
    MI_CTRDG_ROMCYCLE1_18
} MICartridgeRomCycle1st;
typedef enum {
    MI_CTRDG_ROMCYCLE2_6 = 0,
    MI_CTRDG_ROMCYCLE2_4
} MICartridgeRomCycle2nd;
typedef enum {
    MI_PROCESSOR_ARM9 = 0,
    MI_PROCESSOR_ARM7
} MIProcessor;
typedef struct {
    u8 *destp;
    s32 destCount;
    u32 length;
    u16 destTmp;
    u8 destTmpCnt;
    u8 flags;
    u8 flagIndex;
    u8 lengthFlg;
    u8 exFormat;
    u8 _padding[1];
} MIUncompContextLZ;
typedef struct {
    u32 compParam : 4;
    u32 compType : 4;
    u32 destSize : 24;
} MICompressionHeader;
typedef struct {
    volatile BOOL isBusy;
    u32 dmaNo;
    u32 src;
    u32 length;
    MIDmaCallback callback;
    void *arg;
    int fifoCond;
    void (*fifoFunc)(void);
} MIiGXDmaParams;
typedef int OSIntrMode;
typedef u64 OSTick;
typedef struct OSBirthday {
    u8 month;
    u8 day;
} OSBirthday;
typedef struct OSOwnerInfo {
    u8 language;
    u8 favoriteColor;
    OSBirthday birthday;
    u16 nickName[10 + 1];
    u16 nickNameLength;
    u16 comment[26 + 1];
    u16 commentLength;
} OSOwnerInfo;
struct CPContext;
typedef struct CPContext {
    u64 div_numer;
    u64 div_denom;
    u64 sqrt;
    u16 div_mode;
    u16 sqrt_mode;
} CPContext;
struct HeapDesc;
struct OSContext;
struct OSLockWord;
struct OSMessageQueue;
struct OSMutex;
struct OSThread;
struct OSThreadInfo;
struct OSiAlarm;
struct OSiAlarmQueue;
struct OSiExContext;
struct OSiExceptionStatics;
struct OSiThreadInfoPrefix;
struct _OSMutexLink;
struct _OSMutexQueue;
struct _OSThread;
struct _OSThreadLink;
struct _OSThreadQueue;
enum {
    OS_IE_CARD_DATA = 1 << 19
};
typedef void *OSMessage;
struct OSiThreadInfoPrefix {
    u32 initialized;
    void *current_thread;
};
typedef struct OSContext {
    u32 cpsr;
    u32 r[13];
    u32 sp;
    u32 lr;
    u32 pc_plus4;
    u32 sp_svc;
    CPContext cp_context;
} OSContext;
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
typedef struct OSContext OSContext;
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
struct OSMutex {
    OSThreadQueue queue;
    OSThread *thread;
    s32 count;
    OSMutexLink link;
};
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
typedef u32 OSIrqMask;
typedef void (*OSIrqFunction)(void *arg);
typedef unsigned int OSIntrMode_Irq;
typedef unsigned int OSProcMode;
typedef struct OSiExContext {
    OSContext context;
    u32 cp15;
    u32 spsr;
    u32 exinfo;
    u32 debug[4];
} OSiExContext;
typedef struct OSiExContext OSiExContext;
typedef void (*OSExceptionHandler)(void *context, void *arg);
typedef struct OSiExceptionStatics {
    void *debuggerHandler;
    void *userExceptionHandlerArg;
    OSExceptionHandler userExceptionHandler;
} OSiExceptionStatics;
typedef int OSHeapHandle;
typedef struct HeapDesc HeapDesc;
typedef struct {
    volatile OSHeapHandle currentHeap;
    int numHeaps;
    void *arenaStart;
    void *arenaEnd;
    HeapDesc *heapArray;
} OSHeapInfo;
typedef void (*OSThreadFunc)(void *pArg);
typedef struct OSThreadInfo {
    u16 isNeedRescheduling;
    u16 irqDepth;
    OSThread *current;
    OSThread *list;
    void *switchCallback;
} OSThreadInfo;
typedef enum {
    OS_TIMER_0 = 0,
    OS_TIMER_1 = 1,
    OS_TIMER_2 = 2,
    OS_TIMER_3 = 3
} OSTimer;
struct OSThread {
    u8 context[0x64];
    OSThreadState state;
    OSThread *next;
    u32 id;
    u32 priority;
    void *profiler;
    OSThreadQueue *queue;
    OSThreadLink link;
    void *mutex;
    OSMutexQueue mutexQueue;
    u32 stackTop;
    u32 stackBottom;
    u32 stackWarningOffset;
    OSThreadQueue joinQueue;
    void *specific[3];
    void *alarmForSleep;
    void (*destructor)(void *);
    void *userParameter;
    int systemErrno;
};
typedef struct {
    OSIrqFunction pfnHandler;
    unsigned int bKeepEnabled;
    void *pArg;
} OSiIrqSlot;
typedef struct {
    u8 bootCheckInfo[0x20];
    u32 resetParameter;
    u8 padding5[0x8];
    u32 romBaseOffset;
    u8 cartridgeModuleInfo[12];
    u32 vblankCount;
    u8 wmBootBuf[0x40];
    u8 nvramUserInfo[0x100];
    u8 isd_reserved1[0x20];
    u8 arenaInfo[0x48];
    u8 real_time_clock[8];
    u32 dmaClearBuf[4];
    u8 rom_header[0x160];
    u8 isd_reserved2[32];
    u32 pxiSignalParam[2];
    u32 pxiHandleChecker[2];
    u32 mic_last_address;
    u16 mic_sampling_data;
    u16 wm_callback_control;
    u16 wm_rssi_pool;
    u8 ctrdg_SetModuleInfoFlag;
    u8 ctrdg_IsExisting;
    u32 component_param;
    void *threadinfo_mainp;
    void *threadinfo_subp;
    u16 button_XY;
    u8 touch_panel[4];
    u16 autoloadSync;
} OSSystemWork;
typedef struct OSLockWord {
    u16 lockFlag;
    u16 extension;
} OSLockWord;
typedef void (*OSLockCallback)(void);
struct OSiAlarmQueue {
    OSAlarm *head;
    OSAlarm *tail;
};
typedef struct {
    u8 reserved[0x3fc0];
    u8 sysrv[0x38];
    vu32 intr_check;
} OSDtcm;
typedef void (*OSSwitchThreadCallback)(void *from, void *to);
typedef struct OSMessageQueue OSMessageQueue;
typedef enum {
    OS_ARENA_MAIN         = 0,
    OS_ARENA_MAIN_SUBPRIV = 1,
    OS_ARENA_MAINEX       = 2,
    OS_ARENA_ITCM         = 3,
    OS_ARENA_DTCM         = 4,
    OS_ARENA_SHARED       = 5,
    OS_ARENA_WRAM_MAIN    = 6,
    OS_ARENA_WRAM_SUB     = 7,
    OS_ARENA_WRAM_SUBPRIV = 8,
    OS_ARENA_MAX          = 9
} OSArenaId;
typedef struct {
    void (*func)(void *);
    u32 enable;
    void *arg;
} OSIrqCallbackInfo;
struct OSMessageQueue {
    OSThreadQueue queueSend;
    OSThreadQueue queueReceive;
    OSMessage *msgArray;
    s32 msgCount;
    s32 firstIndex;
    s32 usedCount;
};
enum {
    CARD_STAT_BUSY = 1 << 2
};
typedef void (*CARDCallback)(void *argument);
struct CARDiCommandArg {
    int result;
};
struct CARDiCommon {
    struct CARDiCommandArg *cmd;
    s32 command;
    volatile s32 lock_owner;
    volatile s32 lock_ref;
    u8 lock_queue[8];
    s32 lock_target;
    u32 src;
    u32 dst;
    u32 len;
    u32 dma;
    s32 req_type;
    s32 req_retry;
    s32 req_mode;
    CARDCallback callback;
    void *callback_arg;
    void (*task_func)(struct CARDiCommon *common);
    u8 thread[0xc0];
    void *cur_th;
    u32 priority;
    u8 busy_q[8];
    volatile u32 flag;
    u8 dummy[8];
    u8 backup_cache_page_buf[256] __attribute__((aligned(32)));
};
struct CARDRomStat {
    void (*read_func)(struct CARDRomStat *state);
    u32 ctrl;
    u8 *cache_page;
    u32 dummy[5];
    u8 cache_buf[0x200];
};
extern void CARD_CheckEnabled(void);
extern int OS_DisableIrq(void);
extern void OS_RestoreIrq(int state);
extern void OS_SleepThread(void *queue);
extern void MI_StopDma(u32 channel);
extern BOOL CARDi_TryReadCardDma(struct CARDRomStat *state);
extern void CARD_WaitRomAsync(void);
extern void CARDi_SetTask(void (*task)(struct CARDiCommon *common));
extern void CARDi_ReadRomSyncCore(struct CARDiCommon *common);
extern struct CARDRomStat rom_stat __attribute__((aligned(32)));
extern struct CARDiCommon cardi_common;
extern u32 cardi_rom_base;
extern struct OSiThreadInfoPrefix OSi_ThreadInfo;
static inline void Card_WaitTask(struct CARDiCommon *common, CARDCallback callback, void *callbackArgument) {
    int interruptState = OS_DisableIrq();
    while ((common->flag & CARD_STAT_BUSY) != 0) {
        OS_SleepThread(common->busy_q);
    }
    common->flag |= CARD_STAT_BUSY;
    common->callback     = callback;
    common->callback_arg = callbackArgument;
    OS_RestoreIrq(interruptState);
}
void func_020115ec(u32 dma, const void *source, void *destination, u32 length, CARDCallback callback, void *callbackArgument,
                   BOOL asynchronous) {
    struct CARDRomStat *const state  = &rom_stat;
    struct CARDiCommon *const common = &cardi_common;

    CARD_CheckEnabled();
    Card_WaitTask(common, callback, callbackArgument);

    common->dma = dma;
    common->src = (u32) source + cardi_rom_base;
    common->dst = (u32) destination;
    common->len = length;
    if (dma <= 3) {
        MI_StopDma(dma);
    }

    if (CARDi_TryReadCardDma(state)) {
        if (!asynchronous) {
            CARD_WaitRomAsync();
        }
    } else if (asynchronous) {
        CARDi_SetTask(CARDi_ReadRomSyncCore);
    } else {
        common->cur_th = OSi_ThreadInfo.current_thread;
        CARDi_ReadRomSyncCore(common);
    }
}
