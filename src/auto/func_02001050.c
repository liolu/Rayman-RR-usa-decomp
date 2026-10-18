#include "m2c.h"

typedef struct {
    u32 open_mode : 2;
    u32 io_mode : 3;
    u32 buffer_mode : 2;
    u32 file_kind : 3;
    u32 file_orientation : 2;
    u32 binary_io : 1;
    u32 rest : 19;
} FileMode;

typedef struct {
    u32 io_state : 3;
    u32 free_buffer : 1;
    u32 eof : 1;
    u32 err : 1;
    u32 rest : 26;
} FileState;

typedef struct {
    u32 handle;
    FileMode mode;
    FileState state;
    u8 pad0c;
    u8 error;
    u8 pad0e[0xe];
    u8 *buffer;
    u32 buffer_size;
    u8 *buffer_ptr;
    u32 buffer_len;
} FILE;

int func_02004614(FILE *f, int orient);
void __prep_buffer(FILE *f);
void *func_02001634(void *p, int c, u32 n);
void *func_02001588(void *dst, const void *src, u32 n);
int __flush_buffer(FILE *f, u32 *n);

u32 func_02001050(void *ptr, u32 size, u32 count, FILE *f) {
    u8 *read_ptr = ptr;
    u32 bytes_to_go;
    u32 written;
    u8 *match;
    int always_buffer;
    u32 n;
    u8 *sbuf;
    u32 ssize;
    if (func_02004614(f, 0) == 0) {
        func_02004614(f, -1);
    }
    bytes_to_go = size * count;
    if (bytes_to_go == 0 || f->error || f->mode.file_kind == 0) {
        return 0;
    }
    always_buffer = !f->mode.binary_io || f->mode.buffer_mode == 2 || f->mode.buffer_mode == 1;
    if (f->state.io_state == 0 && (f->mode.io_mode & 2)) {
        f->state.io_state = 1;
        __prep_buffer(f);
    }
    if (f->state.io_state != 1) {
        f->error      = 1;
        f->buffer_len = 0;
        return 0;
    }
    written = 0;
    if (bytes_to_go != 0 && (f->buffer_ptr != f->buffer || always_buffer)) {
        f->buffer_len = f->buffer_size - (f->buffer_ptr - f->buffer);
        do {
            match = 0;
            n     = f->buffer_len;
            if (n > bytes_to_go) {
                n = bytes_to_go;
            }
            if (f->mode.buffer_mode == 1 && n != 0) {
                match = func_02001634(read_ptr, '\n', n);
                if (match != 0) {
                    n = match + 1 - read_ptr;
                }
            }
            if (n != 0) {
                func_02001588(f->buffer_ptr, read_ptr, n);
                read_ptr += n;
                bytes_to_go -= n;
                f->buffer_ptr += n;
                f->buffer_len -= n;
            }
            if (f->buffer_len == 0 || match != 0 || f->mode.buffer_mode == 0) {
                if (__flush_buffer(f, 0) != 0) {
                    f->error      = 1;
                    bytes_to_go   = 0;
                    f->buffer_len = 0;
                    break;
                }
            }
            written += n;
        } while (bytes_to_go != 0 && always_buffer);
    }
    if (bytes_to_go != 0 && !always_buffer) {
        sbuf           = f->buffer;
        ssize          = f->buffer_size;
        f->buffer      = read_ptr;
        f->buffer_size = bytes_to_go;
        f->buffer_ptr  = read_ptr + bytes_to_go;
        if (__flush_buffer(f, &n) == 0) {
            written += n;
        } else {
            f->error      = 1;
            f->buffer_len = 0;
        }
        f->buffer      = sbuf;
        f->buffer_size = ssize;
        __prep_buffer(f);
        f->buffer_len = 0;
    }
    if (f->mode.buffer_mode != 2) {
        f->buffer_len = 0;
    }
    return written / size;
}
