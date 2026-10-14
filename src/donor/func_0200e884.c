/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* Os_InitializeVAlarm from https://github.com/RonyxDumb/mkds src/arm9/0200fc1c_Os_InitializeVAlarm.c (license: none), reused
 * by tools/donor_match.py */
typedef unsigned short int u16;
typedef unsigned long u32;
typedef signed short int s16;
typedef signed long s32;
typedef int BOOL;
typedef void (*OSAlarmHandler)(void *);
typedef struct OSiVAlarm OSVAlarm;
struct OSiVAlarm {
    OSAlarmHandler handler;
    void *arg;
    u32 tag;
    u32 frame;
    s16 fire;
    s16 delay;
    OSVAlarm *prev;
    OSVAlarm *next;
    BOOL period;
    BOOL finish;
    BOOL canceled;
};
extern void func_0200e884(void);
typedef u32 OSIrqMask;
extern OSIrqMask func_0200c304(OSIrqMask mask);
extern struct OSiVAlarmQueue {
    OSVAlarm *head;
    OSVAlarm *tail;
} data_020c0f98;
extern u16 data_020c0f8c;
extern s32 data_020c0f94;
extern s32 data_020c0f90;
void func_0200e884(void) {
    if (!data_020c0f8c) {
        data_020c0f8c = 1;

        data_020c0f98.head = ((void *) 0);
        data_020c0f98.tail = ((void *) 0);

        (void) func_0200c304((1UL << 2));

        data_020c0f94 = 0;
        data_020c0f90 = 0;
    }
}
