/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020745cc from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSystem/src/snd/snd_arc.c (license: none), reused
 * by tools/donor_match.py */
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
extern s32 func_02013f34(FS_File *file, void *dst, s32 len);
extern BOOL func_02013ec8(FS_File *file, s32 offset, int origin);
typedef struct UnkSndArcInfo {
    u8 magic[4];
    u32 size;
    u32 seqOffset;
    u32 seqArcOffset;
    u32 bankOffset;
    u32 waveArcOffset;
    u32 playerOffset;
    u32 groupOffset;
    u32 strmPlayerOffset;
    u32 strmOffset;
} UnkSndArcInfo;
typedef struct UnkSndArcFatEntry {
    u32 offset;
    u32 size;
    void *mem;
    u32 unk_0c;
} UnkSndArcFatEntry;
typedef struct UnkSndArcFat {
    u8 magic[4];
    u32 size;
    u32 count;
    UnkSndArcFatEntry entries[1];
} UnkSndArcFat;
typedef struct UnkSndArcHeader {
    u8 unk_00[0x10];
    u32 symbOffset;
    u32 symbSize;
    u32 infoOffset;
    u32 infoSize;
    u32 fatOffset;
    u32 fatSize;
    u32 fileOffset;
    u32 fileSize;
} UnkSndArcHeader;
typedef struct UnkSndArc {
    UnkSndArcHeader header;
    BOOL fileOpened;
    FS_File file;
    FS_FileIdentifier fileId;
    UnkSndArcFat *fat;
    void *symb;
    UnkSndArcInfo *info;
} UnkSndArc;
extern void *func_020b39f8(void *heap, u32 size, void (*callback)(void *, u32, void *, u32), void *data1, u32 data2);
extern BOOL func_020b3680(UnkSndArc *arc, void *heap, BOOL loadSymb);
extern void func_020b3444(void *mem, u32 size, void *data1, u32 data2);
extern void func_020b3438(void *mem, u32 size, void *data1, u32 data2);
extern void func_020b342c(void *mem, u32 size, void *data1, u32 data2);
BOOL func_020b3680(UnkSndArc *arc, void *heap, BOOL loadSymb) {
    s32 readSize;
    if (!func_02013ec8(&arc->file, 0, 0)) {
        return 0;
    }
    if (func_02013f34(&arc->file, arc, sizeof(UnkSndArcHeader)) != sizeof(UnkSndArcHeader)) {
        return 0;
    }

    if (heap != 0) {
        arc->info = func_020b39f8(heap, arc->header.infoSize, func_020b3444, arc, 0);
        if (arc->info == 0) {
            return 0;
        }
        if (!func_02013ec8(&arc->file, arc->header.infoOffset, 0)) {
            return 0;
        }
        readSize = func_02013f34(&arc->file, arc->info, arc->header.infoSize);
        if (readSize != arc->header.infoSize) {
            return 0;
        }

        arc->fat = func_020b39f8(heap, arc->header.fatSize, func_020b3438, arc, 0);
        if (arc->fat == 0) {
            return 0;
        }
        if (!func_02013ec8(&arc->file, arc->header.fatOffset, 0)) {
            return 0;
        }
        readSize = func_02013f34(&arc->file, arc->fat, arc->header.fatSize);
        if (readSize != arc->header.fatSize) {
            return 0;
        }

        if (loadSymb && arc->header.symbSize != 0) {
            arc->symb = func_020b39f8(heap, arc->header.symbSize, func_020b342c, arc, 0);
            if (arc->symb == 0) {
                return 0;
            }
            if (!func_02013ec8(&arc->file, arc->header.symbOffset, 0)) {
                return 0;
            }
            readSize = func_02013f34(&arc->file, arc->symb, arc->header.symbSize);
            if (readSize != arc->header.symbSize) {
                return 0;
            }
        }
    }

    return 1;
}
void func_020b3444(void *mem, u32 size, void *data1, u32 data2);
void func_020b3438(void *mem, u32 size, void *data1, u32 data2);
void func_020b342c(void *mem, u32 size, void *data1, u32 data2);
