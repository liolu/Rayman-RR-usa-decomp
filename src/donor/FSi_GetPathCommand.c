/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* FSi_GetPathCommand from https://github.com/Yokimitsuro/khdays-decomp libs/nitro/fs/calls/FSi_GetPathCommand.c (license:
 * CC0-1.0), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned long u32;
typedef int BOOL;
typedef enum {
    FS_COMMAND_ASYNC_BEGIN = 0,
    FS_COMMAND_READFILE    = FS_COMMAND_ASYNC_BEGIN,
    FS_COMMAND_WRITEFILE,
    FS_COMMAND_ASYNC_END,
    FS_COMMAND_SYNC_BEGIN = FS_COMMAND_ASYNC_END,
    FS_COMMAND_SEEKDIR    = FS_COMMAND_SYNC_BEGIN,
    FS_COMMAND_READDIR,
    FS_COMMAND_FINDPATH,
    FS_COMMAND_GETPATH,
    FS_COMMAND_OPENFILEFAST,
    FS_COMMAND_OPENFILEDIRECT,
    FS_COMMAND_CLOSEFILE,
    FS_COMMAND_SYNC_END,
    FS_COMMAND_STATUS_BEGIN = FS_COMMAND_SYNC_END,
    FS_COMMAND_ACTIVATE     = FS_COMMAND_STATUS_BEGIN,
    FS_COMMAND_IDLE,
    FS_COMMAND_SUSPEND,
    FS_COMMAND_RESUME,
    FS_COMMAND_STATUS_END,
    FS_COMMAND_INVALID
} FSCommandType;
typedef enum {
    FS_RESULT_SUCCESS = 0,
    FS_RESULT_FAILURE,
    FS_RESULT_BUSY,
    FS_RESULT_CANCELED,
    FS_RESULT_UNSUPPORTED,
    FS_RESULT_ERROR,
    FS_RESULT_PROC_ASYNC,
    FS_RESULT_PROC_DEFAULT,
    FS_RESULT_PROC_UNKNOWN
} FSResult;
typedef FSResult (*FS_ARCHIVE_PROC_FUNC)(struct FSFile *, FSCommandType);
typedef FSResult (*FS_ARCHIVE_READ_FUNC)(struct FSArchive *p, void *dst, u32 pos, u32 size);
typedef FSResult (*FS_ARCHIVE_WRITE_FUNC)(struct FSArchive *p, const void *src, u32 pos, u32 size);
typedef struct FSFileLink {
    struct FSFile *prev;
    struct FSFile *next;
} FSFileLink;
typedef struct OSThreadQueue {
    struct OSThread *head;
    struct OSThread *tail;
} OSThreadQueue;
typedef struct FSArchive {
    union {
        char ptr[3 + 1];
        u32 pack;
    } name;
    struct FSArchive *next;
    struct FSArchive *prev;
    OSThreadQueue sync_q;
    OSThreadQueue stat_q;
    u32 flag;
    FSFileLink list;
    u32 base;
    u32 fat;
    u32 fat_size;
    u32 fnt;
    u32 fnt_size;
    u32 fat_bak;
    u32 fnt_bak;
    void *load_mem;
    FS_ARCHIVE_READ_FUNC read_func;
    FS_ARCHIVE_WRITE_FUNC write_func;
    FS_ARCHIVE_READ_FUNC table_func;
    FS_ARCHIVE_PROC_FUNC proc;
    u32 proc_flag;
} FSArchive;
typedef struct {
    struct FSArchive *arc;
    u16 own_id;
    u16 index;
    u32 pos;
} FSDirPos;
typedef struct {
    struct FSArchive *arc;
    u32 file_id;
} FSFileID;
typedef struct {
    union {
        FSFileID file_id;
        FSDirPos dir_id;
    };
    u32 is_directory;
    u32 name_len;
    char name[127 + 1];
} FSDirEntry;
typedef struct {
    FSDirPos pos;
} FSSeekDirInfo;
typedef struct {
    FSDirEntry *p_entry;
    BOOL skip_string;
} FSReadDirInfo;
typedef struct {
    FSDirPos pos;
    const char *path;
    BOOL find_directory;
    union {
        FSFileID *file;
        FSDirPos *dir;
    } result;
} FSFindPathInfo;
typedef struct {
    u8 *buf;
    u32 buf_len;
    u16 total_len;
    u16 dir_id;
} FSGetPathInfo;
typedef struct {
    FSFileID id;
} FSOpenFileFastInfo;
typedef struct {
    u32 top;
    u32 bottom;
    u32 index;
} FSOpenFileDirectInfo;
typedef struct {
    u32 reserved;
} FSCloseFileInfo;
typedef struct {
    void *dst;
    u32 len_org;
    u32 len;
} FSReadFileInfo;
typedef struct {
    const void *src;
    u32 len_org;
    u32 len;
} FSWriteFileInfo;
typedef struct FSFile {
    FSFileLink link;
    struct FSArchive *arc;
    u32 stat;
    FSCommandType command;
    FSResult error;
    OSThreadQueue queue[1];
    union {
        struct {
            u32 own_id;
            u32 top;
            u32 bottom;
            u32 pos;
        } file;
        struct {
            FSDirPos pos;
            u32 parent;
        } dir;
    } prop;
    union {
        FSReadFileInfo readfile;
        FSWriteFileInfo writefile;
        FSSeekDirInfo seekdir;
        FSReadDirInfo readdir;
        FSFindPathInfo findpath;
        FSGetPathInfo getpath;
        FSOpenFileFastInfo openfilefast;
        FSOpenFileDirectInfo openfiledirect;
        FSCloseFileInfo closefile;
    } arg;
} FSFile;
static inline BOOL FS_IsDir(volatile const FSFile *p_file) {
    return (p_file->stat & 0x00000020) ? 1 : 0;
}
static inline void MI_WriteByte(void *address, u8 value) {
    *(u8 *) address = value;
}
extern void FSi_SeekDirDirect(FSFile *p_dir, u32 id);
extern FSResult func_02012ab0(FSFile *p_file, FSCommandType command);
extern void FS_InitFile(FSFile *p_file);
extern void MI_CpuCopy8(const void *src, void *dst, u32 size);
extern const char data_020bbfd4[];
FSResult FSi_GetPathCommand(FSFile *p_file) {
    FSArchive *const p_arc = p_file->arc;
    FSGetPathInfo *p_info  = &p_file->arg.getpath;
    FSDirEntry entry;
    FSFile tmp;
    u32 dir_id;
    u32 file_id;
    u32 id;
    u32 len;

    enum {
        INVALID_ID = 0x10000
    };

    FS_InitFile(&tmp);
    tmp.arc = p_file->arc;

    if (FS_IsDir(p_file)) {
        dir_id  = p_file->prop.dir.pos.own_id;
        file_id = INVALID_ID;
    } else {
        file_id = p_file->prop.file.own_id;
        if (p_info->total_len != 0) {
            dir_id = p_info->dir_id;
        } else {
            u32 pos     = 0;
            u32 num_dir = 0;
            dir_id      = INVALID_ID;

            do {
                FSi_SeekDirDirect(&tmp, pos);
                if (!pos) {
                    num_dir = tmp.prop.dir.parent;
                }

                tmp.arg.readdir.p_entry     = &entry;
                tmp.arg.readdir.skip_string = 1;

                while (func_02012ab0(&tmp, FS_COMMAND_READDIR) == FS_RESULT_SUCCESS) {
                    if (!entry.is_directory && (entry.file_id.file_id == file_id)) {
                        dir_id = tmp.prop.dir.pos.own_id;
                        break;
                    }
                }
            } while ((dir_id == INVALID_ID) && (++pos < num_dir));
        }
    }

    if (dir_id == INVALID_ID) {
        p_info->total_len = 0;
        return FS_RESULT_FAILURE;
    }

    if (p_info->total_len == 0) {
        len = 0;

        if (p_arc->name.pack <= 0x000000FF) {
            len += 1;
        } else if (p_arc->name.pack <= 0x0000FF00) {
            len += 2;
        } else {
            len += 3;
        }
        len += 1 + 1;

        if (file_id != INVALID_ID) {
            len += entry.name_len;
        }

        id = dir_id;

        if (id != 0) {
            FSi_SeekDirDirect(&tmp, id);

            do {
                FSi_SeekDirDirect(&tmp, tmp.prop.dir.parent);
                tmp.arg.readdir.p_entry     = &entry;
                tmp.arg.readdir.skip_string = 1;
                while (func_02012ab0(&tmp, FS_COMMAND_READDIR) == FS_RESULT_SUCCESS) {
                    if (entry.is_directory && (entry.dir_id.own_id == id)) {
                        len += entry.name_len + 1;
                        break;
                    }
                }
                id = tmp.prop.dir.pos.own_id;
            } while (id != 0);
        }

        p_info->total_len = (u16) (len + 1);
        p_info->dir_id    = (u16) dir_id;
    }

    if (!p_info->buf) {
        return FS_RESULT_SUCCESS;
    }

    if (p_info->buf_len < p_info->total_len) {
        return FS_RESULT_FAILURE;
    }

    else {
        u8 *dst   = p_info->buf;
        u32 total = p_info->total_len;
        u32 pos   = 0;

        if (p_arc->name.pack <= 0x000000FF) {
            len = 1;
        } else if (p_arc->name.pack <= 0x0000FF00) {
            len = 2;
        } else {
            len = 3;
        }

        MI_CpuCopy8(p_arc->name.ptr, dst + pos, len);
        pos += len;

        MI_CpuCopy8(data_020bbfd4, dst + pos, 2);
        pos += 2;

        id = dir_id;
        FSi_SeekDirDirect(&tmp, id);

        if (file_id != INVALID_ID) {
            tmp.arg.readdir.p_entry     = &entry;
            tmp.arg.readdir.skip_string = 0;
            while (func_02012ab0(&tmp, FS_COMMAND_READDIR) == FS_RESULT_SUCCESS) {
                if (!entry.is_directory && (entry.file_id.file_id == file_id)) {
                    break;
                }
            }
            len = entry.name_len + 1;
            MI_CpuCopy8(entry.name, dst + total - len, len);
            total -= len;
        } else {
            MI_WriteByte(dst + total - 1, '\0');
            total -= 1;
        }

        if (id != 0) {
            do {
                FSi_SeekDirDirect(&tmp, tmp.prop.dir.parent);
                tmp.arg.readdir.p_entry     = &entry;
                tmp.arg.readdir.skip_string = 0;

                MI_WriteByte(dst + total - 1, '/');
                total -= 1;

                while (func_02012ab0(&tmp, FS_COMMAND_READDIR) == FS_RESULT_SUCCESS) {
                    if (entry.is_directory && (entry.dir_id.own_id == id)) {
                        len = entry.name_len;
                        MI_CpuCopy8(entry.name, dst + total - len, len);
                        total -= len;
                        break;
                    }
                }
                id = tmp.prop.dir.pos.own_id;
            } while (id != 0);
        }
    }

    return FS_RESULT_SUCCESS;
}
