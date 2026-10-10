/* Compiler probe: func_0201c2e8, size 0x2c. Nth node of a linked list with a short counter. Matches only with mwccarm 2.0
 * -O4,p. */
typedef struct tdstNode {
    char pad[0x14];
    struct tdstNode *p_stNext;
} tdstNode;
typedef struct {
    char pad[0x8];
    tdstNode *p_stFirst;
} tdstList;

tdstNode *func_0201c2e8(tdstList *p_stList, int lIndex) {
    tdstNode *p_stNode = p_stList->p_stFirst;
    short i;
    for (i = 0; i < lIndex; i++) {
        p_stNode = p_stNode->p_stNext;
    }
    return p_stNode;
}
