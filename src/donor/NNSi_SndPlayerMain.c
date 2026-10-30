/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* NNSi_SndPlayerMain from https://github.com/aricloverEXTRA/PartnersInTimeDECOMP src/nns/snd/snd_player.c (license: none),
 * reused by tools/donor_match.py */
typedef unsigned char u8;
typedef signed short s16;
typedef unsigned short u16;
typedef unsigned int u32;
typedef struct NNSFndLink {
    void *previous;
    void *next;
} NNSFndLink;
typedef struct NNSFndList {
    void *head;
    void *tail;
    u16 count;
    u16 offset;
} NNSFndList;
typedef struct NNSFndHeapHead {
    u32 signature;
    NNSFndLink link;
    NNSFndList children;
    u8 *start;
    u8 *end;
    u32 attributes;
} NNSFndHeapHead;
extern void *NNS_FndGetNextListObject(NNSFndList *list, void *object);
typedef struct NNSiSndFader {
    int origin;
    int target;
    int position;
    int duration;
} NNSiSndFader;
typedef struct NNSiSndSeqPlayer NNSiSndSeqPlayer;
typedef struct NNSiSndPlayer NNSiSndPlayer;
typedef struct NNSiSndSeqHeap NNSiSndSeqHeap;
typedef struct NNSSndHeap NNSSndHeap;
struct NNSSndHeap {
    NNSFndHeapHead *frame;
    NNSFndList sections;
};
typedef struct NNSSndHandle {
    NNSiSndSeqPlayer *player;
} NNSSndHandle;
struct NNSiSndPlayer {
    NNSFndList sequences;
    NNSFndList heaps;
    u32 max_sequences;
    u32 channel_mask;
    u8 volume;
    u8 padding21[3];
};
struct NNSiSndSeqHeap {
    NNSFndLink link;
    NNSSndHeap *heap;
    NNSiSndSeqPlayer *player;
    int player_index;
};
struct NNSiSndSeqPlayer {
    NNSSndHandle *handle;
    NNSiSndPlayer *owner;
    NNSiSndSeqHeap *heap;
    NNSFndLink player_link;
    NNSFndLink global_link;
    NNSiSndFader fader;
    u8 state;
    u8 started;
    u8 paused;
    u8 start_pending;
    u32 command;
    u16 sequence_kind;
    u16 unknown36;
    u16 archive_or_sequence;
    u16 archive_sequence;
    u8 index;
    u8 priority;
    s16 volume_db;
    u8 initial_volume;
    u8 external_volume;
    u8 padding42[2];
};
extern int NNSi_SndFaderGet(NNSiSndFader *fader);
extern void NNSi_SndFaderUpdate(NNSiSndFader *fader);
extern int NNSi_SndFaderIsFinished(NNSiSndFader *fader);
extern void ShutdownPlayer(NNSiSndSeqPlayer *sequence);
extern void ForceStopSeq(NNSiSndSeqPlayer *sequence);
extern void NNSi_SndPlayerMain(void);
extern NNSFndList sPrioList;
extern const s16 data_020bb604[128];
extern void SND_SetPlayerVolume(u32 sequence, int volume);
extern int SND_IsFinishedCommandTag(u32 command);
extern u32 SND_GetPlayerStatus(void);
extern void SND_StartPreparedSeq(u32 sequence);
void NNSi_SndPlayerMain(void) {
    u32 active_mask            = SND_GetPlayerStatus();
    NNSiSndSeqPlayer *sequence = NNS_FndGetNextListObject(&sPrioList, 0);
    while (sequence) {
        NNSiSndSeqPlayer *next = NNS_FndGetNextListObject(&sPrioList, sequence);
        if (!sequence->started && SND_IsFinishedCommandTag(sequence->command)) {
            sequence->started = 1;
        }
        if (sequence->started && !(active_mask & (1 << sequence->index))) {
            ShutdownPlayer(sequence);
        } else {
            int external_volume;
            int initial_volume;
            int player_volume;
            int volume;
            int fade;
            NNSi_SndFaderUpdate(&sequence->fader);
            external_volume = data_020bb604[sequence->external_volume];
            initial_volume  = data_020bb604[sequence->initial_volume];
            player_volume   = data_020bb604[sequence->owner->volume];
            fade            = data_020bb604[NNSi_SndFaderGet(&sequence->fader) >> 8];
            volume          = (player_volume + (initial_volume + external_volume)) + fade;
            if (volume < -723) {
                volume = -723;
            } else if (volume > 0) {
                volume = 0;
            }
            if (volume != sequence->volume_db) {
                SND_SetPlayerVolume(sequence->index, volume);
                sequence->volume_db = volume;
            }
            if (sequence->state == 2 && NNSi_SndFaderIsFinished(&sequence->fader)) {
                ForceStopSeq(sequence);
            }
            if (sequence->start_pending) {
                SND_StartPreparedSeq(sequence->index);
                sequence->start_pending = 0;
            }
        }
        sequence = next;
    }
}
void ForceStopSeq(NNSiSndSeqPlayer *sequence);
void ShutdownPlayer(NNSiSndSeqPlayer *sequence);
