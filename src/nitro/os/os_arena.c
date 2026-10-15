/* Write into tables of longs in the shared system area at the top of main RAM (0x027FF000). */
void OS_SetArenaLo(long lIndex, long lValue) {
    ((long *) 0x027FFDA0)[lIndex] = lValue;
}

void OS_SetArenaHi(long lIndex, long lValue) {
    ((long *) 0x027FFDC4)[lIndex] = lValue;
}
