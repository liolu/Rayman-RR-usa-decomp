#ifndef HIE_HIEMTSTK_H
#define HIE_HIEMTSTK_H

/* Camera matrix stack of the OpenSpace engine (HIE module). */

/* A complete matrix is 0x64 bytes (stack holds 21 entries, at most 20 pushed). */
typedef struct POS_tdstCompletePosition {
    char a_cData[0x64];
} POS_tdstCompletePosition;

extern unsigned long HIE_g_lNbMatrixInCameraStack;
extern POS_tdstCompletePosition HIE_g_a_stCameraMatrixStack[];
extern POS_tdstCompletePosition *HIE_g_p_stCurrentMatrix;

unsigned char HIE_fn_bPopOnCameraMatrixStack(void);

#endif
