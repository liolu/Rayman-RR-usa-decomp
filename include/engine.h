#ifndef ENGINE_H
#define ENGINE_H

/* Core types and functions of the engine, identified from their code.
   This header is also given to m2c as context (see tools/gen_context.py), so keep it plain C:
   typedefs and prototypes only, no macros. */

typedef long fx32; /* 20.12 fixed point */

typedef struct VecFx32 {
    fx32 x;
    fx32 y;
    fx32 z;
} VecFx32;

/* 0x0200b5b8 (assembly): (a.x * b.x + a.y * b.y + a.z * b.z + 0x800) >> 12 on 64 bits */
fx32 VEC_DotProduct(const VecFx32 *p_stA, const VecFx32 *p_stB);

/* 0x01ff87ec (ITCM): (a * b - c * d + 0x800) >> 12 on 64 bits */
fx32 func_01ff87ec(fx32 xA, fx32 xB, fx32 xC, fx32 xD);

/* 0x02001588: copies ulSize bytes, returns p_vDst */
void *func_02001588(void *p_vDst, const void *p_vSrc, unsigned long ulSize);

/* 0x02084450: calls the handler of the object's type (byte at +7) with the same three arguments */
long func_02084450(long lArg0, void *p_vObject, long lArg2);

/* Math and utility functions identified from code */
fx32 FX_Div(fx32 xNum, fx32 xDen);
fx32 FX_Inv(fx32 x);
fx32 func_020148a4(fx32 x);
void func_01ff84a0(VecFx32 *p_stDst, const VecFx32 *p_stSrc);
long rand(void);
long func_0206b3c4(void *p_vObj);
long func_02067900(long *p_lVal);

/* Interrupt helpers (assembly): the returned state is given back to the matching restore function */
unsigned long OS_EnableIrq(void);
unsigned long OS_DisableIrq(void);
unsigned long OS_RestoreIrq(unsigned long ulState);
unsigned long OS_DisableInterrupts(void);
unsigned long OS_RestoreInterrupts(unsigned long ulState);
unsigned long OS_GetProcMode(void);

#endif
