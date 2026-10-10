/* Same as func_02054248, for another array type. */
typedef struct tdstElem {
    long a_lData[3];
} tdstElem;
typedef struct tdstArray {
    tdstElem *p_stElems;
    short wCount;
    short wUnk;
} tdstArray;
void *func_0205488c(unsigned long ulSize);
tdstArray *func_020544d8(short wCount) {
    tdstArray *p_stArray = func_0205488c(sizeof(tdstArray));
    p_stArray->p_stElems = func_0205488c(wCount * sizeof(tdstElem));
    p_stArray->wCount    = wCount;
    p_stArray->wUnk      = -1;
    return p_stArray;
}
