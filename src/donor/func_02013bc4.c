/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* FSi_NextCommand from https://github.com/Yokimitsuro/khdays-decomp libs/nitro/fs/calls/FSi_NextCommand.c (license: CC0-1.0),
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
typedef void *OSMessage;
typedef enum {
    FS_SEEK_SET,
    FS_SEEK_CUR,
    FS_SEEK_END
} FSSeekFileMode;
typedef enum {
    FS_COMMAND_ASYNC_BEGIN = 0,
    FS_COMMAND_READFILE    = FS_COMMAND_ASYNC_BEGIN,
    FS_COMMAND_WRITEFILE,
    FS_COMMAND_ASYNC_END,
    FS_COMMAND_SYNC_BEGIN = FS_COMMAND_ASYNC_END,
    FS_COMMAND_SEEKDIR    = FS_COMMAND_SYNC_BEGIN,
    FS_COMMAND_READDIR,
    FS_COMMAND_FINDPATH,
    FS_COMMAND_GETPATH,
    FS_COMMAND_OPENFILEFAST,
    FS_COMMAND_OPENFILEDIRECT,
    FS_COMMAND_CLOSEFILE,
    FS_COMMAND_SYNC_END,
    FS_COMMAND_STATUS_BEGIN = FS_COMMAND_SYNC_END,
    FS_COMMAND_ACTIVATE     = FS_COMMAND_STATUS_BEGIN,
    FS_COMMAND_IDLE,
    FS_COMMAND_SUSPEND,
    FS_COMMAND_RESUME,
    FS_COMMAND_STATUS_END,
    FS_COMMAND_INVALID
} FSCommandType;
typedef enum {
    FS_RESULT_SUCCESS = 0,
    FS_RESULT_FAILURE,
    FS_RESULT_BUSY,
    FS_RESULT_CANCELED,
    FS_RESULT_UNSUPPORTED,
    FS_RESULT_ERROR,
    FS_RESULT_PROC_ASYNC,
    FS_RESULT_PROC_DEFAULT,
    FS_RESULT_PROC_UNKNOWN
} FSResult;
struct FSFile;
struct FSArchive;
typedef FSResult (*FS_ARCHIVE_PROC_FUNC)(struct FSFile *, FSCommandType);
typedef FSResult (*FS_ARCHIVE_READ_FUNC)(struct FSArchive *p, void *dst, u32 pos, u32 size);
typedef FSResult (*FS_ARCHIVE_WRITE_FUNC)(struct FSArchive *p, const void *src, u32 pos, u32 size);
typedef struct FSFileLink {
    struct FSFile *prev;
    struct FSFile *next;
} FSFileLink;
typedef struct OSThreadQueue {
    struct OSThread *head;
    struct OSThread *tail;
} OSThreadQueue;
typedef struct FSArchiveFAT {
    u32 top;
    u32 bottom;
} FSArchiveFAT;
typedef struct FSArchiveFNT {
    u32 start;
    u16 index;
    u16 parent;
} FSArchiveFNT;
typedef struct FSArchive {
    union {
        char ptr[3 + 1];
        u32 pack;
    } name;
    struct FSArchive *next;
    struct FSArchive *prev;
    OSThreadQueue sync_q;
    OSThreadQueue stat_q;
    u32 flag;
    FSFileLink list;
    u32 base;
    u32 fat;
    u32 fat_size;
    u32 fnt;
    u32 fnt_size;
    u32 fat_bak;
    u32 fnt_bak;
    void *load_mem;
    FS_ARCHIVE_READ_FUNC read_func;
    FS_ARCHIVE_WRITE_FUNC write_func;
    FS_ARCHIVE_READ_FUNC table_func;
    FS_ARCHIVE_PROC_FUNC proc;
    u32 proc_flag;
} FSArchive;
typedef struct {
    struct FSArchive *arc;
    u16 own_id;
    u16 index;
    u32 pos;
} FSDirPos;
typedef struct {
    struct FSArchive *arc;
    u32 file_id;
} FSFileID;
typedef struct {
    union {
        FSFileID file_id;
        FSDirPos dir_id;
    };
    u32 is_directory;
    u32 name_len;
    char name[127 + 1];
} FSDirEntry;
typedef struct {
    FSDirPos pos;
} FSSeekDirInfo;
typedef struct {
    FSDirEntry *p_entry;
    BOOL skip_string;
} FSReadDirInfo;
typedef struct {
    FSDirPos pos;
    const char *path;
    BOOL find_directory;
    union {
        FSFileID *file;
        FSDirPos *dir;
    } result;
} FSFindPathInfo;
typedef struct {
    u8 *buf;
    u32 buf_len;
    u16 total_len;
    u16 dir_id;
} FSGetPathInfo;
typedef struct {
    FSFileID id;
} FSOpenFileFastInfo;
typedef struct {
    u32 top;
    u32 bottom;
    u32 index;
} FSOpenFileDirectInfo;
typedef struct {
    u32 reserved;
} FSCloseFileInfo;
typedef struct {
    void *dst;
    u32 len_org;
    u32 len;
} FSReadFileInfo;
typedef struct {
    const void *src;
    u32 len_org;
    u32 len;
} FSWriteFileInfo;
typedef struct FSFile {
    FSFileLink link;
    struct FSArchive *arc;
    u32 stat;
    FSCommandType command;
    FSResult error;
    OSThreadQueue queue[1];
    union {
        struct {
            u32 own_id;
            u32 top;
            u32 bottom;
            u32 pos;
        } file;
        struct {
            FSDirPos pos;
            u32 parent;
        } dir;
    } prop;
    union {
        FSReadFileInfo readfile;
        FSWriteFileInfo writefile;
        FSSeekDirInfo seekdir;
        FSReadDirInfo readdir;
        FSFindPathInfo findpath;
        FSGetPathInfo getpath;
        FSOpenFileFastInfo openfilefast;
        FSOpenFileDirectInfo openfiledirect;
        FSCloseFileInfo closefile;
    } arg;
} FSFile;
static inline BOOL FS_IsBusy(volatile const FSFile *p_file) {
    return (p_file->stat & 0x00000001) ? 1 : 0;
}
static inline BOOL FS_IsCanceling(volatile const FSFile *p_file) {
    return (p_file->stat & 0x00000002) ? 1 : 0;
}
static inline BOOL FS_IsSucceeded(volatile const FSFile *p_file) {
    return (p_file->error == FS_RESULT_SUCCESS) ? 1 : 0;
}
static inline BOOL FS_IsFile(volatile const FSFile *p_file) {
    return (p_file->stat & 0x00000010) ? 1 : 0;
}
static inline BOOL FS_IsDir(volatile const FSFile *p_file) {
    return (p_file->stat & 0x00000020) ? 1 : 0;
}
static inline BOOL FS_IsFileSyncMode(const volatile FSFile *p) {
    return (p->stat & 0x00000004) ? 1 : 0;
}
static inline BOOL FS_IsArchiveLoaded(volatile const FSArchive *p_arc) {
    return (p_arc->flag & 0x00000002) ? 1 : 0;
}
static inline BOOL FS_IsArchiveTableLoaded(volatile const FSArchive *p_arc) {
    return (p_arc->flag & 0x00000004) ? 1 : 0;
}
static inline BOOL FS_IsArchiveSuspended(volatile const FSArchive *p_arc) {
    return (p_arc->flag & 0x00000008) ? 1 : 0;
}
static inline void FSi_CutFromListCore(FSFileLink *trg) {
    FSFile *const pr = trg->prev;
    FSFile *const nx = trg->next;
    if (pr) {
        pr->link.next = nx;
    }
    if (nx) {
        nx->link.prev = pr;
    }
}
static inline void FSi_CutFromList(FSFile *elem) {
    FSFileLink *const trg = &elem->link;
    FSi_CutFromListCore(trg);
    trg->next = trg->prev = ((void *) 0);
}
static inline void FSi_AppendToList(FSFile *elem, FSFile *list) {
    FSFileLink *const trg = &elem->link;
    FSi_CutFromListCore(trg);
    {
        while (list->link.next) {
            list = list->link.next;
        }
        list->link.next = elem;
        trg->prev       = list;
        trg->next       = ((void *) 0);
    }
}
static inline BOOL FSi_IsSlash(u32 c) {
    return (c == '/') || (c == '\\');
}
static inline BOOL FSi_IsArchiveRunning(const volatile FSArchive *p_arc) {
    return ((p_arc->flag & 0x00000010) != 0);
}
static inline BOOL FSi_IsArchiveCanceling(const volatile FSArchive *p_arc) {
    return ((p_arc->flag & 0x00000020) != 0);
}
static inline BOOL FSi_IsArchiveSuspending(const volatile FSArchive *p_arc) {
    return ((p_arc->flag & 0x00000040) != 0);
}
static inline BOOL FSi_IsArchiveAsync(const volatile FSArchive *p_arc) {
    return ((p_arc->flag & 0x00000100) != 0);
}
static inline BOOL FSi_IsArchiveSync(const volatile FSArchive *p_arc) {
    return ((p_arc->flag & 0x00000200) != 0);
}
extern OSIntrMode OS_DisableIrq(void);
extern OSIntrMode OS_RestoreIrq(OSIntrMode state);
extern void OS_SleepThread(OSThreadQueue *queue);
extern void func_0200cc3c(OSThreadQueue *queue);
typedef struct {
    FSArchive *arc;
    u32 pos;
} FSiSyncReadParam;
static inline u8 MI_ReadByte(const void *address) {
    return *(const u8 *) address;
}
static inline void MI_WriteByte(void *address, u8 value) {
    *(u8 *) address = value;
}
extern FSResult FSi_ReadTable(FSiSyncReadParam *p, void *dst, u32 len);
extern void FSi_SeekDirDirect(FSFile *p_dir, u32 id);
extern int FSi_StrNICmp(const char *str1, const char *str2, u32 len);
extern FSResult FSi_TranslateCommand(FSFile *p_file, FSCommandType command);
extern void func_02012c2c(FSFile *p_file, FSResult ret);
extern void FSi_ExecuteAsyncCommand(FSFile *p_file);
extern FSFile *func_02013bc4(FSArchive *p_arc);
extern BOOL FSi_SendCommand(FSFile *p_file, FSCommandType command);
extern void func_020143a0(FSFile *p_file);
extern BOOL FS_CloseFile(FSFile *p_file);
extern BOOL FS_OpenFileDirect(FSFile *p_file, FSArchive *p_arc, u32 image_top, u32 image_bottom, u32 file_index);
extern BOOL FS_OpenFileFast(FSFile *p_file, FSFileID file_id);
extern int FS_ReadFile(FSFile *p_file, void *dst, s32 len);
extern BOOL FS_WaitAsync(FSFile *p_file);
extern FSArchive *FS_FindArchive(const char *name, int name_len);
extern void MI_CpuCopy8(const void *src, void *dst, u32 size);
extern void MI_CpuFill8(void *dst, u8 data, u32 size);
FSFile *func_02013bc4(FSArchive *p_arc) {
    OSIntrMode bak_psr = OS_DisableIrq();

    if (FSi_IsArchiveCanceling(p_arc)) {
        FSFile *p, *q;
        p_arc->flag &= ~0x00000020;
        for (p = p_arc->list.next; p; p = q) {
            q = p->link.next;
            if (FS_IsCanceling(p)) {
                if (p_arc->list.next == p) {
                    p_arc->list.next = q;
                }
                func_02012c2c(p, FS_RESULT_CANCELED);
                if (!q) {
                    q = p_arc->list.next;
                }
            }
        }
    }

    if (!FSi_IsArchiveSuspending(p_arc) && !FS_IsArchiveSuspended(p_arc) && p_arc->list.next) {
        FSFile *p_file      = p_arc->list.next;
        const BOOL is_start = !FSi_IsArchiveRunning(p_arc);

        if (is_start) {
            p_arc->flag |= 0x00000010;
        }

        (void) OS_RestoreIrq(bak_psr);

        if (is_start) {
            if ((p_arc->proc_flag & (1 << FS_COMMAND_ACTIVATE)) != 0) {
                (void) (*p_arc->proc)(p_file, FS_COMMAND_ACTIVATE);
            }
        }

        bak_psr = OS_DisableIrq();
        p_file->stat |= 0x00000040;

        if (FS_IsFileSyncMode(p_file)) {
            func_0200cc3c(p_file->queue);
            (void) OS_RestoreIrq(bak_psr);
            return ((void *) 0);
        } else {
            (void) OS_RestoreIrq(bak_psr);
            return p_file;
        }
    }

    if (FSi_IsArchiveRunning(p_arc)) {
        p_arc->flag &= ~0x00000010;

        if ((p_arc->proc_flag & (1 << FS_COMMAND_IDLE)) != 0) {
            FSFile tmp;
            func_020143a0(&tmp);
            tmp.arc = p_arc;
            (void) (*p_arc->proc)(&tmp, FS_COMMAND_IDLE);
        }
    }

    if (FSi_IsArchiveSuspending(p_arc)) {
        p_arc->flag &= ~0x00000040;
        p_arc->flag |= 0x00000008;
        func_0200cc3c(&p_arc->stat_q);
    }

    (void) OS_RestoreIrq(bak_psr);

    return ((void *) 0);
}
