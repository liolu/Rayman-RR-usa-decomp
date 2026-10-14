/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0205fbf8 from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/fs/fs_archive.c (license: none), reused by
 * tools/donor_match.py */
typedef char *va_list;
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
extern u32 __DTCM_LO;
typedef struct {
    u32 offset;
    u32 size;
} CartridgeRegion;
static inline BOOL BIOS_IsDownloadPlay(void) {
    return (*(u16 *) (0x027FF000 | 0xC40)) == 2;
}
static inline const CartridgeRegion *Cart_GetFileNameTable(void) {
    return (const CartridgeRegion *) ((const u8 *) ((0x027FF000 | 0xE40)));
}
static inline const CartridgeRegion *Cart_GetFileAllocTable(void) {
    return (const CartridgeRegion *) ((const u8 *) ((0x027FF000 | 0xE48)));
}
static inline const CartridgeRegion *Cart_GetArm9OverlayTable(void) {
    return (const CartridgeRegion *) ((const u8 *) (*(u32 *) (0x027FF000 | 0xE50)));
}
static inline const CartridgeRegion *Cart_GetArm7OverlayTable(void) {
    return (const CartridgeRegion *) ((const u8 *) (*(u32 *) (0x027FF000 | 0xE58)));
}
typedef enum OS_IRQMask {
    IRQ_ALL         = -1,
    IRQ_VBLANK      = 1 << 0,
    IRQ_HBLANK      = 1 << 1,
    IRQ_VCOUNT      = 1 << 2,
    IRQ_TIMER_0     = 1 << 3,
    IRQ_TIMER_1     = 1 << 4,
    IRQ_TIMER_2     = 1 << 5,
    IRQ_TIMER_3     = 1 << 6,
    IRQ_RTC         = 1 << 7,
    IRQ_DMA_0       = 1 << 8,
    IRQ_DMA_1       = 1 << 9,
    IRQ_DMA_2       = 1 << 10,
    IRQ_DMA_3       = 1 << 11,
    IRQ_KEYPAD      = 1 << 12,
    IRQ_GBA_SLOT    = 1 << 13,
    IRQ_IPC_SYNC    = 1 << 16,
    IRQ_IPC_SEND    = 1 << 17,
    IRQ_IPC_RECEIVE = 1 << 18,
    IRQ_CARD_DATA   = 1 << 19,
    IRQ_CARD_IREQ   = 1 << 20,
    IRQ_GEOMETRY    = 1 << 21,
    IRQ_SCREEN_FOLD = 1 << 22,
    IRQ_SPI         = 1 << 23,
    IRQ_WIFI        = 1 << 24,
} OS_IRQMask;
typedef void (*OS_IRQCallback)(void);
typedef struct {
    void (*func)(void *);
    u32 enabled;
    void *arg;
} OS_IRQCallbackInfo;
extern OS_IRQCallbackInfo IRQCallbackInfo[8];
extern OS_IRQCallback IRQCallbacks[22];
extern void OS_InitIRQQueue(void);
extern void OS_SetIRQCallback(u32 mask, OS_IRQCallback callback);
extern OS_IRQCallback OS_GetIRQCallback(u32 mask);
extern void OS_SetDMAInterruptCallback(u32 dmaNumber, void (*callback)(void *), void *arg);
extern void OS_SetTimerInterruptCallback(u32 timerNumber, void (*callback)(void *), void *arg);
extern OS_IRQMask OS_SetIRQMask(OS_IRQMask mask);
extern OS_IRQMask OS_EnableInterrupts(OS_IRQMask mask);
extern OS_IRQMask OS_DisableInterrupts(OS_IRQMask mask);
extern OS_IRQMask OS_ResetIRQRequestFlags(OS_IRQMask mask);
static inline BOOL OS_DisableIME(void) {
    u16 prev               = (*(vu16 *) 0x04000208);
    (*(vu16 *) 0x04000208) = 0;
    return (BOOL) prev;
}
static inline BOOL OS_RestoreIME(BOOL enable) {
    u16 prev               = (*(vu16 *) 0x04000208);
    (*(vu16 *) 0x04000208) = (vu16) enable;
    return (BOOL) prev;
}
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
typedef struct OSMutex {
    OSThreadQueue queue;
    OSThread *thread;
    s32 count;
    OSMutexLinkedList list;
} OSMutex;
extern void OS_InitMutex(OSMutex *mutex);
extern void OS_LockMutex(OSMutex *mutex);
extern void OS_UnlockMutex(OSMutex *mutex);
extern void OS_UnlockAllQueuedThreadMutex(OSThread *thread);
extern BOOL OS_TryLockMutex(OSMutex *mutex);
typedef enum {
    REGION_MAIN_ARM9 = 0,
    REGION_MAIN_ARM7 = 1,
    REGION_EXTENDED  = 2,
    REGION_ITCM      = 3,
    REGION_DTCM      = 4,
    REGION_SHARED    = 5,
    REGION_WORK_ARM9 = 6,
    REGION_WORK_ARM7 = 7,
    REGION_UNKNOWN_8 = 8
} Region;
typedef struct {
    void *regionBottom[9];
    void *regionTop[9];
} RegionInfo;
extern void OS_RegionsInit(void);
extern void OS_ExtendedRegionInit(void);
extern void *OS_GetRegionTop(Region region);
extern void *OS_GetRegionBottom(Region region);
extern void *OS_GetDefaultRegionTop(Region region);
extern void *OS_GetDefaultRegionBottom(Region region);
extern void OS_SetRegionTop(Region region, void *top);
extern void OS_SetRegionBottom(Region region, void *bottom);
extern void *OS_AllocRegionMemory(Region region, u32 size, u32 align);
static inline void OS_InitializeRegionTop(Region region) {
    OS_SetRegionTop(region, OS_GetDefaultRegionTop(region));
}
static inline void OS_InitializeRegionBottom(Region region) {
    OS_SetRegionBottom(region, OS_GetDefaultRegionBottom(region));
}
static inline void OS_InitializeRegion(Region region) {
    OS_InitializeRegionTop(region);
    OS_InitializeRegionBottom(region);
}
typedef struct OSLinkedList {
    void *head;
    void *tail;

} OSLinkedList;
typedef struct OSMessageQueue {
    OSLinkedList unk_00;
    u32 unk_08;
    u32 unk_0c;
    u32 unk_10;
    u32 unk_14;
    u32 unk_18;
    u32 unk_1c;

} OSMessageQueue;
typedef void *OSMessage __attribute__((aligned(8)));
typedef struct OSAlarm {
    u32 unk_00;
    u32 unk_04;
    u32 unk_08;
    u32 unk_0c;
    u32 unk_10;
    void *unk_14;
    void *unk_18;
    u32 unk_1c;
    u32 unk_20;
    u32 unk_24;
    u32 unk_28;

} OSAlarm;
typedef struct OSDma {
    vu32 src;
    vu32 dst;
    vu32 cnt;

} OSDma;
typedef u32 OSHeapHandle;
typedef u64 OSTime;
typedef u32 OSIntrMode;
extern void OS_Init(void);
extern void OS_InitThread(void);
extern void OS_InitTick(void);
extern void OS_InitAlarm(void);
extern void OS_Terminate(void);
extern void OS_SetIrqFunction(u32 type, void (*function)());
extern void OS_EnableIrqMask(u32 mask);
extern void OS_WaitVBlankIntr(void);
extern void _OS_SpinWait(u32 param1);
inline void OS_SpinWait(u32 param1) {
    _OS_SpinWait(param1 / 2);
}
extern void _OS_Panic();
extern void OS_ResetSystem(u32);
extern void *OS_InitAlloc(u32 arena, u32 addrLo, u32 addrHi, u32);
extern u32 OS_GetArenaLo(u32 arena);
extern u32 OS_GetArenaHi(u32 arena);
extern void OS_SetArenaLo(u32 arena, void *addr);
extern void *OS_AllocFromArenaLo(u32 arena, u32 size, u32 num);
extern OSHeapHandle OS_CreateHeap(u32 arena, void *addrLo, void *addrHi);
extern void OS_SetCurrentHeap(u32 arena, OSHeapHandle heap);
extern void OS_DumpHeap(u32 arena, OSHeapHandle heap);
extern void *OS_AllocFromHeap(u32 arena, OSHeapHandle heap, u32 size);
extern void OS_FreeFromHeap(u32 arena, OSHeapHandle heap, void *ptr);
extern u32 OS_CheckHeap(u32 arena, OSHeapHandle heap);
extern void OS_Sleep(u32 time);
extern void OS_func_0044(void);
extern s32 OS_func_0039(OSMutexQueue *param1);
extern void OS_InitMessageQueue(OSMessageQueue *queue, OSMessage *buf, u32 bufLength);
extern void OS_ReceiveMessage(OSMessageQueue *queue, OSMessage *message, u32 block);
extern void OS_SendMessage(OSMessageQueue *queue, OSMessage message, u32 block);
extern void OS_CreateAlarm(OSAlarm *alarm);
extern void OS_SetPeriodicAlarm(OSAlarm *alarm, OSTime, OSTime, void (*callback)(void *arg), void *arg);
extern void OS_CancelAlarm(OSAlarm *alarm);
extern OSTime OS_GetTick(void);
extern u32 OS_GetConsoleType(void);
extern u32 OS_GetLockID(void);
extern u32 OS_DisableInterrupts_Irq(void);
extern void OS_RestoreInterrupts(u32);
extern BOOL OS_func_0206d5ac(u16, u32);
extern void OS_func_0206d66c(u16, u32);
extern u32 OS_func_0206d3cc(void);
extern void OS_func_0013(s32, void (*)(u32), u32);
extern void OS_func_0167(void);
extern void OS_func_0169(u32, void (*)(u32, u32, u32));
extern BOOL OS_func_0170(u32, u32);
extern s32 OS_func_0171(u32, u32, u32);
extern s32 OS_func_0174(void);
extern BOOL OS_func_0065(void);
inline void OS_SetIrqCheckFlag(void) {
    (*(u32 *) (((u8 *) &__DTCM_LO) + 0x3FF8)) |= 1;
}
inline u16 OS_EnableIrq(void) {
    u16 oldVal             = (*(vu16 *) 0x04000208);
    (*(vu16 *) 0x04000208) = 1;
    return oldVal;
}
inline u32 OS_GetMainArenaLo() {
    return OS_GetArenaLo(0);
}
inline u32 OS_GetMainArenaHi(void) {
    return OS_GetArenaHi(0);
}
inline u32 OS_GetITCMArenaLo() {
    return OS_GetArenaLo(3);
}
inline u32 OS_GetITCMArenaHi() {
    return OS_GetArenaHi(3);
}
inline u32 OS_GetDTCMArenaLo() {
    return OS_GetArenaLo(4);
}
inline u32 OS_GetDTCMArenaHi() {
    return OS_GetArenaHi(4);
}
inline void OS_SetMainArenaLo(void *addr) {
    OS_SetArenaLo(0, addr);
}
inline void *OS_AllocFromMainArenaLo(u32 size, u32 num) {
    return OS_AllocFromArenaLo(0, size, num);
}
inline void *OS_Alloc(u32 size) {
    return OS_AllocFromHeap(0, -1, size);
}
inline void OS_Free(void *ptr) {
    OS_FreeFromHeap(0, -1, ptr);
}
inline OSTime OS_MilliSecondsToTicks(OSTime ms) {
    return (ms * 33514) / 64;
}
inline OSTime OS_MicroSecondsToTicks(OSTime us) {
    return OS_MilliSecondsToTicks(us) / 1000;
}
inline OSTime OS_TicksToMilliSeconds(OSTime ticks) {
    return (ticks * 64) / 33514;
}
inline BOOL OS_IsRunOnTwl(void) {

    return 0;
}
struct FS_File;
struct FS_Record;
typedef enum {
    FS_RESULT_SUCCESS  = 0,
    FS_RESULT_FAILURE  = 1,
    FS_RESULT_BUSY     = 2,
    FS_RESULT_CANCELED = 3,
    FS_RESULT_BADCMD   = 4,
    FS_RESULT_ASYNC    = 6,
    FS_RESULT_UNKNOWN  = 8,
} FS_CommandResult;
typedef FS_CommandResult (*FS_RecordReadCB)(struct FS_Record *record, void *dest, u32 pos, u32 size);
typedef FS_CommandResult (*FS_RecordWriteCB)(struct FS_Record *record, const void *src, u32 pos, u32 size);
typedef FS_CommandResult (*FS_RecordMethodCB)(struct FS_File *file, u32 type);
typedef struct FS_LinkedFile {
    struct FS_File *prev;
    struct FS_File *next;
} FS_LinkedFile;
typedef struct FS_Record {
    u32 name;
    struct FS_Record *next;
    struct FS_Record *prev;
    OSThreadQueue unk_0C;

    OSThreadQueue unk_14;

    u32 flags;
    FS_LinkedFile fileList;
    u32 baseOffset;
    u32 fatOffset;
    u32 fatSize;
    u32 fntOffset;
    u32 fntSize;
    u32 fatBase;
    u32 fntBase;
    void *loaded;
    FS_RecordReadCB readCB;
    FS_RecordWriteCB writeCB;
    FS_RecordReadCB tableCB;
    FS_RecordMethodCB methodCB;
    u32 methodFlags;
} FS_Record;
typedef enum {
    FS_RECORD_FLAG_LOADED       = 0x002,
    FS_RECORD_FLAG_TABLE_LOADED = 0x004,
    FS_RECORD_FLAG_HALTED       = 0x008,
    FS_RECORD_FLAG_ACTIVE       = 0x010,
    FS_RECORD_FLAG_CANCELING    = 0x020,
    FS_RECORD_FLAG_WAITING      = 0x040,
    FS_RECORD_FLAG_UNLOADING    = 0x080,
    FS_RECORD_FLAG_ASYNC        = 0x100,
    FS_RECORD_FLAG_SYNC         = 0x200,
} FS_RecordFlags;
extern BOOL FS_RecordWait(FS_Record *record);
extern BOOL FS_RecordResume(FS_Record *record);
static inline BOOL FS_IsRecordLoaded(volatile FS_Record *record) {
    return (record->flags & FS_RECORD_FLAG_LOADED) != 0;
}
static inline BOOL FS_IsRecordTableLoaded(volatile FS_Record *record) {
    return (record->flags & FS_RECORD_FLAG_TABLE_LOADED) != 0;
}
static inline BOOL FS_IsRecordHalted(volatile FS_Record *record) {
    return (record->flags & FS_RECORD_FLAG_HALTED) != 0;
}
static inline BOOL FS_IsRecordActive(volatile FS_Record *record) {
    return (record->flags & FS_RECORD_FLAG_ACTIVE) != 0;
}
static inline BOOL FS_IsRecordCanceling(volatile FS_Record *record) {
    return (record->flags & FS_RECORD_FLAG_CANCELING) != 0;
}
static inline BOOL FS_IsRecordWaiting(volatile FS_Record *record) {
    return (record->flags & FS_RECORD_FLAG_WAITING) != 0;
}
static inline BOOL FS_IsRecordAsync(volatile FS_Record *record) {
    return (record->flags & FS_RECORD_FLAG_ASYNC) != 0;
}
typedef struct FS_FileIdentifier {
    struct FS_Record *record;
    u32 fileID;
} FS_FileIdentifier;
typedef struct FS_FilePosition {
    struct FS_Record *record;
    u16 id;
    u16 index;
    u32 position;
} FS_FilePosition;
typedef struct FS_FileArgs_NormalizePath {
    FS_FilePosition position;
    const char *path;
    BOOL isDirectory;
    union {
        FS_FileIdentifier *file;
        FS_FilePosition *directory;
    } response;
} FS_FileArgs_PathNormalize;
typedef struct FS_FileArgs_ProcessRead {
    void *dest;
    u32 sizeExpected;
    u32 sizeActual;
} FS_FileArgs_ProcessRead;
typedef struct FS_FileArgs_Seek {
    FS_FilePosition position;
} FS_FileArgs_Seek;
typedef struct FS_FileArgs_OpenImmediate {
    u32 start;
    u32 end;
    u32 idx;
} FS_FileArgs_OpenImmediate;
typedef struct FS_FileArgs_OpenFromID {
    FS_FileIdentifier iden;
} FS_FileArgs_OpenFromID;
typedef struct FS_File {
    struct FS_LinkedFile link;
    struct FS_Record *record;
    u32 status;
    u32 unk_10;
    FS_CommandResult result;
    OSThreadQueue unk_18;
    u32 unk_20;
    u32 startPosition;
    u32 endPosition;
    u32 currentPosition;

    union {
        FS_FileArgs_PathNormalize normalize;
        FS_FileArgs_ProcessRead read;
        FS_FileArgs_OpenImmediate openImmediate;
        FS_FileArgs_OpenFromID openFromId;
    } methodArgs;
} FS_File;
extern void FS_FileInit(FS_File *file);
extern BOOL FS_FilePathNormalize(FS_File *file, const char *path, FS_FileIdentifier *iden, FS_FilePosition *dirPosition);
extern BOOL FS_FilePathAsIden(FS_FileIdentifier *iden, const char *path);
extern BOOL FS_FileOpenImmediate(FS_File *file, FS_Record *record, u32 startPos, u32 endPos, u32 fileIdx);
extern BOOL FS_FileOpenFromIden(FS_File *file, FS_FileIdentifier iden);
extern BOOL FS_FileOpen(FS_File *file, const char *path);
extern BOOL FS_FileClose(FS_File *file);
extern BOOL FS_FileWait(FS_File *file);
extern void FS_FileStop(FS_File *file);
extern s32 FS_FileReadAsync(FS_File *file, void *dest, s32 size);
extern s32 FS_FileRead(FS_File *file, void *dest, s32 size);
extern BOOL FS_FileSeek(FS_File *file, s32 offset, s32 mode);
typedef enum {
    FS_FILE_STATUS_BUSY      = 0x01,
    FS_FILE_STATUS_CANCELING = 0x02,
    FS_FILE_STATUS_SYNC      = 0x04,
    FS_FILE_STATUS_ASYNC     = 0x08,
    FS_FILE_STATUS_IS_FILE   = 0x10,
    FS_FILE_STATUS_IS_DIR    = 0x20,
    FS_FILE_STATUS_ACTIVE    = 0x40,
} FS_FileStatusFlags;
static inline BOOL FS_IsFileBusy(volatile FS_File *file) {
    return (file->status & FS_FILE_STATUS_BUSY) != 0;
}
static inline BOOL FS_IsFileCanceling(volatile FS_File *file) {
    return (file->status & FS_FILE_STATUS_CANCELING) != 0;
}
static inline BOOL FS_IsFileSynchronous(volatile const FS_File *file) {
    return (file->status & FS_FILE_STATUS_SYNC) != 0;
}
static inline BOOL FS_IsFileActive(volatile const FS_File *file) {
    return (file->status & FS_FILE_STATUS_ACTIVE) != 0;
}
static inline BOOL FS_IsFileSuccessful(volatile const FS_File *file) {
    return (file->result == FS_RESULT_SUCCESS) != 0;
}
static inline void FS_FileListCut(FS_LinkedFile *list) {
    FS_File *prev = list->prev;
    FS_File *next = list->next;

    if (prev != 0) {
        prev->link.next = next;
    }
    if (next != 0) {
        next->link.prev = prev;
    }
}
static inline void FS_FileListAppend(FS_File *file, FS_File *list) {
    FS_LinkedFile *const link = &file->link;

    FS_FileListCut(link);

    while (list->link.next != 0) {
        list = list->link.next;
    }

    list->link.next = file;
    link->prev      = list;
    link->next      = 0;
}
typedef void (*OverlayFunc)(void);
typedef struct {
    void *unk_00;
    u32 unk_04;
} UnkInfoChunk;
typedef struct {
    char unk_00[0x24];
    u32 unk_24;
    u32 unk_28;
    char unk_2C[0x1C];
} UnkOverlayBlock;
typedef struct {
    u32 unk_00;
    u32 unk_04;
} UnkOverlayDetails;
typedef struct FSOverlay {
    s32 id;
    void *addr;
    u32 textSize;
    s32 bssSize;
    OverlayFunc *ctorStart;
    OverlayFunc *ctorEnd;
    s32 fileId;
    u32 fileSize : 24;
    u32 flags : 8;
    u32 unk_20;
    UnkOverlayDetails unk_24;
} FSOverlay;
typedef struct {
    u32 unk_00;
    void *addr;
    u32 sizeRam;
    u32 sizeBss;
    OverlayFunc *initFunc;
    OverlayFunc *endFunc;
    u32 unk_18;
    u32 sizeCompressed : 24;
    u32 flags : 8;
    u32 unk_20;
    UnkOverlayDetails unk_24;
} OverlayInfo;
extern u32 FS_GetOverlayRamSize(FSOverlay *info);
extern void FS_InvalidateOverlay(FSOverlay *info);
extern BOOL FS_LoadOverlayInfo(FSOverlay *overlay, FSOverlay *arg1, u32 id);
extern void FS_StartOverlay(FSOverlay *overlay);
extern BOOL FS_StopOverlay(FSOverlay *overlay);
extern BOOL FS_LoadOverlay(FSOverlay *overlay, u32 overlayID);
extern BOOL FS_UnloadOverlay(FSOverlay *overlay, u32 overlayID);
static inline FS_IsOverlayCompressed(FSOverlay *info) {
    return (info->flags & 1) != 0;
}
extern CartridgeRegion fsi_ovt7;
extern CartridgeRegion fsi_ovt9;
extern FS_Record fsi_arc_rom;
extern u32 FS_TryLoadTable(void *buf, u32 size);
struct FSVolume;
typedef struct FSUnkStruct2 {
    struct FSVolume *unk_00;
    s16 unk_04;
    u16 unk_06;

} FSUnkStruct2;
typedef struct FSUnkStruct5 {
    struct FSVolume *volume;
    struct FSVolume *next;
    struct FSVolume *prev;

} FSUnkStruct5;
struct FSFile;
typedef struct FSVolume {
    u32 volumeName;
    struct FSVolume *next;
    struct FSVolume *prev;
    u32 unk_0c;
    u32 unk_10;
    u32 unk_14;
    u32 unk_18;
    vu32 flags;
    u32 unk_20;
    struct FSVolume *unk_24;
    u32 unk_28;
    u32 *fat;
    u32 fatSize;
    u8 *fnt;
    u32 fntSize;
    u32 fatRomOffset;
    u32 fntRomOffset;
    u32 *unk_44;
    BOOL (*unk_48)(struct FSVolume *, u32, u32, u32);
    BOOL (*unk_4c)(struct FSVolume *, u32, u32, u32);
    BOOL (*unk_50)(struct FSVolume *, u32, u32, u32);
    u32 (*unk_54)(struct FSFile *, u32);
    u32 unk_58;

} FSVolume;
typedef struct FSUnkStruct3 {
    u32 volumeName;
    u32 unk_04;
    u32 unk_08;
    u32 unk_0c;
    u32 unk_10;
    u8 unk_14[0x94 - 0x14];

} FSUnkStruct3;
typedef struct FSUnkStruct7 {
    u32 unk_00;
    u32 unk_04;
    u32 unk_08;

} FSUnkStruct7;
typedef struct FSFile {
    u32 unk_00;
    s32 *unk_04;
    FSVolume *volume;
    vu32 flags;
    u32 unk_10;
    u32 unk_14;
    OSLinkedList unk_18;
    u32 unk_20;
    u32 startRomOffset;
    u32 endRomOffset;
    u32 cursor;
    u32 buf;
    union {
        u32 unk_34;
        struct {
            u16 unk_34_s;
            u16 unk_36_s;
        };
    };
    u16 unk_38;
    u32 unk_3c;
    u32 unk_40;
    u32 unk_44;

} FSFile;
typedef struct FSFntDirectory {
    u32 subtableOffset;
    u16 firstFileId;
    u16 parentId;

} FSFntDirectory;
typedef struct FSDirEntry {
    u32 unk_00;
    union {
        u32 unk_04_u32;
        struct {
            u16 unk_04_u16;
            u16 unk_06;
        };
    };
    u32 unk_08;
    u32 unk_0c;
    u32 unk_10;
    char name[0x80];

} FSDirEntry;
extern void FS_Init(u32 dmaCount);
extern void FS_InitFile(FSFile *file);
extern BOOL FS_OpenFile(FSFile *file, const char *path);
extern BOOL FS_OpenFileEx(FSFile *file, const char *path, u32 flags);
extern BOOL FS_SeekFile(FSFile *file, s32 pos, u32 mode);
extern u32 FS_GetLength(FSFile *file);
extern u32 FS_ReadFile(FSFile *file, void *buf, u32 size);
extern BOOL FS_CloseFile(FSFile *file);
inline BOOL FS_IsFile(FSFile *file) {
    return !!(file->flags & 0x10);
}
extern BOOL FS_FindDir(FSFile *file, const char *path);
extern BOOL FS_ReadDir(FSFile *file, FSDirEntry *dir);
extern void FS_CloseDirectory(FSFile *file);
extern u32 FS_GetOverlaySize(FSOverlay *overlay);
extern void FS_ClearOverlayCacheAndBss(FSOverlay *overlay);
extern void FS_Overlay_0202d6cc(void **param1, FSOverlay *overlay);
extern BOOL FS_Overlay_0202d6f4(FSOverlay *param1, FSOverlay *param2, s32 param3, s32 param4, s32 param5, u32 param6,
                                s32 param7, u32 param8);
extern BOOL FS_LoadOverlayFile(FSOverlay *overlay);
extern BOOL FS_Overlay_0202d984(FSOverlay *param1, s32 param2, s32 param3);
extern BOOL FS_CleanupOverlayResources(FSOverlay *overlay);
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
typedef struct UnkFsDirEntry {
    union {
        FS_FileIdentifier unk_file;
        FS_FilePosition unk_dir;
    } unk_00;
    u32 unk_0c;
    u32 unk_10;
    char unk_14[128];
} UnkFsDirEntry;
typedef struct UnkFsTableCursor {
    FS_Record *unk_00;
    u32 unk_04;
} UnkFsTableCursor;
typedef struct UnkFsFile {
    FS_LinkedFile link;
    FS_Record *record;
    vu32 status;
    u32 unk_10;
    FS_CommandResult result;
    OSThreadQueue unk_18;
    union {
        struct {
            u32 unk_20;
            u32 unk_24;
            u32 unk_28;
            u32 unk_2c;
        } file;
        struct {
            FS_FilePosition unk_20;
            u32 unk_2c;
        } dir;
    } prop;
    union {
        struct {
            void *unk_30;
            u32 unk_34;
            u32 unk_38;
        } cmd0;
        struct {
            const void *unk_30;
            u32 unk_34;
            u32 unk_38;
        } cmd1;
        struct {
            FS_FilePosition unk_30;
        } cmd2;
        struct {
            UnkFsDirEntry *unk_30;
            BOOL unk_34;
        } cmd3;
        struct {
            FS_FilePosition unk_30;
            const char *unk_3c;
            BOOL unk_40;
            void *unk_44;
        } cmd4;
        struct {
            u8 *unk_30;
            u32 unk_34;
            u16 unk_38;
            u16 unk_3a;
        } cmd5;
        struct {
            FS_FileIdentifier unk_30;
        } cmd6;
        struct {
            u32 unk_30;
            u32 unk_34;
            u32 unk_38;
        } cmd7;
    } arg;
} UnkFsFile;
typedef FS_CommandResult (*UnkFsCommandFunc)(FS_File *file);
extern const UnkFsCommandFunc data_020b6328[9];
static inline BOOL FSi_IsRecordSync(volatile FS_Record *record) {
    return (record->flags & FS_RECORD_FLAG_SYNC) != 0;
}
static inline BOOL FSi_IsPathChar(u32 c) {
    BOOL ret = 0;
    if (c != '\0' && c != '/' && c != '\\') {
        ret = 1;
    }
    return ret;
}
static inline BOOL FSi_IsFileDir(volatile UnkFsFile *file) {
    return (file->status & FS_FILE_STATUS_IS_DIR) != 0;
}
static inline u32 FSi_GetNameLength(u32 name) {
    if (name <= 0xFF) {
        return 1;
    } else if (name <= 0xFF00) {
        return 2;
    } else {
        return 3;
    }
}
extern void func_0205f9bc(FS_File *file, FS_CommandResult result);
extern FS_CommandResult func_0205fa18(FS_File *file, u32 command);
extern u32 func_02060548(const char *name, s32 nameLen);
extern FS_File *func_020605f4(FS_Record *record);
extern void func_02060808(FS_File *file);
extern BOOL func_0206089c(FS_File *file);
extern BOOL func_020608e0(FS_File *file, u32 command);
extern FS_Record *func_02060ab0(const char *name, s32 nameLen);
extern void FSi_InitRom(u32 dmaNo);
extern void func_02060e04(FS_File *file);
extern BOOL func_02060e2c(FS_File *file, const char *path, FS_FileIdentifier *iden, FS_FilePosition *dirPosition);
extern s32 func_02060f70(FS_File *file, void *dest, s32 size, BOOL async);
extern BOOL func_02060fec(FS_FileIdentifier *iden, const char *path);
extern BOOL func_0206102c(FS_File *file, FS_Record *record, u32 startPos, u32 endPos, u32 fileIdx);
extern BOOL func_02061074(FS_File *file, FS_FileIdentifier iden);
extern BOOL func_020610e4(FS_File *file, const char *path);
extern BOOL func_0206112c(FS_File *file);
extern BOOL func_02061168(FS_File *file);
extern void func_02061228(FS_File *file);
extern s32 func_02061270(FS_File *file, void *dest, s32 size);
extern BOOL func_02061280(FS_File *file, s32 offset, s32 mode);
extern FS_FilePosition data_0210cdd4;
extern FS_Record *data_0210cdd0;
extern FS_FilePosition data_0210cdd4;
void func_0205f9bc(FS_File *file, FS_CommandResult result);
FS_CommandResult func_0205fa18(FS_File *file, u32 command);
int func_0205fba8(const char *a, const char *b, u32 len);
FS_CommandResult func_020135ac(UnkFsTableCursor *cursor, void *dest, u32 size) {
    FS_Record *const record = cursor->unk_00;
    FS_CommandResult ret;

    record->flags |= FS_RECORD_FLAG_SYNC;
    ret = record->tableCB(record, dest, cursor->unk_04, size);
    switch (ret) {
        case FS_RESULT_SUCCESS:
        case FS_RESULT_FAILURE:
            record->flags &= ~FS_RECORD_FLAG_SYNC;
            break;
        case FS_RESULT_ASYNC: {
            u32 prevIRQState = OS_DisableIrq();
            while (FSi_IsRecordSync(record)) {
                func_0200ccbc(&record->unk_0C);
            }
            OS_RestoreIrq(prevIRQState);
            ret = record->fileList.next->result;
        } break;
    }
    cursor->unk_04 += size;
    return ret;
}
FS_CommandResult func_0205fcb8(UnkFsFile *file, u32 dirId);
FS_CommandResult func_0205fcec(UnkFsFile *file);
FS_CommandResult func_0205fd18(UnkFsFile *file);
FS_CommandResult func_0205fd44(UnkFsFile *file);
FS_CommandResult func_0205fddc(UnkFsFile *file);
FS_CommandResult func_0205ff08(UnkFsFile *file);
FS_CommandResult func_020600ec(UnkFsFile *file);
FS_CommandResult func_02060498(UnkFsFile *file);
FS_CommandResult func_02060518(UnkFsFile *file);
FS_CommandResult func_02060540(UnkFsFile *file);
extern const UnkFsCommandFunc data_020b6328[9];
u32 func_02060548(const char *name, s32 nameLen);
FS_CommandResult func_020605a0(FS_Record *record, void *dest, u32 pos, u32 size);
FS_CommandResult func_020605bc(FS_Record *record, const void *src, u32 pos, u32 size);
FS_CommandResult func_020605dc(FS_Record *record, void *dest, u32 pos, u32 size);
FS_File *func_020605f4(FS_Record *record);
void func_02060808(FS_File *file);
BOOL func_0206089c(FS_File *file);
BOOL func_020608e0(FS_File *file, u32 command);
void FS_RecordInit(FS_Record *record);
FS_Record *func_02060ab0(const char *name, s32 name_len);
BOOL FS_RecordRegister(FS_Record *record, const char *name, u32 name_len);
BOOL FS_RecordLoad(FS_Record *record, u32 baseOffset, u32 fat, u32 fatSize, u32 fnt, u32 fntSize, FS_RecordReadCB readCB,
                   FS_RecordWriteCB writeCB);
u32 FS_RecordLoadTable(FS_Record *record, void *buffer, u32 max_size);
void FS_RecordSetMethod(FS_Record *record, FS_RecordMethodCB callback, u32 flags);
void FS_RecordNotifyEnd(FS_Record *record, FS_CommandResult result);
