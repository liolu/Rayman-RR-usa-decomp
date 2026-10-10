#include "HIE/HieMtStk.h"

/* TODO: identify these functions. */
void func_020534f4(void);                                                     /* debug break (empty in release) */
void func_02000f58(const char *szExpr, const char *szFile, const char *szFunc, int iLine); /* assertion failure */
void func_02001588(void *p_vDst, const void *p_vSrc, unsigned long ulSize);   /* memcpy */
void func_0202d1e8(POS_tdstCompletePosition *p_stDst, POS_tdstCompletePosition *p_stA, void *p_vB); /* matrix product? */

typedef struct tdstCameraView {
    char pad[0xc];
    POS_tdstCompletePosition stMatrix;
} tdstCameraView;

typedef struct tdstCamera {
    char pad[0x64];
    tdstCameraView **hView;
} tdstCamera;

unsigned char HIE_fn_bInitCameraMatrixStack(tdstCamera *p_stCamera) {
    HIE_g_lNbMatrixInCameraStack = 0;
    func_02001588(&HIE_g_a_stCameraMatrixStack[0], &(*p_stCamera->hView)->stMatrix, sizeof(POS_tdstCompletePosition));
    HIE_g_lNbMatrixInCameraStack++;
    HIE_g_p_stCurrentMatrix = &HIE_g_a_stCameraMatrixStack[HIE_g_lNbMatrixInCameraStack - 1];
    return 1;
}

unsigned char HIE_fn_bPushOnCameraMatrixStack(void *p_vMatrix) {
    if (HIE_g_lNbMatrixInCameraStack == 0 || HIE_g_lNbMatrixInCameraStack == 20) {
        func_020534f4();
    }
    func_0202d1e8(&HIE_g_a_stCameraMatrixStack[HIE_g_lNbMatrixInCameraStack],
                  &HIE_g_a_stCameraMatrixStack[HIE_g_lNbMatrixInCameraStack - 1], p_vMatrix);
    HIE_g_lNbMatrixInCameraStack++;
    HIE_g_p_stCurrentMatrix = &HIE_g_a_stCameraMatrixStack[HIE_g_lNbMatrixInCameraStack - 1];
    return 1;
}

unsigned char HIE_fn_bPopOnCameraMatrixStack(void) {
    static char szFunctionName[] = "HIE_fn_bPopOnCameraMatrixStack";
    if (HIE_g_lNbMatrixInCameraStack == 0) {
        func_020534f4();
    }
    HIE_g_lNbMatrixInCameraStack--;
    if (!(HIE_g_lNbMatrixInCameraStack > 0)) {
        func_02000f58("HIE_g_lNbMatrixInCameraStack>0", "HieMtStk.c", szFunctionName, 150);
    }
    HIE_g_p_stCurrentMatrix = &HIE_g_a_stCameraMatrixStack[HIE_g_lNbMatrixInCameraStack - 1];
    return 1;
}
