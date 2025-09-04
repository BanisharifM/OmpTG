
/* (l2) typedef long unsigned int size_t; */
# 2 
/* (l3) typedef __builtin_va_list __gnuc_va_list; */
# 3 
/* (l4) typedef unsigned char __u_char; */
# 4 
/* (l5) typedef unsigned short int __u_short; */
# 5 
/* (l6) typedef unsigned int __u_int; */
# 6 
/* (l7) typedef unsigned long int __u_long; */
# 7 
/* (l8) typedef signed char __int8_t; */
# 8 
/* (l9) typedef unsigned char __uint8_t; */
# 9 
/* (l10) typedef signed short int __int16_t; */
# 10 
/* (l11) typedef unsigned short int __uint16_t; */
# 11 
/* (l12) typedef signed int __int32_t; */
# 12 
/* (l13) typedef unsigned int __uint32_t; */
# 13 
/* (l14) typedef signed long int __int64_t; */
# 14 
/* (l15) typedef unsigned long int __uint64_t; */
# 15 
/* (l16) typedef __int8_t __int_least8_t; */
# 16 
/* (l17) typedef __uint8_t __uint_least8_t; */
# 17 
/* (l18) typedef __int16_t __int_least16_t; */
# 18 
/* (l19) typedef __uint16_t __uint_least16_t; */
# 19 
/* (l20) typedef __int32_t __int_least32_t; */
# 20 
/* (l21) typedef __uint32_t __uint_least32_t; */
# 21 
/* (l22) typedef __int64_t __int_least64_t; */
# 22 
/* (l23) typedef __uint64_t __uint_least64_t; */
# 23 
/* (l24) typedef long int __quad_t; */
# 24 
/* (l25) typedef unsigned long int __u_quad_t; */
# 25 
/* (l26) typedef long int __intmax_t; */
# 26 
/* (l27) typedef unsigned long int __uintmax_t; */
# 27 
/* (l28) typedef unsigned long int __dev_t; */
# 28 
/* (l29) typedef unsigned int __uid_t; */
# 29 
/* (l30) typedef unsigned int __gid_t; */
# 30 
/* (l31) typedef unsigned long int __ino_t; */
# 31 
/* (l32) typedef unsigned long int __ino64_t; */
# 32 
/* (l33) typedef unsigned int __mode_t; */
# 33 
/* (l34) typedef unsigned long int __nlink_t; */
# 34 
/* (l35) typedef long int __off_t; */
# 35 
/* (l36) typedef long int __off64_t; */
# 36 
/* (l37) typedef int __pid_t; */
# 37 
/* (l38) typedef struct { int __val[2]; } __fsid_t; */
# 38 
/* (l39) typedef long int __clock_t; */
# 39 
/* (l40) typedef unsigned long int __rlim_t; */
# 40 
/* (l41) typedef unsigned long int __rlim64_t; */
# 41 
/* (l42) typedef unsigned int __id_t; */
# 42 
/* (l43) typedef long int __time_t; */
# 43 
/* (l44) typedef unsigned int __useconds_t; */
# 44 
/* (l45) typedef long int __suseconds_t; */
# 45 
/* (l46) typedef int __daddr_t; */
# 46 
/* (l47) typedef int __key_t; */
# 47 
/* (l48) typedef int __clockid_t; */
# 48 
/* (l49) typedef void * __timer_t; */
# 49 
/* (l50) typedef long int __blksize_t; */
# 50 
/* (l51) typedef long int __blkcnt_t; */
# 51 
/* (l52) typedef long int __blkcnt64_t; */
# 52 
/* (l53) typedef unsigned long int __fsblkcnt_t; */
# 53 
/* (l54) typedef unsigned long int __fsblkcnt64_t; */
# 54 
/* (l55) typedef unsigned long int __fsfilcnt_t; */
# 55 
/* (l56) typedef unsigned long int __fsfilcnt64_t; */
# 56 
/* (l57) typedef long int __fsword_t; */
# 57 
/* (l58) typedef long int __ssize_t; */
# 58 
/* (l59) typedef long int __syscall_slong_t; */
# 59 
/* (l60) typedef unsigned long int __syscall_ulong_t; */
# 60 
/* (l61) typedef __off64_t __loff_t; */
# 61 
/* (l62) typedef char *__caddr_t; */
# 62 
/* (l63) typedef long int __intptr_t; */
# 63 
/* (l64) typedef unsigned int __socklen_t; */
# 64 
/* (l65) typedef int __sig_atomic_t; */
# 65 
/* (l66) typedef struct */
# 66 
{
  int __count;
  union
  {
    unsigned int __wch;
    char __wchb[4];
  } __value;
} __mbstate_t;
/* (l75) typedef struct _G_fpos_t */
# 75 
{
  __off_t __pos;
  __mbstate_t __state;
} __fpos_t;
/* (l80) typedef struct _G_fpos64_t */
# 80 
{
  __off64_t __pos;
  __mbstate_t __state;
} __fpos64_t;
struct _IO_FILE;
/* (l86) typedef struct _IO_FILE __FILE; */
# 86 
struct _IO_FILE;
/* (l88) typedef struct _IO_FILE FILE; */
# 88 
struct _IO_FILE;
struct _IO_marker;
struct _IO_codecvt;
struct _IO_wide_data;
/* (l93) typedef void _IO_lock_t; */
# 93 
struct _IO_FILE
{
  int _flags;
  char *_IO_read_ptr;
  char *_IO_read_end;
  char *_IO_read_base;
  char *_IO_write_base;
  char *_IO_write_ptr;
  char *_IO_write_end;
  char *_IO_buf_base;
  char *_IO_buf_end;
  char *_IO_save_base;
  char *_IO_backup_base;
  char *_IO_save_end;
  struct _IO_marker *_markers;
  struct _IO_FILE *_chain;
  int _fileno;
  int _flags2;
  __off_t _old_offset;
  unsigned short _cur_column;
  signed char _vtable_offset;
  char _shortbuf[1];
  _IO_lock_t *_lock;
  __off64_t _offset;
  struct _IO_codecvt *_codecvt;
  struct _IO_wide_data *_wide_data;
  struct _IO_FILE *_freeres_list;
  void *_freeres_buf;
  size_t __pad5;
  int _mode;
  char _unused2[15 * sizeof (int) - 4 * sizeof (void *) - sizeof (size_t)];
};
/* (l126) typedef __gnuc_va_list va_list; */
# 126 
/* (l127) typedef __off_t off_t; */
# 127 
/* (l128) typedef __ssize_t ssize_t; */
# 128 
/* (l129) typedef __fpos_t fpos_t; */
# 129 
extern FILE *stdin;
extern FILE *stdout;
extern FILE *stderr;
extern int remove (const char *__filename) __attribute__ ((__nothrow__ , __leaf__));
extern int rename (const char *__old, const char *__new) __attribute__ ((__nothrow__ , __leaf__));
extern int renameat (int __oldfd, const char *__old, int __newfd,
       const char *__new) __attribute__ ((__nothrow__ , __leaf__));
extern FILE *tmpfile (void) ;
extern char *tmpnam (char *__s) __attribute__ ((__nothrow__ , __leaf__)) ;
extern char *tmpnam_r (char *__s) __attribute__ ((__nothrow__ , __leaf__)) ;
extern char *tempnam (const char *__dir, const char *__pfx)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) ;
extern int fclose (FILE *__stream);
extern int fflush (FILE *__stream);
extern int fflush_unlocked (FILE *__stream);
extern FILE *fopen (const char *__restrict __filename,
      const char *__restrict __modes) ;
extern FILE *freopen (const char *__restrict __filename,
        const char *__restrict __modes,
        FILE *__restrict __stream) ;
extern FILE *fdopen (int __fd, const char *__modes) __attribute__ ((__nothrow__ , __leaf__)) ;
extern FILE *fmemopen (void *__s, size_t __len, const char *__modes)
  __attribute__ ((__nothrow__ , __leaf__)) ;
extern FILE *open_memstream (char **__bufloc, size_t *__sizeloc) __attribute__ ((__nothrow__ , __leaf__)) ;
extern void setbuf (FILE *__restrict __stream, char *__restrict __buf) __attribute__ ((__nothrow__ , __leaf__));
extern int setvbuf (FILE *__restrict __stream, char *__restrict __buf,
      int __modes, size_t __n) __attribute__ ((__nothrow__ , __leaf__));
extern void setbuffer (FILE *__restrict __stream, char *__restrict __buf,
         size_t __size) __attribute__ ((__nothrow__ , __leaf__));
extern void setlinebuf (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));
extern int fprintf (FILE *__restrict __stream,
      const char *__restrict __format, ...);
extern int printf (const char *__restrict __format, ...);
extern int sprintf (char *__restrict __s,
      const char *__restrict __format, ...) __attribute__ ((__nothrow__));
extern int vfprintf (FILE *__restrict __s, const char *__restrict __format,
       __gnuc_va_list __arg);
extern int vprintf (const char *__restrict __format, __gnuc_va_list __arg);
extern int vsprintf (char *__restrict __s, const char *__restrict __format,
       __gnuc_va_list __arg) __attribute__ ((__nothrow__));
extern int snprintf (char *__restrict __s, size_t __maxlen,
       const char *__restrict __format, ...)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 3, 4)));
extern int vsnprintf (char *__restrict __s, size_t __maxlen,
        const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 3, 0)));
extern int vdprintf (int __fd, const char *__restrict __fmt,
       __gnuc_va_list __arg)
     __attribute__ ((__format__ (__printf__, 2, 0)));
extern int dprintf (int __fd, const char *__restrict __fmt, ...)
     __attribute__ ((__format__ (__printf__, 2, 3)));
extern int fscanf (FILE *__restrict __stream,
     const char *__restrict __format, ...) ;
extern int scanf (const char *__restrict __format, ...) ;
extern int sscanf (const char *__restrict __s,
     const char *__restrict __format, ...) __attribute__ ((__nothrow__ , __leaf__));
extern int fscanf (FILE *__restrict __stream, const char *__restrict __format, ...) __asm__ ("" "__isoc99_fscanf") ;
extern int scanf (const char *__restrict __format, ...) __asm__ ("" "__isoc99_scanf") ;
extern int sscanf (const char *__restrict __s, const char *__restrict __format, ...) __asm__ ("" "__isoc99_sscanf") __attribute__ ((__nothrow__ , __leaf__));
extern int vfscanf (FILE *__restrict __s, const char *__restrict __format,
      __gnuc_va_list __arg)
     __attribute__ ((__format__ (__scanf__, 2, 0))) ;
extern int vscanf (const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__format__ (__scanf__, 1, 0))) ;
extern int vsscanf (const char *__restrict __s,
      const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__format__ (__scanf__, 2, 0)));
extern int vfscanf (FILE *__restrict __s, const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vfscanf")
     __attribute__ ((__format__ (__scanf__, 2, 0))) ;
extern int vscanf (const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vscanf")
     __attribute__ ((__format__ (__scanf__, 1, 0))) ;
extern int vsscanf (const char *__restrict __s, const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vsscanf") __attribute__ ((__nothrow__ , __leaf__))
     __attribute__ ((__format__ (__scanf__, 2, 0)));
extern int fgetc (FILE *__stream);
extern int getc (FILE *__stream);
extern int getchar (void);
extern int getc_unlocked (FILE *__stream);
extern int getchar_unlocked (void);
extern int fgetc_unlocked (FILE *__stream);
extern int fputc (int __c, FILE *__stream);
extern int putc (int __c, FILE *__stream);
extern int putchar (int __c);
extern int fputc_unlocked (int __c, FILE *__stream);
extern int putc_unlocked (int __c, FILE *__stream);
extern int putchar_unlocked (int __c);
extern int getw (FILE *__stream);
extern int putw (int __w, FILE *__stream);
extern char *fgets (char *__restrict __s, int __n, FILE *__restrict __stream)
     ;
extern __ssize_t __getdelim (char **__restrict __lineptr,
                             size_t *__restrict __n, int __delimiter,
                             FILE *__restrict __stream) ;
extern __ssize_t getdelim (char **__restrict __lineptr,
                           size_t *__restrict __n, int __delimiter,
                           FILE *__restrict __stream) ;
extern __ssize_t getline (char **__restrict __lineptr,
                          size_t *__restrict __n,
                          FILE *__restrict __stream) ;
extern int fputs (const char *__restrict __s, FILE *__restrict __stream);
extern int puts (const char *__s);
extern int ungetc (int __c, FILE *__stream);
extern size_t fread (void *__restrict __ptr, size_t __size,
       size_t __n, FILE *__restrict __stream) ;
extern size_t fwrite (const void *__restrict __ptr, size_t __size,
        size_t __n, FILE *__restrict __s);
extern size_t fread_unlocked (void *__restrict __ptr, size_t __size,
         size_t __n, FILE *__restrict __stream) ;
extern size_t fwrite_unlocked (const void *__restrict __ptr, size_t __size,
          size_t __n, FILE *__restrict __stream);
extern int fseek (FILE *__stream, long int __off, int __whence);
extern long int ftell (FILE *__stream) ;
extern void rewind (FILE *__stream);
extern int fseeko (FILE *__stream, __off_t __off, int __whence);
extern __off_t ftello (FILE *__stream) ;
extern int fgetpos (FILE *__restrict __stream, fpos_t *__restrict __pos);
extern int fsetpos (FILE *__stream, const fpos_t *__pos);
extern void clearerr (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));
extern int feof (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;
extern int ferror (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;
extern void clearerr_unlocked (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));
extern int feof_unlocked (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;
extern int ferror_unlocked (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;
extern void perror (const char *__s);
extern int sys_nerr;
extern const char *const sys_errlist[];
extern int fileno (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;
extern int fileno_unlocked (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;
extern FILE *popen (const char *__command, const char *__modes) ;
extern int pclose (FILE *__stream);
extern char *ctermid (char *__s) __attribute__ ((__nothrow__ , __leaf__));
extern void flockfile (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));
extern int ftrylockfile (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;
extern void funlockfile (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));
extern int __uflow (FILE *);
extern int __overflow (FILE *, int);

int main() {
            
#pragma omp parallel
    printf("Hello\n");
    return 0;
}
