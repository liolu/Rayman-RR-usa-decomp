typedef struct tdstVtbl {
    void *p_vUnk;
    void (*p_fnCall)(long, long);
} tdstVtbl;
typedef struct tdstObj {
    char pad[8];
    tdstVtbl *p_stVtbl;
} tdstObj;
extern tdstObj data_020bbd74;

/* Calls a function pointer of a global object, forwarding both arguments. */
void wctomb(long lArg0, long lArg1) {
    data_020bbd74.p_stVtbl->p_fnCall(lArg0, lArg1);
}
