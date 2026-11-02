/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* MakeWaveData from https://github.com/RushRE/SonicRushAdventure-Decomp lib/NitroSystem/src/snd/sndarc_stream.c (license:
 * none), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short int u16;
typedef unsigned long u32;
typedef signed char s8;
typedef signed short int s16;
typedef signed long s32;
typedef unsigned long long int u64;
typedef int BOOL;
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
typedef struct OSiAlarm OSAlarm;
typedef struct _OSThread OSThread;
typedef struct _OSThreadQueue OSThreadQueue;
typedef struct _OSThreadLink OSThreadLink;
typedef struct _OSMutexQueue OSMutexQueue;
typedef struct _OSMutexLink OSMutexLink;
typedef struct OSMutex OSMutex;
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

    u32 systemErrno;
};
struct OSMutex {
    OSThreadQueue queue;
    OSThread *thread;
    s32 count;

    OSMutexLink link;
};
extern void func_0200d578(OSMutex *mutex);
extern void OS_LockMutex(OSMutex *mtx);
typedef unsigned long size_t;
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
extern void DC_FlushRange(const void *startAddr, u32 nBytes);
typedef struct {
    void *prevObject;
    void *nextObject;

} NNSFndLink;
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
    FS_RESULT_CANCELLED = FS_RESULT_CANCELED,
    FS_RESULT_UNSUPPORTED,
    FS_RESULT_ERROR,
    FS_RESULT_PROC_ASYNC,
    FS_RESULT_PROC_DEFAULT,
    FS_RESULT_PROC_UNKNOWN
} FSResult;
typedef FSResult (*FS_ARCHIVE_READ_FUNC)(struct FSArchive *p, void *dst, size_t pos, size_t size);
typedef FSResult (*FS_ARCHIVE_WRITE_FUNC)(struct FSArchive *p, const void *src, size_t pos, size_t size);
typedef FSResult (*FS_ARCHIVE_PROC_FUNC)(struct FSFile *, FSCommandType);
typedef struct {
    struct FSFile *prev;
    struct FSFile *next;
} FSFileLink;
typedef struct FSArchive {
    union {
        char ptr[4];
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
typedef struct SNDBinaryFileHeader {
    char signature[4];
    u16 byteOrder;
    u16 version;
    u32 fileSize;
    u16 headerSize;
    u16 dataBlocks;
} SNDBinaryFileHeader;
typedef struct SNDBinaryBlockHeader {
    u32 kind;
    u32 size;
} SNDBinaryBlockHeader;
typedef void (*PMSleepCallback)(void *);
typedef struct PMiSleepCallbackInfo PMSleepCallbackInfo;
struct PMiSleepCallbackInfo {
    PMSleepCallback callback;
    void *arg;
    PMSleepCallbackInfo *next;
};
typedef enum NNSSndStrmFormat {
    NNS_SND_STRM_FORMAT_PCM8,
    NNS_SND_STRM_FORMAT_PCM16
} NNSSndStrmFormat;
typedef enum NNSSndStrmCallbackStatus {
    NNS_SND_STRM_CALLBACK_SETUP,
    NNS_SND_STRM_CALLBACK_INTERVAL
} NNSSndStrmCallbackStatus;
typedef void (*NNSSndStrmCallback)(NNSSndStrmCallbackStatus status, int numChannles, void *buffer[], u32 len,
                                   NNSSndStrmFormat format, void *arg);
typedef struct NNSSndStrm {
    NNSFndLink link;
    PMSleepCallbackInfo preSleepInfo;
    PMSleepCallbackInfo postSleepInfo;

    NNSSndStrmFormat format;
    BOOL activeFlag : 1;
    BOOL startFlag : 1;

    u32 chBufLen;
    int interval;
    NNSSndStrmCallback callback;
    void *callbackArg;
    int curBuffer;

    int volume;

    int alarmNo;
    u32 chBitMask;
    int numChannels;
    u8 channelNo[16];
} NNSSndStrm;
typedef enum NNSSndArcStrmCallbackStatus {
    NNS_SND_ARC_STRM_CALLBACK_DATA_END
} NNSSndArcStrmCallbackStatus;
typedef struct NNSSndArcStrmCallbackInfo {
    int playerNo;
    int strmNo;
} NNSSndArcStrmCallbackInfo;
typedef struct NNSSndArcStrmCallbackParam {
    int strmNo;
    u32 offset;
} NNSSndArcStrmCallbackParam;
typedef BOOL (*NNSSndArcStrmCallback)(NNSSndArcStrmCallbackStatus status, const NNSSndArcStrmCallbackInfo *info,
                                      NNSSndArcStrmCallbackParam *param, void *arg);
typedef struct NNSSndStrmHandle {
    struct NNSSndStrmPlayer *player;
} NNSSndStrmHandle;
extern void MI_CpuFill8(void *dstp, u8 data, u32 size);
extern void MI_CpuCopy8(const void *srcp, void *dstp, u32 size);
static inline void MI_CpuClear8(void *dest, u32 size) {
    MI_CpuFill8(dest, 0, size);
}
typedef struct NNSSndFader {
    int origin;
    int target;
    int counter;
    int frame;
} NNSSndFader;
typedef BOOL (*OpenStreamFunc)(struct NNSSndStrmPlayer *player, u32 fileId);
typedef void (*CloseStreamFunc)(struct NNSSndStrmPlayer *player);
typedef s32 (*ReadStreamFunc)(struct NNSSndStrmPlayer *player, void *dest, u32 size, u32 offset);
typedef void (*CancelStreamFunc)(struct NNSSndStrmPlayer *player);
typedef enum StrmFormat {
    STRM_FORMAT_PCM8,
    STRM_FORMAT_PCM16,
    STRM_FORMAT_ADPCM
} StrmFormat;
typedef struct NNSSndStrmData {
    struct SNDBinaryFileHeader fileHeader;
    struct SNDBinaryBlockHeader blockHeader;
    u8 format;
    u8 loopFlag;
    u8 numChannels;
    u8 pad_;
    u16 sampleRate;
    u16 timer;
    u32 loopStart;
    u32 loopEnd;
    u32 dataOffset;
    u32 numBlocks;
    u32 blockSize;
    u32 blockSamples;
    u32 lastBlockSize;
    u32 lastBlockSamples;
} NNSSndStrmData;
typedef struct AdpcmState {
    s16 prevSample;
    u8 prevIndex;
    u8 padding;
} AdpcmState;
typedef struct NNSSndStrmPlayer {
    NNSSndStrm stream;
    FSFile file;
    u32 fileOffset;
    NNSSndStrmData info;
    NNSSndFader fader;
    AdpcmState adpcmState[6];
    BOOL activeFlag : 1;
    BOOL playFlag : 1;
    BOOL startFlag : 1;
    BOOL fadeOutFlag : 1;
    BOOL dirtyFlag : 1;
    BOOL finishFlag : 1;
    BOOL monoFlag : 1;
    volatile int finishCounter;
    volatile BOOL prepareFlag;
    volatile int commandCount;
    int allocChannelCount;
    u8 numChannels;
    u8 padding;
    u8 chNoList[6];
    void *buffer;
    u32 bufSize;
    NNSSndStrmCallback strmCallback;
    void *strmCallbackArg;
    NNSSndArcStrmCallback sndArcStrmCallback;
    void *sndArcStrmCallbackArg;
    int strmNo;
    int playerNo;
    NNSSndStrmHandle *handle;
    int prio;
    int initVolume;
    int volume;
    u32 curSample;
    OpenStreamFunc openStreamFunc;
    CloseStreamFunc closeStreamFunc;
    ReadStreamFunc readStreamFunc;
    CancelStreamFunc cancelStreamFunc;
} NNSSndStrmPlayer;
typedef struct LoadCommand {
    NNSFndLink link;
    NNSSndStrmPlayer *player;
    NNSSndStrmCallbackStatus status;
    int numChannels;
    void *buffer[6];
    u32 bufLen;
} LoadCommand;
extern const s8 data_020bba68[16];
extern const s16 data_020bba78[89];
extern u8 *data_020e9ca8;
extern OSMutex data_020e9cb8;
extern s16 DecodeAdpcm(int code, AdpcmState *state);
extern void MakeWaveData(LoadCommand *command);
extern void func_020b4734(NNSSndStrmPlayer *player);
static inline s16 DecodeAdpcm(int code, AdpcmState *state) {
    int step;
    int sample;
    int index;
    int d;

    sample = state->prevSample;
    index  = state->prevIndex;

    step = data_020bba78[index];

    d = step >> 3;
    if (code & 4) {
        d += step;
    }
    if (code & 2) {
        d += step >> 1;
    }
    if (code & 1) {
        d += step >> 2;
    }

    if (code & 8) {
        sample -= d;
        if (sample < -32768) {
            sample = -32768;
        }
    } else {
        sample += d;
        if (sample > 32767) {
            sample = 32767;
        }
    }

    index += data_020bba68[code];

    if (index < 0) {
        index = 0;
    } else if (index > 89 - 1) {
        index = 89 - 1;
    }

    state->prevSample = (s16) sample;
    state->prevIndex  = (u8) index;

    return (s16) sample;
}
void func_020b4734(NNSSndStrmPlayer *player);
void MakeWaveData(LoadCommand *command) {
    NNSSndStrmPlayer *player = command->player;
    BOOL loopFlag;
    u32 destOffset;
    u32 restSize;
    u32 blockNo;
    u32 blockSize;
    u32 blockSamples;
    u32 blockOffsetSample;
    u32 blockOffset;
    u32 offset;
    u32 samples;
    u32 size;
    u32 readSize;
    int ch;

    if (player->finishFlag && player->finishCounter > 0) {
        player->finishCounter--;
    }

    destOffset = 0;

    restSize = command->bufLen;
    while (restSize > 0) {
        if (player->finishFlag) {
            for (ch = 0; ch < command->numChannels; ch++) {
                MI_CpuClear8((u8 *) (command->buffer[ch]) + destOffset, restSize);
            }
            break;
        }

        blockNo = player->curSample / player->info.blockSamples;

        if (blockNo < player->info.numBlocks - 1) {
            blockSize    = player->info.blockSize;
            blockSamples = player->info.blockSamples;
        } else {
            blockSize    = player->info.lastBlockSize;
            blockSamples = player->info.lastBlockSamples;
        }

        blockOffsetSample = player->curSample;
        blockOffsetSample -= blockNo * player->info.blockSamples;

        samples = restSize;
        if (player->info.format != STRM_FORMAT_PCM8) {
            samples >>= 1;
        }

        if (player->dirtyFlag) {
            if (blockOffsetSample == 0) {
                player->dirtyFlag = 0;
            } else {
                samples           = blockOffsetSample;
                blockOffsetSample = 0;
            }
        }

        loopFlag = 0;
        if (blockOffsetSample + samples >= blockSamples) {
            samples = blockSamples - blockOffsetSample;

            if (blockNo >= player->info.numBlocks - 1) {
                if (player->info.loopFlag) {
                    loopFlag = 1;
                } else {
                    player->finishFlag = 1;
                }
            }
        }

        blockOffset = blockOffsetSample;
        size        = samples;
        switch (player->info.format) {
            case STRM_FORMAT_PCM8:
                readSize = size;
                break;

            case STRM_FORMAT_PCM16:
                blockOffset <<= 1;
                size <<= 1;
                readSize = size;
                break;

            case STRM_FORMAT_ADPCM: {
                u32 endSample = blockOffsetSample + samples;
                blockOffset >>= 1;
                endSample++;
                endSample >>= 1;
                readSize = endSample - blockOffset;
                if (blockOffsetSample == 0) {
                    readSize += sizeof(AdpcmState);
                } else {
                    blockOffset += sizeof(AdpcmState);
                }
                size <<= 1;

                break;
            }
        }

        offset = blockOffset;
        offset += blockNo * player->info.blockSize * player->info.numChannels;
        offset += player->info.dataOffset;

        for (ch = 0; ch < command->numChannels; ch++) {
            void *dest;
            void *read_dest;

            dest = read_dest = (u8 *) (command->buffer[ch]) + destOffset;

            if (ch < player->info.numChannels) {
                s32 resultSize;

                if (player->info.format == STRM_FORMAT_ADPCM) {
                    OS_LockMutex(&data_020e9cb8);
                    read_dest = data_020e9ca8;
                }

                resultSize = player->readStreamFunc(player, read_dest, readSize, offset + ch * blockSize);

                if (resultSize != readSize) {
                    size               = 0;
                    samples            = 0;
                    loopFlag           = 0;
                    player->finishFlag = 1;
                    if (player->info.format == STRM_FORMAT_ADPCM) {
                        func_0200d578(&data_020e9cb8);
                    }
                    break;
                }

                if (player->info.format == STRM_FORMAT_ADPCM) {
                    AdpcmState *state = &player->adpcmState[ch];
                    u8 *srcp          = data_020e9ca8;
                    s16 *destp        = dest;
                    u32 i;
                    u32 end;

                    if (blockOffsetSample == 0) {
                        *state = *((AdpcmState *) srcp)++;
                    }

                    end = blockOffsetSample + samples;

                    i = blockOffsetSample;
                    if (i & 0x01) {
                        *destp++ = DecodeAdpcm((*srcp >> 4) & 0x0f, state);
                        i++;
                        srcp++;
                    }
                    while (i < (end & ~0x01)) {
                        *destp++ = DecodeAdpcm(*srcp & 0x0f, state);
                        i++;
                        *destp++ = DecodeAdpcm((*srcp >> 4) & 0x0f, state);
                        i++;
                        srcp++;
                    }
                    if (i < end) {
                        *destp++ = DecodeAdpcm(*srcp & 0x0f, state);
                        i++;
                    }
                    func_0200d578(&data_020e9cb8);
                }
            } else {
                if (player->monoFlag) {
                    MI_CpuClear8(dest, size);
                } else {
                    MI_CpuCopy8((u8 *) (command->buffer[0]) + destOffset, dest, size);
                }
            }
        }

        if (player->dirtyFlag) {
            player->dirtyFlag = 0;
            continue;
        }

        if (loopFlag) {
            player->curSample = player->info.loopStart;
        } else {
            player->curSample += samples;
        }

        destOffset += size;

        restSize -= size;

        if (player->finishFlag && player->sndArcStrmCallback) {
            func_020b4734(player);
        }
    }

    if (player->strmCallback != ((void *) 0)) {
        player->strmCallback(command->status, command->numChannels, command->buffer, command->bufLen,
                             player->info.format == STRM_FORMAT_PCM8 ? NNS_SND_STRM_FORMAT_PCM8 : NNS_SND_STRM_FORMAT_PCM16,
                             player->strmCallbackArg);
    }

    for (ch = 0; ch < command->numChannels; ch++) {
        DC_FlushRange(command->buffer[ch], command->bufLen);
    }

    if (command->status == NNS_SND_STRM_CALLBACK_SETUP) {
        player->prepareFlag = 1;
    }
}
