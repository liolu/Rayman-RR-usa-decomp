/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* CARDi_SetCardDma from https://github.com/Yokimitsuro/khdays-decomp libs/nitro/card/calls/CARDi_SetCardDma.c (license:
 * CC0-1.0), reused by tools/donor_match.py */
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
typedef void *OSMessage;
typedef s32 CARDiOwner;
typedef enum {
    CARD_TARGET_NONE,
    CARD_TARGET_ROM,
    CARD_TARGET_BACKUP
} CARDTargetMode;
typedef struct OSThreadQueue {
    struct OSThread *head;
    struct OSThread *tail;
} OSThreadQueue;
typedef struct CARDiCommandArg {
    int result;
    int type;
    u32 id;
    u32 src;
    u32 dst;
    u32 len;
} CARDiCommandArg;
typedef struct CARDiCommon {
    CARDiCommandArg *cmd;
    int command;
    volatile CARDiOwner lock_owner;
    volatile int lock_ref;
    OSThreadQueue lock_queue[1];
    CARDTargetMode lock_target;
    u32 src;
    u32 dst;
    u32 len;
    u32 dma;
} CARDiCommon;
typedef struct CARDRomStat {
    void (*read_func)(struct CARDRomStat *);
    u32 ctrl;
    u8 *cache_page;
    u32 dummy[5];
    u8 cache_buf[512];
} CARDRomStat;
extern u32 data_020423e8;
extern OSIntrMode OS_DisableInterrupts(void);
extern OSIntrMode OS_RestoreInterrupts(OSIntrMode state);
extern void OS_SleepThread(OSThreadQueue *queue);
extern void OS_WakeupThread(OSThreadQueue *queue);
extern void OS_Terminate(void);
extern void MI_CpuCopy8(const void *src, void *dst, u32 size);
extern void func_02018244(u32 dmaNo, const void *src, void *dest, u32 size);
extern void func_02011bcc(u32 cmd1, u32 cmd2);
static inline u32 CARDi_GetRomFlag(u32 flag) {
    const u32 rom_ctrl = *(vu32 *) (data_020423e8 + 0x60);
    return (u32) ((rom_ctrl & ~0x07000000) | flag | 0x00000000 | 0x80000000 | 0x20000000);
}
static inline void CARDi_SetRomOpReadPage1(u32 src) {
    func_02011bcc((u32) (0xB7000000 | (src >> 8)), (u32) (src << 24));
}
extern CARDiCommon data_020c1100;
extern CARDRomStat data_020c1740 __attribute__((aligned(32)));
void func_02011b74(void) {
    CARDiCommon *const c = &data_020c1100;
    CARDRomStat *const p = &data_020c1740;

    func_02018244(c->dma, (const void *) 0x04100010, (void *) c->dst, 512);

    CARDi_SetRomOpReadPage1(c->src);
    *(vu32 *) 0x040001a4 = p->ctrl;
}
