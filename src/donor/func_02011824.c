/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* CARDi_ReadCard from https://github.com/pret/pokediamond arm9/lib/NitroSDK/src/CARD_rom.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short int u16;
typedef unsigned long u32;
typedef signed long s32;
typedef unsigned long long int u64;
typedef volatile u32 vu32;
typedef vu32 REGType32v;
typedef int BOOL;
typedef void (*MIDmaCallback)(void *);
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
typedef enum {
    CARD_BACKUP_TYPE_EEPROM_4KBITS   = (((1) << 0) | ((9) << 8) | ((0) << 16)),
    CARD_BACKUP_TYPE_EEPROM_64KBITS  = (((1) << 0) | ((13) << 8) | ((0) << 16)),
    CARD_BACKUP_TYPE_EEPROM_512KBITS = (((1) << 0) | ((16) << 8) | ((0) << 16)),
    CARD_BACKUP_TYPE_FLASH_2MBITS    = (((2) << 0) | ((18) << 8) | ((0) << 16)),
    CARD_BACKUP_TYPE_FLASH_4MBITS    = (((2) << 0) | ((19) << 8) | ((0) << 16)),
    CARD_BACKUP_TYPE_FLASH_8MBITS    = (((2) << 0) | ((20) << 8) | ((0) << 16)),
    CARD_BACKUP_TYPE_FRAM_256KBITS   = (((3) << 0) | ((15) << 8) | ((0) << 16)),
    CARD_BACKUP_TYPE_NOT_USE         = 0
} CARDBackupType;
typedef enum {
    CARD_RESULT_SUCCESS = 0,
    CARD_RESULT_FAILURE,
    CARD_RESULT_INVALID_PARAM,
    CARD_RESULT_UNSUPPORTED,
    CARD_RESULT_TIMEOUT,
    CARD_RESULT_ERROR,
    CARD_RESULT_NO_RESPONSE,
    CARD_RESULT_CANCELED
} CARDResult;
typedef enum {
    CARD_TARGET_NONE,
    CARD_TARGET_ROM,
    CARD_TARGET_BACKUP
} CARDTargetMode;
typedef enum {
    CARD_REQ_INIT = 0,
    CARD_REQ_ACK,
    CARD_REQ_IDENTIFY,
    CARD_REQ_READ_ID,
    CARD_REQ_READ_ROM,
    CARD_REQ_WRITE_ROM,
    CARD_REQ_READ_BACKUP,
    CARD_REQ_WRITE_BACKUP,
    CARD_REQ_PROGRAM_BACKUP,
    CARD_REQ_VERIFY_BACKUP,
    CARD_REQ_ERASE_PAGE_BACKUP,
    CARD_REQ_ERASE_SECTOR_BACKUP,
    CARD_REQ_ERASE_CHIP_BACKUP,
    CARD_REQ_MAX
} CARDRequest;
typedef enum {
    CARD_REQUEST_MODE_RECV,
    CARD_REQUEST_MODE_SEND,
    CARD_REQUEST_MODE_SEND_VERIFY,
    CARD_REQUEST_MODE_SPECIAL
} CARDRequestMode;
typedef s32 CARDiOwner;
typedef struct CARDiCommandArg {
    CARDResult result;
    CARDBackupType type;
    u32 id;
    u32 src;
    u32 dest;
    u32 len;

    struct {
        u32 total_size;
        u32 sect_size;
        u32 page_size;
        u32 addr_width;
        u32 program_page;
        u32 write_page;
        u32 write_page_total;
        u32 erase_chip;
        u32 erase_chip_total;
        u32 erase_sector;
        u32 erase_sector_total;
        u32 erase_page;
        u8 initial_status;
        u8 padding1[3];
        u32 caps;
        u8 padding2[16];
    } spec;
} CARDiCommandArg;
typedef struct CARDiCommon {
    CARDiCommandArg *cmd;
    s32 command;

    volatile CARDiOwner lock_owner;
    volatile s32 lock_ref;
    OSThreadQueue lock_queue[1];
    CARDTargetMode lock_target;

    u32 src;
    u32 dst;
    u32 len;
    u32 dma;
    CARDRequest req_type;
    s32 req_retry;
    CARDRequestMode req_mode;
    MIDmaCallback callback;
    void *callback_arg;
    void (*task_func)(struct CARDiCommon *);

    OSThread thread[1];
    OSThread *cur_th;

    u32 priority;
    OSThreadQueue busy_q[1];

    volatile u32 flag;

    u8 dummy[8];

    u8 backup_cache_page_buf[256] __attribute__((aligned(32)));
} CARDiCommon;
extern CARDiCommon data_020c1100;
typedef struct CARDRomStat {
    void (*read_func)(struct CARDRomStat *);
    u32 ctrl;
    u8 *cache_page;
    u32 dummy[5];
    u8 cache_buf[512];
} CARDRomStat;
extern void func_02011824(CARDRomStat *p);
extern BOOL func_02011c6c(CARDRomStat *p);
extern void func_02011bcc(u32 cmd1, u32 cmd2);
static inline BOOL CARDi_OnReadPageDirect(CARDRomStat *arg) {

#pragma unused(arg)
#line 25
    CARDiCommon *p = &data_020c1100;
    p->src += 512;
    p->dst += 512;
    p->len -= 512;
    return (p->len > 0);
}
BOOL func_02011c6c(CARDRomStat *p);
void func_02011bcc(u32 cmd1, u32 cmd2);
static inline void CARDi_SetRomOpReadPage1(u32 src) {
    func_02011bcc((u32) (0xB7000000 | (src >> 8)), (u32) (src << 24));
}
void func_02011824(CARDRomStat *p) {
    CARDiCommon *const c = &data_020c1100;
    while (1) {
        const u32 len = 512;
        u32 src       = (((u32) (c->src)) & ~((512) - 1));
        u32 dst;
        if ((src != c->src) || ((c->dst & 3) != 0) || (c->len < len)) {
            dst           = (u32) p->cache_buf;
            p->cache_page = (void *) src;
        } else {
            dst = c->dst;
        }

        CARDi_SetRomOpReadPage1(src);
        {
            u32 pos                     = 0;
            (*(REGType32v *) 0x40001a4) = p->ctrl;
            while (1) {
                const u32 ctrl = (*(REGType32v *) 0x40001a4);
                if ((ctrl & 0x00800000) != 0) {
                    u32 data = (*(REGType32v *) 0x4100010);
                    if (pos < len) {
                        ((u32 *) dst)[pos++] = data;
                    }
                }
                if (!(ctrl & 0x80000000)) {
                    break;
                }
            }
        }
        if (dst == c->dst) {
            if (!CARDi_OnReadPageDirect(p)) {
                break;
            }
        } else {
            if (!func_02011c6c(p)) {
                break;
            }
        }
    }
}
