void OS_SetProtectionRegion2(void) {
    __asm__ volatile("mcr p15, 0, r0, c6, c2, 0" ::: "r0");
}
