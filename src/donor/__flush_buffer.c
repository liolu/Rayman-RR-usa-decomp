/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_02020d74 from projets/heroes-of-mana/src/donor/func_02020d74.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef unsigned long size_t;
typedef unsigned short wchar_t;
typedef unsigned long __file_handle;
typedef struct _FILE _FILE, *P_FILE;
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
extern int __flush_buffer(FILE *file, size_t *length);
extern void __prep_buffer(FILE *file);
extern void __convert_from_newlines(unsigned char *p, int *n);
extern void __prep_buffer(FILE *file);
int __flush_buffer(FILE *file, size_t *length) {
    size_t bufferLen;
    int writeCode;

    bufferLen = file->buffer_ptr - file->buffer;
    if (bufferLen) {
        file->buffer_len = bufferLen;

        if (file->mode.binary_io == 0) {
            __convert_from_newlines(file->buffer, &file->buffer_len);
        }

        writeCode = file->write_proc(file->handle, file->buffer, &file->buffer_len, file->ref_con);

        if (length) {
            *length = file->buffer_len;
        }

        if (writeCode) {
            return writeCode;
        }

        file->position += file->buffer_len;
    }

    __prep_buffer(file);
    return 0;
}
