/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_02020c90 from projets/heroes-of-mana/src/donor/func_02020c90.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef unsigned short wchar_t;
typedef unsigned long __file_handle;
typedef struct _FILE _FILE, *P_FILE;
enum __file_kinds {
    __closed_file,
    __disk_file,
    __console_file,
    __unavailable_file
};
typedef struct __file_modes {
    unsigned int open_mode : 2;
    unsigned int io_mode : 3;
    unsigned int buffer_mode : 2;
    unsigned int file_kind : 3;
    unsigned int file_orientation : 2;
    unsigned int binary_io : 1;
} __file_modes;
typedef struct __file_state {
    unsigned int io_state : 3;
    unsigned int free_buffer : 1;
    unsigned char eof;
    unsigned char error;
} __file_state;
typedef void *__ref_con;
typedef int (*__pos_proc)(unsigned int file, unsigned int *position, int mode, void *ref);
typedef int (*__io_proc)(__file_handle handle, unsigned char *buffer, int *count, void *ref);
typedef int (*__close_proc)(unsigned int file);
struct _FILE {
    __file_handle handle;
    __file_modes mode;
    __file_state state;
    unsigned char char_buffer;
    unsigned char char_buffer_overflow;
    unsigned char ungetc_buffer[2];
    wchar_t ungetwc_buffer[2];
    unsigned int position;
    unsigned char *buffer;
    unsigned int buffer_size;
    unsigned char *buffer_ptr;
    unsigned int buffer_len;
    unsigned int buffer_alignment;
    unsigned int saved_buffer_len;
    unsigned int buffer_pos;
    __pos_proc position_proc;
    __io_proc read_proc;
    __io_proc write_proc;
    __close_proc close_proc;
    __ref_con ref_con;
};
typedef struct _FILE FILE;
extern FILE __files[];
extern int __flush_all(void);
extern int fflush(FILE *file);
extern FILE __files[3];
int __flush_all(void) {
    int result     = 0;
    FILE *file     = &__files[0];
    int file_index = 1;

    do {
        if (file->mode.file_kind != __closed_file) {
            if (fflush(file) != 0) {
                result = -1;
            }
        }
        if (file_index < 3) {
            file = &__files[file_index++];
        } else {
            file = 0;
        }
    } while (file != 0);

    return result;
}
