/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */

typedef unsigned int u32;
typedef unsigned short u16;
typedef unsigned char u8;
typedef int s32;
typedef s32 BOOL;
typedef struct UnkSndPlayerInfo {
    u8 seqMax;
    u8 unk_01;
    u16 allocChBitFlag;
    u32 heapSize;
} UnkSndPlayerInfo;
extern void *NNS_SndArcGetCurrent(void);
extern void *NNS_SndArcGetPlayerInfo(int index);
extern void NNS_SndPlayerSetPlayableSeqCount(int playerNo, int seqMax);
extern void NNS_SndPlayerSetAllocatableChannel(int playerNo, u32 allocChBitFlag);
extern BOOL NNS_SndPlayerCreateHeap(int playerNo, void *heap, u32 size);

/* func_02075780 from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSystem/src/snd/snd_arcplayer.c (license: none),
 * reused by tools/donor_match.py */
BOOL NNS_SndArcPlayerSetup(void *heap) {
    int i;

    NNS_SndArcGetCurrent();

    for (i = 0; i < 32; i++) {
        UnkSndPlayerInfo *info = NNS_SndArcGetPlayerInfo(i);
        if (info == 0) {
            continue;
        }

        NNS_SndPlayerSetPlayableSeqCount(i, info->seqMax);
        NNS_SndPlayerSetAllocatableChannel(i, info->allocChBitFlag);

        if (info->heapSize != 0 && heap != 0) {
            int j;
            for (j = 0; j < info->seqMax; j++) {
                if (!NNS_SndPlayerCreateHeap(i, heap, info->heapSize)) {
                    return 0;
                }
            }
        }
    }

    return 1;
}
