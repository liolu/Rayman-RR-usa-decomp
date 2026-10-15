/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02060e2c from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/fs/fs_file.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned int u32;
typedef unsigned short u16;
typedef unsigned char u8;
typedef int s32;
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
typedef struct OSMutex {
    OSThreadQueue queue;
    OSThread *thread;
    s32 count;
    OSMutexLinkedList list;
} OSMutex;
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
static inline BOOL FS_IsRecordLoaded(volatile FS_Record *record) {
    return (record->flags & FS_RECORD_FLAG_LOADED) != 0;
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
extern BOOL FSi_SendCommand(FS_File *file, u32 command);
extern FS_Record *FS_FindArchive(const char *name, s32 nameLen);
extern BOOL FSi_FindPath(FS_File *file, const char *path, FS_FileIdentifier *iden, FS_FilePosition *dirPosition);
extern FS_FilePosition current_dir_pos;
BOOL FSi_FindPath(FS_File *file, const char *path, FS_FileIdentifier *iden, FS_FilePosition *dirPosition) {
    FS_FilePosition position;

    if (*(u8 *) path == '/' || *(u8 *) path == '\\') {
        position.record   = current_dir_pos.record;
        position.id       = 0;
        position.position = 0;
        position.index    = 0;
        path++;
    } else {
        s32 idx;
        position = current_dir_pos;

        for (idx = 0; idx <= 3; idx++) {
            u8 nextChar = *(u8 *) (path + idx);

            if (nextChar == 0 || nextChar == '/' || nextChar == '\\') {
                break;
            } else if (nextChar == ':') {
                FS_Record *rec = FS_FindArchive(path, idx);

                if (rec == 0) {
                    return 0;
                }
                if (FS_IsRecordLoaded(rec) == 0) {
                    return 0;
                }
                position.record   = rec;
                position.position = 0;
                position.index    = 0;
                position.id       = 0;
                path += idx + 1;
                if (*(u8 *) path == '/' || *(u8 *) path == '\\') {
                    path++;
                }
                break;
            }
        }
    }

    file->record                        = position.record;
    file->methodArgs.normalize.path     = path;
    file->methodArgs.normalize.position = position;

    if (dirPosition != 0) {
        file->methodArgs.normalize.isDirectory        = 1;
        file->methodArgs.normalize.response.directory = dirPosition;
    } else {
        file->methodArgs.normalize.isDirectory   = 0;
        file->methodArgs.normalize.response.file = iden;
    }

    return FSi_SendCommand(file, 4);
}
