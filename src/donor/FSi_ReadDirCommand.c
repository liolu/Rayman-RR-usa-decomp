/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0205fddc from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/fs/fs_archive.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned int u32;
typedef unsigned short u16;
typedef unsigned char u8;
typedef int s32;
typedef volatile u32 vu32;
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
FS_CommandResult FSi_ReadTable(UnkFsTableCursor *cursor, void *dest, u32 size);
FS_CommandResult FSi_ReadDirCommand(UnkFsFile *file) {
    UnkFsDirEntry *const entry = file->arg.cmd3.unk_30;
    FS_CommandResult ret;
    UnkFsTableCursor cursor;
    u8 len;

    cursor.unk_00 = file->record;
    cursor.unk_04 = file->prop.dir.unk_20.position;
    ret           = FSi_ReadTable(&cursor, &len, sizeof(len));
    if (ret != FS_RESULT_SUCCESS) {
        return ret;
    }
    entry->unk_10 = (u32) (len & 0x7F);
    entry->unk_0c = (u32) ((len >> 7) & 1);
    if (entry->unk_10 == 0) {
        return FS_RESULT_FAILURE;
    }

    if (!file->arg.cmd3.unk_34) {
        ret = FSi_ReadTable(&cursor, entry->unk_14, entry->unk_10);
        if (ret != FS_RESULT_SUCCESS) {
            return ret;
        }
        entry->unk_14[entry->unk_10] = 0;
    } else {
        cursor.unk_04 += entry->unk_10;
    }

    if (entry->unk_0c) {
        u16 id;
        ret = FSi_ReadTable(&cursor, &id, sizeof(id));
        if (ret != FS_RESULT_SUCCESS) {
            return ret;
        }
        entry->unk_00.unk_dir.record   = file->record;
        entry->unk_00.unk_dir.id       = (u16) (id & 0x0FFF);
        entry->unk_00.unk_dir.index    = 0;
        entry->unk_00.unk_dir.position = 0;
    } else {
        entry->unk_00.unk_file.record = file->record;
        entry->unk_00.unk_file.fileID = file->prop.dir.unk_20.index;
        ++file->prop.dir.unk_20.index;
    }
    file->prop.dir.unk_20.position = cursor.unk_04;
    return ret;
}
