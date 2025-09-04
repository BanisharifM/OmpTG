/* File generated from [fft.pc] by OMPi compiler with torc extensions 2.5.0, Thu Sep  4 00:36:11 2025
$OMPi__nfo:0
*/
# 1 "fft.pc"
# 1 "ort.defs"
void ort_execute_serial(void * (* func)(void *), void * shared);
void ort_execute_parallel(void * (* func)(void *), void * shared, int num_threads, int iscombined, int procbind_type);
void ort_start_teams(void * (* func)(void *), void * shared, int num_teams, int thr_limit);
void * ort_get_thrpriv(void ** key, int size, void * origvar);
void ort_sglvar_allocate(void ** dataptr, int size, void * initer);
void ort_fence();
void ort_initreqs_add(void (* initfunc)(void));
void * ort_memalloc(int size);
void ort_memfree(void * ptr);
void ort_new_task(void * (* func)(void * arg), void * arg, int now, int final, int untied, int priority, void ** deparray, int noutdeps, int nindeps, int ninoutdeps);
void ort_taskwait(int waitall);
int ort_task_throttling(void);
void * ort_task_immediate_start(int final);
void ort_task_immediate_end(void * tn);
void ort_entering_taskgroup(void);
void ort_leaving_taskgroup(void);
void * ort_taskenv_alloc(int size, void * (* task_func)(void *));
void ort_taskenv_free(void * ptr, void * (* task_func)(void *));
void ort_atomic_begin();
void ort_atomic_end();
void ort_critical_begin(void ** cl);
void ort_critical_end(void ** cl);
void ort_broadcast_private(int num, ...);
void ort_copy_private(int num, ...);
int ort_barrier_me(void);
int ort_enable_cancel(int type);
int ort_check_cancel(int type);
int ort_mysingle(int hasnowait);
void ort_leaving_single();
void ort_entering_sections(int hasnowait, int numberofsections);
void ort_leaving_sections();
int ort_get_section();
void ort_entering_for(int nowait, int hasordered);
void ort_entering_doacross(int nowait, int nestdepth, int collapsenum, int schedtype, int chsize, long params[][ 3]);
int ort_leaving_for();
void ort_for_curriter(unsigned long iter);
void ort_ordered_begin();
void ort_ordered_end();
void ort_doacross_post(long params[][ 3], long * idx);
void ort_doacross_wait(long params[][ 3], int ndeps, long * deps);

/* (l80) typedef int (* chunky_t) (unsigned long niters, unsigned long chunksize, int monotonic, unsigned long * fiter, unsigned long * liter, int * extra); */
# 80 "injected_code"
void ort_get_runtime_schedule_stuff(int (* (* func))(unsigned long niters, unsigned long chunksize, int monotonic, unsigned long * fiter, unsigned long * liter, int * extra), unsigned long * chunksize);
int ort_get_guided_chunk(unsigned long niters, unsigned long chunksize, int monotonic, unsigned long * fiter, unsigned long * liter, int * ignored);
int ort_get_dynamic_chunk(unsigned long niters, unsigned long chunksize, int monotonic, unsigned long * fiter, unsigned long * liter, int * ignored);
int ort_get_runtimestatic_chunk(unsigned long niters, unsigned long chunksize, int monotonic, unsigned long * fiter, unsigned long * liter, int * chunkid);
int ort_get_static_default_chunk(unsigned long niters, unsigned long * from, unsigned long * to);
void * ort_dev_gaddr(void * medaddr);
char * devpart_med2dev_addr(void * medaddr, unsigned long size);
void ort_reduction_begin(void ** cl);
void ort_reduction_end(void ** cl);
void ort_reduce_add(int, void *, void *, int);
void ort_reduce_subtract(int, void *, void *, int);
void ort_reduce_multiply(int, void *, void *, int);
void ort_reduce_and(int, void *, void *, int);
void ort_reduce_or(int, void *, void *, int);
void ort_reduce_max(int, void *, void *, int);
void ort_reduce_min(int, void *, void *, int);
void ort_reduce_bitand(int, void *, void *, int);
void ort_reduce_bitor(int, void *, void *, int);
void ort_reduce_bitxor(int, void *, void *, int);
void ort_offload_kernel(void * (* host_func)(void *), void * vars, void * declvars, char * kernel_filename_prefix, int devnum, ...);
void * ort_devdata_alloc(unsigned long size, int devnum);
void ort_devdata_free(void * data, int devnum);
void * ort_start_target_data(int tdvars, int devnum);
void ort_end_target_data(void * de);
void ort_map_tdvar(void * var, unsigned long size, void * varlb, int isptr, int init);
void ort_unmap_tdvar(void * var, int update);
void ort_map_var_dev(void * var, unsigned long size, void * varlb, int isptr, int devid, int init);
void ort_unmap_var_dev(void * var, int devid, int update, int delete);
void ort_read_var_dev(void * var, unsigned long size, void * varlb, int devnum);
void ort_write_var_dev(void * var, unsigned long size, void * varlb, int devnum);
void * ort_unmappedcopy_dev(void * buf, unsigned long size, int devnum);
void ort_unmappedfree_dev(void * umed, int devnum);
void * ort_host2med_addr(void * var, int devnum);
void ort_decltarg_register(void * var, unsigned long size, const void * init, int bylink);
void * ort_decltarg_host2med_addr(void * var, int devnum);
void ort_kerneltable_add(char * name, void * (* kernel_function)(void *));
void * __ompi_defs__;

# 1 "fft.pc-newglobals"
#define __DEVSPEC
#define __DEVQLFR
#define __DEVKERN


# 1 "fft.pc"
/* (l209) typedef long unsigned int size_t; */
# 209 "/sw/spack/deltas11-2023-03/apps/linux-rhel8-x86_64/gcc-8.5.0/gcc-11.4.0-yycklku/lib/gcc/x86_64-pc-linux-gnu/11.4.0/include/stddef.h"
/* (l40) typedef __builtin_va_list __gnuc_va_list; */
# 40 "/sw/spack/deltas11-2023-03/apps/linux-rhel8-x86_64/gcc-8.5.0/gcc-11.4.0-yycklku/lib/gcc/x86_64-pc-linux-gnu/11.4.0/include/stdarg.h"
/* (l30) typedef unsigned char __u_char; */
# 30 "/usr/include/bits/types.h"
/* (l31) typedef unsigned short int __u_short; */
# 31 "/usr/include/bits/types.h"
/* (l32) typedef unsigned int __u_int; */
# 32 "/usr/include/bits/types.h"
/* (l33) typedef unsigned long int __u_long; */
# 33 "/usr/include/bits/types.h"
/* (l36) typedef signed char __int8_t; */
# 36 "/usr/include/bits/types.h"
/* (l37) typedef unsigned char __uint8_t; */
# 37 "/usr/include/bits/types.h"
/* (l38) typedef signed short int __int16_t; */
# 38 "/usr/include/bits/types.h"
/* (l39) typedef unsigned short int __uint16_t; */
# 39 "/usr/include/bits/types.h"
/* (l40) typedef signed int __int32_t; */
# 40 "/usr/include/bits/types.h"
/* (l41) typedef unsigned int __uint32_t; */
# 41 "/usr/include/bits/types.h"
/* (l43) typedef signed long int __int64_t; */
# 43 "/usr/include/bits/types.h"
/* (l44) typedef unsigned long int __uint64_t; */
# 44 "/usr/include/bits/types.h"
/* (l51) typedef __int8_t __int_least8_t; */
# 51 "/usr/include/bits/types.h"
/* (l52) typedef __uint8_t __uint_least8_t; */
# 52 "/usr/include/bits/types.h"
/* (l53) typedef __int16_t __int_least16_t; */
# 53 "/usr/include/bits/types.h"
/* (l54) typedef __uint16_t __uint_least16_t; */
# 54 "/usr/include/bits/types.h"
/* (l55) typedef __int32_t __int_least32_t; */
# 55 "/usr/include/bits/types.h"
/* (l56) typedef __uint32_t __uint_least32_t; */
# 56 "/usr/include/bits/types.h"
/* (l57) typedef __int64_t __int_least64_t; */
# 57 "/usr/include/bits/types.h"
/* (l58) typedef __uint64_t __uint_least64_t; */
# 58 "/usr/include/bits/types.h"
/* (l62) typedef long int __quad_t; */
# 62 "/usr/include/bits/types.h"
/* (l63) typedef unsigned long int __u_quad_t; */
# 63 "/usr/include/bits/types.h"
/* (l71) typedef long int __intmax_t; */
# 71 "/usr/include/bits/types.h"
/* (l72) typedef unsigned long int __uintmax_t; */
# 72 "/usr/include/bits/types.h"
/* (l143) typedef unsigned long int __dev_t; */
# 143 "/usr/include/bits/types.h"
/* (l144) typedef unsigned int __uid_t; */
# 144 "/usr/include/bits/types.h"
/* (l145) typedef unsigned int __gid_t; */
# 145 "/usr/include/bits/types.h"
/* (l146) typedef unsigned long int __ino_t; */
# 146 "/usr/include/bits/types.h"
/* (l147) typedef unsigned long int __ino64_t; */
# 147 "/usr/include/bits/types.h"
/* (l148) typedef unsigned int __mode_t; */
# 148 "/usr/include/bits/types.h"
/* (l149) typedef unsigned long int __nlink_t; */
# 149 "/usr/include/bits/types.h"
/* (l150) typedef long int __off_t; */
# 150 "/usr/include/bits/types.h"
/* (l151) typedef long int __off64_t; */
# 151 "/usr/include/bits/types.h"
/* (l152) typedef int __pid_t; */
# 152 "/usr/include/bits/types.h"
struct _noname0_ {
    int __val[ 2];
  };

/* (l153) typedef struct _noname0_ __fsid_t; */
# 153 "/usr/include/bits/types.h"
/* (l154) typedef long int __clock_t; */
# 154 "/usr/include/bits/types.h"
/* (l155) typedef unsigned long int __rlim_t; */
# 155 "/usr/include/bits/types.h"
/* (l156) typedef unsigned long int __rlim64_t; */
# 156 "/usr/include/bits/types.h"
/* (l157) typedef unsigned int __id_t; */
# 157 "/usr/include/bits/types.h"
/* (l158) typedef long int __time_t; */
# 158 "/usr/include/bits/types.h"
/* (l159) typedef unsigned int __useconds_t; */
# 159 "/usr/include/bits/types.h"
/* (l160) typedef long int __suseconds_t; */
# 160 "/usr/include/bits/types.h"
/* (l162) typedef int __daddr_t; */
# 162 "/usr/include/bits/types.h"
/* (l163) typedef int __key_t; */
# 163 "/usr/include/bits/types.h"
/* (l166) typedef int __clockid_t; */
# 166 "/usr/include/bits/types.h"
/* (l169) typedef void * __timer_t; */
# 169 "/usr/include/bits/types.h"
/* (l172) typedef long int __blksize_t; */
# 172 "/usr/include/bits/types.h"
/* (l177) typedef long int __blkcnt_t; */
# 177 "/usr/include/bits/types.h"
/* (l178) typedef long int __blkcnt64_t; */
# 178 "/usr/include/bits/types.h"
/* (l181) typedef unsigned long int __fsblkcnt_t; */
# 181 "/usr/include/bits/types.h"
/* (l182) typedef unsigned long int __fsblkcnt64_t; */
# 182 "/usr/include/bits/types.h"
/* (l185) typedef unsigned long int __fsfilcnt_t; */
# 185 "/usr/include/bits/types.h"
/* (l186) typedef unsigned long int __fsfilcnt64_t; */
# 186 "/usr/include/bits/types.h"
/* (l189) typedef long int __fsword_t; */
# 189 "/usr/include/bits/types.h"
/* (l191) typedef long int __ssize_t; */
# 191 "/usr/include/bits/types.h"
/* (l194) typedef long int __syscall_slong_t; */
# 194 "/usr/include/bits/types.h"
/* (l196) typedef unsigned long int __syscall_ulong_t; */
# 196 "/usr/include/bits/types.h"
/* (l200) typedef __off64_t __loff_t; */
# 200 "/usr/include/bits/types.h"
/* (l201) typedef char * __caddr_t; */
# 201 "/usr/include/bits/types.h"
/* (l204) typedef long int __intptr_t; */
# 204 "/usr/include/bits/types.h"
/* (l207) typedef unsigned int __socklen_t; */
# 207 "/usr/include/bits/types.h"
/* (l212) typedef int __sig_atomic_t; */
# 212 "/usr/include/bits/types.h"
struct _noname1_ {
    int __count;
    union {
        unsigned int __wch;
        char __wchb[ 4];
      } __value;
  };

/* (l21) typedef struct _noname1_ __mbstate_t; */
# 21 "/usr/include/bits/types/__mbstate_t.h"
struct _G_fpos_t {
    long int __pos;
    struct _noname1_ __state;
  };

/* (l14) typedef struct _G_fpos_t __fpos_t; */
# 14 "/usr/include/bits/types/__fpos_t.h"
struct _G_fpos64_t {
    long int __pos;
    struct _noname1_ __state;
  };

/* (l14) typedef struct _G_fpos64_t __fpos64_t; */
# 14 "/usr/include/bits/types/__fpos64_t.h"
# 4 "/usr/include/bits/types/__FILE.h"
struct _IO_FILE;

/* (l5) typedef struct _IO_FILE __FILE; */
# 5 "/usr/include/bits/types/__FILE.h"
# 4 "/usr/include/bits/types/FILE.h"
struct _IO_FILE;

/* (l7) typedef struct _IO_FILE FILE; */
# 7 "/usr/include/bits/types/FILE.h"
# 35 "/usr/include/bits/types/struct_FILE.h"
struct _IO_FILE;
struct _IO_marker;
struct _IO_codecvt;
struct _IO_wide_data;

/* (l43) typedef void _IO_lock_t; */
# 43 "/usr/include/bits/types/struct_FILE.h"
struct _IO_FILE {
    int _flags;
    char * _IO_read_ptr;
    char * _IO_read_end;
    char * _IO_read_base;
    char * _IO_write_base;
    char * _IO_write_ptr;
    char * _IO_write_end;
    char * _IO_buf_base;
    char * _IO_buf_end;
    char * _IO_save_base;
    char * _IO_backup_base;
    char * _IO_save_end;
    struct _IO_marker * _markers;
    struct _IO_FILE * _chain;
    int _fileno;
    int _flags2;
    long int _old_offset;
    unsigned short _cur_column;
    signed char _vtable_offset;
    char _shortbuf[ 1];
    void (* _lock);
    long int _offset;
    struct _IO_codecvt * _codecvt;
    struct _IO_wide_data * _wide_data;
    struct _IO_FILE * _freeres_list;
    void * _freeres_buf;
    long unsigned int __pad5;
    int _mode;
    char _unused2[ 15 * sizeof(int) - 4 * sizeof(void *) - sizeof(long unsigned int)];
  };

/* (l99) typedef __gnuc_va_list va_list; */
# 99 "/sw/spack/deltas11-2023-03/apps/linux-rhel8-x86_64/gcc-8.5.0/gcc-11.4.0-yycklku/lib/gcc/x86_64-pc-linux-gnu/11.4.0/include/stdarg.h"
/* (l63) typedef __off_t off_t; */
# 63 "/usr/include/stdio.h"
/* (l77) typedef __ssize_t ssize_t; */
# 77 "/usr/include/stdio.h"
/* (l84) typedef __fpos_t fpos_t; */
# 84 "/usr/include/stdio.h"
# 137 "/usr/include/stdio.h"
extern struct _IO_FILE (* stdin);
extern struct _IO_FILE (* stdout);
extern struct _IO_FILE (* stderr);
extern int remove(const char * __filename);
extern int rename(const char * __old, const char * __new);
extern int renameat(int __oldfd, const char * __old, int __newfd, const char * __new);
extern struct _IO_FILE (* tmpfile(void));
extern char * tmpnam(char * __s);
extern char * tmpnam_r(char * __s);
extern char * tempnam(const char * __dir, const char * __pfx);
extern int fclose(struct _IO_FILE (* __stream));
extern int fflush(struct _IO_FILE (* __stream));
extern int fflush_unlocked(struct _IO_FILE (* __stream));
extern struct _IO_FILE (* fopen(const char *restrict __filename, const char *restrict __modes));
extern struct _IO_FILE (* freopen(const char *restrict __filename, const char *restrict __modes, struct _IO_FILE (*restrict __stream)));
extern struct _IO_FILE (* fdopen(int __fd, const char * __modes));
extern struct _IO_FILE (* fmemopen(void * __s, long unsigned int __len, const char * __modes));
extern struct _IO_FILE (* open_memstream(char ** __bufloc, long unsigned int (* __sizeloc)));
extern void setbuf(struct _IO_FILE (*restrict __stream), char *restrict __buf);
extern int setvbuf(struct _IO_FILE (*restrict __stream), char *restrict __buf, int __modes, long unsigned int __n);
extern void setbuffer(struct _IO_FILE (*restrict __stream), char *restrict __buf, long unsigned int __size);
extern void setlinebuf(struct _IO_FILE (* __stream));
extern int fprintf(struct _IO_FILE (*restrict __stream), const char *restrict __format, ...);
extern int printf(const char *restrict __format, ...);
extern int sprintf(char *restrict __s, const char *restrict __format, ...);
extern int vfprintf(struct _IO_FILE (*restrict __s), const char *restrict __format, __builtin_va_list __arg);
extern int vprintf(const char *restrict __format, __builtin_va_list __arg);
extern int vsprintf(char *restrict __s, const char *restrict __format, __builtin_va_list __arg);
extern int snprintf(char *restrict __s, long unsigned int __maxlen, const char *restrict __format, ...);
extern int vsnprintf(char *restrict __s, long unsigned int __maxlen, const char *restrict __format, __builtin_va_list __arg);
extern int vdprintf(int __fd, const char *restrict __fmt, __builtin_va_list __arg);
extern int dprintf(int __fd, const char *restrict __fmt, ...);
extern int fscanf(struct _IO_FILE (*restrict __stream), const char *restrict __format, ...);
extern int scanf(const char *restrict __format, ...);
extern int sscanf(const char *restrict __s, const char *restrict __format, ...);
extern int __isoc99_fscanf(struct _IO_FILE (*restrict __stream), const char *restrict __format, ...);
extern int __isoc99_scanf(const char *restrict __format, ...);
extern int __isoc99_sscanf(const char *restrict __s, const char *restrict __format, ...);
extern int vfscanf(struct _IO_FILE (*restrict __s), const char *restrict __format, __builtin_va_list __arg);
extern int vscanf(const char *restrict __format, __builtin_va_list __arg);
extern int vsscanf(const char *restrict __s, const char *restrict __format, __builtin_va_list __arg);
extern int __isoc99_vfscanf(struct _IO_FILE (*restrict __s), const char *restrict __format, __builtin_va_list __arg);
extern int __isoc99_vscanf(const char *restrict __format, __builtin_va_list __arg);
extern int __isoc99_vsscanf(const char *restrict __s, const char *restrict __format, __builtin_va_list __arg);
extern int fgetc(struct _IO_FILE (* __stream));
extern int getc(struct _IO_FILE (* __stream));
extern int getchar(void);
extern int getc_unlocked(struct _IO_FILE (* __stream));
extern int getchar_unlocked(void);
extern int fgetc_unlocked(struct _IO_FILE (* __stream));
extern int fputc(int __c, struct _IO_FILE (* __stream));
extern int putc(int __c, struct _IO_FILE (* __stream));
extern int putchar(int __c);
extern int fputc_unlocked(int __c, struct _IO_FILE (* __stream));
extern int putc_unlocked(int __c, struct _IO_FILE (* __stream));
extern int putchar_unlocked(int __c);
extern int getw(struct _IO_FILE (* __stream));
extern int putw(int __w, struct _IO_FILE (* __stream));
extern char * fgets(char *restrict __s, int __n, struct _IO_FILE (*restrict __stream));
extern long int __getdelim(char **restrict __lineptr, long unsigned int (*restrict __n), int __delimiter, struct _IO_FILE (*restrict __stream));
extern long int getdelim(char **restrict __lineptr, long unsigned int (*restrict __n), int __delimiter, struct _IO_FILE (*restrict __stream));
extern long int getline(char **restrict __lineptr, long unsigned int (*restrict __n), struct _IO_FILE (*restrict __stream));
extern int fputs(const char *restrict __s, struct _IO_FILE (*restrict __stream));
extern int puts(const char * __s);
extern int ungetc(int __c, struct _IO_FILE (* __stream));
extern long unsigned int fread(void *restrict __ptr, long unsigned int __size, long unsigned int __n, struct _IO_FILE (*restrict __stream));
extern long unsigned int fwrite(const void *restrict __ptr, long unsigned int __size, long unsigned int __n, struct _IO_FILE (*restrict __s));
extern long unsigned int fread_unlocked(void *restrict __ptr, long unsigned int __size, long unsigned int __n, struct _IO_FILE (*restrict __stream));
extern long unsigned int fwrite_unlocked(const void *restrict __ptr, long unsigned int __size, long unsigned int __n, struct _IO_FILE (*restrict __stream));
extern int fseek(struct _IO_FILE (* __stream), long int __off, int __whence);
extern long int ftell(struct _IO_FILE (* __stream));
extern void rewind(struct _IO_FILE (* __stream));
extern int fseeko(struct _IO_FILE (* __stream), long int __off, int __whence);
extern long int ftello(struct _IO_FILE (* __stream));
extern int fgetpos(struct _IO_FILE (*restrict __stream), struct _G_fpos_t (*restrict __pos));
extern int fsetpos(struct _IO_FILE (* __stream), const struct _G_fpos_t (* __pos));
extern void clearerr(struct _IO_FILE (* __stream));
extern int feof(struct _IO_FILE (* __stream));
extern int ferror(struct _IO_FILE (* __stream));
extern void clearerr_unlocked(struct _IO_FILE (* __stream));
extern int feof_unlocked(struct _IO_FILE (* __stream));
extern int ferror_unlocked(struct _IO_FILE (* __stream));
extern void perror(const char * __s);
# 26 "/usr/include/bits/sys_errlist.h"
extern int sys_nerr;
extern const char *const sys_errlist[];
# 792 "/usr/include/stdio.h"
extern int fileno(struct _IO_FILE (* __stream));
extern int fileno_unlocked(struct _IO_FILE (* __stream));
extern struct _IO_FILE (* popen(const char * __command, const char * __modes));
extern int pclose(struct _IO_FILE (* __stream));
extern char * ctermid(char * __s);
extern void flockfile(struct _IO_FILE (* __stream));
extern int ftrylockfile(struct _IO_FILE (* __stream));
extern void funlockfile(struct _IO_FILE (* __stream));
extern int __uflow(struct _IO_FILE (*));
extern int __overflow(struct _IO_FILE (*), int);

/* (l214) typedef float _Float32; */
# 214 "/usr/include/bits/floatn-common.h"
/* (l251) typedef double _Float64; */
# 251 "/usr/include/bits/floatn-common.h"
/* (l268) typedef double _Float32x; */
# 268 "/usr/include/bits/floatn-common.h"
/* (l285) typedef long double _Float64x; */
# 285 "/usr/include/bits/floatn-common.h"
/* (l149) typedef float float_t; */
# 149 "/usr/include/math.h"
/* (l150) typedef double double_t; */
# 150 "/usr/include/math.h"
# 22 "/usr/include/bits/mathcalls-helper-functions.h"
extern int __fpclassify(double __value);
extern int __signbit(double __value);
extern int __isinf(double __value);
extern int __finite(double __value);
extern int __isnan(double __value);
extern int __iseqsig(double __x, double __y);
extern int __issignaling(double __value);
# 53 "/usr/include/bits/mathcalls.h"
extern double acos(double __x);
extern double __acos(double __x);
extern double asin(double __x);
extern double __asin(double __x);
extern double atan(double __x);
extern double __atan(double __x);
extern double atan2(double __y, double __x);
extern double __atan2(double __y, double __x);
extern double cos(double __x);
extern double __cos(double __x);
extern double sin(double __x);
extern double __sin(double __x);
extern double tan(double __x);
extern double __tan(double __x);
extern double cosh(double __x);
extern double __cosh(double __x);
extern double sinh(double __x);
extern double __sinh(double __x);
extern double tanh(double __x);
extern double __tanh(double __x);
extern double acosh(double __x);
extern double __acosh(double __x);
extern double asinh(double __x);
extern double __asinh(double __x);
extern double atanh(double __x);
extern double __atanh(double __x);
extern double exp(double __x);
extern double __exp(double __x);
extern double frexp(double __x, int * __exponent);
extern double __frexp(double __x, int * __exponent);
extern double ldexp(double __x, int __exponent);
extern double __ldexp(double __x, int __exponent);
extern double log(double __x);
extern double __log(double __x);
extern double log10(double __x);
extern double __log10(double __x);
extern double modf(double __x, double * __iptr);
extern double __modf(double __x, double * __iptr);
extern double expm1(double __x);
extern double __expm1(double __x);
extern double log1p(double __x);
extern double __log1p(double __x);
extern double logb(double __x);
extern double __logb(double __x);
extern double exp2(double __x);
extern double __exp2(double __x);
extern double log2(double __x);
extern double __log2(double __x);
extern double pow(double __x, double __y);
extern double __pow(double __x, double __y);
extern double sqrt(double __x);
extern double __sqrt(double __x);
extern double hypot(double __x, double __y);
extern double __hypot(double __x, double __y);
extern double cbrt(double __x);
extern double __cbrt(double __x);
extern double ceil(double __x);
extern double __ceil(double __x);
extern double fabs(double __x);
extern double __fabs(double __x);
extern double floor(double __x);
extern double __floor(double __x);
extern double fmod(double __x, double __y);
extern double __fmod(double __x, double __y);
extern int isinf(double __value);
extern int finite(double __value);
extern double drem(double __x, double __y);
extern double __drem(double __x, double __y);
extern double significand(double __x);
extern double __significand(double __x);
extern double copysign(double __x, double __y);
extern double __copysign(double __x, double __y);
extern double nan(const char * __tagb);
extern double __nan(const char * __tagb);
extern int isnan(double __value);
extern double j0(double);
extern double __j0(double);
extern double j1(double);
extern double __j1(double);
extern double jn(int, double);
extern double __jn(int, double);
extern double y0(double);
extern double __y0(double);
extern double y1(double);
extern double __y1(double);
extern double yn(int, double);
extern double __yn(int, double);
extern double erf(double);
extern double __erf(double);
extern double erfc(double);
extern double __erfc(double);
extern double lgamma(double);
extern double __lgamma(double);
extern double tgamma(double);
extern double __tgamma(double);
extern double gamma(double);
extern double __gamma(double);
extern double lgamma_r(double, int * __signgamp);
extern double __lgamma_r(double, int * __signgamp);
extern double rint(double __x);
extern double __rint(double __x);
extern double nextafter(double __x, double __y);
extern double __nextafter(double __x, double __y);
extern double nexttoward(double __x, long double __y);
extern double __nexttoward(double __x, long double __y);
extern double remainder(double __x, double __y);
extern double __remainder(double __x, double __y);
extern double scalbn(double __x, int __n);
extern double __scalbn(double __x, int __n);
extern int ilogb(double __x);
extern int __ilogb(double __x);
extern double scalbln(double __x, long int __n);
extern double __scalbln(double __x, long int __n);
extern double nearbyint(double __x);
extern double __nearbyint(double __x);
extern double round(double __x);
extern double __round(double __x);
extern double trunc(double __x);
extern double __trunc(double __x);
extern double remquo(double __x, double __y, int * __quo);
extern double __remquo(double __x, double __y, int * __quo);
extern long int lrint(double __x);
extern long int __lrint(double __x);
extern long long int llrint(double __x);
extern long long int __llrint(double __x);
extern long int lround(double __x);
extern long int __lround(double __x);
extern long long int llround(double __x);
extern long long int __llround(double __x);
extern double fdim(double __x, double __y);
extern double __fdim(double __x, double __y);
extern double fmax(double __x, double __y);
extern double __fmax(double __x, double __y);
extern double fmin(double __x, double __y);
extern double __fmin(double __x, double __y);
extern double fma(double __x, double __y, double __z);
extern double __fma(double __x, double __y, double __z);
extern double scalb(double __x, double __n);
extern double __scalb(double __x, double __n);
# 22 "/usr/include/bits/mathcalls-helper-functions.h"
extern int __fpclassifyf(float __value);
extern int __signbitf(float __value);
extern int __isinff(float __value);
extern int __finitef(float __value);
extern int __isnanf(float __value);
extern int __iseqsigf(float __x, float __y);
extern int __issignalingf(float __value);
# 53 "/usr/include/bits/mathcalls.h"
extern float acosf(float __x);
extern float __acosf(float __x);
extern float asinf(float __x);
extern float __asinf(float __x);
extern float atanf(float __x);
extern float __atanf(float __x);
extern float atan2f(float __y, float __x);
extern float __atan2f(float __y, float __x);
extern float cosf(float __x);
extern float __cosf(float __x);
extern float sinf(float __x);
extern float __sinf(float __x);
extern float tanf(float __x);
extern float __tanf(float __x);
extern float coshf(float __x);
extern float __coshf(float __x);
extern float sinhf(float __x);
extern float __sinhf(float __x);
extern float tanhf(float __x);
extern float __tanhf(float __x);
extern float acoshf(float __x);
extern float __acoshf(float __x);
extern float asinhf(float __x);
extern float __asinhf(float __x);
extern float atanhf(float __x);
extern float __atanhf(float __x);
extern float expf(float __x);
extern float __expf(float __x);
extern float frexpf(float __x, int * __exponent);
extern float __frexpf(float __x, int * __exponent);
extern float ldexpf(float __x, int __exponent);
extern float __ldexpf(float __x, int __exponent);
extern float logf(float __x);
extern float __logf(float __x);
extern float log10f(float __x);
extern float __log10f(float __x);
extern float modff(float __x, float * __iptr);
extern float __modff(float __x, float * __iptr);
extern float expm1f(float __x);
extern float __expm1f(float __x);
extern float log1pf(float __x);
extern float __log1pf(float __x);
extern float logbf(float __x);
extern float __logbf(float __x);
extern float exp2f(float __x);
extern float __exp2f(float __x);
extern float log2f(float __x);
extern float __log2f(float __x);
extern float powf(float __x, float __y);
extern float __powf(float __x, float __y);
extern float sqrtf(float __x);
extern float __sqrtf(float __x);
extern float hypotf(float __x, float __y);
extern float __hypotf(float __x, float __y);
extern float cbrtf(float __x);
extern float __cbrtf(float __x);
extern float ceilf(float __x);
extern float __ceilf(float __x);
extern float fabsf(float __x);
extern float __fabsf(float __x);
extern float floorf(float __x);
extern float __floorf(float __x);
extern float fmodf(float __x, float __y);
extern float __fmodf(float __x, float __y);
extern int isinff(float __value);
extern int finitef(float __value);
extern float dremf(float __x, float __y);
extern float __dremf(float __x, float __y);
extern float significandf(float __x);
extern float __significandf(float __x);
extern float copysignf(float __x, float __y);
extern float __copysignf(float __x, float __y);
extern float nanf(const char * __tagb);
extern float __nanf(const char * __tagb);
extern int isnanf(float __value);
extern float j0f(float);
extern float __j0f(float);
extern float j1f(float);
extern float __j1f(float);
extern float jnf(int, float);
extern float __jnf(int, float);
extern float y0f(float);
extern float __y0f(float);
extern float y1f(float);
extern float __y1f(float);
extern float ynf(int, float);
extern float __ynf(int, float);
extern float erff(float);
extern float __erff(float);
extern float erfcf(float);
extern float __erfcf(float);
extern float lgammaf(float);
extern float __lgammaf(float);
extern float tgammaf(float);
extern float __tgammaf(float);
extern float gammaf(float);
extern float __gammaf(float);
extern float lgammaf_r(float, int * __signgamp);
extern float __lgammaf_r(float, int * __signgamp);
extern float rintf(float __x);
extern float __rintf(float __x);
extern float nextafterf(float __x, float __y);
extern float __nextafterf(float __x, float __y);
extern float nexttowardf(float __x, long double __y);
extern float __nexttowardf(float __x, long double __y);
extern float remainderf(float __x, float __y);
extern float __remainderf(float __x, float __y);
extern float scalbnf(float __x, int __n);
extern float __scalbnf(float __x, int __n);
extern int ilogbf(float __x);
extern int __ilogbf(float __x);
extern float scalblnf(float __x, long int __n);
extern float __scalblnf(float __x, long int __n);
extern float nearbyintf(float __x);
extern float __nearbyintf(float __x);
extern float roundf(float __x);
extern float __roundf(float __x);
extern float truncf(float __x);
extern float __truncf(float __x);
extern float remquof(float __x, float __y, int * __quo);
extern float __remquof(float __x, float __y, int * __quo);
extern long int lrintf(float __x);
extern long int __lrintf(float __x);
extern long long int llrintf(float __x);
extern long long int __llrintf(float __x);
extern long int lroundf(float __x);
extern long int __lroundf(float __x);
extern long long int llroundf(float __x);
extern long long int __llroundf(float __x);
extern float fdimf(float __x, float __y);
extern float __fdimf(float __x, float __y);
extern float fmaxf(float __x, float __y);
extern float __fmaxf(float __x, float __y);
extern float fminf(float __x, float __y);
extern float __fminf(float __x, float __y);
extern float fmaf(float __x, float __y, float __z);
extern float __fmaf(float __x, float __y, float __z);
extern float scalbf(float __x, float __n);
extern float __scalbf(float __x, float __n);
# 22 "/usr/include/bits/mathcalls-helper-functions.h"
extern int __fpclassifyl(long double __value);
extern int __signbitl(long double __value);
extern int __isinfl(long double __value);
extern int __finitel(long double __value);
extern int __isnanl(long double __value);
extern int __iseqsigl(long double __x, long double __y);
extern int __issignalingl(long double __value);
# 53 "/usr/include/bits/mathcalls.h"
extern long double acosl(long double __x);
extern long double __acosl(long double __x);
extern long double asinl(long double __x);
extern long double __asinl(long double __x);
extern long double atanl(long double __x);
extern long double __atanl(long double __x);
extern long double atan2l(long double __y, long double __x);
extern long double __atan2l(long double __y, long double __x);
extern long double cosl(long double __x);
extern long double __cosl(long double __x);
extern long double sinl(long double __x);
extern long double __sinl(long double __x);
extern long double tanl(long double __x);
extern long double __tanl(long double __x);
extern long double coshl(long double __x);
extern long double __coshl(long double __x);
extern long double sinhl(long double __x);
extern long double __sinhl(long double __x);
extern long double tanhl(long double __x);
extern long double __tanhl(long double __x);
extern long double acoshl(long double __x);
extern long double __acoshl(long double __x);
extern long double asinhl(long double __x);
extern long double __asinhl(long double __x);
extern long double atanhl(long double __x);
extern long double __atanhl(long double __x);
extern long double expl(long double __x);
extern long double __expl(long double __x);
extern long double frexpl(long double __x, int * __exponent);
extern long double __frexpl(long double __x, int * __exponent);
extern long double ldexpl(long double __x, int __exponent);
extern long double __ldexpl(long double __x, int __exponent);
extern long double logl(long double __x);
extern long double __logl(long double __x);
extern long double log10l(long double __x);
extern long double __log10l(long double __x);
extern long double modfl(long double __x, long double * __iptr);
extern long double __modfl(long double __x, long double * __iptr);
extern long double expm1l(long double __x);
extern long double __expm1l(long double __x);
extern long double log1pl(long double __x);
extern long double __log1pl(long double __x);
extern long double logbl(long double __x);
extern long double __logbl(long double __x);
extern long double exp2l(long double __x);
extern long double __exp2l(long double __x);
extern long double log2l(long double __x);
extern long double __log2l(long double __x);
extern long double powl(long double __x, long double __y);
extern long double __powl(long double __x, long double __y);
extern long double sqrtl(long double __x);
extern long double __sqrtl(long double __x);
extern long double hypotl(long double __x, long double __y);
extern long double __hypotl(long double __x, long double __y);
extern long double cbrtl(long double __x);
extern long double __cbrtl(long double __x);
extern long double ceill(long double __x);
extern long double __ceill(long double __x);
extern long double fabsl(long double __x);
extern long double __fabsl(long double __x);
extern long double floorl(long double __x);
extern long double __floorl(long double __x);
extern long double fmodl(long double __x, long double __y);
extern long double __fmodl(long double __x, long double __y);
extern int isinfl(long double __value);
extern int finitel(long double __value);
extern long double dreml(long double __x, long double __y);
extern long double __dreml(long double __x, long double __y);
extern long double significandl(long double __x);
extern long double __significandl(long double __x);
extern long double copysignl(long double __x, long double __y);
extern long double __copysignl(long double __x, long double __y);
extern long double nanl(const char * __tagb);
extern long double __nanl(const char * __tagb);
extern int isnanl(long double __value);
extern long double j0l(long double);
extern long double __j0l(long double);
extern long double j1l(long double);
extern long double __j1l(long double);
extern long double jnl(int, long double);
extern long double __jnl(int, long double);
extern long double y0l(long double);
extern long double __y0l(long double);
extern long double y1l(long double);
extern long double __y1l(long double);
extern long double ynl(int, long double);
extern long double __ynl(int, long double);
extern long double erfl(long double);
extern long double __erfl(long double);
extern long double erfcl(long double);
extern long double __erfcl(long double);
extern long double lgammal(long double);
extern long double __lgammal(long double);
extern long double tgammal(long double);
extern long double __tgammal(long double);
extern long double gammal(long double);
extern long double __gammal(long double);
extern long double lgammal_r(long double, int * __signgamp);
extern long double __lgammal_r(long double, int * __signgamp);
extern long double rintl(long double __x);
extern long double __rintl(long double __x);
extern long double nextafterl(long double __x, long double __y);
extern long double __nextafterl(long double __x, long double __y);
extern long double nexttowardl(long double __x, long double __y);
extern long double __nexttowardl(long double __x, long double __y);
extern long double remainderl(long double __x, long double __y);
extern long double __remainderl(long double __x, long double __y);
extern long double scalbnl(long double __x, int __n);
extern long double __scalbnl(long double __x, int __n);
extern int ilogbl(long double __x);
extern int __ilogbl(long double __x);
extern long double scalblnl(long double __x, long int __n);
extern long double __scalblnl(long double __x, long int __n);
extern long double nearbyintl(long double __x);
extern long double __nearbyintl(long double __x);
extern long double roundl(long double __x);
extern long double __roundl(long double __x);
extern long double truncl(long double __x);
extern long double __truncl(long double __x);
extern long double remquol(long double __x, long double __y, int * __quo);
extern long double __remquol(long double __x, long double __y, int * __quo);
extern long int lrintl(long double __x);
extern long int __lrintl(long double __x);
extern long long int llrintl(long double __x);
extern long long int __llrintl(long double __x);
extern long int lroundl(long double __x);
extern long int __lroundl(long double __x);
extern long long int llroundl(long double __x);
extern long long int __llroundl(long double __x);
extern long double fdiml(long double __x, long double __y);
extern long double __fdiml(long double __x, long double __y);
extern long double fmaxl(long double __x, long double __y);
extern long double __fmaxl(long double __x, long double __y);
extern long double fminl(long double __x, long double __y);
extern long double __fminl(long double __x, long double __y);
extern long double fmal(long double __x, long double __y, long double __z);
extern long double __fmal(long double __x, long double __y, long double __z);
extern long double scalbl(long double __x, long double __n);
extern long double __scalbl(long double __x, long double __n);
# 773 "/usr/include/math.h"
extern int signgam;
enum {
    FP_NAN = 0, FP_INFINITE = 1, FP_ZERO = 2, FP_SUBNORMAL = 3, FP_NORMAL = 4
  };

/* (l321) typedef int wchar_t; */
# 321 "/sw/spack/deltas11-2023-03/apps/linux-rhel8-x86_64/gcc-8.5.0/gcc-11.4.0-yycklku/lib/gcc/x86_64-pc-linux-gnu/11.4.0/include/stddef.h"
struct _noname2_ {
    int quot;
    int rem;
  };

/* (l62) typedef struct _noname2_ div_t; */
# 62 "/usr/include/stdlib.h"
struct _noname3_ {
    long int quot;
    long int rem;
  };

/* (l70) typedef struct _noname3_ ldiv_t; */
# 70 "/usr/include/stdlib.h"
struct _noname4_ {
    long long int quot;
    long long int rem;
  };

/* (l80) typedef struct _noname4_ lldiv_t; */
# 80 "/usr/include/stdlib.h"
# 97 "/usr/include/stdlib.h"
extern long unsigned int __ctype_get_mb_cur_max(void);
extern double atof(const char * __nptr);
extern int atoi(const char * __nptr);
extern long int atol(const char * __nptr);
extern long long int atoll(const char * __nptr);
extern double strtod(const char *restrict __nptr, char **restrict __endptr);
extern float strtof(const char *restrict __nptr, char **restrict __endptr);
extern long double strtold(const char *restrict __nptr, char **restrict __endptr);
extern long int strtol(const char *restrict __nptr, char **restrict __endptr, int __base);
extern unsigned long int strtoul(const char *restrict __nptr, char **restrict __endptr, int __base);
extern long long int strtoq(const char *restrict __nptr, char **restrict __endptr, int __base);
extern unsigned long long int strtouq(const char *restrict __nptr, char **restrict __endptr, int __base);
extern long long int strtoll(const char *restrict __nptr, char **restrict __endptr, int __base);
extern unsigned long long int strtoull(const char *restrict __nptr, char **restrict __endptr, int __base);
extern char * l64a(long int __n);
extern long int a64l(const char * __s);

/* (l33) typedef __u_char u_char; */
# 33 "/usr/include/sys/types.h"
/* (l34) typedef __u_short u_short; */
# 34 "/usr/include/sys/types.h"
/* (l35) typedef __u_int u_int; */
# 35 "/usr/include/sys/types.h"
/* (l36) typedef __u_long u_long; */
# 36 "/usr/include/sys/types.h"
/* (l37) typedef __quad_t quad_t; */
# 37 "/usr/include/sys/types.h"
/* (l38) typedef __u_quad_t u_quad_t; */
# 38 "/usr/include/sys/types.h"
/* (l39) typedef __fsid_t fsid_t; */
# 39 "/usr/include/sys/types.h"
/* (l42) typedef __loff_t loff_t; */
# 42 "/usr/include/sys/types.h"
/* (l47) typedef __ino_t ino_t; */
# 47 "/usr/include/sys/types.h"
/* (l59) typedef __dev_t dev_t; */
# 59 "/usr/include/sys/types.h"
/* (l64) typedef __gid_t gid_t; */
# 64 "/usr/include/sys/types.h"
/* (l69) typedef __mode_t mode_t; */
# 69 "/usr/include/sys/types.h"
/* (l74) typedef __nlink_t nlink_t; */
# 74 "/usr/include/sys/types.h"
/* (l79) typedef __uid_t uid_t; */
# 79 "/usr/include/sys/types.h"
/* (l97) typedef __pid_t pid_t; */
# 97 "/usr/include/sys/types.h"
/* (l103) typedef __id_t id_t; */
# 103 "/usr/include/sys/types.h"
/* (l114) typedef __daddr_t daddr_t; */
# 114 "/usr/include/sys/types.h"
/* (l115) typedef __caddr_t caddr_t; */
# 115 "/usr/include/sys/types.h"
/* (l121) typedef __key_t key_t; */
# 121 "/usr/include/sys/types.h"
/* (l7) typedef __clock_t clock_t; */
# 7 "/usr/include/bits/types/clock_t.h"
/* (l7) typedef __clockid_t clockid_t; */
# 7 "/usr/include/bits/types/clockid_t.h"
/* (l7) typedef __time_t time_t; */
# 7 "/usr/include/bits/types/time_t.h"
/* (l7) typedef __timer_t timer_t; */
# 7 "/usr/include/bits/types/timer_t.h"
/* (l148) typedef unsigned long int ulong; */
# 148 "/usr/include/sys/types.h"
/* (l149) typedef unsigned short int ushort; */
# 149 "/usr/include/sys/types.h"
/* (l150) typedef unsigned int uint; */
# 150 "/usr/include/sys/types.h"
/* (l24) typedef __int8_t int8_t; */
# 24 "/usr/include/bits/stdint-intn.h"
/* (l25) typedef __int16_t int16_t; */
# 25 "/usr/include/bits/stdint-intn.h"
/* (l26) typedef __int32_t int32_t; */
# 26 "/usr/include/bits/stdint-intn.h"
/* (l27) typedef __int64_t int64_t; */
# 27 "/usr/include/bits/stdint-intn.h"
/* (l158) typedef __uint8_t u_int8_t; */
# 158 "/usr/include/sys/types.h"
/* (l159) typedef __uint16_t u_int16_t; */
# 159 "/usr/include/sys/types.h"
/* (l160) typedef __uint32_t u_int32_t; */
# 160 "/usr/include/sys/types.h"
/* (l161) typedef __uint64_t u_int64_t; */
# 161 "/usr/include/sys/types.h"
/* (l166) typedef int register_t; */
# 166 "/usr/include/sys/types.h"

static inline unsigned short int __bswap_16(unsigned short int __bsx)
# 38 "/usr/include/bits/byteswap.h"
{
  return (((unsigned short int) ((((__bsx) >> 8) & 0xff) | (((__bsx) & 0xff) << 8))));
}


static inline unsigned int __bswap_32(unsigned int __bsx)
{
  return (((((__bsx) & 0xff000000u) >> 24) | (((__bsx) & 0x00ff0000u) >> 8) | (((__bsx) & 0x0000ff00u) << 8) | (((__bsx) & 0x000000ffu) << 24)));
}


static inline unsigned long int __bswap_64(unsigned long int __bsx)
{
  return (((((__bsx) & 0xff00000000000000ull) >> 56) | (((__bsx) & 0x00ff000000000000ull) >> 40) | (((__bsx) & 0x0000ff0000000000ull) >> 24) | (((__bsx) & 0x000000ff00000000ull) >> 8) | (((__bsx) & 0x00000000ff000000ull) << 8) | (((__bsx) & 0x0000000000ff0000ull) << 24) | (((__bsx) & 0x000000000000ff00ull) << 40) | (((__bsx) & 0x00000000000000ffull) << 56)));
}


static inline unsigned short int __uint16_identity(unsigned short int __x)
# 34 "/usr/include/bits/uintn-identity.h"
{
  return (__x);
}


static inline unsigned int __uint32_identity(unsigned int __x)
{
  return (__x);
}


static inline unsigned long int __uint64_identity(unsigned long int __x)
{
  return (__x);
}

struct _noname5_ {
    unsigned long int __val[ (1024 / (8 * sizeof(unsigned long int)))];
  };

/* (l8) typedef struct _noname5_ __sigset_t; */
# 8 "/usr/include/bits/types/__sigset_t.h"
/* (l7) typedef __sigset_t sigset_t; */
# 7 "/usr/include/bits/types/sigset_t.h"
# 12 "/usr/include/bits/types/struct_timeval.h"
struct timeval {
    long int tv_sec;
    long int tv_usec;
  };
# 13 "/usr/include/bits/types/struct_timespec.h"
struct timespec {
    long int tv_sec;
    long int tv_nsec;
  };

/* (l43) typedef __suseconds_t suseconds_t; */
# 43 "/usr/include/sys/select.h"
/* (l49) typedef long int __fd_mask; */
# 49 "/usr/include/sys/select.h"
struct _noname6_ {
    long int (__fds_bits[ 1024 / (8 * (int) sizeof(long int))]);
  };

/* (l70) typedef struct _noname6_ fd_set; */
# 70 "/usr/include/sys/select.h"
/* (l77) typedef __fd_mask fd_mask; */
# 77 "/usr/include/sys/select.h"
# 104 "/usr/include/sys/select.h"
extern int select(int __nfds, struct _noname6_ (*restrict __readfds), struct _noname6_ (*restrict __writefds), struct _noname6_ (*restrict __exceptfds), struct timeval *restrict __timeout);
extern int pselect(int __nfds, struct _noname6_ (*restrict __readfds), struct _noname6_ (*restrict __writefds), struct _noname6_ (*restrict __exceptfds), const struct timespec *restrict __timeout, const struct _noname5_ (*restrict __sigmask));

/* (l185) typedef __blksize_t blksize_t; */
# 185 "/usr/include/sys/types.h"
/* (l192) typedef __blkcnt_t blkcnt_t; */
# 192 "/usr/include/sys/types.h"
/* (l196) typedef __fsblkcnt_t fsblkcnt_t; */
# 196 "/usr/include/sys/types.h"
/* (l200) typedef __fsfilcnt_t fsfilcnt_t; */
# 200 "/usr/include/sys/types.h"
# 99 "/usr/include/bits/pthreadtypes-arch.h"
struct __pthread_rwlock_arch_t {
    unsigned int __readers;
    unsigned int __writers;
    unsigned int __wrphase_futex;
    unsigned int __writers_futex;
    unsigned int __pad3;
    unsigned int __pad4;
    int __cur_writer;
    int __shared;
    signed char __rwelision;
    unsigned char __pad1[ 7];
    unsigned long int __pad2;
    unsigned int __flags;
  };
struct __pthread_internal_list {
    struct __pthread_internal_list * __prev;
    struct __pthread_internal_list * __next;
  };

/* (l86) typedef struct __pthread_internal_list __pthread_list_t; */
# 86 "/usr/include/bits/thread-shared-types.h"
# 166 "/usr/include/bits/thread-shared-types.h"
struct __pthread_mutex_s {
    int __lock;
    unsigned int __count;
    int __owner;
    unsigned int __nusers;
    int __kind;
    short __spins;
    short __elision;
    struct __pthread_internal_list __list;
  };
struct __pthread_cond_s {
    union {
        unsigned long long int __wseq;
        struct {
            unsigned int __low;
            unsigned int __high;
          } __wseq32;
      } ;
    union {
        unsigned long long int __g1_start;
        struct {
            unsigned int __low;
            unsigned int __high;
          } __g1_start32;
      } ;
    unsigned int __g_refs[ 2];
    unsigned int __g_size[ 2];
    unsigned int __g1_orig_size;
    unsigned int __wrefs;
    unsigned int __g_signals[ 2];
  };

/* (l27) typedef unsigned long int pthread_t; */
# 27 "/usr/include/bits/pthreadtypes.h"
union _noname7_ {
    char __size[ 4];
    int __align;
  };

/* (l36) typedef union _noname7_ pthread_mutexattr_t; */
# 36 "/usr/include/bits/pthreadtypes.h"
union _noname8_ {
    char __size[ 4];
    int __align;
  };

/* (l45) typedef union _noname8_ pthread_condattr_t; */
# 45 "/usr/include/bits/pthreadtypes.h"
/* (l49) typedef unsigned int pthread_key_t; */
# 49 "/usr/include/bits/pthreadtypes.h"
/* (l53) typedef int pthread_once_t; */
# 53 "/usr/include/bits/pthreadtypes.h"
# 60 "/usr/include/bits/pthreadtypes.h"
union pthread_attr_t {
    char __size[ 56];
    long int __align;
  };

/* (l62) typedef union pthread_attr_t pthread_attr_t; */
# 62 "/usr/include/bits/pthreadtypes.h"
union _noname9_ {
    struct __pthread_mutex_s __data;
    char __size[ 40];
    long int __align;
  };

/* (l72) typedef union _noname9_ pthread_mutex_t; */
# 72 "/usr/include/bits/pthreadtypes.h"
union _noname10_ {
    struct __pthread_cond_s __data;
    char __size[ 48];
    long long int __align;
  };

/* (l80) typedef union _noname10_ pthread_cond_t; */
# 80 "/usr/include/bits/pthreadtypes.h"
union _noname11_ {
    struct __pthread_rwlock_arch_t __data;
    char __size[ 56];
    long int __align;
  };

/* (l91) typedef union _noname11_ pthread_rwlock_t; */
# 91 "/usr/include/bits/pthreadtypes.h"
union _noname12_ {
    char __size[ 8];
    long int __align;
  };

/* (l97) typedef union _noname12_ pthread_rwlockattr_t; */
# 97 "/usr/include/bits/pthreadtypes.h"
/* (l103) typedef volatile int pthread_spinlock_t; */
# 103 "/usr/include/bits/pthreadtypes.h"
union _noname13_ {
    char __size[ 32];
    long int __align;
  };

/* (l112) typedef union _noname13_ pthread_barrier_t; */
# 112 "/usr/include/bits/pthreadtypes.h"
union _noname14_ {
    char __size[ 4];
    int __align;
  };

/* (l118) typedef union _noname14_ pthread_barrierattr_t; */
# 118 "/usr/include/bits/pthreadtypes.h"
# 401 "/usr/include/stdlib.h"
extern long int random(void);
extern void srandom(unsigned int __seed);
extern char * initstate(unsigned int __seed, char * __statebuf, long unsigned int __statelen);
extern char * setstate(char * __statebuf);
struct random_data {
    signed int (* fptr);
    signed int (* rptr);
    signed int (* state);
    int rand_type;
    int rand_deg;
    int rand_sep;
    signed int (* end_ptr);
  };
extern int random_r(struct random_data *restrict __buf, signed int (*restrict __result));
extern int srandom_r(unsigned int __seed, struct random_data * __buf);
extern int initstate_r(unsigned int __seed, char *restrict __statebuf, long unsigned int __statelen, struct random_data *restrict __buf);
extern int setstate_r(char *restrict __statebuf, struct random_data *restrict __buf);
extern int rand(void);
extern void srand(unsigned int __seed);
extern int rand_r(unsigned int * __seed);
extern double drand48(void);
extern double erand48(unsigned short int __xsubi[ 3]);
extern long int lrand48(void);
extern long int nrand48(unsigned short int __xsubi[ 3]);
extern long int mrand48(void);
extern long int jrand48(unsigned short int __xsubi[ 3]);
extern void srand48(long int __seedval);
extern unsigned short int * seed48(unsigned short int __seed16v[ 3]);
extern void lcong48(unsigned short int __param[ 7]);
struct drand48_data {
    unsigned short int __x[ 3];
    unsigned short int __old_x[ 3];
    unsigned short int __c;
    unsigned short int __init;
    unsigned long long int __a;
  };
extern int drand48_r(struct drand48_data *restrict __buffer, double *restrict __result);
extern int erand48_r(unsigned short int __xsubi[ 3], struct drand48_data *restrict __buffer, double *restrict __result);
extern int lrand48_r(struct drand48_data *restrict __buffer, long int *restrict __result);
extern int nrand48_r(unsigned short int __xsubi[ 3], struct drand48_data *restrict __buffer, long int *restrict __result);
extern int mrand48_r(struct drand48_data *restrict __buffer, long int *restrict __result);
extern int jrand48_r(unsigned short int __xsubi[ 3], struct drand48_data *restrict __buffer, long int *restrict __result);
extern int srand48_r(long int __seedval, struct drand48_data * __buffer);
extern int seed48_r(unsigned short int __seed16v[ 3], struct drand48_data * __buffer);
extern int lcong48_r(unsigned short int __param[ 7], struct drand48_data * __buffer);
extern void * malloc(long unsigned int __size);
extern void * calloc(long unsigned int __nmemb, long unsigned int __size);
extern void * realloc(void * __ptr, long unsigned int __size);
extern void free(void * __ptr);
# 32 "/usr/include/alloca.h"
extern void * alloca(long unsigned int __size);
# 572 "/usr/include/stdlib.h"
extern void * valloc(long unsigned int __size);
extern int posix_memalign(void ** __memptr, long unsigned int __alignment, long unsigned int __size);
extern void * aligned_alloc(long unsigned int __alignment, long unsigned int __size);
extern void abort(void);
extern int atexit(void (* __func)(void));
extern int at_quick_exit(void (* __func)(void));
extern int on_exit(void (* __func)(int __status, void * __arg), void * __arg);
extern void exit(int __status);
extern void quick_exit(int __status);
extern void _Exit(int __status);
extern char * getenv(const char * __name);
extern int putenv(char * __string);
extern int setenv(const char * __name, const char * __value, int __replace);
extern int unsetenv(const char * __name);
extern int clearenv(void);
extern char * mktemp(char * __template);
extern int mkstemp(char * __template);
extern int mkstemps(char * __template, int __suffixlen);
extern char * mkdtemp(char * __template);
extern int system(const char * __command);
extern char * realpath(const char *restrict __name, char *restrict __resolved);

/* (l805) typedef int (* __compar_fn_t) (const void *, const void *); */
# 805 "/usr/include/stdlib.h"
extern void * bsearch(const void * __key, const void * __base, long unsigned int __nmemb, long unsigned int __size, int (* __compar)(const void *, const void *));
extern void qsort(void * __base, long unsigned int __nmemb, long unsigned int __size, int (* __compar)(const void *, const void *));
extern int abs(int __x);
extern long int labs(long int __x);
extern long long int llabs(long long int __x);
extern struct _noname2_ div(int __numer, int __denom);
extern struct _noname3_ ldiv(long int __numer, long int __denom);
extern struct _noname4_ lldiv(long long int __numer, long long int __denom);
extern char * ecvt(double __value, int __ndigit, int *restrict __decpt, int *restrict __sign);
extern char * fcvt(double __value, int __ndigit, int *restrict __decpt, int *restrict __sign);
extern char * gcvt(double __value, int __ndigit, char * __buf);
extern char * qecvt(long double __value, int __ndigit, int *restrict __decpt, int *restrict __sign);
extern char * qfcvt(long double __value, int __ndigit, int *restrict __decpt, int *restrict __sign);
extern char * qgcvt(long double __value, int __ndigit, char * __buf);
extern int ecvt_r(double __value, int __ndigit, int *restrict __decpt, int *restrict __sign, char *restrict __buf, long unsigned int __len);
extern int fcvt_r(double __value, int __ndigit, int *restrict __decpt, int *restrict __sign, char *restrict __buf, long unsigned int __len);
extern int qecvt_r(long double __value, int __ndigit, int *restrict __decpt, int *restrict __sign, char *restrict __buf, long unsigned int __len);
extern int qfcvt_r(long double __value, int __ndigit, int *restrict __decpt, int *restrict __sign, char *restrict __buf, long unsigned int __len);
extern int mblen(const char * __s, long unsigned int __n);
extern int mbtowc(int (*restrict __pwc), const char *restrict __s, long unsigned int __n);
extern int wctomb(char * __s, int __wchar);
extern long unsigned int mbstowcs(int (*restrict __pwcs), const char *restrict __s, long unsigned int __n);
extern long unsigned int wcstombs(char *restrict __s, const int (*restrict __pwcs), long unsigned int __n);
extern int rpmatch(const char * __response);
extern int getsubopt(char **restrict __optionp, char *const *restrict __tokens, char **restrict __valuep);
extern int getloadavg(double __loadavg[], int __nelem);
# 44 "/usr/include/string.h"
extern void * memcpy(void *restrict __dest, const void *restrict __src, long unsigned int __n);
extern void * memmove(void * __dest, const void * __src, long unsigned int __n);
extern void * memccpy(void *restrict __dest, const void *restrict __src, int __c, long unsigned int __n);
extern void * memset(void * __s, int __c, long unsigned int __n);
extern int memcmp(const void * __s1, const void * __s2, long unsigned int __n);
extern void * memchr(const void * __s, int __c, long unsigned int __n);
extern char * strcpy(char *restrict __dest, const char *restrict __src);
extern char * strncpy(char *restrict __dest, const char *restrict __src, long unsigned int __n);
extern char * strcat(char *restrict __dest, const char *restrict __src);
extern char * strncat(char *restrict __dest, const char *restrict __src, long unsigned int __n);
extern int strcmp(const char * __s1, const char * __s2);
extern int strncmp(const char * __s1, const char * __s2, long unsigned int __n);
extern int strcoll(const char * __s1, const char * __s2);
extern long unsigned int strxfrm(char *restrict __dest, const char *restrict __src, long unsigned int __n);
# 40 "/usr/include/bits/types/__locale_t.h"
struct __locale_struct {
    struct __locale_data * __locales[ 13];
    const unsigned short int * __ctype_b;
    const int * __ctype_tolower;
    const int * __ctype_toupper;
    const char * __names[ 13];
  };

/* (l42) typedef struct __locale_struct * __locale_t; */
# 42 "/usr/include/bits/types/__locale_t.h"
/* (l24) typedef __locale_t locale_t; */
# 24 "/usr/include/bits/types/locale_t.h"
# 157 "/usr/include/string.h"
extern int strcoll_l(const char * __s1, const char * __s2, struct __locale_struct * __l);
extern long unsigned int strxfrm_l(char * __dest, const char * __src, long unsigned int __n, struct __locale_struct * __l);
extern char * strdup(const char * __s);
extern char * strndup(const char * __string, long unsigned int __n);
extern char * strchr(const char * __s, int __c);
extern char * strrchr(const char * __s, int __c);
extern long unsigned int strcspn(const char * __s, const char * __reject);
extern long unsigned int strspn(const char * __s, const char * __accept);
extern char * strpbrk(const char * __s, const char * __accept);
extern char * strstr(const char * __haystack, const char * __needle);
extern char * strtok(char *restrict __s, const char *restrict __delim);
extern char * __strtok_r(char *restrict __s, const char *restrict __delim, char **restrict __save_ptr);
extern char * strtok_r(char *restrict __s, const char *restrict __delim, char **restrict __save_ptr);
extern long unsigned int strlen(const char * __s);
extern long unsigned int strnlen(const char * __string, long unsigned int __maxlen);
extern char * strerror(int __errnum);
extern int __xpg_strerror_r(int __errnum, char * __buf, long unsigned int __buflen);
extern char * strerror_l(int __errnum, struct __locale_struct * __l);
# 35 "/usr/include/strings.h"
extern int bcmp(const void * __s1, const void * __s2, long unsigned int __n);
extern void bcopy(const void * __src, void * __dest, long unsigned int __n);
extern void bzero(void * __s, long unsigned int __n);
extern char * index(const char * __s, int __c);
extern char * rindex(const char * __s, int __c);
extern int ffs(int __i);
extern int ffsl(long int __l);
extern int ffsll(long long int __ll);
extern int strcasecmp(const char * __s1, const char * __s2);
extern int strncasecmp(const char * __s1, const char * __s2, long unsigned int __n);
extern int strcasecmp_l(const char * __s1, const char * __s2, struct __locale_struct * __loc);
extern int strncasecmp_l(const char * __s1, const char * __s2, long unsigned int __n, struct __locale_struct * __loc);
# 436 "/usr/include/string.h"
extern void explicit_bzero(void * __s, long unsigned int __n);
extern char * strsep(char **restrict __stringp, const char *restrict __delim);
extern char * strsignal(int __sig);
extern char * __stpcpy(char *restrict __dest, const char *restrict __src);
extern char * stpcpy(char *restrict __dest, const char *restrict __src);
extern char * __stpncpy(char *restrict __dest, const char *restrict __src, long unsigned int __n);
extern char * stpncpy(char *restrict __dest, const char *restrict __src, long unsigned int __n);
# 27 "bots.h"
extern int bots_sequential_flag;
extern int bots_benchmark_flag;
extern int bots_check_flag;
extern int bots_result;
extern int bots_output_format;
extern int bots_print_header;
extern char bots_name[];
extern char bots_parameters[];
extern char bots_model[];
extern char bots_resources[];
extern char bots_exec_date[];
extern char bots_exec_message[];
extern char bots_comp_date[];
extern char bots_comp_message[];
extern char bots_cc[];
extern char bots_cflags[];
extern char bots_ld[];
extern char bots_ldflags[];
extern double bots_time_program;
extern double bots_time_sequential;
extern unsigned long long bots_number_of_tasks;
extern char bots_cutoff[];
extern int bots_cutoff_value;
extern int bots_app_cutoff_value;
extern int bots_app_cutoff_value_1;
extern int bots_app_cutoff_value_2;
extern int bots_arg_size;
extern int bots_arg_size_1;
extern int bots_arg_size_2;
long bots_usecs();
void bots_error(int error, char * message);
void bots_warning(int warning, char * message);
enum _noname15_ {
    BOTS_VERBOSE_NONE = 0, BOTS_VERBOSE_DEFAULT, BOTS_VERBOSE_DEBUG
  };

/* (l78) typedef enum _noname15_ bots_verbose_mode_t; */
# 78 "bots.h"
# 80 "bots.h"
extern enum _noname15_ bots_verbose_mode;
# 36 "/u/mbanisharifdehkordi/software/ompi-install/include/ompi/omp.h"
int omp_in_parallel(void);
int omp_get_thread_num(void);
void omp_set_num_threads(int num_threads);
int omp_get_num_threads(void);
int omp_get_max_threads(void);
int omp_get_num_procs(void);
void omp_set_dynamic(int dynamic_threads);
int omp_get_dynamic(void);
void omp_set_nested(int nested);
int omp_get_nested(void);
enum omp_sched_t {
    omp_sched_static = 1, omp_sched_dynamic = 2, omp_sched_guided = 3, omp_sched_auto = 4
  };

/* (l54) typedef enum omp_sched_t omp_sched_t; */
# 54 "/u/mbanisharifdehkordi/software/ompi-install/include/ompi/omp.h"
enum omp_proc_bind_t {
    omp_proc_bind_false = 0, omp_proc_bind_true = 1, omp_proc_bind_primary = 2, omp_proc_bind_master = omp_proc_bind_primary, omp_proc_bind_close = 3, omp_proc_bind_spread = 4
  };

/* (l65) typedef enum omp_proc_bind_t omp_proc_bind_t; */
# 65 "/u/mbanisharifdehkordi/software/ompi-install/include/ompi/omp.h"
enum omp_lock_hint_t {
    omp_lock_hint_none = 0, omp_lock_hint_uncontended = 1, omp_lock_hint_contended = 2, omp_lock_hint_nonspeculative = 4, omp_lock_hint_speculative = 8
  };

/* (l75) typedef enum omp_lock_hint_t omp_lock_hint_t; */
# 75 "/u/mbanisharifdehkordi/software/ompi-install/include/ompi/omp.h"
/* (l78) typedef void * omp_lock_t; */
# 78 "/u/mbanisharifdehkordi/software/ompi-install/include/ompi/omp.h"
# 80 "/u/mbanisharifdehkordi/software/ompi-install/include/ompi/omp.h"
void omp_init_lock(void * (* lock));
void omp_init_lock_with_hint(void * (* lock), enum omp_lock_hint_t hint);
void omp_destroy_lock(void * (* lock));
void omp_set_lock(void * (* lock));
void omp_unset_lock(void * (* lock));
int omp_test_lock(void * (* lock));

/* (l88) typedef void * omp_nest_lock_t; */
# 88 "/u/mbanisharifdehkordi/software/ompi-install/include/ompi/omp.h"
void omp_init_nest_lock(void * (* lock));
void omp_init_next_lock_with_hint(void * (* lock), enum omp_lock_hint_t hint);
void omp_destroy_nest_lock(void * (* lock));
void omp_set_nest_lock(void * (* lock));
void omp_unset_nest_lock(void * (* lock));
int omp_test_nest_lock(void * (* lock));
double omp_get_wtime(void);
double omp_get_wtick(void);
void omp_set_schedule(enum omp_sched_t kind, int chunk);
void omp_get_schedule(enum omp_sched_t (* kind), int * chunk);
int omp_get_thread_limit(void);
void omp_set_max_active_levels(int levels);
int omp_get_max_active_levels(void);
int omp_get_level(void);
int omp_get_ancestor_thread_num(int level);
int omp_get_team_size(int level);
int omp_get_active_level(void);
int omp_in_final(void);
int omp_get_cancellation(void);
enum omp_proc_bind_t omp_get_proc_bind(void);
int omp_get_num_teams(void);
int omp_get_team_num(void);
int omp_is_initial_device(void);
int omp_get_max_task_priority(void);
int omp_get_num_places(void);
int omp_get_place_num_procs(int place_num);
void omp_get_place_proc_ids(int place_num, int * ids);
int omp_get_place_num(void);
int omp_get_partition_num_places(void);
void omp_get_partition_place_nums(int * place_nums);
void omp_set_default_device(int device_num);
int omp_get_default_device(void);
int omp_get_initial_device(void);
int omp_get_num_devices(void);
void omp_set_affinity_format(const char * format);
unsigned long omp_get_affinity_format(char * buffer, unsigned long size);
void omp_display_affinity(const char * format);
unsigned long omp_capture_affinity(char * buffer, unsigned long size, const char * format);
int omp_target_is_present(void * ptr, int devid);
void * omp_target_alloc(unsigned long size, int devid);
void omp_target_free(void * devaddr, int devid);
int omp_target_memcpy(void * dst, void * src, unsigned long length, unsigned long dst_off, unsigned long src_off, int dst_devid, int src_devid);
int omp_target_memcpy_rect(void * dst, void * src, unsigned long elemsize, int numdims, unsigned long * volume, unsigned long * dst_offs, unsigned long * src_offs, unsigned long * dst_dims, unsigned long * src_dims, int dst_devid, int src_devid);
int omp_target_associate_ptr(void * hostptr, void * devptr, unsigned long size, unsigned long devoff, int devid);
int omp_target_disassociate_ptr(void * hostptr, int devid);

/* (l5) typedef double REAL; */
# 5 "fft.h"
struct _noname16_ {
    double re;
    double im;
  };

/* (l10) typedef struct _noname16_ COMPLEX; */
# 10 "fft.h"
# 15 "fft.h"
void compute_w_coefficients(int n, int a, int b, struct _noname16_ (* W));
void compute_w_coefficients_seq(int n, int a, int b, struct _noname16_ (* W));
int factor(int n);
void unshuffle(int a, int b, struct _noname16_ (* in), struct _noname16_ (* out), int r, int m);
void unshuffle_seq(int a, int b, struct _noname16_ (* in), struct _noname16_ (* out), int r, int m);
void fft_twiddle_gen1(struct _noname16_ (* in), struct _noname16_ (* out), struct _noname16_ (* W), int r, int m, int nW, int nWdnti, int nWdntm);
void fft_twiddle_gen(int i, int i1, struct _noname16_ (* in), struct _noname16_ (* out), struct _noname16_ (* W), int nW, int nWdn, int r, int m);
void fft_twiddle_gen_seq(int i, int i1, struct _noname16_ (* in), struct _noname16_ (* out), struct _noname16_ (* W), int nW, int nWdn, int r, int m);
void fft_base_2(struct _noname16_ (* in), struct _noname16_ (* out));
void fft_twiddle_2(int a, int b, struct _noname16_ (* in), struct _noname16_ (* out), struct _noname16_ (* W), int nW, int nWdn, int m);
void fft_twiddle_2_seq(int a, int b, struct _noname16_ (* in), struct _noname16_ (* out), struct _noname16_ (* W), int nW, int nWdn, int m);
void fft_unshuffle_2(int a, int b, struct _noname16_ (* in), struct _noname16_ (* out), int m);
void fft_unshuffle_2_seq(int a, int b, struct _noname16_ (* in), struct _noname16_ (* out), int m);
void fft_base_4(struct _noname16_ (* in), struct _noname16_ (* out));
void fft_twiddle_4(int a, int b, struct _noname16_ (* in), struct _noname16_ (* out), struct _noname16_ (* W), int nW, int nWdn, int m);
void fft_twiddle_4_seq(int a, int b, struct _noname16_ (* in), struct _noname16_ (* out), struct _noname16_ (* W), int nW, int nWdn, int m);
void fft_unshuffle_4(int a, int b, struct _noname16_ (* in), struct _noname16_ (* out), int m);
void fft_unshuffle_4_seq(int a, int b, struct _noname16_ (* in), struct _noname16_ (* out), int m);
void fft_base_8(struct _noname16_ (* in), struct _noname16_ (* out));
void fft_twiddle_8(int a, int b, struct _noname16_ (* in), struct _noname16_ (* out), struct _noname16_ (* W), int nW, int nWdn, int m);
void fft_twiddle_8_seq(int a, int b, struct _noname16_ (* in), struct _noname16_ (* out), struct _noname16_ (* W), int nW, int nWdn, int m);
void fft_unshuffle_8(int a, int b, struct _noname16_ (* in), struct _noname16_ (* out), int m);
void fft_unshuffle_8_seq(int a, int b, struct _noname16_ (* in), struct _noname16_ (* out), int m);
void fft_base_16(struct _noname16_ (* in), struct _noname16_ (* out));
void fft_twiddle_16(int a, int b, struct _noname16_ (* in), struct _noname16_ (* out), struct _noname16_ (* W), int nW, int nWdn, int m);
void fft_twiddle_16_seq(int a, int b, struct _noname16_ (* in), struct _noname16_ (* out), struct _noname16_ (* W), int nW, int nWdn, int m);
void fft_unshuffle_16(int a, int b, struct _noname16_ (* in), struct _noname16_ (* out), int m);
void fft_unshuffle_16_seq(int a, int b, struct _noname16_ (* in), struct _noname16_ (* out), int m);
void fft_base_32(struct _noname16_ (* in), struct _noname16_ (* out));
void fft_twiddle_32(int a, int b, struct _noname16_ (* in), struct _noname16_ (* out), struct _noname16_ (* W), int nW, int nWdn, int m);
void fft_twiddle_32_seq(int a, int b, struct _noname16_ (* in), struct _noname16_ (* out), struct _noname16_ (* W), int nW, int nWdn, int m);
void fft_unshuffle_32(int a, int b, struct _noname16_ (* in), struct _noname16_ (* out), int m);
void fft_unshuffle_32_seq(int a, int b, struct _noname16_ (* in), struct _noname16_ (* out), int m);
void fft_aux(int n, struct _noname16_ (* in), struct _noname16_ (* out), int * factors, struct _noname16_ (* W), int nW);
void fft_aux_seq(int n, struct _noname16_ (* in), struct _noname16_ (* out), int * factors, struct _noname16_ (* W), int nW);
void fft(int n, struct _noname16_ (* in), struct _noname16_ (* out));
void fft_seq(int n, struct _noname16_ (* in), struct _noname16_ (* out));
int test_correctness(int n, struct _noname16_ (* out1), struct _noname16_ (* out2));
static void * _taskFunc1_(void *);
static void * _taskFunc0_(void *);


void compute_w_coefficients(int n, int a, int b, struct _noname16_ (* W))
# 42 "fft.c"
{
  register double twoPiOverN;
  register int k;
  register double s;
  register double c;

  # 63 "fft.c"
  if (b - a < 128)
    {
      twoPiOverN = 2.0 * 3.1415926535897932384626434 / n;
      for (k = a; k <= b; ++k)
        {
          c = cos(twoPiOverN * k);
          ((W[k]).re) = ((W[n - k]).re) = c;
          s = sin(twoPiOverN * k);
          ((W[k]).im) = -s;
          ((W[n - k]).im) = s;
        }
    }
  else
    {
      int ab = (a + b) / 2;

      /* (l58) #pragma omp task untied
 */
      # 58 "fft.c"
      if (omp_in_final() || ort_task_throttling())
        {
          void * _itn;

          /* byvalue variables */
          int _fip_n = n, n = _fip_n;
          int _fip_a = a, a = _fip_a;
          int _fip_ab = ab, ab = _fip_ab;
          struct _noname16_ (* _fip_W) = W, (* W) = _fip_W;

          _itn = ort_task_immediate_start(0);
          {
            # 59 "fft.c"
            compute_w_coefficients(n, a, ab, W);
            CANCEL_task_58 :
              ;
          }
          ort_task_immediate_end(_itn);
        }
      else
        {
          struct __taskenv__ {
              int n;
              int a;
              int ab;
              struct _noname16_ (* W);
            } * _tenv;

          _tenv = (struct __taskenv__ *) ort_taskenv_alloc(sizeof(struct __taskenv__), _taskFunc0_);
          /* byvalue variables */
          _tenv->n = n;
          _tenv->a = a;
          _tenv->ab = ab;
          _tenv->W = W;
          ort_new_task(_taskFunc0_, (void *) _tenv, 0, 0, 1, 0, (void *) 0, 0, 0, 0);
          /* no other operations */
        }
      /* (l60) #pragma omp task untied
 */
      # 60 "fft.c"
      if (omp_in_final() || ort_task_throttling())
        {
          void * _itn;

          /* byvalue variables */
          int _fip_n = n, n = _fip_n;
          int _fip_ab = ab, ab = _fip_ab;
          int _fip_b = b, b = _fip_b;
          struct _noname16_ (* _fip_W) = W, (* W) = _fip_W;

          _itn = ort_task_immediate_start(0);
          {
            # 61 "fft.c"
            compute_w_coefficients(n, ab + 1, b, W);
            CANCEL_task_60 :
              ;
          }
          ort_task_immediate_end(_itn);
        }
      else
        {
          struct __taskenv__ {
              int n;
              int ab;
              int b;
              struct _noname16_ (* W);
            } * _tenv;

          _tenv = (struct __taskenv__ *) ort_taskenv_alloc(sizeof(struct __taskenv__), _taskFunc1_);
          /* byvalue variables */
          _tenv->n = n;
          _tenv->ab = ab;
          _tenv->b = b;
          _tenv->W = W;
          ort_new_task(_taskFunc1_, (void *) _tenv, 0, 0, 1, 0, (void *) 0, 0, 0, 0);
          /* no other operations */
        }
      /* (l62) #pragma omp taskwait 
 */
      # 62 "fft.c"
      ort_taskwait(0);
    }
}


static void * _taskFunc0_(void * __arg)
{
  struct __taskenv__ {
      int n;
      int a;
      int ab;
      struct _noname16_ (* W);
    };
  struct __taskenv__ * _tenv = (struct __taskenv__ *) __arg;

  /* byvalue variables */
  int n = _tenv->n;
  int a = _tenv->a;
  int ab = _tenv->ab;
  struct _noname16_ (* W) = _tenv->W;

  /* no initializations */
  /* (l58) #pragma omp task untied
 -- body moved below */
  # 58 "fft.c"
  {
    # 59 "fft.c"
    compute_w_coefficients(n, a, ab, W);
    CANCEL_task_58 :
      ;
  }
  /* no other operations */
  ort_taskenv_free(_tenv, _taskFunc0_);
  return ((void *) 0);
}


static void * _taskFunc1_(void * __arg)
{
  struct __taskenv__ {
      int n;
      int ab;
      int b;
      struct _noname16_ (* W);
    };
  struct __taskenv__ * _tenv = (struct __taskenv__ *) __arg;

  /* byvalue variables */
  int n = _tenv->n;
  int ab = _tenv->ab;
  int b = _tenv->b;
  struct _noname16_ (* W) = _tenv->W;

  /* no initializations */
  /* (l60) #pragma omp task untied
 -- body moved below */
  # 60 "fft.c"
  {
    # 61 "fft.c"
    compute_w_coefficients(n, ab + 1, b, W);
    CANCEL_task_60 :
      ;
  }
  /* no other operations */
  ort_taskenv_free(_tenv, _taskFunc1_);
  return ((void *) 0);
}


void compute_w_coefficients_seq(int n, int a, int b, struct _noname16_ (* W))
# 66 "fft.c"
{
  register double twoPiOverN;
  register int k;
  register double s;
  register double c;

  # 84 "fft.c"
  if (b - a < 128)
    {
      twoPiOverN = 2.0 * 3.1415926535897932384626434 / n;
      for (k = a; k <= b; ++k)
        {
          c = cos(twoPiOverN * k);
          ((W[k]).re) = ((W[n - k]).re) = c;
          s = sin(twoPiOverN * k);
          ((W[k]).im) = -s;
          ((W[n - k]).im) = s;
        }
    }
  else
    {
      int ab = (a + b) / 2;

      compute_w_coefficients_seq(n, a, ab, W);
      compute_w_coefficients_seq(n, ab + 1, b, W);
    }
}


int factor(int n)
{
  int r;

  if (n < 2)
    return (1);
  if (n == 64 || n == 128 || n == 256 || n == 1024 || n == 2048 || n == 4096)
    return (8);
  if ((n & 15) == 0)
    return (16);
  if ((n & 7) == 0)
    return (8);
  if ((n & 3) == 0)
    return (4);
  if ((n & 1) == 0)
    return (2);
  for (r = 3; r < n; r += 2)
    if (n % r == 0)
      return (r);
  return (n);
}

static void * _taskFunc3_(void *);
static void * _taskFunc2_(void *);


void unshuffle(int a, int b, struct _noname16_ (* in), struct _noname16_ (* out), int r, int m)
{
  int i, j;
  int r4 = r & (~0x3);
  const struct _noname16_ (* ip);
  struct _noname16_ (* jp);

  if (b - a < 16)
    {
      ip = in + a * r;
      for (i = a; i < b; ++i)
        {
          jp = out + i;
          for (j = 0; j < r4; j += 4)
            {
              jp[0] = ip[0];
              jp[m] = ip[1];
              jp[2 * m] = ip[2];
              jp[3 * m] = ip[3];
              jp += 4 * m;
              ip += 4;
            }
          for ( ; j < r; ++j)
            {
              *jp = *ip;
              ip++;
              jp += m;
            }
        }
    }
  else
    {
      int ab = (a + b) / 2;

      /* (l135) #pragma omp task untied
 */
      # 135 "fft.c"
      if (omp_in_final() || ort_task_throttling())
        {
          void * _itn;

          /* byvalue variables */
          int _fip_a = a, a = _fip_a;
          int _fip_ab = ab, ab = _fip_ab;
          struct _noname16_ (* _fip_in) = in, (* in) = _fip_in;
          struct _noname16_ (* _fip_out) = out, (* out) = _fip_out;
          int _fip_r = r, r = _fip_r;
          int _fip_m = m, m = _fip_m;

          _itn = ort_task_immediate_start(0);
          {
            # 136 "fft.c"
            unshuffle(a, ab, in, out, r, m);
            CANCEL_task_135 :
              ;
          }
          ort_task_immediate_end(_itn);
        }
      else
        {
          struct __taskenv__ {
              int a;
              int ab;
              struct _noname16_ (* in);
              struct _noname16_ (* out);
              int r;
              int m;
            } * _tenv;

          _tenv = (struct __taskenv__ *) ort_taskenv_alloc(sizeof(struct __taskenv__), _taskFunc2_);
          /* byvalue variables */
          _tenv->a = a;
          _tenv->ab = ab;
          _tenv->in = in;
          _tenv->out = out;
          _tenv->r = r;
          _tenv->m = m;
          ort_new_task(_taskFunc2_, (void *) _tenv, 0, 0, 1, 0, (void *) 0, 0, 0, 0);
          /* no other operations */
        }
      /* (l137) #pragma omp task untied
 */
      # 137 "fft.c"
      if (omp_in_final() || ort_task_throttling())
        {
          void * _itn;

          /* byvalue variables */
          int _fip_ab = ab, ab = _fip_ab;
          int _fip_b = b, b = _fip_b;
          struct _noname16_ (* _fip_in) = in, (* in) = _fip_in;
          struct _noname16_ (* _fip_out) = out, (* out) = _fip_out;
          int _fip_r = r, r = _fip_r;
          int _fip_m = m, m = _fip_m;

          _itn = ort_task_immediate_start(0);
          {
            # 138 "fft.c"
            unshuffle(ab, b, in, out, r, m);
            CANCEL_task_137 :
              ;
          }
          ort_task_immediate_end(_itn);
        }
      else
        {
          struct __taskenv__ {
              int ab;
              int b;
              struct _noname16_ (* in);
              struct _noname16_ (* out);
              int r;
              int m;
            } * _tenv;

          _tenv = (struct __taskenv__ *) ort_taskenv_alloc(sizeof(struct __taskenv__), _taskFunc3_);
          /* byvalue variables */
          _tenv->ab = ab;
          _tenv->b = b;
          _tenv->in = in;
          _tenv->out = out;
          _tenv->r = r;
          _tenv->m = m;
          ort_new_task(_taskFunc3_, (void *) _tenv, 0, 0, 1, 0, (void *) 0, 0, 0, 0);
          /* no other operations */
        }
      /* (l139) #pragma omp taskwait 
 */
      # 139 "fft.c"
      ort_taskwait(0);
    }
}


static void * _taskFunc2_(void * __arg)
{
  struct __taskenv__ {
      int a;
      int ab;
      struct _noname16_ (* in);
      struct _noname16_ (* out);
      int r;
      int m;
    };
  struct __taskenv__ * _tenv = (struct __taskenv__ *) __arg;

  /* byvalue variables */
  int a = _tenv->a;
  int ab = _tenv->ab;
  struct _noname16_ (* in) = _tenv->in;
  struct _noname16_ (* out) = _tenv->out;
  int r = _tenv->r;
  int m = _tenv->m;

  /* no initializations */
  /* (l135) #pragma omp task untied
 -- body moved below */
  # 135 "fft.c"
  {
    # 136 "fft.c"
    unshuffle(a, ab, in, out, r, m);
    CANCEL_task_135 :
      ;
  }
  /* no other operations */
  ort_taskenv_free(_tenv, _taskFunc2_);
  return ((void *) 0);
}


static void * _taskFunc3_(void * __arg)
{
  struct __taskenv__ {
      int ab;
      int b;
      struct _noname16_ (* in);
      struct _noname16_ (* out);
      int r;
      int m;
    };
  struct __taskenv__ * _tenv = (struct __taskenv__ *) __arg;

  /* byvalue variables */
  int ab = _tenv->ab;
  int b = _tenv->b;
  struct _noname16_ (* in) = _tenv->in;
  struct _noname16_ (* out) = _tenv->out;
  int r = _tenv->r;
  int m = _tenv->m;

  /* no initializations */
  /* (l137) #pragma omp task untied
 -- body moved below */
  # 137 "fft.c"
  {
    # 138 "fft.c"
    unshuffle(ab, b, in, out, r, m);
    CANCEL_task_137 :
      ;
  }
  /* no other operations */
  ort_taskenv_free(_tenv, _taskFunc3_);
  return ((void *) 0);
}


void unshuffle_seq(int a, int b, struct _noname16_ (* in), struct _noname16_ (* out), int r, int m)
# 143 "fft.c"
{
  int i, j;
  int r4 = r & (~0x3);
  const struct _noname16_ (* ip);
  struct _noname16_ (* jp);

  if (b - a < 16)
    {
      ip = in + a * r;
      for (i = a; i < b; ++i)
        {
          jp = out + i;
          for (j = 0; j < r4; j += 4)
            {
              jp[0] = ip[0];
              jp[m] = ip[1];
              jp[2 * m] = ip[2];
              jp[3 * m] = ip[3];
              jp += 4 * m;
              ip += 4;
            }
          for ( ; j < r; ++j)
            {
              *jp = *ip;
              ip++;
              jp += m;
            }
        }
    }
  else
    {
      int ab = (a + b) / 2;

      unshuffle_seq(a, ab, in, out, r, m);
      unshuffle_seq(ab, b, in, out, r, m);
    }
}


void fft_twiddle_gen1(struct _noname16_ (* in), struct _noname16_ (* out), struct _noname16_ (* W), int r, int m, int nW, int nWdnti, int nWdntm)
{
  int j, k;
  struct _noname16_ (* jp);
  struct _noname16_ (* kp);

  # 199 "fft.c"
  for (k = 0, kp = out; k < r; ++k, kp += m)
    {
      double r0;
      double i0;
      double rt;
      double it;
      double rw;
      double iw;
      # 182 "fft.c"
      int l1 = nWdnti + nWdntm * k;
      int l0;

      r0 = i0 = 0.0;
      for (j = 0, jp = in, l0 = 0; j < r; ++j, jp += m)
        {
          rw = ((W[l0]).re);
          iw = ((W[l0]).im);
          rt = ((*jp).re);
          it = ((*jp).im);
          r0 += rt * rw - it * iw;
          i0 += rt * iw + it * rw;
          l0 += l1;
          if (l0 > nW)
            l0 -= nW;
        }
      ((*kp).re) = r0;
      ((*kp).im) = i0;
    }
}

static void * _taskFunc6_(void *);
static void * _taskFunc5_(void *);
static void * _taskFunc4_(void *);


void fft_twiddle_gen(int i, int i1, struct _noname16_ (* in), struct _noname16_ (* out), struct _noname16_ (* W), int nW, int nWdn, int r, int m)
{
  if (i == i1 - 1)
    {
      /* (l205) #pragma omp task untied
 */
      # 205 "fft.c"
      if (omp_in_final() || ort_task_throttling())
        {
          void * _itn;

          /* byvalue variables */
          struct _noname16_ (* _fip_in) = in, (* in) = _fip_in;
          int _fip_i = i, i = _fip_i;
          struct _noname16_ (* _fip_out) = out, (* out) = _fip_out;
          struct _noname16_ (* _fip_W) = W, (* W) = _fip_W;
          int _fip_r = r, r = _fip_r;
          int _fip_m = m, m = _fip_m;
          int _fip_nW = nW, nW = _fip_nW;
          int _fip_nWdn = nWdn, nWdn = _fip_nWdn;

          _itn = ort_task_immediate_start(0);
          {
            # 207 "fft.c"
            fft_twiddle_gen1(in + i, out + i, W, r, m, nW, nWdn * i, nWdn * m);
            CANCEL_task_205 :
              ;
          }
          ort_task_immediate_end(_itn);
        }
      else
        {
          struct __taskenv__ {
              struct _noname16_ (* in);
              int i;
              struct _noname16_ (* out);
              struct _noname16_ (* W);
              int r;
              int m;
              int nW;
              int nWdn;
            } * _tenv;

          _tenv = (struct __taskenv__ *) ort_taskenv_alloc(sizeof(struct __taskenv__), _taskFunc4_);
          /* byvalue variables */
          _tenv->in = in;
          _tenv->i = i;
          _tenv->out = out;
          _tenv->W = W;
          _tenv->r = r;
          _tenv->m = m;
          _tenv->nW = nW;
          _tenv->nWdn = nWdn;
          ort_new_task(_taskFunc4_, (void *) _tenv, 0, 0, 1, 0, (void *) 0, 0, 0, 0);
          /* no other operations */
        }
    }
  else
    # 208 "fft.c"
    {
      int i2 = (i + i1) / 2;

      /* (l210) #pragma omp task untied
 */
      # 210 "fft.c"
      if (omp_in_final() || ort_task_throttling())
        {
          void * _itn;

          /* byvalue variables */
          int _fip_i = i, i = _fip_i;
          int _fip_i2 = i2, i2 = _fip_i2;
          struct _noname16_ (* _fip_in) = in, (* in) = _fip_in;
          struct _noname16_ (* _fip_out) = out, (* out) = _fip_out;
          struct _noname16_ (* _fip_W) = W, (* W) = _fip_W;
          int _fip_nW = nW, nW = _fip_nW;
          int _fip_nWdn = nWdn, nWdn = _fip_nWdn;
          int _fip_r = r, r = _fip_r;
          int _fip_m = m, m = _fip_m;

          _itn = ort_task_immediate_start(0);
          {
            # 212 "fft.c"
            fft_twiddle_gen(i, i2, in, out, W, nW, nWdn, r, m);
            CANCEL_task_210 :
              ;
          }
          ort_task_immediate_end(_itn);
        }
      else
        {
          struct __taskenv__ {
              int i;
              int i2;
              struct _noname16_ (* in);
              struct _noname16_ (* out);
              struct _noname16_ (* W);
              int nW;
              int nWdn;
              int r;
              int m;
            } * _tenv;

          _tenv = (struct __taskenv__ *) ort_taskenv_alloc(sizeof(struct __taskenv__), _taskFunc5_);
          /* byvalue variables */
          _tenv->i = i;
          _tenv->i2 = i2;
          _tenv->in = in;
          _tenv->out = out;
          _tenv->W = W;
          _tenv->nW = nW;
          _tenv->nWdn = nWdn;
          _tenv->r = r;
          _tenv->m = m;
          ort_new_task(_taskFunc5_, (void *) _tenv, 0, 0, 1, 0, (void *) 0, 0, 0, 0);
          /* no other operations */
        }
      /* (l213) #pragma omp task untied
 */
      # 213 "fft.c"
      if (omp_in_final() || ort_task_throttling())
        {
          void * _itn;

          /* byvalue variables */
          int _fip_i2 = i2, i2 = _fip_i2;
          int _fip_i1 = i1, i1 = _fip_i1;
          struct _noname16_ (* _fip_in) = in, (* in) = _fip_in;
          struct _noname16_ (* _fip_out) = out, (* out) = _fip_out;
          struct _noname16_ (* _fip_W) = W, (* W) = _fip_W;
          int _fip_nW = nW, nW = _fip_nW;
          int _fip_nWdn = nWdn, nWdn = _fip_nWdn;
          int _fip_r = r, r = _fip_r;
          int _fip_m = m, m = _fip_m;

          _itn = ort_task_immediate_start(0);
          {
            # 215 "fft.c"
            fft_twiddle_gen(i2, i1, in, out, W, nW, nWdn, r, m);
            CANCEL_task_213 :
              ;
          }
          ort_task_immediate_end(_itn);
        }
      else
        {
          struct __taskenv__ {
              int i2;
              int i1;
              struct _noname16_ (* in);
              struct _noname16_ (* out);
              struct _noname16_ (* W);
              int nW;
              int nWdn;
              int r;
              int m;
            } * _tenv;

          _tenv = (struct __taskenv__ *) ort_taskenv_alloc(sizeof(struct __taskenv__), _taskFunc6_);
          /* byvalue variables */
          _tenv->i2 = i2;
          _tenv->i1 = i1;
          _tenv->in = in;
          _tenv->out = out;
          _tenv->W = W;
          _tenv->nW = nW;
          _tenv->nWdn = nWdn;
          _tenv->r = r;
          _tenv->m = m;
          ort_new_task(_taskFunc6_, (void *) _tenv, 0, 0, 1, 0, (void *) 0, 0, 0, 0);
          /* no other operations */
        }
    }
  /* (l217) #pragma omp taskwait 
 */
  # 217 "fft.c"
  ort_taskwait(0);
}


static void * _taskFunc4_(void * __arg)
{
  struct __taskenv__ {
      struct _noname16_ (* in);
      int i;
      struct _noname16_ (* out);
      struct _noname16_ (* W);
      int r;
      int m;
      int nW;
      int nWdn;
    };
  struct __taskenv__ * _tenv = (struct __taskenv__ *) __arg;

  /* byvalue variables */
  struct _noname16_ (* in) = _tenv->in;
  int i = _tenv->i;
  struct _noname16_ (* out) = _tenv->out;
  struct _noname16_ (* W) = _tenv->W;
  int r = _tenv->r;
  int m = _tenv->m;
  int nW = _tenv->nW;
  int nWdn = _tenv->nWdn;

  /* no initializations */
  /* (l205) #pragma omp task untied
 -- body moved below */
  # 205 "fft.c"
  {
    # 207 "fft.c"
    fft_twiddle_gen1(in + i, out + i, W, r, m, nW, nWdn * i, nWdn * m);
    CANCEL_task_205 :
      ;
  }
  /* no other operations */
  ort_taskenv_free(_tenv, _taskFunc4_);
  return ((void *) 0);
}


static void * _taskFunc5_(void * __arg)
{
  struct __taskenv__ {
      int i;
      int i2;
      struct _noname16_ (* in);
      struct _noname16_ (* out);
      struct _noname16_ (* W);
      int nW;
      int nWdn;
      int r;
      int m;
    };
  struct __taskenv__ * _tenv = (struct __taskenv__ *) __arg;

  /* byvalue variables */
  int i = _tenv->i;
  int i2 = _tenv->i2;
  struct _noname16_ (* in) = _tenv->in;
  struct _noname16_ (* out) = _tenv->out;
  struct _noname16_ (* W) = _tenv->W;
  int nW = _tenv->nW;
  int nWdn = _tenv->nWdn;
  int r = _tenv->r;
  int m = _tenv->m;

  /* no initializations */
  /* (l210) #pragma omp task untied
 -- body moved below */
  # 210 "fft.c"
  {
    # 212 "fft.c"
    fft_twiddle_gen(i, i2, in, out, W, nW, nWdn, r, m);
    CANCEL_task_210 :
      ;
  }
  /* no other operations */
  ort_taskenv_free(_tenv, _taskFunc5_);
  return ((void *) 0);
}


static void * _taskFunc6_(void * __arg)
{
  struct __taskenv__ {
      int i2;
      int i1;
      struct _noname16_ (* in);
      struct _noname16_ (* out);
      struct _noname16_ (* W);
      int nW;
      int nWdn;
      int r;
      int m;
    };
  struct __taskenv__ * _tenv = (struct __taskenv__ *) __arg;

  /* byvalue variables */
  int i2 = _tenv->i2;
  int i1 = _tenv->i1;
  struct _noname16_ (* in) = _tenv->in;
  struct _noname16_ (* out) = _tenv->out;
  struct _noname16_ (* W) = _tenv->W;
  int nW = _tenv->nW;
  int nWdn = _tenv->nWdn;
  int r = _tenv->r;
  int m = _tenv->m;

  /* no initializations */
  /* (l213) #pragma omp task untied
 -- body moved below */
  # 213 "fft.c"
  {
    # 215 "fft.c"
    fft_twiddle_gen(i2, i1, in, out, W, nW, nWdn, r, m);
    CANCEL_task_213 :
      ;
  }
  /* no other operations */
  ort_taskenv_free(_tenv, _taskFunc6_);
  return ((void *) 0);
}


void fft_twiddle_gen_seq(int i, int i1, struct _noname16_ (* in), struct _noname16_ (* out), struct _noname16_ (* W), int nW, int nWdn, int r, int m)
# 221 "fft.c"
{
  if (i == i1 - 1)
    {
      fft_twiddle_gen1(in + i, out + i, W, r, m, nW, nWdn * i, nWdn * m);
    }
  else
    {
      int i2 = (i + i1) / 2;

      fft_twiddle_gen_seq(i, i2, in, out, W, nW, nWdn, r, m);
      fft_twiddle_gen_seq(i2, i1, in, out, W, nW, nWdn, r, m);
    }
}


void fft_base_2(struct _noname16_ (* in), struct _noname16_ (* out))
{
  double r1_0;
  double i1_0;
  double r1_1;
  double i1_1;

  # 238 "fft.c"
  r1_0 = ((in[0]).re);
  i1_0 = ((in[0]).im);
  r1_1 = ((in[1]).re);
  i1_1 = ((in[1]).im);
  ((out[0]).re) = (r1_0 + r1_1);
  ((out[0]).im) = (i1_0 + i1_1);
  ((out[1]).re) = (r1_0 - r1_1);
  ((out[1]).im) = (i1_0 - i1_1);
}

static void * _taskFunc8_(void *);
static void * _taskFunc7_(void *);


void fft_twiddle_2(int a, int b, struct _noname16_ (* in), struct _noname16_ (* out), struct _noname16_ (* W), int nW, int nWdn, int m)
{
  int l1, i;
  struct _noname16_ (* jp);
  struct _noname16_ (* kp);
  double tmpr;
  double tmpi;
  double wr;
  double wi;

  # 280 "fft.c"
  if ((b - a) < 128)
    {
      for (i = a, l1 = nWdn * i, kp = out + i; i < b; i++, l1 += nWdn, kp++)
        {
          jp = in + i;
          {
            double r1_0;
            double i1_0;
            double r1_1;
            double i1_1;

            # 259 "fft.c"
            r1_0 = ((jp[0 * m]).re);
            i1_0 = ((jp[0 * m]).im);
            wr = ((W[1 * l1]).re);
            wi = ((W[1 * l1]).im);
            tmpr = ((jp[1 * m]).re);
            tmpi = ((jp[1 * m]).im);
            r1_1 = ((wr * tmpr) - (wi * tmpi));
            i1_1 = ((wi * tmpr) + (wr * tmpi));
            ((kp[0 * m]).re) = (r1_0 + r1_1);
            ((kp[0 * m]).im) = (i1_0 + i1_1);
            ((kp[1 * m]).re) = (r1_0 - r1_1);
            ((kp[1 * m]).im) = (i1_0 - i1_1);
          }
        }
    }
  else
    {
      int ab = (a + b) / 2;

      /* (l275) #pragma omp task untied
 */
      # 275 "fft.c"
      if (omp_in_final() || ort_task_throttling())
        {
          void * _itn;

          /* byvalue variables */
          int _fip_a = a, a = _fip_a;
          int _fip_ab = ab, ab = _fip_ab;
          struct _noname16_ (* _fip_in) = in, (* in) = _fip_in;
          struct _noname16_ (* _fip_out) = out, (* out) = _fip_out;
          struct _noname16_ (* _fip_W) = W, (* W) = _fip_W;
          int _fip_nW = nW, nW = _fip_nW;
          int _fip_nWdn = nWdn, nWdn = _fip_nWdn;
          int _fip_m = m, m = _fip_m;

          _itn = ort_task_immediate_start(0);
          {
            # 276 "fft.c"
            fft_twiddle_2(a, ab, in, out, W, nW, nWdn, m);
            CANCEL_task_275 :
              ;
          }
          ort_task_immediate_end(_itn);
        }
      else
        {
          struct __taskenv__ {
              int a;
              int ab;
              struct _noname16_ (* in);
              struct _noname16_ (* out);
              struct _noname16_ (* W);
              int nW;
              int nWdn;
              int m;
            } * _tenv;

          _tenv = (struct __taskenv__ *) ort_taskenv_alloc(sizeof(struct __taskenv__), _taskFunc7_);
          /* byvalue variables */
          _tenv->a = a;
          _tenv->ab = ab;
          _tenv->in = in;
          _tenv->out = out;
          _tenv->W = W;
          _tenv->nW = nW;
          _tenv->nWdn = nWdn;
          _tenv->m = m;
          ort_new_task(_taskFunc7_, (void *) _tenv, 0, 0, 1, 0, (void *) 0, 0, 0, 0);
          /* no other operations */
        }
      /* (l277) #pragma omp task untied
 */
      # 277 "fft.c"
      if (omp_in_final() || ort_task_throttling())
        {
          void * _itn;

          /* byvalue variables */
          int _fip_ab = ab, ab = _fip_ab;
          int _fip_b = b, b = _fip_b;
          struct _noname16_ (* _fip_in) = in, (* in) = _fip_in;
          struct _noname16_ (* _fip_out) = out, (* out) = _fip_out;
          struct _noname16_ (* _fip_W) = W, (* W) = _fip_W;
          int _fip_nW = nW, nW = _fip_nW;
          int _fip_nWdn = nWdn, nWdn = _fip_nWdn;
          int _fip_m = m, m = _fip_m;

          _itn = ort_task_immediate_start(0);
          {
            # 278 "fft.c"
            fft_twiddle_2(ab, b, in, out, W, nW, nWdn, m);
            CANCEL_task_277 :
              ;
          }
          ort_task_immediate_end(_itn);
        }
      else
        {
          struct __taskenv__ {
              int ab;
              int b;
              struct _noname16_ (* in);
              struct _noname16_ (* out);
              struct _noname16_ (* W);
              int nW;
              int nWdn;
              int m;
            } * _tenv;

          _tenv = (struct __taskenv__ *) ort_taskenv_alloc(sizeof(struct __taskenv__), _taskFunc8_);
          /* byvalue variables */
          _tenv->ab = ab;
          _tenv->b = b;
          _tenv->in = in;
          _tenv->out = out;
          _tenv->W = W;
          _tenv->nW = nW;
          _tenv->nWdn = nWdn;
          _tenv->m = m;
          ort_new_task(_taskFunc8_, (void *) _tenv, 0, 0, 1, 0, (void *) 0, 0, 0, 0);
          /* no other operations */
        }
      /* (l279) #pragma omp taskwait 
 */
      # 279 "fft.c"
      ort_taskwait(0);
    }
}


static void * _taskFunc7_(void * __arg)
{
  struct __taskenv__ {
      int a;
      int ab;
      struct _noname16_ (* in);
      struct _noname16_ (* out);
      struct _noname16_ (* W);
      int nW;
      int nWdn;
      int m;
    };
  struct __taskenv__ * _tenv = (struct __taskenv__ *) __arg;

  /* byvalue variables */
  int a = _tenv->a;
  int ab = _tenv->ab;
  struct _noname16_ (* in) = _tenv->in;
  struct _noname16_ (* out) = _tenv->out;
  struct _noname16_ (* W) = _tenv->W;
  int nW = _tenv->nW;
  int nWdn = _tenv->nWdn;
  int m = _tenv->m;

  /* no initializations */
  /* (l275) #pragma omp task untied
 -- body moved below */
  # 275 "fft.c"
  {
    # 276 "fft.c"
    fft_twiddle_2(a, ab, in, out, W, nW, nWdn, m);
    CANCEL_task_275 :
      ;
  }
  /* no other operations */
  ort_taskenv_free(_tenv, _taskFunc7_);
  return ((void *) 0);
}


static void * _taskFunc8_(void * __arg)
{
  struct __taskenv__ {
      int ab;
      int b;
      struct _noname16_ (* in);
      struct _noname16_ (* out);
      struct _noname16_ (* W);
      int nW;
      int nWdn;
      int m;
    };
  struct __taskenv__ * _tenv = (struct __taskenv__ *) __arg;

  /* byvalue variables */
  int ab = _tenv->ab;
  int b = _tenv->b;
  struct _noname16_ (* in) = _tenv->in;
  struct _noname16_ (* out) = _tenv->out;
  struct _noname16_ (* W) = _tenv->W;
  int nW = _tenv->nW;
  int nWdn = _tenv->nWdn;
  int m = _tenv->m;

  /* no initializations */
  /* (l277) #pragma omp task untied
 -- body moved below */
  # 277 "fft.c"
  {
    # 278 "fft.c"
    fft_twiddle_2(ab, b, in, out, W, nW, nWdn, m);
    CANCEL_task_277 :
      ;
  }
  /* no other operations */
  ort_taskenv_free(_tenv, _taskFunc8_);
  return ((void *) 0);
}


void fft_twiddle_2_seq(int a, int b, struct _noname16_ (* in), struct _noname16_ (* out), struct _noname16_ (* W), int nW, int nWdn, int m)
# 283 "fft.c"
{
  int l1, i;
  struct _noname16_ (* jp);
  struct _noname16_ (* kp);
  double tmpr;
  double tmpi;
  double wr;
  double wi;

  # 312 "fft.c"
  if ((b - a) < 128)
    {
      for (i = a, l1 = nWdn * i, kp = out + i; i < b; i++, l1 += nWdn, kp++)
        {
          jp = in + i;
          {
            double r1_0;
            double i1_0;
            double r1_1;
            double i1_1;

            # 294 "fft.c"
            r1_0 = ((jp[0 * m]).re);
            i1_0 = ((jp[0 * m]).im);
            wr = ((W[1 * l1]).re);
            wi = ((W[1 * l1]).im);
            tmpr = ((jp[1 * m]).re);
            tmpi = ((jp[1 * m]).im);
            r1_1 = ((wr * tmpr) - (wi * tmpi));
            i1_1 = ((wi * tmpr) + (wr * tmpi));
            ((kp[0 * m]).re) = (r1_0 + r1_1);
            ((kp[0 * m]).im) = (i1_0 + i1_1);
            ((kp[1 * m]).re) = (r1_0 - r1_1);
            ((kp[1 * m]).im) = (i1_0 - i1_1);
          }
        }
    }
  else
    {
      int ab = (a + b) / 2;

      fft_twiddle_2_seq(a, ab, in, out, W, nW, nWdn, m);
      fft_twiddle_2_seq(ab, b, in, out, W, nW, nWdn, m);
    }
}

static void * _taskFunc10_(void *);
static void * _taskFunc9_(void *);


void fft_unshuffle_2(int a, int b, struct _noname16_ (* in), struct _noname16_ (* out), int m)
{
  int i;
  const struct _noname16_ (* ip);
  struct _noname16_ (* jp);

  if ((b - a) < 128)
    {
      ip = in + a * 2;
      for (i = a; i < b; ++i)
        {
          jp = out + i;
          jp[0] = ip[0];
          jp[m] = ip[1];
          ip += 2;
        }
    }
  else
    {
      int ab = (a + b) / 2;

      /* (l329) #pragma omp task untied
 */
      # 329 "fft.c"
      if (omp_in_final() || ort_task_throttling())
        {
          void * _itn;

          /* byvalue variables */
          int _fip_a = a, a = _fip_a;
          int _fip_ab = ab, ab = _fip_ab;
          struct _noname16_ (* _fip_in) = in, (* in) = _fip_in;
          struct _noname16_ (* _fip_out) = out, (* out) = _fip_out;
          int _fip_m = m, m = _fip_m;

          _itn = ort_task_immediate_start(0);
          {
            # 330 "fft.c"
            fft_unshuffle_2(a, ab, in, out, m);
            CANCEL_task_329 :
              ;
          }
          ort_task_immediate_end(_itn);
        }
      else
        {
          struct __taskenv__ {
              int a;
              int ab;
              struct _noname16_ (* in);
              struct _noname16_ (* out);
              int m;
            } * _tenv;

          _tenv = (struct __taskenv__ *) ort_taskenv_alloc(sizeof(struct __taskenv__), _taskFunc9_);
          /* byvalue variables */
          _tenv->a = a;
          _tenv->ab = ab;
          _tenv->in = in;
          _tenv->out = out;
          _tenv->m = m;
          ort_new_task(_taskFunc9_, (void *) _tenv, 0, 0, 1, 0, (void *) 0, 0, 0, 0);
          /* no other operations */
        }
      /* (l331) #pragma omp task untied
 */
      # 331 "fft.c"
      if (omp_in_final() || ort_task_throttling())
        {
          void * _itn;

          /* byvalue variables */
          int _fip_ab = ab, ab = _fip_ab;
          int _fip_b = b, b = _fip_b;
          struct _noname16_ (* _fip_in) = in, (* in) = _fip_in;
          struct _noname16_ (* _fip_out) = out, (* out) = _fip_out;
          int _fip_m = m, m = _fip_m;

          _itn = ort_task_immediate_start(0);
          {
            # 332 "fft.c"
            fft_unshuffle_2(ab, b, in, out, m);
            CANCEL_task_331 :
              ;
          }
          ort_task_immediate_end(_itn);
        }
      else
        {
          struct __taskenv__ {
              int ab;
              int b;
              struct _noname16_ (* in);
              struct _noname16_ (* out);
              int m;
            } * _tenv;

          _tenv = (struct __taskenv__ *) ort_taskenv_alloc(sizeof(struct __taskenv__), _taskFunc10_);
          /* byvalue variables */
          _tenv->ab = ab;
          _tenv->b = b;
          _tenv->in = in;
          _tenv->out = out;
          _tenv->m = m;
          ort_new_task(_taskFunc10_, (void *) _tenv, 0, 0, 1, 0, (void *) 0, 0, 0, 0);
          /* no other operations */
        }
      /* (l333) #pragma omp taskwait 
 */
      # 333 "fft.c"
      ort_taskwait(0);
    }
}


static void * _taskFunc9_(void * __arg)
{
  struct __taskenv__ {
      int a;
      int ab;
      struct _noname16_ (* in);
      struct _noname16_ (* out);
      int m;
    };
  struct __taskenv__ * _tenv = (struct __taskenv__ *) __arg;

  /* byvalue variables */
  int a = _tenv->a;
  int ab = _tenv->ab;
  struct _noname16_ (* in) = _tenv->in;
  struct _noname16_ (* out) = _tenv->out;
  int m = _tenv->m;

  /* no initializations */
  /* (l329) #pragma omp task untied
 -- body moved below */
  # 329 "fft.c"
  {
    # 330 "fft.c"
    fft_unshuffle_2(a, ab, in, out, m);
    CANCEL_task_329 :
      ;
  }
  /* no other operations */
  ort_taskenv_free(_tenv, _taskFunc9_);
  return ((void *) 0);
}


static void * _taskFunc10_(void * __arg)
{
  struct __taskenv__ {
      int ab;
      int b;
      struct _noname16_ (* in);
      struct _noname16_ (* out);
      int m;
    };
  struct __taskenv__ * _tenv = (struct __taskenv__ *) __arg;

  /* byvalue variables */
  int ab = _tenv->ab;
  int b = _tenv->b;
  struct _noname16_ (* in) = _tenv->in;
  struct _noname16_ (* out) = _tenv->out;
  int m = _tenv->m;

  /* no initializations */
  /* (l331) #pragma omp task untied
 -- body moved below */
  # 331 "fft.c"
  {
    # 332 "fft.c"
    fft_unshuffle_2(ab, b, in, out, m);
    CANCEL_task_331 :
      ;
  }
  /* no other operations */
  ort_taskenv_free(_tenv, _taskFunc10_);
  return ((void *) 0);
}


void fft_unshuffle_2_seq(int a, int b, struct _noname16_ (* in), struct _noname16_ (* out), int m)
# 337 "fft.c"
{
  int i;
  const struct _noname16_ (* ip);
  struct _noname16_ (* jp);

  if ((b - a) < 128)
    {
      ip = in + a * 2;
      for (i = a; i < b; ++i)
        {
          jp = out + i;
          jp[0] = ip[0];
          jp[m] = ip[1];
          ip += 2;
        }
    }
  else
    {
      int ab = (a + b) / 2;

      fft_unshuffle_2_seq(a, ab, in, out, m);
      fft_unshuffle_2_seq(ab, b, in, out, m);
    }
}


void fft_base_4(struct _noname16_ (* in), struct _noname16_ (* out))
{
  double r1_0;
  double i1_0;
  double r1_1;
  double i1_1;
  double r1_2;
  double i1_2;
  double r1_3;
  double i1_3;

  # 361 "fft.c"
  {
    double r2_0;
    double i2_0;
    double r2_2;
    double i2_2;

    # 364 "fft.c"
    r2_0 = ((in[0]).re);
    i2_0 = ((in[0]).im);
    r2_2 = ((in[2]).re);
    i2_2 = ((in[2]).im);
    r1_0 = (r2_0 + r2_2);
    i1_0 = (i2_0 + i2_2);
    r1_2 = (r2_0 - r2_2);
    i1_2 = (i2_0 - i2_2);
  }
  {
    double r2_1;
    double i2_1;
    double r2_3;
    double i2_3;

    # 376 "fft.c"
    r2_1 = ((in[1]).re);
    i2_1 = ((in[1]).im);
    r2_3 = ((in[3]).re);
    i2_3 = ((in[3]).im);
    r1_1 = (r2_1 + r2_3);
    i1_1 = (i2_1 + i2_3);
    r1_3 = (r2_1 - r2_3);
    i1_3 = (i2_1 - i2_3);
  }
  ((out[0]).re) = (r1_0 + r1_1);
  ((out[0]).im) = (i1_0 + i1_1);
  ((out[2]).re) = (r1_0 - r1_1);
  ((out[2]).im) = (i1_0 - i1_1);
  ((out[1]).re) = (r1_2 + i1_3);
  ((out[1]).im) = (i1_2 - r1_3);
  ((out[3]).re) = (r1_2 - i1_3);
  ((out[3]).im) = (i1_2 + r1_3);
}

static void * _taskFunc12_(void *);
static void * _taskFunc11_(void *);


void fft_twiddle_4(int a, int b, struct _noname16_ (* in), struct _noname16_ (* out), struct _noname16_ (* W), int nW, int nWdn, int m)
{
  int l1, i;
  struct _noname16_ (* jp);
  struct _noname16_ (* kp);
  double tmpr;
  double tmpi;
  double wr;
  double wi;

  # 461 "fft.c"
  if ((b - a) < 128)
    {
      for (i = a, l1 = nWdn * i, kp = out + i; i < b; i++, l1 += nWdn, kp++)
        {
          jp = in + i;
          {
            double r1_0;
            double i1_0;
            double r1_1;
            double i1_1;
            double r1_2;
            double i1_2;
            double r1_3;
            double i1_3;

            # 408 "fft.c"
            {
              double r2_0;
              double i2_0;
              double r2_2;
              double i2_2;

              # 411 "fft.c"
              r2_0 = ((jp[0 * m]).re);
              i2_0 = ((jp[0 * m]).im);
              wr = ((W[2 * l1]).re);
              wi = ((W[2 * l1]).im);
              tmpr = ((jp[2 * m]).re);
              tmpi = ((jp[2 * m]).im);
              r2_2 = ((wr * tmpr) - (wi * tmpi));
              i2_2 = ((wi * tmpr) + (wr * tmpi));
              r1_0 = (r2_0 + r2_2);
              i1_0 = (i2_0 + i2_2);
              r1_2 = (r2_0 - r2_2);
              i1_2 = (i2_0 - i2_2);
            }
            {
              double r2_1;
              double i2_1;
              double r2_3;
              double i2_3;

              # 427 "fft.c"
              wr = ((W[1 * l1]).re);
              wi = ((W[1 * l1]).im);
              tmpr = ((jp[1 * m]).re);
              tmpi = ((jp[1 * m]).im);
              r2_1 = ((wr * tmpr) - (wi * tmpi));
              i2_1 = ((wi * tmpr) + (wr * tmpi));
              wr = ((W[3 * l1]).re);
              wi = ((W[3 * l1]).im);
              tmpr = ((jp[3 * m]).re);
              tmpi = ((jp[3 * m]).im);
              r2_3 = ((wr * tmpr) - (wi * tmpi));
              i2_3 = ((wi * tmpr) + (wr * tmpi));
              r1_1 = (r2_1 + r2_3);
              i1_1 = (i2_1 + i2_3);
              r1_3 = (r2_1 - r2_3);
              i1_3 = (i2_1 - i2_3);
            }
            ((kp[0 * m]).re) = (r1_0 + r1_1);
            ((kp[0 * m]).im) = (i1_0 + i1_1);
            ((kp[2 * m]).re) = (r1_0 - r1_1);
            ((kp[2 * m]).im) = (i1_0 - i1_1);
            ((kp[1 * m]).re) = (r1_2 + i1_3);
            ((kp[1 * m]).im) = (i1_2 - r1_3);
            ((kp[3 * m]).re) = (r1_2 - i1_3);
            ((kp[3 * m]).im) = (i1_2 + r1_3);
          }
        }
    }
  else
    {
      int ab = (a + b) / 2;

      /* (l456) #pragma omp task untied
 */
      # 456 "fft.c"
      if (omp_in_final() || ort_task_throttling())
        {
          void * _itn;

          /* byvalue variables */
          int _fip_a = a, a = _fip_a;
          int _fip_ab = ab, ab = _fip_ab;
          struct _noname16_ (* _fip_in) = in, (* in) = _fip_in;
          struct _noname16_ (* _fip_out) = out, (* out) = _fip_out;
          struct _noname16_ (* _fip_W) = W, (* W) = _fip_W;
          int _fip_nW = nW, nW = _fip_nW;
          int _fip_nWdn = nWdn, nWdn = _fip_nWdn;
          int _fip_m = m, m = _fip_m;

          _itn = ort_task_immediate_start(0);
          {
            # 457 "fft.c"
            fft_twiddle_4(a, ab, in, out, W, nW, nWdn, m);
            CANCEL_task_456 :
              ;
          }
          ort_task_immediate_end(_itn);
        }
      else
        {
          struct __taskenv__ {
              int a;
              int ab;
              struct _noname16_ (* in);
              struct _noname16_ (* out);
              struct _noname16_ (* W);
              int nW;
              int nWdn;
              int m;
            } * _tenv;

          _tenv = (struct __taskenv__ *) ort_taskenv_alloc(sizeof(struct __taskenv__), _taskFunc11_);
          /* byvalue variables */
          _tenv->a = a;
          _tenv->ab = ab;
          _tenv->in = in;
          _tenv->out = out;
          _tenv->W = W;
          _tenv->nW = nW;
          _tenv->nWdn = nWdn;
          _tenv->m = m;
          ort_new_task(_taskFunc11_, (void *) _tenv, 0, 0, 1, 0, (void *) 0, 0, 0, 0);
          /* no other operations */
        }
      /* (l458) #pragma omp task untied
 */
      # 458 "fft.c"
      if (omp_in_final() || ort_task_throttling())
        {
          void * _itn;

          /* byvalue variables */
          int _fip_ab = ab, ab = _fip_ab;
          int _fip_b = b, b = _fip_b;
          struct _noname16_ (* _fip_in) = in, (* in) = _fip_in;
          struct _noname16_ (* _fip_out) = out, (* out) = _fip_out;
          struct _noname16_ (* _fip_W) = W, (* W) = _fip_W;
          int _fip_nW = nW, nW = _fip_nW;
          int _fip_nWdn = nWdn, nWdn = _fip_nWdn;
          int _fip_m = m, m = _fip_m;

          _itn = ort_task_immediate_start(0);
          {
            # 459 "fft.c"
            fft_twiddle_4(ab, b, in, out, W, nW, nWdn, m);
            CANCEL_task_458 :
              ;
          }
          ort_task_immediate_end(_itn);
        }
      else
        {
          struct __taskenv__ {
              int ab;
              int b;
              struct _noname16_ (* in);
              struct _noname16_ (* out);
              struct _noname16_ (* W);
              int nW;
              int nWdn;
              int m;
            } * _tenv;

          _tenv = (struct __taskenv__ *) ort_taskenv_alloc(sizeof(struct __taskenv__), _taskFunc12_);
          /* byvalue variables */
          _tenv->ab = ab;
          _tenv->b = b;
          _tenv->in = in;
          _tenv->out = out;
          _tenv->W = W;
          _tenv->nW = nW;
          _tenv->nWdn = nWdn;
          _tenv->m = m;
          ort_new_task(_taskFunc12_, (void *) _tenv, 0, 0, 1, 0, (void *) 0, 0, 0, 0);
          /* no other operations */
        }
      /* (l460) #pragma omp taskwait 
 */
      # 460 "fft.c"
      ort_taskwait(0);
    }
}


static void * _taskFunc11_(void * __arg)
{
  struct __taskenv__ {
      int a;
      int ab;
      struct _noname16_ (* in);
      struct _noname16_ (* out);
      struct _noname16_ (* W);
      int nW;
      int nWdn;
      int m;
    };
  struct __taskenv__ * _tenv = (struct __taskenv__ *) __arg;

  /* byvalue variables */
  int a = _tenv->a;
  int ab = _tenv->ab;
  struct _noname16_ (* in) = _tenv->in;
  struct _noname16_ (* out) = _tenv->out;
  struct _noname16_ (* W) = _tenv->W;
  int nW = _tenv->nW;
  int nWdn = _tenv->nWdn;
  int m = _tenv->m;

  /* no initializations */
  /* (l456) #pragma omp task untied
 -- body moved below */
  # 456 "fft.c"
  {
    # 457 "fft.c"
    fft_twiddle_4(a, ab, in, out, W, nW, nWdn, m);
    CANCEL_task_456 :
      ;
  }
  /* no other operations */
  ort_taskenv_free(_tenv, _taskFunc11_);
  return ((void *) 0);
}


static void * _taskFunc12_(void * __arg)
{
  struct __taskenv__ {
      int ab;
      int b;
      struct _noname16_ (* in);
      struct _noname16_ (* out);
      struct _noname16_ (* W);
      int nW;
      int nWdn;
      int m;
    };
  struct __taskenv__ * _tenv = (struct __taskenv__ *) __arg;

  /* byvalue variables */
  int ab = _tenv->ab;
  int b = _tenv->b;
  struct _noname16_ (* in) = _tenv->in;
  struct _noname16_ (* out) = _tenv->out;
  struct _noname16_ (* W) = _tenv->W;
  int nW = _tenv->nW;
  int nWdn = _tenv->nWdn;
  int m = _tenv->m;

  /* no initializations */
  /* (l458) #pragma omp task untied
 -- body moved below */
  # 458 "fft.c"
  {
    # 459 "fft.c"
    fft_twiddle_4(ab, b, in, out, W, nW, nWdn, m);
    CANCEL_task_458 :
      ;
  }
  /* no other operations */
  ort_taskenv_free(_tenv, _taskFunc12_);
  return ((void *) 0);
}


void fft_twiddle_4_seq(int a, int b, struct _noname16_ (* in), struct _noname16_ (* out), struct _noname16_ (* W), int nW, int nWdn, int m)
# 464 "fft.c"
{
  int l1, i;
  struct _noname16_ (* jp);
  struct _noname16_ (* kp);
  double tmpr;
  double tmpi;
  double wr;
  double wi;

  # 527 "fft.c"
  if ((b - a) < 128)
    {
      for (i = a, l1 = nWdn * i, kp = out + i; i < b; i++, l1 += nWdn, kp++)
        {
          jp = in + i;
          {
            double r1_0;
            double i1_0;
            double r1_1;
            double i1_1;
            double r1_2;
            double i1_2;
            double r1_3;
            double i1_3;

            # 477 "fft.c"
            {
              double r2_0;
              double i2_0;
              double r2_2;
              double i2_2;

              # 480 "fft.c"
              r2_0 = ((jp[0 * m]).re);
              i2_0 = ((jp[0 * m]).im);
              wr = ((W[2 * l1]).re);
              wi = ((W[2 * l1]).im);
              tmpr = ((jp[2 * m]).re);
              tmpi = ((jp[2 * m]).im);
              r2_2 = ((wr * tmpr) - (wi * tmpi));
              i2_2 = ((wi * tmpr) + (wr * tmpi));
              r1_0 = (r2_0 + r2_2);
              i1_0 = (i2_0 + i2_2);
              r1_2 = (r2_0 - r2_2);
              i1_2 = (i2_0 - i2_2);
            }
            {
              double r2_1;
              double i2_1;
              double r2_3;
              double i2_3;

              # 496 "fft.c"
              wr = ((W[1 * l1]).re);
              wi = ((W[1 * l1]).im);
              tmpr = ((jp[1 * m]).re);
              tmpi = ((jp[1 * m]).im);
              r2_1 = ((wr * tmpr) - (wi * tmpi));
              i2_1 = ((wi * tmpr) + (wr * tmpi));
              wr = ((W[3 * l1]).re);
              wi = ((W[3 * l1]).im);
              tmpr = ((jp[3 * m]).re);
              tmpi = ((jp[3 * m]).im);
              r2_3 = ((wr * tmpr) - (wi * tmpi));
              i2_3 = ((wi * tmpr) + (wr * tmpi));
              r1_1 = (r2_1 + r2_3);
              i1_1 = (i2_1 + i2_3);
              r1_3 = (r2_1 - r2_3);
              i1_3 = (i2_1 - i2_3);
            }
            ((kp[0 * m]).re) = (r1_0 + r1_1);
            ((kp[0 * m]).im) = (i1_0 + i1_1);
            ((kp[2 * m]).re) = (r1_0 - r1_1);
            ((kp[2 * m]).im) = (i1_0 - i1_1);
            ((kp[1 * m]).re) = (r1_2 + i1_3);
            ((kp[1 * m]).im) = (i1_2 - r1_3);
            ((kp[3 * m]).re) = (r1_2 - i1_3);
            ((kp[3 * m]).im) = (i1_2 + r1_3);
          }
        }
    }
  else
    {
      int ab = (a + b) / 2;

      fft_twiddle_4_seq(a, ab, in, out, W, nW, nWdn, m);
      fft_twiddle_4_seq(ab, b, in, out, W, nW, nWdn, m);
    }
}

static void * _taskFunc14_(void *);
static void * _taskFunc13_(void *);


void fft_unshuffle_4(int a, int b, struct _noname16_ (* in), struct _noname16_ (* out), int m)
{
  int i;
  const struct _noname16_ (* ip);
  struct _noname16_ (* jp);

  if ((b - a) < 128)
    {
      ip = in + a * 4;
      for (i = a; i < b; ++i)
        {
          jp = out + i;
          jp[0] = ip[0];
          jp[m] = ip[1];
          ip += 2;
          jp += 2 * m;
          jp[0] = ip[0];
          jp[m] = ip[1];
          ip += 2;
        }
    }
  else
    {
      int ab = (a + b) / 2;

      /* (l548) #pragma omp task untied
 */
      # 548 "fft.c"
      if (omp_in_final() || ort_task_throttling())
        {
          void * _itn;

          /* byvalue variables */
          int _fip_a = a, a = _fip_a;
          int _fip_ab = ab, ab = _fip_ab;
          struct _noname16_ (* _fip_in) = in, (* in) = _fip_in;
          struct _noname16_ (* _fip_out) = out, (* out) = _fip_out;
          int _fip_m = m, m = _fip_m;

          _itn = ort_task_immediate_start(0);
          {
            # 549 "fft.c"
            fft_unshuffle_4(a, ab, in, out, m);
            CANCEL_task_548 :
              ;
          }
          ort_task_immediate_end(_itn);
        }
      else
        {
          struct __taskenv__ {
              int a;
              int ab;
              struct _noname16_ (* in);
              struct _noname16_ (* out);
              int m;
            } * _tenv;

          _tenv = (struct __taskenv__ *) ort_taskenv_alloc(sizeof(struct __taskenv__), _taskFunc13_);
          /* byvalue variables */
          _tenv->a = a;
          _tenv->ab = ab;
          _tenv->in = in;
          _tenv->out = out;
          _tenv->m = m;
          ort_new_task(_taskFunc13_, (void *) _tenv, 0, 0, 1, 0, (void *) 0, 0, 0, 0);
          /* no other operations */
        }
      /* (l550) #pragma omp task untied
 */
      # 550 "fft.c"
      if (omp_in_final() || ort_task_throttling())
        {
          void * _itn;

          /* byvalue variables */
          int _fip_ab = ab, ab = _fip_ab;
          int _fip_b = b, b = _fip_b;
          struct _noname16_ (* _fip_in) = in, (* in) = _fip_in;
          struct _noname16_ (* _fip_out) = out, (* out) = _fip_out;
          int _fip_m = m, m = _fip_m;

          _itn = ort_task_immediate_start(0);
          {
            # 551 "fft.c"
            fft_unshuffle_4(ab, b, in, out, m);
            CANCEL_task_550 :
              ;
          }
          ort_task_immediate_end(_itn);
        }
      else
        {
          struct __taskenv__ {
              int ab;
              int b;
              struct _noname16_ (* in);
              struct _noname16_ (* out);
              int m;
            } * _tenv;

          _tenv = (struct __taskenv__ *) ort_taskenv_alloc(sizeof(struct __taskenv__), _taskFunc14_);
          /* byvalue variables */
          _tenv->ab = ab;
          _tenv->b = b;
          _tenv->in = in;
          _tenv->out = out;
          _tenv->m = m;
          ort_new_task(_taskFunc14_, (void *) _tenv, 0, 0, 1, 0, (void *) 0, 0, 0, 0);
          /* no other operations */
        }
      /* (l552) #pragma omp taskwait 
 */
      # 552 "fft.c"
      ort_taskwait(0);
    }
}


static void * _taskFunc13_(void * __arg)
{
  struct __taskenv__ {
      int a;
      int ab;
      struct _noname16_ (* in);
      struct _noname16_ (* out);
      int m;
    };
  struct __taskenv__ * _tenv = (struct __taskenv__ *) __arg;

  /* byvalue variables */
  int a = _tenv->a;
  int ab = _tenv->ab;
  struct _noname16_ (* in) = _tenv->in;
  struct _noname16_ (* out) = _tenv->out;
  int m = _tenv->m;

  /* no initializations */
  /* (l548) #pragma omp task untied
 -- body moved below */
  # 548 "fft.c"
  {
    # 549 "fft.c"
    fft_unshuffle_4(a, ab, in, out, m);
    CANCEL_task_548 :
      ;
  }
  /* no other operations */
  ort_taskenv_free(_tenv, _taskFunc13_);
  return ((void *) 0);
}


static void * _taskFunc14_(void * __arg)
{
  struct __taskenv__ {
      int ab;
      int b;
      struct _noname16_ (* in);
      struct _noname16_ (* out);
      int m;
    };
  struct __taskenv__ * _tenv = (struct __taskenv__ *) __arg;

  /* byvalue variables */
  int ab = _tenv->ab;
  int b = _tenv->b;
  struct _noname16_ (* in) = _tenv->in;
  struct _noname16_ (* out) = _tenv->out;
  int m = _tenv->m;

  /* no initializations */
  /* (l550) #pragma omp task untied
 -- body moved below */
  # 550 "fft.c"
  {
    # 551 "fft.c"
    fft_unshuffle_4(ab, b, in, out, m);
    CANCEL_task_550 :
      ;
  }
  /* no other operations */
  ort_taskenv_free(_tenv, _taskFunc14_);
  return ((void *) 0);
}


void fft_unshuffle_4_seq(int a, int b, struct _noname16_ (* in), struct _noname16_ (* out), int m)
# 556 "fft.c"
{
  int i;
  const struct _noname16_ (* ip);
  struct _noname16_ (* jp);

  if ((b - a) < 128)
    {
      ip = in + a * 4;
      for (i = a; i < b; ++i)
        {
          jp = out + i;
          jp[0] = ip[0];
          jp[m] = ip[1];
          ip += 2;
          jp += 2 * m;
          jp[0] = ip[0];
          jp[m] = ip[1];
          ip += 2;
        }
    }
  else
    {
      int ab = (a + b) / 2;

      fft_unshuffle_4_seq(a, ab, in, out, m);
      fft_unshuffle_4_seq(ab, b, in, out, m);
    }
}


void fft_base_8(struct _noname16_ (* in), struct _noname16_ (* out))
{
  double tmpr;
  double tmpi;

  # 581 "fft.c"
  {
    double r1_0;
    double i1_0;
    double r1_1;
    double i1_1;
    double r1_2;
    double i1_2;
    double r1_3;
    double i1_3;
    double r1_4;
    double i1_4;
    double r1_5;
    double i1_5;
    double r1_6;
    double i1_6;
    double r1_7;
    double i1_7;

    # 590 "fft.c"
    {
      double r2_0;
      double i2_0;
      double r2_2;
      double i2_2;
      double r2_4;
      double i2_4;
      double r2_6;
      double i2_6;

      # 595 "fft.c"
      {
        double r3_0;
        double i3_0;
        double r3_4;
        double i3_4;

        # 598 "fft.c"
        r3_0 = ((in[0]).re);
        i3_0 = ((in[0]).im);
        r3_4 = ((in[4]).re);
        i3_4 = ((in[4]).im);
        r2_0 = (r3_0 + r3_4);
        i2_0 = (i3_0 + i3_4);
        r2_4 = (r3_0 - r3_4);
        i2_4 = (i3_0 - i3_4);
      }
      {
        double r3_2;
        double i3_2;
        double r3_6;
        double i3_6;

        # 610 "fft.c"
        r3_2 = ((in[2]).re);
        i3_2 = ((in[2]).im);
        r3_6 = ((in[6]).re);
        i3_6 = ((in[6]).im);
        r2_2 = (r3_2 + r3_6);
        i2_2 = (i3_2 + i3_6);
        r2_6 = (r3_2 - r3_6);
        i2_6 = (i3_2 - i3_6);
      }
      r1_0 = (r2_0 + r2_2);
      i1_0 = (i2_0 + i2_2);
      r1_4 = (r2_0 - r2_2);
      i1_4 = (i2_0 - i2_2);
      r1_2 = (r2_4 + i2_6);
      i1_2 = (i2_4 - r2_6);
      r1_6 = (r2_4 - i2_6);
      i1_6 = (i2_4 + r2_6);
    }
    {
      double r2_1;
      double i2_1;
      double r2_3;
      double i2_3;
      double r2_5;
      double i2_5;
      double r2_7;
      double i2_7;

      # 633 "fft.c"
      {
        double r3_1;
        double i3_1;
        double r3_5;
        double i3_5;

        # 636 "fft.c"
        r3_1 = ((in[1]).re);
        i3_1 = ((in[1]).im);
        r3_5 = ((in[5]).re);
        i3_5 = ((in[5]).im);
        r2_1 = (r3_1 + r3_5);
        i2_1 = (i3_1 + i3_5);
        r2_5 = (r3_1 - r3_5);
        i2_5 = (i3_1 - i3_5);
      }
      {
        double r3_3;
        double i3_3;
        double r3_7;
        double i3_7;

        # 648 "fft.c"
        r3_3 = ((in[3]).re);
        i3_3 = ((in[3]).im);
        r3_7 = ((in[7]).re);
        i3_7 = ((in[7]).im);
        r2_3 = (r3_3 + r3_7);
        i2_3 = (i3_3 + i3_7);
        r2_7 = (r3_3 - r3_7);
        i2_7 = (i3_3 - i3_7);
      }
      r1_1 = (r2_1 + r2_3);
      i1_1 = (i2_1 + i2_3);
      r1_5 = (r2_1 - r2_3);
      i1_5 = (i2_1 - i2_3);
      r1_3 = (r2_5 + i2_7);
      i1_3 = (i2_5 - r2_7);
      r1_7 = (r2_5 - i2_7);
      i1_7 = (i2_5 + r2_7);
    }
    ((out[0]).re) = (r1_0 + r1_1);
    ((out[0]).im) = (i1_0 + i1_1);
    ((out[4]).re) = (r1_0 - r1_1);
    ((out[4]).im) = (i1_0 - i1_1);
    tmpr = (0.707106781187 * (r1_3 + i1_3));
    tmpi = (0.707106781187 * (i1_3 - r1_3));
    ((out[1]).re) = (r1_2 + tmpr);
    ((out[1]).im) = (i1_2 + tmpi);
    ((out[5]).re) = (r1_2 - tmpr);
    ((out[5]).im) = (i1_2 - tmpi);
    ((out[2]).re) = (r1_4 + i1_5);
    ((out[2]).im) = (i1_4 - r1_5);
    ((out[6]).re) = (r1_4 - i1_5);
    ((out[6]).im) = (i1_4 + r1_5);
    tmpr = (0.707106781187 * (i1_7 - r1_7));
    tmpi = (0.707106781187 * (r1_7 + i1_7));
    ((out[3]).re) = (r1_6 + tmpr);
    ((out[3]).im) = (i1_6 - tmpi);
    ((out[7]).re) = (r1_6 - tmpr);
    ((out[7]).im) = (i1_6 + tmpi);
  }
}

static void * _taskFunc16_(void *);
static void * _taskFunc15_(void *);


void fft_twiddle_8(int a, int b, struct _noname16_ (* in), struct _noname16_ (* out), struct _noname16_ (* W), int nW, int nWdn, int m)
{
  int l1, i;
  struct _noname16_ (* jp);
  struct _noname16_ (* kp);
  double tmpr;
  double tmpi;
  double wr;
  double wi;

  # 839 "fft.c"
  if ((b - a) < 128)
    {
      for (i = a, l1 = nWdn * i, kp = out + i; i < b; i++, l1 += nWdn, kp++)
        {
          jp = in + i;
          {
            double r1_0;
            double i1_0;
            double r1_1;
            double i1_1;
            double r1_2;
            double i1_2;
            double r1_3;
            double i1_3;
            double r1_4;
            double i1_4;
            double r1_5;
            double i1_5;
            double r1_6;
            double i1_6;
            double r1_7;
            double i1_7;

            # 706 "fft.c"
            {
              double r2_0;
              double i2_0;
              double r2_2;
              double i2_2;
              double r2_4;
              double i2_4;
              double r2_6;
              double i2_6;

              # 711 "fft.c"
              {
                double r3_0;
                double i3_0;
                double r3_4;
                double i3_4;

                # 714 "fft.c"
                r3_0 = ((jp[0 * m]).re);
                i3_0 = ((jp[0 * m]).im);
                wr = ((W[4 * l1]).re);
                wi = ((W[4 * l1]).im);
                tmpr = ((jp[4 * m]).re);
                tmpi = ((jp[4 * m]).im);
                r3_4 = ((wr * tmpr) - (wi * tmpi));
                i3_4 = ((wi * tmpr) + (wr * tmpi));
                r2_0 = (r3_0 + r3_4);
                i2_0 = (i3_0 + i3_4);
                r2_4 = (r3_0 - r3_4);
                i2_4 = (i3_0 - i3_4);
              }
              {
                double r3_2;
                double i3_2;
                double r3_6;
                double i3_6;

                # 730 "fft.c"
                wr = ((W[2 * l1]).re);
                wi = ((W[2 * l1]).im);
                tmpr = ((jp[2 * m]).re);
                tmpi = ((jp[2 * m]).im);
                r3_2 = ((wr * tmpr) - (wi * tmpi));
                i3_2 = ((wi * tmpr) + (wr * tmpi));
                wr = ((W[6 * l1]).re);
                wi = ((W[6 * l1]).im);
                tmpr = ((jp[6 * m]).re);
                tmpi = ((jp[6 * m]).im);
                r3_6 = ((wr * tmpr) - (wi * tmpi));
                i3_6 = ((wi * tmpr) + (wr * tmpi));
                r2_2 = (r3_2 + r3_6);
                i2_2 = (i3_2 + i3_6);
                r2_6 = (r3_2 - r3_6);
                i2_6 = (i3_2 - i3_6);
              }
              r1_0 = (r2_0 + r2_2);
              i1_0 = (i2_0 + i2_2);
              r1_4 = (r2_0 - r2_2);
              i1_4 = (i2_0 - i2_2);
              r1_2 = (r2_4 + i2_6);
              i1_2 = (i2_4 - r2_6);
              r1_6 = (r2_4 - i2_6);
              i1_6 = (i2_4 + r2_6);
            }
            {
              double r2_1;
              double i2_1;
              double r2_3;
              double i2_3;
              double r2_5;
              double i2_5;
              double r2_7;
              double i2_7;

              # 761 "fft.c"
              {
                double r3_1;
                double i3_1;
                double r3_5;
                double i3_5;

                # 764 "fft.c"
                wr = ((W[1 * l1]).re);
                wi = ((W[1 * l1]).im);
                tmpr = ((jp[1 * m]).re);
                tmpi = ((jp[1 * m]).im);
                r3_1 = ((wr * tmpr) - (wi * tmpi));
                i3_1 = ((wi * tmpr) + (wr * tmpi));
                wr = ((W[5 * l1]).re);
                wi = ((W[5 * l1]).im);
                tmpr = ((jp[5 * m]).re);
                tmpi = ((jp[5 * m]).im);
                r3_5 = ((wr * tmpr) - (wi * tmpi));
                i3_5 = ((wi * tmpr) + (wr * tmpi));
                r2_1 = (r3_1 + r3_5);
                i2_1 = (i3_1 + i3_5);
                r2_5 = (r3_1 - r3_5);
                i2_5 = (i3_1 - i3_5);
              }
              {
                double r3_3;
                double i3_3;
                double r3_7;
                double i3_7;

                # 784 "fft.c"
                wr = ((W[3 * l1]).re);
                wi = ((W[3 * l1]).im);
                tmpr = ((jp[3 * m]).re);
                tmpi = ((jp[3 * m]).im);
                r3_3 = ((wr * tmpr) - (wi * tmpi));
                i3_3 = ((wi * tmpr) + (wr * tmpi));
                wr = ((W[7 * l1]).re);
                wi = ((W[7 * l1]).im);
                tmpr = ((jp[7 * m]).re);
                tmpi = ((jp[7 * m]).im);
                r3_7 = ((wr * tmpr) - (wi * tmpi));
                i3_7 = ((wi * tmpr) + (wr * tmpi));
                r2_3 = (r3_3 + r3_7);
                i2_3 = (i3_3 + i3_7);
                r2_7 = (r3_3 - r3_7);
                i2_7 = (i3_3 - i3_7);
              }
              r1_1 = (r2_1 + r2_3);
              i1_1 = (i2_1 + i2_3);
              r1_5 = (r2_1 - r2_3);
              i1_5 = (i2_1 - i2_3);
              r1_3 = (r2_5 + i2_7);
              i1_3 = (i2_5 - r2_7);
              r1_7 = (r2_5 - i2_7);
              i1_7 = (i2_5 + r2_7);
            }
            ((kp[0 * m]).re) = (r1_0 + r1_1);
            ((kp[0 * m]).im) = (i1_0 + i1_1);
            ((kp[4 * m]).re) = (r1_0 - r1_1);
            ((kp[4 * m]).im) = (i1_0 - i1_1);
            tmpr = (0.707106781187 * (r1_3 + i1_3));
            tmpi = (0.707106781187 * (i1_3 - r1_3));
            ((kp[1 * m]).re) = (r1_2 + tmpr);
            ((kp[1 * m]).im) = (i1_2 + tmpi);
            ((kp[5 * m]).re) = (r1_2 - tmpr);
            ((kp[5 * m]).im) = (i1_2 - tmpi);
            ((kp[2 * m]).re) = (r1_4 + i1_5);
            ((kp[2 * m]).im) = (i1_4 - r1_5);
            ((kp[6 * m]).re) = (r1_4 - i1_5);
            ((kp[6 * m]).im) = (i1_4 + r1_5);
            tmpr = (0.707106781187 * (i1_7 - r1_7));
            tmpi = (0.707106781187 * (r1_7 + i1_7));
            ((kp[3 * m]).re) = (r1_6 + tmpr);
            ((kp[3 * m]).im) = (i1_6 - tmpi);
            ((kp[7 * m]).re) = (r1_6 - tmpr);
            ((kp[7 * m]).im) = (i1_6 + tmpi);
          }
        }
    }
  else
    {
      int ab = (a + b) / 2;

      /* (l834) #pragma omp task untied
 */
      # 834 "fft.c"
      if (omp_in_final() || ort_task_throttling())
        {
          void * _itn;

          /* byvalue variables */
          int _fip_a = a, a = _fip_a;
          int _fip_ab = ab, ab = _fip_ab;
          struct _noname16_ (* _fip_in) = in, (* in) = _fip_in;
          struct _noname16_ (* _fip_out) = out, (* out) = _fip_out;
          struct _noname16_ (* _fip_W) = W, (* W) = _fip_W;
          int _fip_nW = nW, nW = _fip_nW;
          int _fip_nWdn = nWdn, nWdn = _fip_nWdn;
          int _fip_m = m, m = _fip_m;

          _itn = ort_task_immediate_start(0);
          {
            # 835 "fft.c"
            fft_twiddle_8(a, ab, in, out, W, nW, nWdn, m);
            CANCEL_task_834 :
              ;
          }
          ort_task_immediate_end(_itn);
        }
      else
        {
          struct __taskenv__ {
              int a;
              int ab;
              struct _noname16_ (* in);
              struct _noname16_ (* out);
              struct _noname16_ (* W);
              int nW;
              int nWdn;
              int m;
            } * _tenv;

          _tenv = (struct __taskenv__ *) ort_taskenv_alloc(sizeof(struct __taskenv__), _taskFunc15_);
          /* byvalue variables */
          _tenv->a = a;
          _tenv->ab = ab;
          _tenv->in = in;
          _tenv->out = out;
          _tenv->W = W;
          _tenv->nW = nW;
          _tenv->nWdn = nWdn;
          _tenv->m = m;
          ort_new_task(_taskFunc15_, (void *) _tenv, 0, 0, 1, 0, (void *) 0, 0, 0, 0);
          /* no other operations */
        }
      /* (l836) #pragma omp task untied
 */
      # 836 "fft.c"
      if (omp_in_final() || ort_task_throttling())
        {
          void * _itn;

          /* byvalue variables */
          int _fip_ab = ab, ab = _fip_ab;
          int _fip_b = b, b = _fip_b;
          struct _noname16_ (* _fip_in) = in, (* in) = _fip_in;
          struct _noname16_ (* _fip_out) = out, (* out) = _fip_out;
          struct _noname16_ (* _fip_W) = W, (* W) = _fip_W;
          int _fip_nW = nW, nW = _fip_nW;
          int _fip_nWdn = nWdn, nWdn = _fip_nWdn;
          int _fip_m = m, m = _fip_m;

          _itn = ort_task_immediate_start(0);
          {
            # 837 "fft.c"
            fft_twiddle_8(ab, b, in, out, W, nW, nWdn, m);
            CANCEL_task_836 :
              ;
          }
          ort_task_immediate_end(_itn);
        }
      else
        {
          struct __taskenv__ {
              int ab;
              int b;
              struct _noname16_ (* in);
              struct _noname16_ (* out);
              struct _noname16_ (* W);
              int nW;
              int nWdn;
              int m;
            } * _tenv;

          _tenv = (struct __taskenv__ *) ort_taskenv_alloc(sizeof(struct __taskenv__), _taskFunc16_);
          /* byvalue variables */
          _tenv->ab = ab;
          _tenv->b = b;
          _tenv->in = in;
          _tenv->out = out;
          _tenv->W = W;
          _tenv->nW = nW;
          _tenv->nWdn = nWdn;
          _tenv->m = m;
          ort_new_task(_taskFunc16_, (void *) _tenv, 0, 0, 1, 0, (void *) 0, 0, 0, 0);
          /* no other operations */
        }
      /* (l838) #pragma omp taskwait 
 */
      # 838 "fft.c"
      ort_taskwait(0);
    }
}


static void * _taskFunc15_(void * __arg)
{
  struct __taskenv__ {
      int a;
      int ab;
      struct _noname16_ (* in);
      struct _noname16_ (* out);
      struct _noname16_ (* W);
      int nW;
      int nWdn;
      int m;
    };
  struct __taskenv__ * _tenv = (struct __taskenv__ *) __arg;

  /* byvalue variables */
  int a = _tenv->a;
  int ab = _tenv->ab;
  struct _noname16_ (* in) = _tenv->in;
  struct _noname16_ (* out) = _tenv->out;
  struct _noname16_ (* W) = _tenv->W;
  int nW = _tenv->nW;
  int nWdn = _tenv->nWdn;
  int m = _tenv->m;

  /* no initializations */
  /* (l834) #pragma omp task untied
 -- body moved below */
  # 834 "fft.c"
  {
    # 835 "fft.c"
    fft_twiddle_8(a, ab, in, out, W, nW, nWdn, m);
    CANCEL_task_834 :
      ;
  }
  /* no other operations */
  ort_taskenv_free(_tenv, _taskFunc15_);
  return ((void *) 0);
}


static void * _taskFunc16_(void * __arg)
{
  struct __taskenv__ {
      int ab;
      int b;
      struct _noname16_ (* in);
      struct _noname16_ (* out);
      struct _noname16_ (* W);
      int nW;
      int nWdn;
      int m;
    };
  struct __taskenv__ * _tenv = (struct __taskenv__ *) __arg;

  /* byvalue variables */
  int ab = _tenv->ab;
  int b = _tenv->b;
  struct _noname16_ (* in) = _tenv->in;
  struct _noname16_ (* out) = _tenv->out;
  struct _noname16_ (* W) = _tenv->W;
  int nW = _tenv->nW;
  int nWdn = _tenv->nWdn;
  int m = _tenv->m;

  /* no initializations */
  /* (l836) #pragma omp task untied
 -- body moved below */
  # 836 "fft.c"
  {
    # 837 "fft.c"
    fft_twiddle_8(ab, b, in, out, W, nW, nWdn, m);
    CANCEL_task_836 :
      ;
  }
  /* no other operations */
  ort_taskenv_free(_tenv, _taskFunc16_);
  return ((void *) 0);
}


void fft_twiddle_8_seq(int a, int b, struct _noname16_ (* in), struct _noname16_ (* out), struct _noname16_ (* W), int nW, int nWdn, int m)
# 842 "fft.c"
{
  int l1, i;
  struct _noname16_ (* jp);
  struct _noname16_ (* kp);
  double tmpr;
  double tmpi;
  double wr;
  double wi;

  # 989 "fft.c"
  if ((b - a) < 128)
    {
      for (i = a, l1 = nWdn * i, kp = out + i; i < b; i++, l1 += nWdn, kp++)
        {
          jp = in + i;
          {
            double r1_0;
            double i1_0;
            double r1_1;
            double i1_1;
            double r1_2;
            double i1_2;
            double r1_3;
            double i1_3;
            double r1_4;
            double i1_4;
            double r1_5;
            double i1_5;
            double r1_6;
            double i1_6;
            double r1_7;
            double i1_7;

            # 859 "fft.c"
            {
              double r2_0;
              double i2_0;
              double r2_2;
              double i2_2;
              double r2_4;
              double i2_4;
              double r2_6;
              double i2_6;

              # 864 "fft.c"
              {
                double r3_0;
                double i3_0;
                double r3_4;
                double i3_4;

                # 867 "fft.c"
                r3_0 = ((jp[0 * m]).re);
                i3_0 = ((jp[0 * m]).im);
                wr = ((W[4 * l1]).re);
                wi = ((W[4 * l1]).im);
                tmpr = ((jp[4 * m]).re);
                tmpi = ((jp[4 * m]).im);
                r3_4 = ((wr * tmpr) - (wi * tmpi));
                i3_4 = ((wi * tmpr) + (wr * tmpi));
                r2_0 = (r3_0 + r3_4);
                i2_0 = (i3_0 + i3_4);
                r2_4 = (r3_0 - r3_4);
                i2_4 = (i3_0 - i3_4);
              }
              {
                double r3_2;
                double i3_2;
                double r3_6;
                double i3_6;

                # 883 "fft.c"
                wr = ((W[2 * l1]).re);
                wi = ((W[2 * l1]).im);
                tmpr = ((jp[2 * m]).re);
                tmpi = ((jp[2 * m]).im);
                r3_2 = ((wr * tmpr) - (wi * tmpi));
                i3_2 = ((wi * tmpr) + (wr * tmpi));
                wr = ((W[6 * l1]).re);
                wi = ((W[6 * l1]).im);
                tmpr = ((jp[6 * m]).re);
                tmpi = ((jp[6 * m]).im);
                r3_6 = ((wr * tmpr) - (wi * tmpi));
                i3_6 = ((wi * tmpr) + (wr * tmpi));
                r2_2 = (r3_2 + r3_6);
                i2_2 = (i3_2 + i3_6);
                r2_6 = (r3_2 - r3_6);
                i2_6 = (i3_2 - i3_6);
              }
              r1_0 = (r2_0 + r2_2);
              i1_0 = (i2_0 + i2_2);
              r1_4 = (r2_0 - r2_2);
              i1_4 = (i2_0 - i2_2);
              r1_2 = (r2_4 + i2_6);
              i1_2 = (i2_4 - r2_6);
              r1_6 = (r2_4 - i2_6);
              i1_6 = (i2_4 + r2_6);
            }
            {
              double r2_1;
              double i2_1;
              double r2_3;
              double i2_3;
              double r2_5;
              double i2_5;
              double r2_7;
              double i2_7;

              # 914 "fft.c"
              {
                double r3_1;
                double i3_1;
                double r3_5;
                double i3_5;

                # 917 "fft.c"
                wr = ((W[1 * l1]).re);
                wi = ((W[1 * l1]).im);
                tmpr = ((jp[1 * m]).re);
                tmpi = ((jp[1 * m]).im);
                r3_1 = ((wr * tmpr) - (wi * tmpi));
                i3_1 = ((wi * tmpr) + (wr * tmpi));
                wr = ((W[5 * l1]).re);
                wi = ((W[5 * l1]).im);
                tmpr = ((jp[5 * m]).re);
                tmpi = ((jp[5 * m]).im);
                r3_5 = ((wr * tmpr) - (wi * tmpi));
                i3_5 = ((wi * tmpr) + (wr * tmpi));
                r2_1 = (r3_1 + r3_5);
                i2_1 = (i3_1 + i3_5);
                r2_5 = (r3_1 - r3_5);
                i2_5 = (i3_1 - i3_5);
              }
              {
                double r3_3;
                double i3_3;
                double r3_7;
                double i3_7;

                # 937 "fft.c"
                wr = ((W[3 * l1]).re);
                wi = ((W[3 * l1]).im);
                tmpr = ((jp[3 * m]).re);
                tmpi = ((jp[3 * m]).im);
                r3_3 = ((wr * tmpr) - (wi * tmpi));
                i3_3 = ((wi * tmpr) + (wr * tmpi));
                wr = ((W[7 * l1]).re);
                wi = ((W[7 * l1]).im);
                tmpr = ((jp[7 * m]).re);
                tmpi = ((jp[7 * m]).im);
                r3_7 = ((wr * tmpr) - (wi * tmpi));
                i3_7 = ((wi * tmpr) + (wr * tmpi));
                r2_3 = (r3_3 + r3_7);
                i2_3 = (i3_3 + i3_7);
                r2_7 = (r3_3 - r3_7);
                i2_7 = (i3_3 - i3_7);
              }
              r1_1 = (r2_1 + r2_3);
              i1_1 = (i2_1 + i2_3);
              r1_5 = (r2_1 - r2_3);
              i1_5 = (i2_1 - i2_3);
              r1_3 = (r2_5 + i2_7);
              i1_3 = (i2_5 - r2_7);
              r1_7 = (r2_5 - i2_7);
              i1_7 = (i2_5 + r2_7);
            }
            ((kp[0 * m]).re) = (r1_0 + r1_1);
            ((kp[0 * m]).im) = (i1_0 + i1_1);
            ((kp[4 * m]).re) = (r1_0 - r1_1);
            ((kp[4 * m]).im) = (i1_0 - i1_1);
            tmpr = (0.707106781187 * (r1_3 + i1_3));
            tmpi = (0.707106781187 * (i1_3 - r1_3));
            ((kp[1 * m]).re) = (r1_2 + tmpr);
            ((kp[1 * m]).im) = (i1_2 + tmpi);
            ((kp[5 * m]).re) = (r1_2 - tmpr);
            ((kp[5 * m]).im) = (i1_2 - tmpi);
            ((kp[2 * m]).re) = (r1_4 + i1_5);
            ((kp[2 * m]).im) = (i1_4 - r1_5);
            ((kp[6 * m]).re) = (r1_4 - i1_5);
            ((kp[6 * m]).im) = (i1_4 + r1_5);
            tmpr = (0.707106781187 * (i1_7 - r1_7));
            tmpi = (0.707106781187 * (r1_7 + i1_7));
            ((kp[3 * m]).re) = (r1_6 + tmpr);
            ((kp[3 * m]).im) = (i1_6 - tmpi);
            ((kp[7 * m]).re) = (r1_6 - tmpr);
            ((kp[7 * m]).im) = (i1_6 + tmpi);
          }
        }
    }
  else
    {
      int ab = (a + b) / 2;

      fft_twiddle_8_seq(a, ab, in, out, W, nW, nWdn, m);
      fft_twiddle_8_seq(ab, b, in, out, W, nW, nWdn, m);
    }
}

static void * _taskFunc18_(void *);
static void * _taskFunc17_(void *);


void fft_unshuffle_8(int a, int b, struct _noname16_ (* in), struct _noname16_ (* out), int m)
{
  int i;
  const struct _noname16_ (* ip);
  struct _noname16_ (* jp);

  if ((b - a) < 128)
    {
      ip = in + a * 8;
      for (i = a; i < b; ++i)
        {
          jp = out + i;
          jp[0] = ip[0];
          jp[m] = ip[1];
          ip += 2;
          jp += 2 * m;
          jp[0] = ip[0];
          jp[m] = ip[1];
          ip += 2;
          jp += 2 * m;
          jp[0] = ip[0];
          jp[m] = ip[1];
          ip += 2;
          jp += 2 * m;
          jp[0] = ip[0];
          jp[m] = ip[1];
          ip += 2;
        }
    }
  else
    {
      int ab = (a + b) / 2;

      /* (l1018) #pragma omp task untied
 */
      # 1018 "fft.c"
      if (omp_in_final() || ort_task_throttling())
        {
          void * _itn;

          /* byvalue variables */
          int _fip_a = a, a = _fip_a;
          int _fip_ab = ab, ab = _fip_ab;
          struct _noname16_ (* _fip_in) = in, (* in) = _fip_in;
          struct _noname16_ (* _fip_out) = out, (* out) = _fip_out;
          int _fip_m = m, m = _fip_m;

          _itn = ort_task_immediate_start(0);
          {
            # 1019 "fft.c"
            fft_unshuffle_8(a, ab, in, out, m);
            CANCEL_task_1018 :
              ;
          }
          ort_task_immediate_end(_itn);
        }
      else
        {
          struct __taskenv__ {
              int a;
              int ab;
              struct _noname16_ (* in);
              struct _noname16_ (* out);
              int m;
            } * _tenv;

          _tenv = (struct __taskenv__ *) ort_taskenv_alloc(sizeof(struct __taskenv__), _taskFunc17_);
          /* byvalue variables */
          _tenv->a = a;
          _tenv->ab = ab;
          _tenv->in = in;
          _tenv->out = out;
          _tenv->m = m;
          ort_new_task(_taskFunc17_, (void *) _tenv, 0, 0, 1, 0, (void *) 0, 0, 0, 0);
          /* no other operations */
        }
      /* (l1020) #pragma omp task untied
 */
      # 1020 "fft.c"
      if (omp_in_final() || ort_task_throttling())
        {
          void * _itn;

          /* byvalue variables */
          int _fip_ab = ab, ab = _fip_ab;
          int _fip_b = b, b = _fip_b;
          struct _noname16_ (* _fip_in) = in, (* in) = _fip_in;
          struct _noname16_ (* _fip_out) = out, (* out) = _fip_out;
          int _fip_m = m, m = _fip_m;

          _itn = ort_task_immediate_start(0);
          {
            # 1021 "fft.c"
            fft_unshuffle_8(ab, b, in, out, m);
            CANCEL_task_1020 :
              ;
          }
          ort_task_immediate_end(_itn);
        }
      else
        {
          struct __taskenv__ {
              int ab;
              int b;
              struct _noname16_ (* in);
              struct _noname16_ (* out);
              int m;
            } * _tenv;

          _tenv = (struct __taskenv__ *) ort_taskenv_alloc(sizeof(struct __taskenv__), _taskFunc18_);
          /* byvalue variables */
          _tenv->ab = ab;
          _tenv->b = b;
          _tenv->in = in;
          _tenv->out = out;
          _tenv->m = m;
          ort_new_task(_taskFunc18_, (void *) _tenv, 0, 0, 1, 0, (void *) 0, 0, 0, 0);
          /* no other operations */
        }
      /* (l1022) #pragma omp taskwait 
 */
      # 1022 "fft.c"
      ort_taskwait(0);
    }
}


static void * _taskFunc17_(void * __arg)
{
  struct __taskenv__ {
      int a;
      int ab;
      struct _noname16_ (* in);
      struct _noname16_ (* out);
      int m;
    };
  struct __taskenv__ * _tenv = (struct __taskenv__ *) __arg;

  /* byvalue variables */
  int a = _tenv->a;
  int ab = _tenv->ab;
  struct _noname16_ (* in) = _tenv->in;
  struct _noname16_ (* out) = _tenv->out;
  int m = _tenv->m;

  /* no initializations */
  /* (l1018) #pragma omp task untied
 -- body moved below */
  # 1018 "fft.c"
  {
    # 1019 "fft.c"
    fft_unshuffle_8(a, ab, in, out, m);
    CANCEL_task_1018 :
      ;
  }
  /* no other operations */
  ort_taskenv_free(_tenv, _taskFunc17_);
  return ((void *) 0);
}


static void * _taskFunc18_(void * __arg)
{
  struct __taskenv__ {
      int ab;
      int b;
      struct _noname16_ (* in);
      struct _noname16_ (* out);
      int m;
    };
  struct __taskenv__ * _tenv = (struct __taskenv__ *) __arg;

  /* byvalue variables */
  int ab = _tenv->ab;
  int b = _tenv->b;
  struct _noname16_ (* in) = _tenv->in;
  struct _noname16_ (* out) = _tenv->out;
  int m = _tenv->m;

  /* no initializations */
  /* (l1020) #pragma omp task untied
 -- body moved below */
  # 1020 "fft.c"
  {
    # 1021 "fft.c"
    fft_unshuffle_8(ab, b, in, out, m);
    CANCEL_task_1020 :
      ;
  }
  /* no other operations */
  ort_taskenv_free(_tenv, _taskFunc18_);
  return ((void *) 0);
}


void fft_unshuffle_8_seq(int a, int b, struct _noname16_ (* in), struct _noname16_ (* out), int m)
# 1026 "fft.c"
{
  int i;
  const struct _noname16_ (* ip);
  struct _noname16_ (* jp);

  if ((b - a) < 128)
    {
      ip = in + a * 8;
      for (i = a; i < b; ++i)
        {
          jp = out + i;
          jp[0] = ip[0];
          jp[m] = ip[1];
          ip += 2;
          jp += 2 * m;
          jp[0] = ip[0];
          jp[m] = ip[1];
          ip += 2;
          jp += 2 * m;
          jp[0] = ip[0];
          jp[m] = ip[1];
          ip += 2;
          jp += 2 * m;
          jp[0] = ip[0];
          jp[m] = ip[1];
          ip += 2;
        }
    }
  else
    {
      int ab = (a + b) / 2;

      fft_unshuffle_8_seq(a, ab, in, out, m);
      fft_unshuffle_8_seq(ab, b, in, out, m);
    }
}


void fft_base_16(struct _noname16_ (* in), struct _noname16_ (* out))
{
  double tmpr;
  double tmpi;

  # 1059 "fft.c"
  {
    double r1_0;
    double i1_0;
    double r1_1;
    double i1_1;
    double r1_2;
    double i1_2;
    double r1_3;
    double i1_3;
    double r1_4;
    double i1_4;
    double r1_5;
    double i1_5;
    double r1_6;
    double i1_6;
    double r1_7;
    double i1_7;
    double r1_8;
    double i1_8;
    double r1_9;
    double i1_9;
    double r1_10;
    double i1_10;
    double r1_11;
    double i1_11;
    double r1_12;
    double i1_12;
    double r1_13;
    double i1_13;
    double r1_14;
    double i1_14;
    double r1_15;
    double i1_15;

    # 1076 "fft.c"
    {
      double r2_0;
      double i2_0;
      double r2_2;
      double i2_2;
      double r2_4;
      double i2_4;
      double r2_6;
      double i2_6;
      double r2_8;
      double i2_8;
      double r2_10;
      double i2_10;
      double r2_12;
      double i2_12;
      double r2_14;
      double i2_14;

      # 1085 "fft.c"
      {
        double r3_0;
        double i3_0;
        double r3_4;
        double i3_4;
        double r3_8;
        double i3_8;
        double r3_12;
        double i3_12;

        # 1090 "fft.c"
        {
          double r4_0;
          double i4_0;
          double r4_8;
          double i4_8;

          # 1093 "fft.c"
          r4_0 = ((in[0]).re);
          i4_0 = ((in[0]).im);
          r4_8 = ((in[8]).re);
          i4_8 = ((in[8]).im);
          r3_0 = (r4_0 + r4_8);
          i3_0 = (i4_0 + i4_8);
          r3_8 = (r4_0 - r4_8);
          i3_8 = (i4_0 - i4_8);
        }
        {
          double r4_4;
          double i4_4;
          double r4_12;
          double i4_12;

          # 1105 "fft.c"
          r4_4 = ((in[4]).re);
          i4_4 = ((in[4]).im);
          r4_12 = ((in[12]).re);
          i4_12 = ((in[12]).im);
          r3_4 = (r4_4 + r4_12);
          i3_4 = (i4_4 + i4_12);
          r3_12 = (r4_4 - r4_12);
          i3_12 = (i4_4 - i4_12);
        }
        r2_0 = (r3_0 + r3_4);
        i2_0 = (i3_0 + i3_4);
        r2_8 = (r3_0 - r3_4);
        i2_8 = (i3_0 - i3_4);
        r2_4 = (r3_8 + i3_12);
        i2_4 = (i3_8 - r3_12);
        r2_12 = (r3_8 - i3_12);
        i2_12 = (i3_8 + r3_12);
      }
      {
        double r3_2;
        double i3_2;
        double r3_6;
        double i3_6;
        double r3_10;
        double i3_10;
        double r3_14;
        double i3_14;

        # 1128 "fft.c"
        {
          double r4_2;
          double i4_2;
          double r4_10;
          double i4_10;

          # 1131 "fft.c"
          r4_2 = ((in[2]).re);
          i4_2 = ((in[2]).im);
          r4_10 = ((in[10]).re);
          i4_10 = ((in[10]).im);
          r3_2 = (r4_2 + r4_10);
          i3_2 = (i4_2 + i4_10);
          r3_10 = (r4_2 - r4_10);
          i3_10 = (i4_2 - i4_10);
        }
        {
          double r4_6;
          double i4_6;
          double r4_14;
          double i4_14;

          # 1143 "fft.c"
          r4_6 = ((in[6]).re);
          i4_6 = ((in[6]).im);
          r4_14 = ((in[14]).re);
          i4_14 = ((in[14]).im);
          r3_6 = (r4_6 + r4_14);
          i3_6 = (i4_6 + i4_14);
          r3_14 = (r4_6 - r4_14);
          i3_14 = (i4_6 - i4_14);
        }
        r2_2 = (r3_2 + r3_6);
        i2_2 = (i3_2 + i3_6);
        r2_10 = (r3_2 - r3_6);
        i2_10 = (i3_2 - i3_6);
        r2_6 = (r3_10 + i3_14);
        i2_6 = (i3_10 - r3_14);
        r2_14 = (r3_10 - i3_14);
        i2_14 = (i3_10 + r3_14);
      }
      r1_0 = (r2_0 + r2_2);
      i1_0 = (i2_0 + i2_2);
      r1_8 = (r2_0 - r2_2);
      i1_8 = (i2_0 - i2_2);
      tmpr = (0.707106781187 * (r2_6 + i2_6));
      tmpi = (0.707106781187 * (i2_6 - r2_6));
      r1_2 = (r2_4 + tmpr);
      i1_2 = (i2_4 + tmpi);
      r1_10 = (r2_4 - tmpr);
      i1_10 = (i2_4 - tmpi);
      r1_4 = (r2_8 + i2_10);
      i1_4 = (i2_8 - r2_10);
      r1_12 = (r2_8 - i2_10);
      i1_12 = (i2_8 + r2_10);
      tmpr = (0.707106781187 * (i2_14 - r2_14));
      tmpi = (0.707106781187 * (r2_14 + i2_14));
      r1_6 = (r2_12 + tmpr);
      i1_6 = (i2_12 - tmpi);
      r1_14 = (r2_12 - tmpr);
      i1_14 = (i2_12 + tmpi);
    }
    {
      double r2_1;
      double i2_1;
      double r2_3;
      double i2_3;
      double r2_5;
      double i2_5;
      double r2_7;
      double i2_7;
      double r2_9;
      double i2_9;
      double r2_11;
      double i2_11;
      double r2_13;
      double i2_13;
      double r2_15;
      double i2_15;

      # 1191 "fft.c"
      {
        double r3_1;
        double i3_1;
        double r3_5;
        double i3_5;
        double r3_9;
        double i3_9;
        double r3_13;
        double i3_13;

        # 1196 "fft.c"
        {
          double r4_1;
          double i4_1;
          double r4_9;
          double i4_9;

          # 1199 "fft.c"
          r4_1 = ((in[1]).re);
          i4_1 = ((in[1]).im);
          r4_9 = ((in[9]).re);
          i4_9 = ((in[9]).im);
          r3_1 = (r4_1 + r4_9);
          i3_1 = (i4_1 + i4_9);
          r3_9 = (r4_1 - r4_9);
          i3_9 = (i4_1 - i4_9);
        }
        {
          double r4_5;
          double i4_5;
          double r4_13;
          double i4_13;

          # 1211 "fft.c"
          r4_5 = ((in[5]).re);
          i4_5 = ((in[5]).im);
          r4_13 = ((in[13]).re);
          i4_13 = ((in[13]).im);
          r3_5 = (r4_5 + r4_13);
          i3_5 = (i4_5 + i4_13);
          r3_13 = (r4_5 - r4_13);
          i3_13 = (i4_5 - i4_13);
        }
        r2_1 = (r3_1 + r3_5);
        i2_1 = (i3_1 + i3_5);
        r2_9 = (r3_1 - r3_5);
        i2_9 = (i3_1 - i3_5);
        r2_5 = (r3_9 + i3_13);
        i2_5 = (i3_9 - r3_13);
        r2_13 = (r3_9 - i3_13);
        i2_13 = (i3_9 + r3_13);
      }
      {
        double r3_3;
        double i3_3;
        double r3_7;
        double i3_7;
        double r3_11;
        double i3_11;
        double r3_15;
        double i3_15;

        # 1234 "fft.c"
        {
          double r4_3;
          double i4_3;
          double r4_11;
          double i4_11;

          # 1237 "fft.c"
          r4_3 = ((in[3]).re);
          i4_3 = ((in[3]).im);
          r4_11 = ((in[11]).re);
          i4_11 = ((in[11]).im);
          r3_3 = (r4_3 + r4_11);
          i3_3 = (i4_3 + i4_11);
          r3_11 = (r4_3 - r4_11);
          i3_11 = (i4_3 - i4_11);
        }
        {
          double r4_7;
          double i4_7;
          double r4_15;
          double i4_15;

          # 1249 "fft.c"
          r4_7 = ((in[7]).re);
          i4_7 = ((in[7]).im);
          r4_15 = ((in[15]).re);
          i4_15 = ((in[15]).im);
          r3_7 = (r4_7 + r4_15);
          i3_7 = (i4_7 + i4_15);
          r3_15 = (r4_7 - r4_15);
          i3_15 = (i4_7 - i4_15);
        }
        r2_3 = (r3_3 + r3_7);
        i2_3 = (i3_3 + i3_7);
        r2_11 = (r3_3 - r3_7);
        i2_11 = (i3_3 - i3_7);
        r2_7 = (r3_11 + i3_15);
        i2_7 = (i3_11 - r3_15);
        r2_15 = (r3_11 - i3_15);
        i2_15 = (i3_11 + r3_15);
      }
      r1_1 = (r2_1 + r2_3);
      i1_1 = (i2_1 + i2_3);
      r1_9 = (r2_1 - r2_3);
      i1_9 = (i2_1 - i2_3);
      tmpr = (0.707106781187 * (r2_7 + i2_7));
      tmpi = (0.707106781187 * (i2_7 - r2_7));
      r1_3 = (r2_5 + tmpr);
      i1_3 = (i2_5 + tmpi);
      r1_11 = (r2_5 - tmpr);
      i1_11 = (i2_5 - tmpi);
      r1_5 = (r2_9 + i2_11);
      i1_5 = (i2_9 - r2_11);
      r1_13 = (r2_9 - i2_11);
      i1_13 = (i2_9 + r2_11);
      tmpr = (0.707106781187 * (i2_15 - r2_15));
      tmpi = (0.707106781187 * (r2_15 + i2_15));
      r1_7 = (r2_13 + tmpr);
      i1_7 = (i2_13 - tmpi);
      r1_15 = (r2_13 - tmpr);
      i1_15 = (i2_13 + tmpi);
    }
    ((out[0]).re) = (r1_0 + r1_1);
    ((out[0]).im) = (i1_0 + i1_1);
    ((out[8]).re) = (r1_0 - r1_1);
    ((out[8]).im) = (i1_0 - i1_1);
    tmpr = ((0.923879532511 * r1_3) + (0.382683432365 * i1_3));
    tmpi = ((0.923879532511 * i1_3) - (0.382683432365 * r1_3));
    ((out[1]).re) = (r1_2 + tmpr);
    ((out[1]).im) = (i1_2 + tmpi);
    ((out[9]).re) = (r1_2 - tmpr);
    ((out[9]).im) = (i1_2 - tmpi);
    tmpr = (0.707106781187 * (r1_5 + i1_5));
    tmpi = (0.707106781187 * (i1_5 - r1_5));
    ((out[2]).re) = (r1_4 + tmpr);
    ((out[2]).im) = (i1_4 + tmpi);
    ((out[10]).re) = (r1_4 - tmpr);
    ((out[10]).im) = (i1_4 - tmpi);
    tmpr = ((0.382683432365 * r1_7) + (0.923879532511 * i1_7));
    tmpi = ((0.382683432365 * i1_7) - (0.923879532511 * r1_7));
    ((out[3]).re) = (r1_6 + tmpr);
    ((out[3]).im) = (i1_6 + tmpi);
    ((out[11]).re) = (r1_6 - tmpr);
    ((out[11]).im) = (i1_6 - tmpi);
    ((out[4]).re) = (r1_8 + i1_9);
    ((out[4]).im) = (i1_8 - r1_9);
    ((out[12]).re) = (r1_8 - i1_9);
    ((out[12]).im) = (i1_8 + r1_9);
    tmpr = ((0.923879532511 * i1_11) - (0.382683432365 * r1_11));
    tmpi = ((0.923879532511 * r1_11) + (0.382683432365 * i1_11));
    ((out[5]).re) = (r1_10 + tmpr);
    ((out[5]).im) = (i1_10 - tmpi);
    ((out[13]).re) = (r1_10 - tmpr);
    ((out[13]).im) = (i1_10 + tmpi);
    tmpr = (0.707106781187 * (i1_13 - r1_13));
    tmpi = (0.707106781187 * (r1_13 + i1_13));
    ((out[6]).re) = (r1_12 + tmpr);
    ((out[6]).im) = (i1_12 - tmpi);
    ((out[14]).re) = (r1_12 - tmpr);
    ((out[14]).im) = (i1_12 + tmpi);
    tmpr = ((0.382683432365 * i1_15) - (0.923879532511 * r1_15));
    tmpi = ((0.382683432365 * r1_15) + (0.923879532511 * i1_15));
    ((out[7]).re) = (r1_14 + tmpr);
    ((out[7]).im) = (i1_14 - tmpi);
    ((out[15]).re) = (r1_14 - tmpr);
    ((out[15]).im) = (i1_14 + tmpi);
  }
}

static void * _taskFunc20_(void *);
static void * _taskFunc19_(void *);


void fft_twiddle_16(int a, int b, struct _noname16_ (* in), struct _noname16_ (* out), struct _noname16_ (* W), int nW, int nWdn, int m)
{
  int l1, i;
  struct _noname16_ (* jp);
  struct _noname16_ (* kp);
  double tmpr;
  double tmpi;
  double wr;
  double wi;

  # 1685 "fft.c"
  if ((b - a) < 128)
    {
      for (i = a, l1 = nWdn * i, kp = out + i; i < b; i++, l1 += nWdn, kp++)
        {
          jp = in + i;
          {
            double r1_0;
            double i1_0;
            double r1_1;
            double i1_1;
            double r1_2;
            double i1_2;
            double r1_3;
            double i1_3;
            double r1_4;
            double i1_4;
            double r1_5;
            double i1_5;
            double r1_6;
            double i1_6;
            double r1_7;
            double i1_7;
            double r1_8;
            double i1_8;
            double r1_9;
            double i1_9;
            double r1_10;
            double i1_10;
            double r1_11;
            double i1_11;
            double r1_12;
            double i1_12;
            double r1_13;
            double i1_13;
            double r1_14;
            double i1_14;
            double r1_15;
            double i1_15;

            # 1360 "fft.c"
            {
              double r2_0;
              double i2_0;
              double r2_2;
              double i2_2;
              double r2_4;
              double i2_4;
              double r2_6;
              double i2_6;
              double r2_8;
              double i2_8;
              double r2_10;
              double i2_10;
              double r2_12;
              double i2_12;
              double r2_14;
              double i2_14;

              # 1369 "fft.c"
              {
                double r3_0;
                double i3_0;
                double r3_4;
                double i3_4;
                double r3_8;
                double i3_8;
                double r3_12;
                double i3_12;

                # 1374 "fft.c"
                {
                  double r4_0;
                  double i4_0;
                  double r4_8;
                  double i4_8;

                  # 1377 "fft.c"
                  r4_0 = ((jp[0 * m]).re);
                  i4_0 = ((jp[0 * m]).im);
                  wr = ((W[8 * l1]).re);
                  wi = ((W[8 * l1]).im);
                  tmpr = ((jp[8 * m]).re);
                  tmpi = ((jp[8 * m]).im);
                  r4_8 = ((wr * tmpr) - (wi * tmpi));
                  i4_8 = ((wi * tmpr) + (wr * tmpi));
                  r3_0 = (r4_0 + r4_8);
                  i3_0 = (i4_0 + i4_8);
                  r3_8 = (r4_0 - r4_8);
                  i3_8 = (i4_0 - i4_8);
                }
                {
                  double r4_4;
                  double i4_4;
                  double r4_12;
                  double i4_12;

                  # 1393 "fft.c"
                  wr = ((W[4 * l1]).re);
                  wi = ((W[4 * l1]).im);
                  tmpr = ((jp[4 * m]).re);
                  tmpi = ((jp[4 * m]).im);
                  r4_4 = ((wr * tmpr) - (wi * tmpi));
                  i4_4 = ((wi * tmpr) + (wr * tmpi));
                  wr = ((W[12 * l1]).re);
                  wi = ((W[12 * l1]).im);
                  tmpr = ((jp[12 * m]).re);
                  tmpi = ((jp[12 * m]).im);
                  r4_12 = ((wr * tmpr) - (wi * tmpi));
                  i4_12 = ((wi * tmpr) + (wr * tmpi));
                  r3_4 = (r4_4 + r4_12);
                  i3_4 = (i4_4 + i4_12);
                  r3_12 = (r4_4 - r4_12);
                  i3_12 = (i4_4 - i4_12);
                }
                r2_0 = (r3_0 + r3_4);
                i2_0 = (i3_0 + i3_4);
                r2_8 = (r3_0 - r3_4);
                i2_8 = (i3_0 - i3_4);
                r2_4 = (r3_8 + i3_12);
                i2_4 = (i3_8 - r3_12);
                r2_12 = (r3_8 - i3_12);
                i2_12 = (i3_8 + r3_12);
              }
              {
                double r3_2;
                double i3_2;
                double r3_6;
                double i3_6;
                double r3_10;
                double i3_10;
                double r3_14;
                double i3_14;

                # 1424 "fft.c"
                {
                  double r4_2;
                  double i4_2;
                  double r4_10;
                  double i4_10;

                  # 1427 "fft.c"
                  wr = ((W[2 * l1]).re);
                  wi = ((W[2 * l1]).im);
                  tmpr = ((jp[2 * m]).re);
                  tmpi = ((jp[2 * m]).im);
                  r4_2 = ((wr * tmpr) - (wi * tmpi));
                  i4_2 = ((wi * tmpr) + (wr * tmpi));
                  wr = ((W[10 * l1]).re);
                  wi = ((W[10 * l1]).im);
                  tmpr = ((jp[10 * m]).re);
                  tmpi = ((jp[10 * m]).im);
                  r4_10 = ((wr * tmpr) - (wi * tmpi));
                  i4_10 = ((wi * tmpr) + (wr * tmpi));
                  r3_2 = (r4_2 + r4_10);
                  i3_2 = (i4_2 + i4_10);
                  r3_10 = (r4_2 - r4_10);
                  i3_10 = (i4_2 - i4_10);
                }
                {
                  double r4_6;
                  double i4_6;
                  double r4_14;
                  double i4_14;

                  # 1447 "fft.c"
                  wr = ((W[6 * l1]).re);
                  wi = ((W[6 * l1]).im);
                  tmpr = ((jp[6 * m]).re);
                  tmpi = ((jp[6 * m]).im);
                  r4_6 = ((wr * tmpr) - (wi * tmpi));
                  i4_6 = ((wi * tmpr) + (wr * tmpi));
                  wr = ((W[14 * l1]).re);
                  wi = ((W[14 * l1]).im);
                  tmpr = ((jp[14 * m]).re);
                  tmpi = ((jp[14 * m]).im);
                  r4_14 = ((wr * tmpr) - (wi * tmpi));
                  i4_14 = ((wi * tmpr) + (wr * tmpi));
                  r3_6 = (r4_6 + r4_14);
                  i3_6 = (i4_6 + i4_14);
                  r3_14 = (r4_6 - r4_14);
                  i3_14 = (i4_6 - i4_14);
                }
                r2_2 = (r3_2 + r3_6);
                i2_2 = (i3_2 + i3_6);
                r2_10 = (r3_2 - r3_6);
                i2_10 = (i3_2 - i3_6);
                r2_6 = (r3_10 + i3_14);
                i2_6 = (i3_10 - r3_14);
                r2_14 = (r3_10 - i3_14);
                i2_14 = (i3_10 + r3_14);
              }
              r1_0 = (r2_0 + r2_2);
              i1_0 = (i2_0 + i2_2);
              r1_8 = (r2_0 - r2_2);
              i1_8 = (i2_0 - i2_2);
              tmpr = (0.707106781187 * (r2_6 + i2_6));
              tmpi = (0.707106781187 * (i2_6 - r2_6));
              r1_2 = (r2_4 + tmpr);
              i1_2 = (i2_4 + tmpi);
              r1_10 = (r2_4 - tmpr);
              i1_10 = (i2_4 - tmpi);
              r1_4 = (r2_8 + i2_10);
              i1_4 = (i2_8 - r2_10);
              r1_12 = (r2_8 - i2_10);
              i1_12 = (i2_8 + r2_10);
              tmpr = (0.707106781187 * (i2_14 - r2_14));
              tmpi = (0.707106781187 * (r2_14 + i2_14));
              r1_6 = (r2_12 + tmpr);
              i1_6 = (i2_12 - tmpi);
              r1_14 = (r2_12 - tmpr);
              i1_14 = (i2_12 + tmpi);
            }
            {
              double r2_1;
              double i2_1;
              double r2_3;
              double i2_3;
              double r2_5;
              double i2_5;
              double r2_7;
              double i2_7;
              double r2_9;
              double i2_9;
              double r2_11;
              double i2_11;
              double r2_13;
              double i2_13;
              double r2_15;
              double i2_15;

              # 1503 "fft.c"
              {
                double r3_1;
                double i3_1;
                double r3_5;
                double i3_5;
                double r3_9;
                double i3_9;
                double r3_13;
                double i3_13;

                # 1508 "fft.c"
                {
                  double r4_1;
                  double i4_1;
                  double r4_9;
                  double i4_9;

                  # 1511 "fft.c"
                  wr = ((W[1 * l1]).re);
                  wi = ((W[1 * l1]).im);
                  tmpr = ((jp[1 * m]).re);
                  tmpi = ((jp[1 * m]).im);
                  r4_1 = ((wr * tmpr) - (wi * tmpi));
                  i4_1 = ((wi * tmpr) + (wr * tmpi));
                  wr = ((W[9 * l1]).re);
                  wi = ((W[9 * l1]).im);
                  tmpr = ((jp[9 * m]).re);
                  tmpi = ((jp[9 * m]).im);
                  r4_9 = ((wr * tmpr) - (wi * tmpi));
                  i4_9 = ((wi * tmpr) + (wr * tmpi));
                  r3_1 = (r4_1 + r4_9);
                  i3_1 = (i4_1 + i4_9);
                  r3_9 = (r4_1 - r4_9);
                  i3_9 = (i4_1 - i4_9);
                }
                {
                  double r4_5;
                  double i4_5;
                  double r4_13;
                  double i4_13;

                  # 1531 "fft.c"
                  wr = ((W[5 * l1]).re);
                  wi = ((W[5 * l1]).im);
                  tmpr = ((jp[5 * m]).re);
                  tmpi = ((jp[5 * m]).im);
                  r4_5 = ((wr * tmpr) - (wi * tmpi));
                  i4_5 = ((wi * tmpr) + (wr * tmpi));
                  wr = ((W[13 * l1]).re);
                  wi = ((W[13 * l1]).im);
                  tmpr = ((jp[13 * m]).re);
                  tmpi = ((jp[13 * m]).im);
                  r4_13 = ((wr * tmpr) - (wi * tmpi));
                  i4_13 = ((wi * tmpr) + (wr * tmpi));
                  r3_5 = (r4_5 + r4_13);
                  i3_5 = (i4_5 + i4_13);
                  r3_13 = (r4_5 - r4_13);
                  i3_13 = (i4_5 - i4_13);
                }
                r2_1 = (r3_1 + r3_5);
                i2_1 = (i3_1 + i3_5);
                r2_9 = (r3_1 - r3_5);
                i2_9 = (i3_1 - i3_5);
                r2_5 = (r3_9 + i3_13);
                i2_5 = (i3_9 - r3_13);
                r2_13 = (r3_9 - i3_13);
                i2_13 = (i3_9 + r3_13);
              }
              {
                double r3_3;
                double i3_3;
                double r3_7;
                double i3_7;
                double r3_11;
                double i3_11;
                double r3_15;
                double i3_15;

                # 1562 "fft.c"
                {
                  double r4_3;
                  double i4_3;
                  double r4_11;
                  double i4_11;

                  # 1565 "fft.c"
                  wr = ((W[3 * l1]).re);
                  wi = ((W[3 * l1]).im);
                  tmpr = ((jp[3 * m]).re);
                  tmpi = ((jp[3 * m]).im);
                  r4_3 = ((wr * tmpr) - (wi * tmpi));
                  i4_3 = ((wi * tmpr) + (wr * tmpi));
                  wr = ((W[11 * l1]).re);
                  wi = ((W[11 * l1]).im);
                  tmpr = ((jp[11 * m]).re);
                  tmpi = ((jp[11 * m]).im);
                  r4_11 = ((wr * tmpr) - (wi * tmpi));
                  i4_11 = ((wi * tmpr) + (wr * tmpi));
                  r3_3 = (r4_3 + r4_11);
                  i3_3 = (i4_3 + i4_11);
                  r3_11 = (r4_3 - r4_11);
                  i3_11 = (i4_3 - i4_11);
                }
                {
                  double r4_7;
                  double i4_7;
                  double r4_15;
                  double i4_15;

                  # 1585 "fft.c"
                  wr = ((W[7 * l1]).re);
                  wi = ((W[7 * l1]).im);
                  tmpr = ((jp[7 * m]).re);
                  tmpi = ((jp[7 * m]).im);
                  r4_7 = ((wr * tmpr) - (wi * tmpi));
                  i4_7 = ((wi * tmpr) + (wr * tmpi));
                  wr = ((W[15 * l1]).re);
                  wi = ((W[15 * l1]).im);
                  tmpr = ((jp[15 * m]).re);
                  tmpi = ((jp[15 * m]).im);
                  r4_15 = ((wr * tmpr) - (wi * tmpi));
                  i4_15 = ((wi * tmpr) + (wr * tmpi));
                  r3_7 = (r4_7 + r4_15);
                  i3_7 = (i4_7 + i4_15);
                  r3_15 = (r4_7 - r4_15);
                  i3_15 = (i4_7 - i4_15);
                }
                r2_3 = (r3_3 + r3_7);
                i2_3 = (i3_3 + i3_7);
                r2_11 = (r3_3 - r3_7);
                i2_11 = (i3_3 - i3_7);
                r2_7 = (r3_11 + i3_15);
                i2_7 = (i3_11 - r3_15);
                r2_15 = (r3_11 - i3_15);
                i2_15 = (i3_11 + r3_15);
              }
              r1_1 = (r2_1 + r2_3);
              i1_1 = (i2_1 + i2_3);
              r1_9 = (r2_1 - r2_3);
              i1_9 = (i2_1 - i2_3);
              tmpr = (0.707106781187 * (r2_7 + i2_7));
              tmpi = (0.707106781187 * (i2_7 - r2_7));
              r1_3 = (r2_5 + tmpr);
              i1_3 = (i2_5 + tmpi);
              r1_11 = (r2_5 - tmpr);
              i1_11 = (i2_5 - tmpi);
              r1_5 = (r2_9 + i2_11);
              i1_5 = (i2_9 - r2_11);
              r1_13 = (r2_9 - i2_11);
              i1_13 = (i2_9 + r2_11);
              tmpr = (0.707106781187 * (i2_15 - r2_15));
              tmpi = (0.707106781187 * (r2_15 + i2_15));
              r1_7 = (r2_13 + tmpr);
              i1_7 = (i2_13 - tmpi);
              r1_15 = (r2_13 - tmpr);
              i1_15 = (i2_13 + tmpi);
            }
            ((kp[0 * m]).re) = (r1_0 + r1_1);
            ((kp[0 * m]).im) = (i1_0 + i1_1);
            ((kp[8 * m]).re) = (r1_0 - r1_1);
            ((kp[8 * m]).im) = (i1_0 - i1_1);
            tmpr = ((0.923879532511 * r1_3) + (0.382683432365 * i1_3));
            tmpi = ((0.923879532511 * i1_3) - (0.382683432365 * r1_3));
            ((kp[1 * m]).re) = (r1_2 + tmpr);
            ((kp[1 * m]).im) = (i1_2 + tmpi);
            ((kp[9 * m]).re) = (r1_2 - tmpr);
            ((kp[9 * m]).im) = (i1_2 - tmpi);
            tmpr = (0.707106781187 * (r1_5 + i1_5));
            tmpi = (0.707106781187 * (i1_5 - r1_5));
            ((kp[2 * m]).re) = (r1_4 + tmpr);
            ((kp[2 * m]).im) = (i1_4 + tmpi);
            ((kp[10 * m]).re) = (r1_4 - tmpr);
            ((kp[10 * m]).im) = (i1_4 - tmpi);
            tmpr = ((0.382683432365 * r1_7) + (0.923879532511 * i1_7));
            tmpi = ((0.382683432365 * i1_7) - (0.923879532511 * r1_7));
            ((kp[3 * m]).re) = (r1_6 + tmpr);
            ((kp[3 * m]).im) = (i1_6 + tmpi);
            ((kp[11 * m]).re) = (r1_6 - tmpr);
            ((kp[11 * m]).im) = (i1_6 - tmpi);
            ((kp[4 * m]).re) = (r1_8 + i1_9);
            ((kp[4 * m]).im) = (i1_8 - r1_9);
            ((kp[12 * m]).re) = (r1_8 - i1_9);
            ((kp[12 * m]).im) = (i1_8 + r1_9);
            tmpr = ((0.923879532511 * i1_11) - (0.382683432365 * r1_11));
            tmpi = ((0.923879532511 * r1_11) + (0.382683432365 * i1_11));
            ((kp[5 * m]).re) = (r1_10 + tmpr);
            ((kp[5 * m]).im) = (i1_10 - tmpi);
            ((kp[13 * m]).re) = (r1_10 - tmpr);
            ((kp[13 * m]).im) = (i1_10 + tmpi);
            tmpr = (0.707106781187 * (i1_13 - r1_13));
            tmpi = (0.707106781187 * (r1_13 + i1_13));
            ((kp[6 * m]).re) = (r1_12 + tmpr);
            ((kp[6 * m]).im) = (i1_12 - tmpi);
            ((kp[14 * m]).re) = (r1_12 - tmpr);
            ((kp[14 * m]).im) = (i1_12 + tmpi);
            tmpr = ((0.382683432365 * i1_15) - (0.923879532511 * r1_15));
            tmpi = ((0.382683432365 * r1_15) + (0.923879532511 * i1_15));
            ((kp[7 * m]).re) = (r1_14 + tmpr);
            ((kp[7 * m]).im) = (i1_14 - tmpi);
            ((kp[15 * m]).re) = (r1_14 - tmpr);
            ((kp[15 * m]).im) = (i1_14 + tmpi);
          }
        }
    }
  else
    {
      int ab = (a + b) / 2;

      /* (l1680) #pragma omp task untied
 */
      # 1680 "fft.c"
      if (omp_in_final() || ort_task_throttling())
        {
          void * _itn;

          /* byvalue variables */
          int _fip_a = a, a = _fip_a;
          int _fip_ab = ab, ab = _fip_ab;
          struct _noname16_ (* _fip_in) = in, (* in) = _fip_in;
          struct _noname16_ (* _fip_out) = out, (* out) = _fip_out;
          struct _noname16_ (* _fip_W) = W, (* W) = _fip_W;
          int _fip_nW = nW, nW = _fip_nW;
          int _fip_nWdn = nWdn, nWdn = _fip_nWdn;
          int _fip_m = m, m = _fip_m;

          _itn = ort_task_immediate_start(0);
          {
            # 1681 "fft.c"
            fft_twiddle_16(a, ab, in, out, W, nW, nWdn, m);
            CANCEL_task_1680 :
              ;
          }
          ort_task_immediate_end(_itn);
        }
      else
        {
          struct __taskenv__ {
              int a;
              int ab;
              struct _noname16_ (* in);
              struct _noname16_ (* out);
              struct _noname16_ (* W);
              int nW;
              int nWdn;
              int m;
            } * _tenv;

          _tenv = (struct __taskenv__ *) ort_taskenv_alloc(sizeof(struct __taskenv__), _taskFunc19_);
          /* byvalue variables */
          _tenv->a = a;
          _tenv->ab = ab;
          _tenv->in = in;
          _tenv->out = out;
          _tenv->W = W;
          _tenv->nW = nW;
          _tenv->nWdn = nWdn;
          _tenv->m = m;
          ort_new_task(_taskFunc19_, (void *) _tenv, 0, 0, 1, 0, (void *) 0, 0, 0, 0);
          /* no other operations */
        }
      /* (l1682) #pragma omp task untied
 */
      # 1682 "fft.c"
      if (omp_in_final() || ort_task_throttling())
        {
          void * _itn;

          /* byvalue variables */
          int _fip_ab = ab, ab = _fip_ab;
          int _fip_b = b, b = _fip_b;
          struct _noname16_ (* _fip_in) = in, (* in) = _fip_in;
          struct _noname16_ (* _fip_out) = out, (* out) = _fip_out;
          struct _noname16_ (* _fip_W) = W, (* W) = _fip_W;
          int _fip_nW = nW, nW = _fip_nW;
          int _fip_nWdn = nWdn, nWdn = _fip_nWdn;
          int _fip_m = m, m = _fip_m;

          _itn = ort_task_immediate_start(0);
          {
            # 1683 "fft.c"
            fft_twiddle_16(ab, b, in, out, W, nW, nWdn, m);
            CANCEL_task_1682 :
              ;
          }
          ort_task_immediate_end(_itn);
        }
      else
        {
          struct __taskenv__ {
              int ab;
              int b;
              struct _noname16_ (* in);
              struct _noname16_ (* out);
              struct _noname16_ (* W);
              int nW;
              int nWdn;
              int m;
            } * _tenv;

          _tenv = (struct __taskenv__ *) ort_taskenv_alloc(sizeof(struct __taskenv__), _taskFunc20_);
          /* byvalue variables */
          _tenv->ab = ab;
          _tenv->b = b;
          _tenv->in = in;
          _tenv->out = out;
          _tenv->W = W;
          _tenv->nW = nW;
          _tenv->nWdn = nWdn;
          _tenv->m = m;
          ort_new_task(_taskFunc20_, (void *) _tenv, 0, 0, 1, 0, (void *) 0, 0, 0, 0);
          /* no other operations */
        }
      /* (l1684) #pragma omp taskwait 
 */
      # 1684 "fft.c"
      ort_taskwait(0);
    }
}


static void * _taskFunc19_(void * __arg)
{
  struct __taskenv__ {
      int a;
      int ab;
      struct _noname16_ (* in);
      struct _noname16_ (* out);
      struct _noname16_ (* W);
      int nW;
      int nWdn;
      int m;
    };
  struct __taskenv__ * _tenv = (struct __taskenv__ *) __arg;

  /* byvalue variables */
  int a = _tenv->a;
  int ab = _tenv->ab;
  struct _noname16_ (* in) = _tenv->in;
  struct _noname16_ (* out) = _tenv->out;
  struct _noname16_ (* W) = _tenv->W;
  int nW = _tenv->nW;
  int nWdn = _tenv->nWdn;
  int m = _tenv->m;

  /* no initializations */
  /* (l1680) #pragma omp task untied
 -- body moved below */
  # 1680 "fft.c"
  {
    # 1681 "fft.c"
    fft_twiddle_16(a, ab, in, out, W, nW, nWdn, m);
    CANCEL_task_1680 :
      ;
  }
  /* no other operations */
  ort_taskenv_free(_tenv, _taskFunc19_);
  return ((void *) 0);
}


static void * _taskFunc20_(void * __arg)
{
  struct __taskenv__ {
      int ab;
      int b;
      struct _noname16_ (* in);
      struct _noname16_ (* out);
      struct _noname16_ (* W);
      int nW;
      int nWdn;
      int m;
    };
  struct __taskenv__ * _tenv = (struct __taskenv__ *) __arg;

  /* byvalue variables */
  int ab = _tenv->ab;
  int b = _tenv->b;
  struct _noname16_ (* in) = _tenv->in;
  struct _noname16_ (* out) = _tenv->out;
  struct _noname16_ (* W) = _tenv->W;
  int nW = _tenv->nW;
  int nWdn = _tenv->nWdn;
  int m = _tenv->m;

  /* no initializations */
  /* (l1682) #pragma omp task untied
 -- body moved below */
  # 1682 "fft.c"
  {
    # 1683 "fft.c"
    fft_twiddle_16(ab, b, in, out, W, nW, nWdn, m);
    CANCEL_task_1682 :
      ;
  }
  /* no other operations */
  ort_taskenv_free(_tenv, _taskFunc20_);
  return ((void *) 0);
}


void fft_twiddle_16_seq(int a, int b, struct _noname16_ (* in), struct _noname16_ (* out), struct _noname16_ (* W), int nW, int nWdn, int m)
# 1688 "fft.c"
{
  int l1, i;
  struct _noname16_ (* jp);
  struct _noname16_ (* kp);
  double tmpr;
  double tmpi;
  double wr;
  double wi;

  # 2035 "fft.c"
  if ((b - a) < 128)
    {
      for (i = a, l1 = nWdn * i, kp = out + i; i < b; i++, l1 += nWdn, kp++)
        {
          jp = in + i;
          {
            double r1_0;
            double i1_0;
            double r1_1;
            double i1_1;
            double r1_2;
            double i1_2;
            double r1_3;
            double i1_3;
            double r1_4;
            double i1_4;
            double r1_5;
            double i1_5;
            double r1_6;
            double i1_6;
            double r1_7;
            double i1_7;
            double r1_8;
            double i1_8;
            double r1_9;
            double i1_9;
            double r1_10;
            double i1_10;
            double r1_11;
            double i1_11;
            double r1_12;
            double i1_12;
            double r1_13;
            double i1_13;
            double r1_14;
            double i1_14;
            double r1_15;
            double i1_15;

            # 1713 "fft.c"
            {
              double r2_0;
              double i2_0;
              double r2_2;
              double i2_2;
              double r2_4;
              double i2_4;
              double r2_6;
              double i2_6;
              double r2_8;
              double i2_8;
              double r2_10;
              double i2_10;
              double r2_12;
              double i2_12;
              double r2_14;
              double i2_14;

              # 1722 "fft.c"
              {
                double r3_0;
                double i3_0;
                double r3_4;
                double i3_4;
                double r3_8;
                double i3_8;
                double r3_12;
                double i3_12;

                # 1727 "fft.c"
                {
                  double r4_0;
                  double i4_0;
                  double r4_8;
                  double i4_8;

                  # 1730 "fft.c"
                  r4_0 = ((jp[0 * m]).re);
                  i4_0 = ((jp[0 * m]).im);
                  wr = ((W[8 * l1]).re);
                  wi = ((W[8 * l1]).im);
                  tmpr = ((jp[8 * m]).re);
                  tmpi = ((jp[8 * m]).im);
                  r4_8 = ((wr * tmpr) - (wi * tmpi));
                  i4_8 = ((wi * tmpr) + (wr * tmpi));
                  r3_0 = (r4_0 + r4_8);
                  i3_0 = (i4_0 + i4_8);
                  r3_8 = (r4_0 - r4_8);
                  i3_8 = (i4_0 - i4_8);
                }
                {
                  double r4_4;
                  double i4_4;
                  double r4_12;
                  double i4_12;

                  # 1746 "fft.c"
                  wr = ((W[4 * l1]).re);
                  wi = ((W[4 * l1]).im);
                  tmpr = ((jp[4 * m]).re);
                  tmpi = ((jp[4 * m]).im);
                  r4_4 = ((wr * tmpr) - (wi * tmpi));
                  i4_4 = ((wi * tmpr) + (wr * tmpi));
                  wr = ((W[12 * l1]).re);
                  wi = ((W[12 * l1]).im);
                  tmpr = ((jp[12 * m]).re);
                  tmpi = ((jp[12 * m]).im);
                  r4_12 = ((wr * tmpr) - (wi * tmpi));
                  i4_12 = ((wi * tmpr) + (wr * tmpi));
                  r3_4 = (r4_4 + r4_12);
                  i3_4 = (i4_4 + i4_12);
                  r3_12 = (r4_4 - r4_12);
                  i3_12 = (i4_4 - i4_12);
                }
                r2_0 = (r3_0 + r3_4);
                i2_0 = (i3_0 + i3_4);
                r2_8 = (r3_0 - r3_4);
                i2_8 = (i3_0 - i3_4);
                r2_4 = (r3_8 + i3_12);
                i2_4 = (i3_8 - r3_12);
                r2_12 = (r3_8 - i3_12);
                i2_12 = (i3_8 + r3_12);
              }
              {
                double r3_2;
                double i3_2;
                double r3_6;
                double i3_6;
                double r3_10;
                double i3_10;
                double r3_14;
                double i3_14;

                # 1777 "fft.c"
                {
                  double r4_2;
                  double i4_2;
                  double r4_10;
                  double i4_10;

                  # 1780 "fft.c"
                  wr = ((W[2 * l1]).re);
                  wi = ((W[2 * l1]).im);
                  tmpr = ((jp[2 * m]).re);
                  tmpi = ((jp[2 * m]).im);
                  r4_2 = ((wr * tmpr) - (wi * tmpi));
                  i4_2 = ((wi * tmpr) + (wr * tmpi));
                  wr = ((W[10 * l1]).re);
                  wi = ((W[10 * l1]).im);
                  tmpr = ((jp[10 * m]).re);
                  tmpi = ((jp[10 * m]).im);
                  r4_10 = ((wr * tmpr) - (wi * tmpi));
                  i4_10 = ((wi * tmpr) + (wr * tmpi));
                  r3_2 = (r4_2 + r4_10);
                  i3_2 = (i4_2 + i4_10);
                  r3_10 = (r4_2 - r4_10);
                  i3_10 = (i4_2 - i4_10);
                }
                {
                  double r4_6;
                  double i4_6;
                  double r4_14;
                  double i4_14;

                  # 1800 "fft.c"
                  wr = ((W[6 * l1]).re);
                  wi = ((W[6 * l1]).im);
                  tmpr = ((jp[6 * m]).re);
                  tmpi = ((jp[6 * m]).im);
                  r4_6 = ((wr * tmpr) - (wi * tmpi));
                  i4_6 = ((wi * tmpr) + (wr * tmpi));
                  wr = ((W[14 * l1]).re);
                  wi = ((W[14 * l1]).im);
                  tmpr = ((jp[14 * m]).re);
                  tmpi = ((jp[14 * m]).im);
                  r4_14 = ((wr * tmpr) - (wi * tmpi));
                  i4_14 = ((wi * tmpr) + (wr * tmpi));
                  r3_6 = (r4_6 + r4_14);
                  i3_6 = (i4_6 + i4_14);
                  r3_14 = (r4_6 - r4_14);
                  i3_14 = (i4_6 - i4_14);
                }
                r2_2 = (r3_2 + r3_6);
                i2_2 = (i3_2 + i3_6);
                r2_10 = (r3_2 - r3_6);
                i2_10 = (i3_2 - i3_6);
                r2_6 = (r3_10 + i3_14);
                i2_6 = (i3_10 - r3_14);
                r2_14 = (r3_10 - i3_14);
                i2_14 = (i3_10 + r3_14);
              }
              r1_0 = (r2_0 + r2_2);
              i1_0 = (i2_0 + i2_2);
              r1_8 = (r2_0 - r2_2);
              i1_8 = (i2_0 - i2_2);
              tmpr = (0.707106781187 * (r2_6 + i2_6));
              tmpi = (0.707106781187 * (i2_6 - r2_6));
              r1_2 = (r2_4 + tmpr);
              i1_2 = (i2_4 + tmpi);
              r1_10 = (r2_4 - tmpr);
              i1_10 = (i2_4 - tmpi);
              r1_4 = (r2_8 + i2_10);
              i1_4 = (i2_8 - r2_10);
              r1_12 = (r2_8 - i2_10);
              i1_12 = (i2_8 + r2_10);
              tmpr = (0.707106781187 * (i2_14 - r2_14));
              tmpi = (0.707106781187 * (r2_14 + i2_14));
              r1_6 = (r2_12 + tmpr);
              i1_6 = (i2_12 - tmpi);
              r1_14 = (r2_12 - tmpr);
              i1_14 = (i2_12 + tmpi);
            }
            {
              double r2_1;
              double i2_1;
              double r2_3;
              double i2_3;
              double r2_5;
              double i2_5;
              double r2_7;
              double i2_7;
              double r2_9;
              double i2_9;
              double r2_11;
              double i2_11;
              double r2_13;
              double i2_13;
              double r2_15;
              double i2_15;

              # 1856 "fft.c"
              {
                double r3_1;
                double i3_1;
                double r3_5;
                double i3_5;
                double r3_9;
                double i3_9;
                double r3_13;
                double i3_13;

                # 1861 "fft.c"
                {
                  double r4_1;
                  double i4_1;
                  double r4_9;
                  double i4_9;

                  # 1864 "fft.c"
                  wr = ((W[1 * l1]).re);
                  wi = ((W[1 * l1]).im);
                  tmpr = ((jp[1 * m]).re);
                  tmpi = ((jp[1 * m]).im);
                  r4_1 = ((wr * tmpr) - (wi * tmpi));
                  i4_1 = ((wi * tmpr) + (wr * tmpi));
                  wr = ((W[9 * l1]).re);
                  wi = ((W[9 * l1]).im);
                  tmpr = ((jp[9 * m]).re);
                  tmpi = ((jp[9 * m]).im);
                  r4_9 = ((wr * tmpr) - (wi * tmpi));
                  i4_9 = ((wi * tmpr) + (wr * tmpi));
                  r3_1 = (r4_1 + r4_9);
                  i3_1 = (i4_1 + i4_9);
                  r3_9 = (r4_1 - r4_9);
                  i3_9 = (i4_1 - i4_9);
                }
                {
                  double r4_5;
                  double i4_5;
                  double r4_13;
                  double i4_13;

                  # 1884 "fft.c"
                  wr = ((W[5 * l1]).re);
                  wi = ((W[5 * l1]).im);
                  tmpr = ((jp[5 * m]).re);
                  tmpi = ((jp[5 * m]).im);
                  r4_5 = ((wr * tmpr) - (wi * tmpi));
                  i4_5 = ((wi * tmpr) + (wr * tmpi));
                  wr = ((W[13 * l1]).re);
                  wi = ((W[13 * l1]).im);
                  tmpr = ((jp[13 * m]).re);
                  tmpi = ((jp[13 * m]).im);
                  r4_13 = ((wr * tmpr) - (wi * tmpi));
                  i4_13 = ((wi * tmpr) + (wr * tmpi));
                  r3_5 = (r4_5 + r4_13);
                  i3_5 = (i4_5 + i4_13);
                  r3_13 = (r4_5 - r4_13);
                  i3_13 = (i4_5 - i4_13);
                }
                r2_1 = (r3_1 + r3_5);
                i2_1 = (i3_1 + i3_5);
                r2_9 = (r3_1 - r3_5);
                i2_9 = (i3_1 - i3_5);
                r2_5 = (r3_9 + i3_13);
                i2_5 = (i3_9 - r3_13);
                r2_13 = (r3_9 - i3_13);
                i2_13 = (i3_9 + r3_13);
              }
              {
                double r3_3;
                double i3_3;
                double r3_7;
                double i3_7;
                double r3_11;
                double i3_11;
                double r3_15;
                double i3_15;

                # 1915 "fft.c"
                {
                  double r4_3;
                  double i4_3;
                  double r4_11;
                  double i4_11;

                  # 1918 "fft.c"
                  wr = ((W[3 * l1]).re);
                  wi = ((W[3 * l1]).im);
                  tmpr = ((jp[3 * m]).re);
                  tmpi = ((jp[3 * m]).im);
                  r4_3 = ((wr * tmpr) - (wi * tmpi));
                  i4_3 = ((wi * tmpr) + (wr * tmpi));
                  wr = ((W[11 * l1]).re);
                  wi = ((W[11 * l1]).im);
                  tmpr = ((jp[11 * m]).re);
                  tmpi = ((jp[11 * m]).im);
                  r4_11 = ((wr * tmpr) - (wi * tmpi));
                  i4_11 = ((wi * tmpr) + (wr * tmpi));
                  r3_3 = (r4_3 + r4_11);
                  i3_3 = (i4_3 + i4_11);
                  r3_11 = (r4_3 - r4_11);
                  i3_11 = (i4_3 - i4_11);
                }
                {
                  double r4_7;
                  double i4_7;
                  double r4_15;
                  double i4_15;

                  # 1938 "fft.c"
                  wr = ((W[7 * l1]).re);
                  wi = ((W[7 * l1]).im);
                  tmpr = ((jp[7 * m]).re);
                  tmpi = ((jp[7 * m]).im);
                  r4_7 = ((wr * tmpr) - (wi * tmpi));
                  i4_7 = ((wi * tmpr) + (wr * tmpi));
                  wr = ((W[15 * l1]).re);
                  wi = ((W[15 * l1]).im);
                  tmpr = ((jp[15 * m]).re);
                  tmpi = ((jp[15 * m]).im);
                  r4_15 = ((wr * tmpr) - (wi * tmpi));
                  i4_15 = ((wi * tmpr) + (wr * tmpi));
                  r3_7 = (r4_7 + r4_15);
                  i3_7 = (i4_7 + i4_15);
                  r3_15 = (r4_7 - r4_15);
                  i3_15 = (i4_7 - i4_15);
                }
                r2_3 = (r3_3 + r3_7);
                i2_3 = (i3_3 + i3_7);
                r2_11 = (r3_3 - r3_7);
                i2_11 = (i3_3 - i3_7);
                r2_7 = (r3_11 + i3_15);
                i2_7 = (i3_11 - r3_15);
                r2_15 = (r3_11 - i3_15);
                i2_15 = (i3_11 + r3_15);
              }
              r1_1 = (r2_1 + r2_3);
              i1_1 = (i2_1 + i2_3);
              r1_9 = (r2_1 - r2_3);
              i1_9 = (i2_1 - i2_3);
              tmpr = (0.707106781187 * (r2_7 + i2_7));
              tmpi = (0.707106781187 * (i2_7 - r2_7));
              r1_3 = (r2_5 + tmpr);
              i1_3 = (i2_5 + tmpi);
              r1_11 = (r2_5 - tmpr);
              i1_11 = (i2_5 - tmpi);
              r1_5 = (r2_9 + i2_11);
              i1_5 = (i2_9 - r2_11);
              r1_13 = (r2_9 - i2_11);
              i1_13 = (i2_9 + r2_11);
              tmpr = (0.707106781187 * (i2_15 - r2_15));
              tmpi = (0.707106781187 * (r2_15 + i2_15));
              r1_7 = (r2_13 + tmpr);
              i1_7 = (i2_13 - tmpi);
              r1_15 = (r2_13 - tmpr);
              i1_15 = (i2_13 + tmpi);
            }
            ((kp[0 * m]).re) = (r1_0 + r1_1);
            ((kp[0 * m]).im) = (i1_0 + i1_1);
            ((kp[8 * m]).re) = (r1_0 - r1_1);
            ((kp[8 * m]).im) = (i1_0 - i1_1);
            tmpr = ((0.923879532511 * r1_3) + (0.382683432365 * i1_3));
            tmpi = ((0.923879532511 * i1_3) - (0.382683432365 * r1_3));
            ((kp[1 * m]).re) = (r1_2 + tmpr);
            ((kp[1 * m]).im) = (i1_2 + tmpi);
            ((kp[9 * m]).re) = (r1_2 - tmpr);
            ((kp[9 * m]).im) = (i1_2 - tmpi);
            tmpr = (0.707106781187 * (r1_5 + i1_5));
            tmpi = (0.707106781187 * (i1_5 - r1_5));
            ((kp[2 * m]).re) = (r1_4 + tmpr);
            ((kp[2 * m]).im) = (i1_4 + tmpi);
            ((kp[10 * m]).re) = (r1_4 - tmpr);
            ((kp[10 * m]).im) = (i1_4 - tmpi);
            tmpr = ((0.382683432365 * r1_7) + (0.923879532511 * i1_7));
            tmpi = ((0.382683432365 * i1_7) - (0.923879532511 * r1_7));
            ((kp[3 * m]).re) = (r1_6 + tmpr);
            ((kp[3 * m]).im) = (i1_6 + tmpi);
            ((kp[11 * m]).re) = (r1_6 - tmpr);
            ((kp[11 * m]).im) = (i1_6 - tmpi);
            ((kp[4 * m]).re) = (r1_8 + i1_9);
            ((kp[4 * m]).im) = (i1_8 - r1_9);
            ((kp[12 * m]).re) = (r1_8 - i1_9);
            ((kp[12 * m]).im) = (i1_8 + r1_9);
            tmpr = ((0.923879532511 * i1_11) - (0.382683432365 * r1_11));
            tmpi = ((0.923879532511 * r1_11) + (0.382683432365 * i1_11));
            ((kp[5 * m]).re) = (r1_10 + tmpr);
            ((kp[5 * m]).im) = (i1_10 - tmpi);
            ((kp[13 * m]).re) = (r1_10 - tmpr);
            ((kp[13 * m]).im) = (i1_10 + tmpi);
            tmpr = (0.707106781187 * (i1_13 - r1_13));
            tmpi = (0.707106781187 * (r1_13 + i1_13));
            ((kp[6 * m]).re) = (r1_12 + tmpr);
            ((kp[6 * m]).im) = (i1_12 - tmpi);
            ((kp[14 * m]).re) = (r1_12 - tmpr);
            ((kp[14 * m]).im) = (i1_12 + tmpi);
            tmpr = ((0.382683432365 * i1_15) - (0.923879532511 * r1_15));
            tmpi = ((0.382683432365 * r1_15) + (0.923879532511 * i1_15));
            ((kp[7 * m]).re) = (r1_14 + tmpr);
            ((kp[7 * m]).im) = (i1_14 - tmpi);
            ((kp[15 * m]).re) = (r1_14 - tmpr);
            ((kp[15 * m]).im) = (i1_14 + tmpi);
          }
        }
    }
  else
    {
      int ab = (a + b) / 2;

      fft_twiddle_16_seq(a, ab, in, out, W, nW, nWdn, m);
      fft_twiddle_16_seq(ab, b, in, out, W, nW, nWdn, m);
    }
}

static void * _taskFunc22_(void *);
static void * _taskFunc21_(void *);


void fft_unshuffle_16(int a, int b, struct _noname16_ (* in), struct _noname16_ (* out), int m)
{
  int i;
  const struct _noname16_ (* ip);
  struct _noname16_ (* jp);

  if ((b - a) < 128)
    {
      ip = in + a * 16;
      for (i = a; i < b; ++i)
        {
          jp = out + i;
          jp[0] = ip[0];
          jp[m] = ip[1];
          ip += 2;
          jp += 2 * m;
          jp[0] = ip[0];
          jp[m] = ip[1];
          ip += 2;
          jp += 2 * m;
          jp[0] = ip[0];
          jp[m] = ip[1];
          ip += 2;
          jp += 2 * m;
          jp[0] = ip[0];
          jp[m] = ip[1];
          ip += 2;
          jp += 2 * m;
          jp[0] = ip[0];
          jp[m] = ip[1];
          ip += 2;
          jp += 2 * m;
          jp[0] = ip[0];
          jp[m] = ip[1];
          ip += 2;
          jp += 2 * m;
          jp[0] = ip[0];
          jp[m] = ip[1];
          ip += 2;
          jp += 2 * m;
          jp[0] = ip[0];
          jp[m] = ip[1];
          ip += 2;
        }
    }
  else
    {
      int ab = (a + b) / 2;

      /* (l2080) #pragma omp task untied
 */
      # 2080 "fft.c"
      if (omp_in_final() || ort_task_throttling())
        {
          void * _itn;

          /* byvalue variables */
          int _fip_a = a, a = _fip_a;
          int _fip_ab = ab, ab = _fip_ab;
          struct _noname16_ (* _fip_in) = in, (* in) = _fip_in;
          struct _noname16_ (* _fip_out) = out, (* out) = _fip_out;
          int _fip_m = m, m = _fip_m;

          _itn = ort_task_immediate_start(0);
          {
            # 2081 "fft.c"
            fft_unshuffle_16(a, ab, in, out, m);
            CANCEL_task_2080 :
              ;
          }
          ort_task_immediate_end(_itn);
        }
      else
        {
          struct __taskenv__ {
              int a;
              int ab;
              struct _noname16_ (* in);
              struct _noname16_ (* out);
              int m;
            } * _tenv;

          _tenv = (struct __taskenv__ *) ort_taskenv_alloc(sizeof(struct __taskenv__), _taskFunc21_);
          /* byvalue variables */
          _tenv->a = a;
          _tenv->ab = ab;
          _tenv->in = in;
          _tenv->out = out;
          _tenv->m = m;
          ort_new_task(_taskFunc21_, (void *) _tenv, 0, 0, 1, 0, (void *) 0, 0, 0, 0);
          /* no other operations */
        }
      /* (l2082) #pragma omp task untied
 */
      # 2082 "fft.c"
      if (omp_in_final() || ort_task_throttling())
        {
          void * _itn;

          /* byvalue variables */
          int _fip_ab = ab, ab = _fip_ab;
          int _fip_b = b, b = _fip_b;
          struct _noname16_ (* _fip_in) = in, (* in) = _fip_in;
          struct _noname16_ (* _fip_out) = out, (* out) = _fip_out;
          int _fip_m = m, m = _fip_m;

          _itn = ort_task_immediate_start(0);
          {
            # 2083 "fft.c"
            fft_unshuffle_16(ab, b, in, out, m);
            CANCEL_task_2082 :
              ;
          }
          ort_task_immediate_end(_itn);
        }
      else
        {
          struct __taskenv__ {
              int ab;
              int b;
              struct _noname16_ (* in);
              struct _noname16_ (* out);
              int m;
            } * _tenv;

          _tenv = (struct __taskenv__ *) ort_taskenv_alloc(sizeof(struct __taskenv__), _taskFunc22_);
          /* byvalue variables */
          _tenv->ab = ab;
          _tenv->b = b;
          _tenv->in = in;
          _tenv->out = out;
          _tenv->m = m;
          ort_new_task(_taskFunc22_, (void *) _tenv, 0, 0, 1, 0, (void *) 0, 0, 0, 0);
          /* no other operations */
        }
      /* (l2084) #pragma omp taskwait 
 */
      # 2084 "fft.c"
      ort_taskwait(0);
    }
}


static void * _taskFunc21_(void * __arg)
{
  struct __taskenv__ {
      int a;
      int ab;
      struct _noname16_ (* in);
      struct _noname16_ (* out);
      int m;
    };
  struct __taskenv__ * _tenv = (struct __taskenv__ *) __arg;

  /* byvalue variables */
  int a = _tenv->a;
  int ab = _tenv->ab;
  struct _noname16_ (* in) = _tenv->in;
  struct _noname16_ (* out) = _tenv->out;
  int m = _tenv->m;

  /* no initializations */
  /* (l2080) #pragma omp task untied
 -- body moved below */
  # 2080 "fft.c"
  {
    # 2081 "fft.c"
    fft_unshuffle_16(a, ab, in, out, m);
    CANCEL_task_2080 :
      ;
  }
  /* no other operations */
  ort_taskenv_free(_tenv, _taskFunc21_);
  return ((void *) 0);
}


static void * _taskFunc22_(void * __arg)
{
  struct __taskenv__ {
      int ab;
      int b;
      struct _noname16_ (* in);
      struct _noname16_ (* out);
      int m;
    };
  struct __taskenv__ * _tenv = (struct __taskenv__ *) __arg;

  /* byvalue variables */
  int ab = _tenv->ab;
  int b = _tenv->b;
  struct _noname16_ (* in) = _tenv->in;
  struct _noname16_ (* out) = _tenv->out;
  int m = _tenv->m;

  /* no initializations */
  /* (l2082) #pragma omp task untied
 -- body moved below */
  # 2082 "fft.c"
  {
    # 2083 "fft.c"
    fft_unshuffle_16(ab, b, in, out, m);
    CANCEL_task_2082 :
      ;
  }
  /* no other operations */
  ort_taskenv_free(_tenv, _taskFunc22_);
  return ((void *) 0);
}


void fft_unshuffle_16_seq(int a, int b, struct _noname16_ (* in), struct _noname16_ (* out), int m)
# 2088 "fft.c"
{
  int i;
  const struct _noname16_ (* ip);
  struct _noname16_ (* jp);

  if ((b - a) < 128)
    {
      ip = in + a * 16;
      for (i = a; i < b; ++i)
        {
          jp = out + i;
          jp[0] = ip[0];
          jp[m] = ip[1];
          ip += 2;
          jp += 2 * m;
          jp[0] = ip[0];
          jp[m] = ip[1];
          ip += 2;
          jp += 2 * m;
          jp[0] = ip[0];
          jp[m] = ip[1];
          ip += 2;
          jp += 2 * m;
          jp[0] = ip[0];
          jp[m] = ip[1];
          ip += 2;
          jp += 2 * m;
          jp[0] = ip[0];
          jp[m] = ip[1];
          ip += 2;
          jp += 2 * m;
          jp[0] = ip[0];
          jp[m] = ip[1];
          ip += 2;
          jp += 2 * m;
          jp[0] = ip[0];
          jp[m] = ip[1];
          ip += 2;
          jp += 2 * m;
          jp[0] = ip[0];
          jp[m] = ip[1];
          ip += 2;
        }
    }
  else
    {
      int ab = (a + b) / 2;

      fft_unshuffle_16_seq(a, ab, in, out, m);
      fft_unshuffle_16_seq(ab, b, in, out, m);
    }
}


void fft_base_32(struct _noname16_ (* in), struct _noname16_ (* out))
{
  double tmpr;
  double tmpi;

  # 2137 "fft.c"
  {
    double r1_0;
    double i1_0;
    double r1_1;
    double i1_1;
    double r1_2;
    double i1_2;
    double r1_3;
    double i1_3;
    double r1_4;
    double i1_4;
    double r1_5;
    double i1_5;
    double r1_6;
    double i1_6;
    double r1_7;
    double i1_7;
    double r1_8;
    double i1_8;
    double r1_9;
    double i1_9;
    double r1_10;
    double i1_10;
    double r1_11;
    double i1_11;
    double r1_12;
    double i1_12;
    double r1_13;
    double i1_13;
    double r1_14;
    double i1_14;
    double r1_15;
    double i1_15;
    double r1_16;
    double i1_16;
    double r1_17;
    double i1_17;
    double r1_18;
    double i1_18;
    double r1_19;
    double i1_19;
    double r1_20;
    double i1_20;
    double r1_21;
    double i1_21;
    double r1_22;
    double i1_22;
    double r1_23;
    double i1_23;
    double r1_24;
    double i1_24;
    double r1_25;
    double i1_25;
    double r1_26;
    double i1_26;
    double r1_27;
    double i1_27;
    double r1_28;
    double i1_28;
    double r1_29;
    double i1_29;
    double r1_30;
    double i1_30;
    double r1_31;
    double i1_31;

    # 2170 "fft.c"
    {
      double r2_0;
      double i2_0;
      double r2_2;
      double i2_2;
      double r2_4;
      double i2_4;
      double r2_6;
      double i2_6;
      double r2_8;
      double i2_8;
      double r2_10;
      double i2_10;
      double r2_12;
      double i2_12;
      double r2_14;
      double i2_14;
      double r2_16;
      double i2_16;
      double r2_18;
      double i2_18;
      double r2_20;
      double i2_20;
      double r2_22;
      double i2_22;
      double r2_24;
      double i2_24;
      double r2_26;
      double i2_26;
      double r2_28;
      double i2_28;
      double r2_30;
      double i2_30;

      # 2187 "fft.c"
      {
        double r3_0;
        double i3_0;
        double r3_4;
        double i3_4;
        double r3_8;
        double i3_8;
        double r3_12;
        double i3_12;
        double r3_16;
        double i3_16;
        double r3_20;
        double i3_20;
        double r3_24;
        double i3_24;
        double r3_28;
        double i3_28;

        # 2196 "fft.c"
        {
          double r4_0;
          double i4_0;
          double r4_8;
          double i4_8;
          double r4_16;
          double i4_16;
          double r4_24;
          double i4_24;

          # 2201 "fft.c"
          {
            double r5_0;
            double i5_0;
            double r5_16;
            double i5_16;

            # 2204 "fft.c"
            r5_0 = ((in[0]).re);
            i5_0 = ((in[0]).im);
            r5_16 = ((in[16]).re);
            i5_16 = ((in[16]).im);
            r4_0 = (r5_0 + r5_16);
            i4_0 = (i5_0 + i5_16);
            r4_16 = (r5_0 - r5_16);
            i4_16 = (i5_0 - i5_16);
          }
          {
            double r5_8;
            double i5_8;
            double r5_24;
            double i5_24;

            # 2216 "fft.c"
            r5_8 = ((in[8]).re);
            i5_8 = ((in[8]).im);
            r5_24 = ((in[24]).re);
            i5_24 = ((in[24]).im);
            r4_8 = (r5_8 + r5_24);
            i4_8 = (i5_8 + i5_24);
            r4_24 = (r5_8 - r5_24);
            i4_24 = (i5_8 - i5_24);
          }
          r3_0 = (r4_0 + r4_8);
          i3_0 = (i4_0 + i4_8);
          r3_16 = (r4_0 - r4_8);
          i3_16 = (i4_0 - i4_8);
          r3_8 = (r4_16 + i4_24);
          i3_8 = (i4_16 - r4_24);
          r3_24 = (r4_16 - i4_24);
          i3_24 = (i4_16 + r4_24);
        }
        {
          double r4_4;
          double i4_4;
          double r4_12;
          double i4_12;
          double r4_20;
          double i4_20;
          double r4_28;
          double i4_28;

          # 2239 "fft.c"
          {
            double r5_4;
            double i5_4;
            double r5_20;
            double i5_20;

            # 2242 "fft.c"
            r5_4 = ((in[4]).re);
            i5_4 = ((in[4]).im);
            r5_20 = ((in[20]).re);
            i5_20 = ((in[20]).im);
            r4_4 = (r5_4 + r5_20);
            i4_4 = (i5_4 + i5_20);
            r4_20 = (r5_4 - r5_20);
            i4_20 = (i5_4 - i5_20);
          }
          {
            double r5_12;
            double i5_12;
            double r5_28;
            double i5_28;

            # 2254 "fft.c"
            r5_12 = ((in[12]).re);
            i5_12 = ((in[12]).im);
            r5_28 = ((in[28]).re);
            i5_28 = ((in[28]).im);
            r4_12 = (r5_12 + r5_28);
            i4_12 = (i5_12 + i5_28);
            r4_28 = (r5_12 - r5_28);
            i4_28 = (i5_12 - i5_28);
          }
          r3_4 = (r4_4 + r4_12);
          i3_4 = (i4_4 + i4_12);
          r3_20 = (r4_4 - r4_12);
          i3_20 = (i4_4 - i4_12);
          r3_12 = (r4_20 + i4_28);
          i3_12 = (i4_20 - r4_28);
          r3_28 = (r4_20 - i4_28);
          i3_28 = (i4_20 + r4_28);
        }
        r2_0 = (r3_0 + r3_4);
        i2_0 = (i3_0 + i3_4);
        r2_16 = (r3_0 - r3_4);
        i2_16 = (i3_0 - i3_4);
        tmpr = (0.707106781187 * (r3_12 + i3_12));
        tmpi = (0.707106781187 * (i3_12 - r3_12));
        r2_4 = (r3_8 + tmpr);
        i2_4 = (i3_8 + tmpi);
        r2_20 = (r3_8 - tmpr);
        i2_20 = (i3_8 - tmpi);
        r2_8 = (r3_16 + i3_20);
        i2_8 = (i3_16 - r3_20);
        r2_24 = (r3_16 - i3_20);
        i2_24 = (i3_16 + r3_20);
        tmpr = (0.707106781187 * (i3_28 - r3_28));
        tmpi = (0.707106781187 * (r3_28 + i3_28));
        r2_12 = (r3_24 + tmpr);
        i2_12 = (i3_24 - tmpi);
        r2_28 = (r3_24 - tmpr);
        i2_28 = (i3_24 + tmpi);
      }
      {
        double r3_2;
        double i3_2;
        double r3_6;
        double i3_6;
        double r3_10;
        double i3_10;
        double r3_14;
        double i3_14;
        double r3_18;
        double i3_18;
        double r3_22;
        double i3_22;
        double r3_26;
        double i3_26;
        double r3_30;
        double i3_30;

        # 2302 "fft.c"
        {
          double r4_2;
          double i4_2;
          double r4_10;
          double i4_10;
          double r4_18;
          double i4_18;
          double r4_26;
          double i4_26;

          # 2307 "fft.c"
          {
            double r5_2;
            double i5_2;
            double r5_18;
            double i5_18;

            # 2310 "fft.c"
            r5_2 = ((in[2]).re);
            i5_2 = ((in[2]).im);
            r5_18 = ((in[18]).re);
            i5_18 = ((in[18]).im);
            r4_2 = (r5_2 + r5_18);
            i4_2 = (i5_2 + i5_18);
            r4_18 = (r5_2 - r5_18);
            i4_18 = (i5_2 - i5_18);
          }
          {
            double r5_10;
            double i5_10;
            double r5_26;
            double i5_26;

            # 2322 "fft.c"
            r5_10 = ((in[10]).re);
            i5_10 = ((in[10]).im);
            r5_26 = ((in[26]).re);
            i5_26 = ((in[26]).im);
            r4_10 = (r5_10 + r5_26);
            i4_10 = (i5_10 + i5_26);
            r4_26 = (r5_10 - r5_26);
            i4_26 = (i5_10 - i5_26);
          }
          r3_2 = (r4_2 + r4_10);
          i3_2 = (i4_2 + i4_10);
          r3_18 = (r4_2 - r4_10);
          i3_18 = (i4_2 - i4_10);
          r3_10 = (r4_18 + i4_26);
          i3_10 = (i4_18 - r4_26);
          r3_26 = (r4_18 - i4_26);
          i3_26 = (i4_18 + r4_26);
        }
        {
          double r4_6;
          double i4_6;
          double r4_14;
          double i4_14;
          double r4_22;
          double i4_22;
          double r4_30;
          double i4_30;

          # 2345 "fft.c"
          {
            double r5_6;
            double i5_6;
            double r5_22;
            double i5_22;

            # 2348 "fft.c"
            r5_6 = ((in[6]).re);
            i5_6 = ((in[6]).im);
            r5_22 = ((in[22]).re);
            i5_22 = ((in[22]).im);
            r4_6 = (r5_6 + r5_22);
            i4_6 = (i5_6 + i5_22);
            r4_22 = (r5_6 - r5_22);
            i4_22 = (i5_6 - i5_22);
          }
          {
            double r5_14;
            double i5_14;
            double r5_30;
            double i5_30;

            # 2360 "fft.c"
            r5_14 = ((in[14]).re);
            i5_14 = ((in[14]).im);
            r5_30 = ((in[30]).re);
            i5_30 = ((in[30]).im);
            r4_14 = (r5_14 + r5_30);
            i4_14 = (i5_14 + i5_30);
            r4_30 = (r5_14 - r5_30);
            i4_30 = (i5_14 - i5_30);
          }
          r3_6 = (r4_6 + r4_14);
          i3_6 = (i4_6 + i4_14);
          r3_22 = (r4_6 - r4_14);
          i3_22 = (i4_6 - i4_14);
          r3_14 = (r4_22 + i4_30);
          i3_14 = (i4_22 - r4_30);
          r3_30 = (r4_22 - i4_30);
          i3_30 = (i4_22 + r4_30);
        }
        r2_2 = (r3_2 + r3_6);
        i2_2 = (i3_2 + i3_6);
        r2_18 = (r3_2 - r3_6);
        i2_18 = (i3_2 - i3_6);
        tmpr = (0.707106781187 * (r3_14 + i3_14));
        tmpi = (0.707106781187 * (i3_14 - r3_14));
        r2_6 = (r3_10 + tmpr);
        i2_6 = (i3_10 + tmpi);
        r2_22 = (r3_10 - tmpr);
        i2_22 = (i3_10 - tmpi);
        r2_10 = (r3_18 + i3_22);
        i2_10 = (i3_18 - r3_22);
        r2_26 = (r3_18 - i3_22);
        i2_26 = (i3_18 + r3_22);
        tmpr = (0.707106781187 * (i3_30 - r3_30));
        tmpi = (0.707106781187 * (r3_30 + i3_30));
        r2_14 = (r3_26 + tmpr);
        i2_14 = (i3_26 - tmpi);
        r2_30 = (r3_26 - tmpr);
        i2_30 = (i3_26 + tmpi);
      }
      r1_0 = (r2_0 + r2_2);
      i1_0 = (i2_0 + i2_2);
      r1_16 = (r2_0 - r2_2);
      i1_16 = (i2_0 - i2_2);
      tmpr = ((0.923879532511 * r2_6) + (0.382683432365 * i2_6));
      tmpi = ((0.923879532511 * i2_6) - (0.382683432365 * r2_6));
      r1_2 = (r2_4 + tmpr);
      i1_2 = (i2_4 + tmpi);
      r1_18 = (r2_4 - tmpr);
      i1_18 = (i2_4 - tmpi);
      tmpr = (0.707106781187 * (r2_10 + i2_10));
      tmpi = (0.707106781187 * (i2_10 - r2_10));
      r1_4 = (r2_8 + tmpr);
      i1_4 = (i2_8 + tmpi);
      r1_20 = (r2_8 - tmpr);
      i1_20 = (i2_8 - tmpi);
      tmpr = ((0.382683432365 * r2_14) + (0.923879532511 * i2_14));
      tmpi = ((0.382683432365 * i2_14) - (0.923879532511 * r2_14));
      r1_6 = (r2_12 + tmpr);
      i1_6 = (i2_12 + tmpi);
      r1_22 = (r2_12 - tmpr);
      i1_22 = (i2_12 - tmpi);
      r1_8 = (r2_16 + i2_18);
      i1_8 = (i2_16 - r2_18);
      r1_24 = (r2_16 - i2_18);
      i1_24 = (i2_16 + r2_18);
      tmpr = ((0.923879532511 * i2_22) - (0.382683432365 * r2_22));
      tmpi = ((0.923879532511 * r2_22) + (0.382683432365 * i2_22));
      r1_10 = (r2_20 + tmpr);
      i1_10 = (i2_20 - tmpi);
      r1_26 = (r2_20 - tmpr);
      i1_26 = (i2_20 + tmpi);
      tmpr = (0.707106781187 * (i2_26 - r2_26));
      tmpi = (0.707106781187 * (r2_26 + i2_26));
      r1_12 = (r2_24 + tmpr);
      i1_12 = (i2_24 - tmpi);
      r1_28 = (r2_24 - tmpr);
      i1_28 = (i2_24 + tmpi);
      tmpr = ((0.382683432365 * i2_30) - (0.923879532511 * r2_30));
      tmpi = ((0.382683432365 * r2_30) + (0.923879532511 * i2_30));
      r1_14 = (r2_28 + tmpr);
      i1_14 = (i2_28 - tmpi);
      r1_30 = (r2_28 - tmpr);
      i1_30 = (i2_28 + tmpi);
    }
    {
      double r2_1;
      double i2_1;
      double r2_3;
      double i2_3;
      double r2_5;
      double i2_5;
      double r2_7;
      double i2_7;
      double r2_9;
      double i2_9;
      double r2_11;
      double i2_11;
      double r2_13;
      double i2_13;
      double r2_15;
      double i2_15;
      double r2_17;
      double i2_17;
      double r2_19;
      double i2_19;
      double r2_21;
      double i2_21;
      double r2_23;
      double i2_23;
      double r2_25;
      double i2_25;
      double r2_27;
      double i2_27;
      double r2_29;
      double i2_29;
      double r2_31;
      double i2_31;

      # 2461 "fft.c"
      {
        double r3_1;
        double i3_1;
        double r3_5;
        double i3_5;
        double r3_9;
        double i3_9;
        double r3_13;
        double i3_13;
        double r3_17;
        double i3_17;
        double r3_21;
        double i3_21;
        double r3_25;
        double i3_25;
        double r3_29;
        double i3_29;

        # 2470 "fft.c"
        {
          double r4_1;
          double i4_1;
          double r4_9;
          double i4_9;
          double r4_17;
          double i4_17;
          double r4_25;
          double i4_25;

          # 2475 "fft.c"
          {
            double r5_1;
            double i5_1;
            double r5_17;
            double i5_17;

            # 2478 "fft.c"
            r5_1 = ((in[1]).re);
            i5_1 = ((in[1]).im);
            r5_17 = ((in[17]).re);
            i5_17 = ((in[17]).im);
            r4_1 = (r5_1 + r5_17);
            i4_1 = (i5_1 + i5_17);
            r4_17 = (r5_1 - r5_17);
            i4_17 = (i5_1 - i5_17);
          }
          {
            double r5_9;
            double i5_9;
            double r5_25;
            double i5_25;

            # 2490 "fft.c"
            r5_9 = ((in[9]).re);
            i5_9 = ((in[9]).im);
            r5_25 = ((in[25]).re);
            i5_25 = ((in[25]).im);
            r4_9 = (r5_9 + r5_25);
            i4_9 = (i5_9 + i5_25);
            r4_25 = (r5_9 - r5_25);
            i4_25 = (i5_9 - i5_25);
          }
          r3_1 = (r4_1 + r4_9);
          i3_1 = (i4_1 + i4_9);
          r3_17 = (r4_1 - r4_9);
          i3_17 = (i4_1 - i4_9);
          r3_9 = (r4_17 + i4_25);
          i3_9 = (i4_17 - r4_25);
          r3_25 = (r4_17 - i4_25);
          i3_25 = (i4_17 + r4_25);
        }
        {
          double r4_5;
          double i4_5;
          double r4_13;
          double i4_13;
          double r4_21;
          double i4_21;
          double r4_29;
          double i4_29;

          # 2513 "fft.c"
          {
            double r5_5;
            double i5_5;
            double r5_21;
            double i5_21;

            # 2516 "fft.c"
            r5_5 = ((in[5]).re);
            i5_5 = ((in[5]).im);
            r5_21 = ((in[21]).re);
            i5_21 = ((in[21]).im);
            r4_5 = (r5_5 + r5_21);
            i4_5 = (i5_5 + i5_21);
            r4_21 = (r5_5 - r5_21);
            i4_21 = (i5_5 - i5_21);
          }
          {
            double r5_13;
            double i5_13;
            double r5_29;
            double i5_29;

            # 2528 "fft.c"
            r5_13 = ((in[13]).re);
            i5_13 = ((in[13]).im);
            r5_29 = ((in[29]).re);
            i5_29 = ((in[29]).im);
            r4_13 = (r5_13 + r5_29);
            i4_13 = (i5_13 + i5_29);
            r4_29 = (r5_13 - r5_29);
            i4_29 = (i5_13 - i5_29);
          }
          r3_5 = (r4_5 + r4_13);
          i3_5 = (i4_5 + i4_13);
          r3_21 = (r4_5 - r4_13);
          i3_21 = (i4_5 - i4_13);
          r3_13 = (r4_21 + i4_29);
          i3_13 = (i4_21 - r4_29);
          r3_29 = (r4_21 - i4_29);
          i3_29 = (i4_21 + r4_29);
        }
        r2_1 = (r3_1 + r3_5);
        i2_1 = (i3_1 + i3_5);
        r2_17 = (r3_1 - r3_5);
        i2_17 = (i3_1 - i3_5);
        tmpr = (0.707106781187 * (r3_13 + i3_13));
        tmpi = (0.707106781187 * (i3_13 - r3_13));
        r2_5 = (r3_9 + tmpr);
        i2_5 = (i3_9 + tmpi);
        r2_21 = (r3_9 - tmpr);
        i2_21 = (i3_9 - tmpi);
        r2_9 = (r3_17 + i3_21);
        i2_9 = (i3_17 - r3_21);
        r2_25 = (r3_17 - i3_21);
        i2_25 = (i3_17 + r3_21);
        tmpr = (0.707106781187 * (i3_29 - r3_29));
        tmpi = (0.707106781187 * (r3_29 + i3_29));
        r2_13 = (r3_25 + tmpr);
        i2_13 = (i3_25 - tmpi);
        r2_29 = (r3_25 - tmpr);
        i2_29 = (i3_25 + tmpi);
      }
      {
        double r3_3;
        double i3_3;
        double r3_7;
        double i3_7;
        double r3_11;
        double i3_11;
        double r3_15;
        double i3_15;
        double r3_19;
        double i3_19;
        double r3_23;
        double i3_23;
        double r3_27;
        double i3_27;
        double r3_31;
        double i3_31;

        # 2576 "fft.c"
        {
          double r4_3;
          double i4_3;
          double r4_11;
          double i4_11;
          double r4_19;
          double i4_19;
          double r4_27;
          double i4_27;

          # 2581 "fft.c"
          {
            double r5_3;
            double i5_3;
            double r5_19;
            double i5_19;

            # 2584 "fft.c"
            r5_3 = ((in[3]).re);
            i5_3 = ((in[3]).im);
            r5_19 = ((in[19]).re);
            i5_19 = ((in[19]).im);
            r4_3 = (r5_3 + r5_19);
            i4_3 = (i5_3 + i5_19);
            r4_19 = (r5_3 - r5_19);
            i4_19 = (i5_3 - i5_19);
          }
          {
            double r5_11;
            double i5_11;
            double r5_27;
            double i5_27;

            # 2596 "fft.c"
            r5_11 = ((in[11]).re);
            i5_11 = ((in[11]).im);
            r5_27 = ((in[27]).re);
            i5_27 = ((in[27]).im);
            r4_11 = (r5_11 + r5_27);
            i4_11 = (i5_11 + i5_27);
            r4_27 = (r5_11 - r5_27);
            i4_27 = (i5_11 - i5_27);
          }
          r3_3 = (r4_3 + r4_11);
          i3_3 = (i4_3 + i4_11);
          r3_19 = (r4_3 - r4_11);
          i3_19 = (i4_3 - i4_11);
          r3_11 = (r4_19 + i4_27);
          i3_11 = (i4_19 - r4_27);
          r3_27 = (r4_19 - i4_27);
          i3_27 = (i4_19 + r4_27);
        }
        {
          double r4_7;
          double i4_7;
          double r4_15;
          double i4_15;
          double r4_23;
          double i4_23;
          double r4_31;
          double i4_31;

          # 2619 "fft.c"
          {
            double r5_7;
            double i5_7;
            double r5_23;
            double i5_23;

            # 2622 "fft.c"
            r5_7 = ((in[7]).re);
            i5_7 = ((in[7]).im);
            r5_23 = ((in[23]).re);
            i5_23 = ((in[23]).im);
            r4_7 = (r5_7 + r5_23);
            i4_7 = (i5_7 + i5_23);
            r4_23 = (r5_7 - r5_23);
            i4_23 = (i5_7 - i5_23);
          }
          {
            double r5_15;
            double i5_15;
            double r5_31;
            double i5_31;

            # 2634 "fft.c"
            r5_15 = ((in[15]).re);
            i5_15 = ((in[15]).im);
            r5_31 = ((in[31]).re);
            i5_31 = ((in[31]).im);
            r4_15 = (r5_15 + r5_31);
            i4_15 = (i5_15 + i5_31);
            r4_31 = (r5_15 - r5_31);
            i4_31 = (i5_15 - i5_31);
          }
          r3_7 = (r4_7 + r4_15);
          i3_7 = (i4_7 + i4_15);
          r3_23 = (r4_7 - r4_15);
          i3_23 = (i4_7 - i4_15);
          r3_15 = (r4_23 + i4_31);
          i3_15 = (i4_23 - r4_31);
          r3_31 = (r4_23 - i4_31);
          i3_31 = (i4_23 + r4_31);
        }
        r2_3 = (r3_3 + r3_7);
        i2_3 = (i3_3 + i3_7);
        r2_19 = (r3_3 - r3_7);
        i2_19 = (i3_3 - i3_7);
        tmpr = (0.707106781187 * (r3_15 + i3_15));
        tmpi = (0.707106781187 * (i3_15 - r3_15));
        r2_7 = (r3_11 + tmpr);
        i2_7 = (i3_11 + tmpi);
        r2_23 = (r3_11 - tmpr);
        i2_23 = (i3_11 - tmpi);
        r2_11 = (r3_19 + i3_23);
        i2_11 = (i3_19 - r3_23);
        r2_27 = (r3_19 - i3_23);
        i2_27 = (i3_19 + r3_23);
        tmpr = (0.707106781187 * (i3_31 - r3_31));
        tmpi = (0.707106781187 * (r3_31 + i3_31));
        r2_15 = (r3_27 + tmpr);
        i2_15 = (i3_27 - tmpi);
        r2_31 = (r3_27 - tmpr);
        i2_31 = (i3_27 + tmpi);
      }
      r1_1 = (r2_1 + r2_3);
      i1_1 = (i2_1 + i2_3);
      r1_17 = (r2_1 - r2_3);
      i1_17 = (i2_1 - i2_3);
      tmpr = ((0.923879532511 * r2_7) + (0.382683432365 * i2_7));
      tmpi = ((0.923879532511 * i2_7) - (0.382683432365 * r2_7));
      r1_3 = (r2_5 + tmpr);
      i1_3 = (i2_5 + tmpi);
      r1_19 = (r2_5 - tmpr);
      i1_19 = (i2_5 - tmpi);
      tmpr = (0.707106781187 * (r2_11 + i2_11));
      tmpi = (0.707106781187 * (i2_11 - r2_11));
      r1_5 = (r2_9 + tmpr);
      i1_5 = (i2_9 + tmpi);
      r1_21 = (r2_9 - tmpr);
      i1_21 = (i2_9 - tmpi);
      tmpr = ((0.382683432365 * r2_15) + (0.923879532511 * i2_15));
      tmpi = ((0.382683432365 * i2_15) - (0.923879532511 * r2_15));
      r1_7 = (r2_13 + tmpr);
      i1_7 = (i2_13 + tmpi);
      r1_23 = (r2_13 - tmpr);
      i1_23 = (i2_13 - tmpi);
      r1_9 = (r2_17 + i2_19);
      i1_9 = (i2_17 - r2_19);
      r1_25 = (r2_17 - i2_19);
      i1_25 = (i2_17 + r2_19);
      tmpr = ((0.923879532511 * i2_23) - (0.382683432365 * r2_23));
      tmpi = ((0.923879532511 * r2_23) + (0.382683432365 * i2_23));
      r1_11 = (r2_21 + tmpr);
      i1_11 = (i2_21 - tmpi);
      r1_27 = (r2_21 - tmpr);
      i1_27 = (i2_21 + tmpi);
      tmpr = (0.707106781187 * (i2_27 - r2_27));
      tmpi = (0.707106781187 * (r2_27 + i2_27));
      r1_13 = (r2_25 + tmpr);
      i1_13 = (i2_25 - tmpi);
      r1_29 = (r2_25 - tmpr);
      i1_29 = (i2_25 + tmpi);
      tmpr = ((0.382683432365 * i2_31) - (0.923879532511 * r2_31));
      tmpi = ((0.382683432365 * r2_31) + (0.923879532511 * i2_31));
      r1_15 = (r2_29 + tmpr);
      i1_15 = (i2_29 - tmpi);
      r1_31 = (r2_29 - tmpr);
      i1_31 = (i2_29 + tmpi);
    }
    ((out[0]).re) = (r1_0 + r1_1);
    ((out[0]).im) = (i1_0 + i1_1);
    ((out[16]).re) = (r1_0 - r1_1);
    ((out[16]).im) = (i1_0 - i1_1);
    tmpr = ((0.980785280403 * r1_3) + (0.195090322016 * i1_3));
    tmpi = ((0.980785280403 * i1_3) - (0.195090322016 * r1_3));
    ((out[1]).re) = (r1_2 + tmpr);
    ((out[1]).im) = (i1_2 + tmpi);
    ((out[17]).re) = (r1_2 - tmpr);
    ((out[17]).im) = (i1_2 - tmpi);
    tmpr = ((0.923879532511 * r1_5) + (0.382683432365 * i1_5));
    tmpi = ((0.923879532511 * i1_5) - (0.382683432365 * r1_5));
    ((out[2]).re) = (r1_4 + tmpr);
    ((out[2]).im) = (i1_4 + tmpi);
    ((out[18]).re) = (r1_4 - tmpr);
    ((out[18]).im) = (i1_4 - tmpi);
    tmpr = ((0.831469612303 * r1_7) + (0.55557023302 * i1_7));
    tmpi = ((0.831469612303 * i1_7) - (0.55557023302 * r1_7));
    ((out[3]).re) = (r1_6 + tmpr);
    ((out[3]).im) = (i1_6 + tmpi);
    ((out[19]).re) = (r1_6 - tmpr);
    ((out[19]).im) = (i1_6 - tmpi);
    tmpr = (0.707106781187 * (r1_9 + i1_9));
    tmpi = (0.707106781187 * (i1_9 - r1_9));
    ((out[4]).re) = (r1_8 + tmpr);
    ((out[4]).im) = (i1_8 + tmpi);
    ((out[20]).re) = (r1_8 - tmpr);
    ((out[20]).im) = (i1_8 - tmpi);
    tmpr = ((0.55557023302 * r1_11) + (0.831469612303 * i1_11));
    tmpi = ((0.55557023302 * i1_11) - (0.831469612303 * r1_11));
    ((out[5]).re) = (r1_10 + tmpr);
    ((out[5]).im) = (i1_10 + tmpi);
    ((out[21]).re) = (r1_10 - tmpr);
    ((out[21]).im) = (i1_10 - tmpi);
    tmpr = ((0.382683432365 * r1_13) + (0.923879532511 * i1_13));
    tmpi = ((0.382683432365 * i1_13) - (0.923879532511 * r1_13));
    ((out[6]).re) = (r1_12 + tmpr);
    ((out[6]).im) = (i1_12 + tmpi);
    ((out[22]).re) = (r1_12 - tmpr);
    ((out[22]).im) = (i1_12 - tmpi);
    tmpr = ((0.195090322016 * r1_15) + (0.980785280403 * i1_15));
    tmpi = ((0.195090322016 * i1_15) - (0.980785280403 * r1_15));
    ((out[7]).re) = (r1_14 + tmpr);
    ((out[7]).im) = (i1_14 + tmpi);
    ((out[23]).re) = (r1_14 - tmpr);
    ((out[23]).im) = (i1_14 - tmpi);
    ((out[8]).re) = (r1_16 + i1_17);
    ((out[8]).im) = (i1_16 - r1_17);
    ((out[24]).re) = (r1_16 - i1_17);
    ((out[24]).im) = (i1_16 + r1_17);
    tmpr = ((0.980785280403 * i1_19) - (0.195090322016 * r1_19));
    tmpi = ((0.980785280403 * r1_19) + (0.195090322016 * i1_19));
    ((out[9]).re) = (r1_18 + tmpr);
    ((out[9]).im) = (i1_18 - tmpi);
    ((out[25]).re) = (r1_18 - tmpr);
    ((out[25]).im) = (i1_18 + tmpi);
    tmpr = ((0.923879532511 * i1_21) - (0.382683432365 * r1_21));
    tmpi = ((0.923879532511 * r1_21) + (0.382683432365 * i1_21));
    ((out[10]).re) = (r1_20 + tmpr);
    ((out[10]).im) = (i1_20 - tmpi);
    ((out[26]).re) = (r1_20 - tmpr);
    ((out[26]).im) = (i1_20 + tmpi);
    tmpr = ((0.831469612303 * i1_23) - (0.55557023302 * r1_23));
    tmpi = ((0.831469612303 * r1_23) + (0.55557023302 * i1_23));
    ((out[11]).re) = (r1_22 + tmpr);
    ((out[11]).im) = (i1_22 - tmpi);
    ((out[27]).re) = (r1_22 - tmpr);
    ((out[27]).im) = (i1_22 + tmpi);
    tmpr = (0.707106781187 * (i1_25 - r1_25));
    tmpi = (0.707106781187 * (r1_25 + i1_25));
    ((out[12]).re) = (r1_24 + tmpr);
    ((out[12]).im) = (i1_24 - tmpi);
    ((out[28]).re) = (r1_24 - tmpr);
    ((out[28]).im) = (i1_24 + tmpi);
    tmpr = ((0.55557023302 * i1_27) - (0.831469612303 * r1_27));
    tmpi = ((0.55557023302 * r1_27) + (0.831469612303 * i1_27));
    ((out[13]).re) = (r1_26 + tmpr);
    ((out[13]).im) = (i1_26 - tmpi);
    ((out[29]).re) = (r1_26 - tmpr);
    ((out[29]).im) = (i1_26 + tmpi);
    tmpr = ((0.382683432365 * i1_29) - (0.923879532511 * r1_29));
    tmpi = ((0.382683432365 * r1_29) + (0.923879532511 * i1_29));
    ((out[14]).re) = (r1_28 + tmpr);
    ((out[14]).im) = (i1_28 - tmpi);
    ((out[30]).re) = (r1_28 - tmpr);
    ((out[30]).im) = (i1_28 + tmpi);
    tmpr = ((0.195090322016 * i1_31) - (0.980785280403 * r1_31));
    tmpi = ((0.195090322016 * r1_31) + (0.980785280403 * i1_31));
    ((out[15]).re) = (r1_30 + tmpr);
    ((out[15]).im) = (i1_30 - tmpi);
    ((out[31]).re) = (r1_30 - tmpr);
    ((out[31]).im) = (i1_30 + tmpi);
  }
}

static void * _taskFunc24_(void *);
static void * _taskFunc23_(void *);


void fft_twiddle_32(int a, int b, struct _noname16_ (* in), struct _noname16_ (* out), struct _noname16_ (* W), int nW, int nWdn, int m)
{
  int l1, i;
  struct _noname16_ (* jp);
  struct _noname16_ (* kp);
  double tmpr;
  double tmpi;
  double wr;
  double wi;

  # 3627 "fft.c"
  if ((b - a) < 128)
    {
      for (i = a, l1 = nWdn * i, kp = out + i; i < b; i++, l1 += nWdn, kp++)
        {
          jp = in + i;
          {
            double r1_0;
            double i1_0;
            double r1_1;
            double i1_1;
            double r1_2;
            double i1_2;
            double r1_3;
            double i1_3;
            double r1_4;
            double i1_4;
            double r1_5;
            double i1_5;
            double r1_6;
            double i1_6;
            double r1_7;
            double i1_7;
            double r1_8;
            double i1_8;
            double r1_9;
            double i1_9;
            double r1_10;
            double i1_10;
            double r1_11;
            double i1_11;
            double r1_12;
            double i1_12;
            double r1_13;
            double i1_13;
            double r1_14;
            double i1_14;
            double r1_15;
            double i1_15;
            double r1_16;
            double i1_16;
            double r1_17;
            double i1_17;
            double r1_18;
            double i1_18;
            double r1_19;
            double i1_19;
            double r1_20;
            double i1_20;
            double r1_21;
            double i1_21;
            double r1_22;
            double i1_22;
            double r1_23;
            double i1_23;
            double r1_24;
            double i1_24;
            double r1_25;
            double i1_25;
            double r1_26;
            double i1_26;
            double r1_27;
            double i1_27;
            double r1_28;
            double i1_28;
            double r1_29;
            double i1_29;
            double r1_30;
            double i1_30;
            double r1_31;
            double i1_31;

            # 2854 "fft.c"
            {
              double r2_0;
              double i2_0;
              double r2_2;
              double i2_2;
              double r2_4;
              double i2_4;
              double r2_6;
              double i2_6;
              double r2_8;
              double i2_8;
              double r2_10;
              double i2_10;
              double r2_12;
              double i2_12;
              double r2_14;
              double i2_14;
              double r2_16;
              double i2_16;
              double r2_18;
              double i2_18;
              double r2_20;
              double i2_20;
              double r2_22;
              double i2_22;
              double r2_24;
              double i2_24;
              double r2_26;
              double i2_26;
              double r2_28;
              double i2_28;
              double r2_30;
              double i2_30;

              # 2871 "fft.c"
              {
                double r3_0;
                double i3_0;
                double r3_4;
                double i3_4;
                double r3_8;
                double i3_8;
                double r3_12;
                double i3_12;
                double r3_16;
                double i3_16;
                double r3_20;
                double i3_20;
                double r3_24;
                double i3_24;
                double r3_28;
                double i3_28;

                # 2880 "fft.c"
                {
                  double r4_0;
                  double i4_0;
                  double r4_8;
                  double i4_8;
                  double r4_16;
                  double i4_16;
                  double r4_24;
                  double i4_24;

                  # 2885 "fft.c"
                  {
                    double r5_0;
                    double i5_0;
                    double r5_16;
                    double i5_16;

                    # 2888 "fft.c"
                    r5_0 = ((jp[0 * m]).re);
                    i5_0 = ((jp[0 * m]).im);
                    wr = ((W[16 * l1]).re);
                    wi = ((W[16 * l1]).im);
                    tmpr = ((jp[16 * m]).re);
                    tmpi = ((jp[16 * m]).im);
                    r5_16 = ((wr * tmpr) - (wi * tmpi));
                    i5_16 = ((wi * tmpr) + (wr * tmpi));
                    r4_0 = (r5_0 + r5_16);
                    i4_0 = (i5_0 + i5_16);
                    r4_16 = (r5_0 - r5_16);
                    i4_16 = (i5_0 - i5_16);
                  }
                  {
                    double r5_8;
                    double i5_8;
                    double r5_24;
                    double i5_24;

                    # 2904 "fft.c"
                    wr = ((W[8 * l1]).re);
                    wi = ((W[8 * l1]).im);
                    tmpr = ((jp[8 * m]).re);
                    tmpi = ((jp[8 * m]).im);
                    r5_8 = ((wr * tmpr) - (wi * tmpi));
                    i5_8 = ((wi * tmpr) + (wr * tmpi));
                    wr = ((W[24 * l1]).re);
                    wi = ((W[24 * l1]).im);
                    tmpr = ((jp[24 * m]).re);
                    tmpi = ((jp[24 * m]).im);
                    r5_24 = ((wr * tmpr) - (wi * tmpi));
                    i5_24 = ((wi * tmpr) + (wr * tmpi));
                    r4_8 = (r5_8 + r5_24);
                    i4_8 = (i5_8 + i5_24);
                    r4_24 = (r5_8 - r5_24);
                    i4_24 = (i5_8 - i5_24);
                  }
                  r3_0 = (r4_0 + r4_8);
                  i3_0 = (i4_0 + i4_8);
                  r3_16 = (r4_0 - r4_8);
                  i3_16 = (i4_0 - i4_8);
                  r3_8 = (r4_16 + i4_24);
                  i3_8 = (i4_16 - r4_24);
                  r3_24 = (r4_16 - i4_24);
                  i3_24 = (i4_16 + r4_24);
                }
                {
                  double r4_4;
                  double i4_4;
                  double r4_12;
                  double i4_12;
                  double r4_20;
                  double i4_20;
                  double r4_28;
                  double i4_28;

                  # 2935 "fft.c"
                  {
                    double r5_4;
                    double i5_4;
                    double r5_20;
                    double i5_20;

                    # 2938 "fft.c"
                    wr = ((W[4 * l1]).re);
                    wi = ((W[4 * l1]).im);
                    tmpr = ((jp[4 * m]).re);
                    tmpi = ((jp[4 * m]).im);
                    r5_4 = ((wr * tmpr) - (wi * tmpi));
                    i5_4 = ((wi * tmpr) + (wr * tmpi));
                    wr = ((W[20 * l1]).re);
                    wi = ((W[20 * l1]).im);
                    tmpr = ((jp[20 * m]).re);
                    tmpi = ((jp[20 * m]).im);
                    r5_20 = ((wr * tmpr) - (wi * tmpi));
                    i5_20 = ((wi * tmpr) + (wr * tmpi));
                    r4_4 = (r5_4 + r5_20);
                    i4_4 = (i5_4 + i5_20);
                    r4_20 = (r5_4 - r5_20);
                    i4_20 = (i5_4 - i5_20);
                  }
                  {
                    double r5_12;
                    double i5_12;
                    double r5_28;
                    double i5_28;

                    # 2958 "fft.c"
                    wr = ((W[12 * l1]).re);
                    wi = ((W[12 * l1]).im);
                    tmpr = ((jp[12 * m]).re);
                    tmpi = ((jp[12 * m]).im);
                    r5_12 = ((wr * tmpr) - (wi * tmpi));
                    i5_12 = ((wi * tmpr) + (wr * tmpi));
                    wr = ((W[28 * l1]).re);
                    wi = ((W[28 * l1]).im);
                    tmpr = ((jp[28 * m]).re);
                    tmpi = ((jp[28 * m]).im);
                    r5_28 = ((wr * tmpr) - (wi * tmpi));
                    i5_28 = ((wi * tmpr) + (wr * tmpi));
                    r4_12 = (r5_12 + r5_28);
                    i4_12 = (i5_12 + i5_28);
                    r4_28 = (r5_12 - r5_28);
                    i4_28 = (i5_12 - i5_28);
                  }
                  r3_4 = (r4_4 + r4_12);
                  i3_4 = (i4_4 + i4_12);
                  r3_20 = (r4_4 - r4_12);
                  i3_20 = (i4_4 - i4_12);
                  r3_12 = (r4_20 + i4_28);
                  i3_12 = (i4_20 - r4_28);
                  r3_28 = (r4_20 - i4_28);
                  i3_28 = (i4_20 + r4_28);
                }
                r2_0 = (r3_0 + r3_4);
                i2_0 = (i3_0 + i3_4);
                r2_16 = (r3_0 - r3_4);
                i2_16 = (i3_0 - i3_4);
                tmpr = (0.707106781187 * (r3_12 + i3_12));
                tmpi = (0.707106781187 * (i3_12 - r3_12));
                r2_4 = (r3_8 + tmpr);
                i2_4 = (i3_8 + tmpi);
                r2_20 = (r3_8 - tmpr);
                i2_20 = (i3_8 - tmpi);
                r2_8 = (r3_16 + i3_20);
                i2_8 = (i3_16 - r3_20);
                r2_24 = (r3_16 - i3_20);
                i2_24 = (i3_16 + r3_20);
                tmpr = (0.707106781187 * (i3_28 - r3_28));
                tmpi = (0.707106781187 * (r3_28 + i3_28));
                r2_12 = (r3_24 + tmpr);
                i2_12 = (i3_24 - tmpi);
                r2_28 = (r3_24 - tmpr);
                i2_28 = (i3_24 + tmpi);
              }
              {
                double r3_2;
                double i3_2;
                double r3_6;
                double i3_6;
                double r3_10;
                double i3_10;
                double r3_14;
                double i3_14;
                double r3_18;
                double i3_18;
                double r3_22;
                double i3_22;
                double r3_26;
                double i3_26;
                double r3_30;
                double i3_30;

                # 3014 "fft.c"
                {
                  double r4_2;
                  double i4_2;
                  double r4_10;
                  double i4_10;
                  double r4_18;
                  double i4_18;
                  double r4_26;
                  double i4_26;

                  # 3019 "fft.c"
                  {
                    double r5_2;
                    double i5_2;
                    double r5_18;
                    double i5_18;

                    # 3022 "fft.c"
                    wr = ((W[2 * l1]).re);
                    wi = ((W[2 * l1]).im);
                    tmpr = ((jp[2 * m]).re);
                    tmpi = ((jp[2 * m]).im);
                    r5_2 = ((wr * tmpr) - (wi * tmpi));
                    i5_2 = ((wi * tmpr) + (wr * tmpi));
                    wr = ((W[18 * l1]).re);
                    wi = ((W[18 * l1]).im);
                    tmpr = ((jp[18 * m]).re);
                    tmpi = ((jp[18 * m]).im);
                    r5_18 = ((wr * tmpr) - (wi * tmpi));
                    i5_18 = ((wi * tmpr) + (wr * tmpi));
                    r4_2 = (r5_2 + r5_18);
                    i4_2 = (i5_2 + i5_18);
                    r4_18 = (r5_2 - r5_18);
                    i4_18 = (i5_2 - i5_18);
                  }
                  {
                    double r5_10;
                    double i5_10;
                    double r5_26;
                    double i5_26;

                    # 3042 "fft.c"
                    wr = ((W[10 * l1]).re);
                    wi = ((W[10 * l1]).im);
                    tmpr = ((jp[10 * m]).re);
                    tmpi = ((jp[10 * m]).im);
                    r5_10 = ((wr * tmpr) - (wi * tmpi));
                    i5_10 = ((wi * tmpr) + (wr * tmpi));
                    wr = ((W[26 * l1]).re);
                    wi = ((W[26 * l1]).im);
                    tmpr = ((jp[26 * m]).re);
                    tmpi = ((jp[26 * m]).im);
                    r5_26 = ((wr * tmpr) - (wi * tmpi));
                    i5_26 = ((wi * tmpr) + (wr * tmpi));
                    r4_10 = (r5_10 + r5_26);
                    i4_10 = (i5_10 + i5_26);
                    r4_26 = (r5_10 - r5_26);
                    i4_26 = (i5_10 - i5_26);
                  }
                  r3_2 = (r4_2 + r4_10);
                  i3_2 = (i4_2 + i4_10);
                  r3_18 = (r4_2 - r4_10);
                  i3_18 = (i4_2 - i4_10);
                  r3_10 = (r4_18 + i4_26);
                  i3_10 = (i4_18 - r4_26);
                  r3_26 = (r4_18 - i4_26);
                  i3_26 = (i4_18 + r4_26);
                }
                {
                  double r4_6;
                  double i4_6;
                  double r4_14;
                  double i4_14;
                  double r4_22;
                  double i4_22;
                  double r4_30;
                  double i4_30;

                  # 3073 "fft.c"
                  {
                    double r5_6;
                    double i5_6;
                    double r5_22;
                    double i5_22;

                    # 3076 "fft.c"
                    wr = ((W[6 * l1]).re);
                    wi = ((W[6 * l1]).im);
                    tmpr = ((jp[6 * m]).re);
                    tmpi = ((jp[6 * m]).im);
                    r5_6 = ((wr * tmpr) - (wi * tmpi));
                    i5_6 = ((wi * tmpr) + (wr * tmpi));
                    wr = ((W[22 * l1]).re);
                    wi = ((W[22 * l1]).im);
                    tmpr = ((jp[22 * m]).re);
                    tmpi = ((jp[22 * m]).im);
                    r5_22 = ((wr * tmpr) - (wi * tmpi));
                    i5_22 = ((wi * tmpr) + (wr * tmpi));
                    r4_6 = (r5_6 + r5_22);
                    i4_6 = (i5_6 + i5_22);
                    r4_22 = (r5_6 - r5_22);
                    i4_22 = (i5_6 - i5_22);
                  }
                  {
                    double r5_14;
                    double i5_14;
                    double r5_30;
                    double i5_30;

                    # 3096 "fft.c"
                    wr = ((W[14 * l1]).re);
                    wi = ((W[14 * l1]).im);
                    tmpr = ((jp[14 * m]).re);
                    tmpi = ((jp[14 * m]).im);
                    r5_14 = ((wr * tmpr) - (wi * tmpi));
                    i5_14 = ((wi * tmpr) + (wr * tmpi));
                    wr = ((W[30 * l1]).re);
                    wi = ((W[30 * l1]).im);
                    tmpr = ((jp[30 * m]).re);
                    tmpi = ((jp[30 * m]).im);
                    r5_30 = ((wr * tmpr) - (wi * tmpi));
                    i5_30 = ((wi * tmpr) + (wr * tmpi));
                    r4_14 = (r5_14 + r5_30);
                    i4_14 = (i5_14 + i5_30);
                    r4_30 = (r5_14 - r5_30);
                    i4_30 = (i5_14 - i5_30);
                  }
                  r3_6 = (r4_6 + r4_14);
                  i3_6 = (i4_6 + i4_14);
                  r3_22 = (r4_6 - r4_14);
                  i3_22 = (i4_6 - i4_14);
                  r3_14 = (r4_22 + i4_30);
                  i3_14 = (i4_22 - r4_30);
                  r3_30 = (r4_22 - i4_30);
                  i3_30 = (i4_22 + r4_30);
                }
                r2_2 = (r3_2 + r3_6);
                i2_2 = (i3_2 + i3_6);
                r2_18 = (r3_2 - r3_6);
                i2_18 = (i3_2 - i3_6);
                tmpr = (0.707106781187 * (r3_14 + i3_14));
                tmpi = (0.707106781187 * (i3_14 - r3_14));
                r2_6 = (r3_10 + tmpr);
                i2_6 = (i3_10 + tmpi);
                r2_22 = (r3_10 - tmpr);
                i2_22 = (i3_10 - tmpi);
                r2_10 = (r3_18 + i3_22);
                i2_10 = (i3_18 - r3_22);
                r2_26 = (r3_18 - i3_22);
                i2_26 = (i3_18 + r3_22);
                tmpr = (0.707106781187 * (i3_30 - r3_30));
                tmpi = (0.707106781187 * (r3_30 + i3_30));
                r2_14 = (r3_26 + tmpr);
                i2_14 = (i3_26 - tmpi);
                r2_30 = (r3_26 - tmpr);
                i2_30 = (i3_26 + tmpi);
              }
              r1_0 = (r2_0 + r2_2);
              i1_0 = (i2_0 + i2_2);
              r1_16 = (r2_0 - r2_2);
              i1_16 = (i2_0 - i2_2);
              tmpr = ((0.923879532511 * r2_6) + (0.382683432365 * i2_6));
              tmpi = ((0.923879532511 * i2_6) - (0.382683432365 * r2_6));
              r1_2 = (r2_4 + tmpr);
              i1_2 = (i2_4 + tmpi);
              r1_18 = (r2_4 - tmpr);
              i1_18 = (i2_4 - tmpi);
              tmpr = (0.707106781187 * (r2_10 + i2_10));
              tmpi = (0.707106781187 * (i2_10 - r2_10));
              r1_4 = (r2_8 + tmpr);
              i1_4 = (i2_8 + tmpi);
              r1_20 = (r2_8 - tmpr);
              i1_20 = (i2_8 - tmpi);
              tmpr = ((0.382683432365 * r2_14) + (0.923879532511 * i2_14));
              tmpi = ((0.382683432365 * i2_14) - (0.923879532511 * r2_14));
              r1_6 = (r2_12 + tmpr);
              i1_6 = (i2_12 + tmpi);
              r1_22 = (r2_12 - tmpr);
              i1_22 = (i2_12 - tmpi);
              r1_8 = (r2_16 + i2_18);
              i1_8 = (i2_16 - r2_18);
              r1_24 = (r2_16 - i2_18);
              i1_24 = (i2_16 + r2_18);
              tmpr = ((0.923879532511 * i2_22) - (0.382683432365 * r2_22));
              tmpi = ((0.923879532511 * r2_22) + (0.382683432365 * i2_22));
              r1_10 = (r2_20 + tmpr);
              i1_10 = (i2_20 - tmpi);
              r1_26 = (r2_20 - tmpr);
              i1_26 = (i2_20 + tmpi);
              tmpr = (0.707106781187 * (i2_26 - r2_26));
              tmpi = (0.707106781187 * (r2_26 + i2_26));
              r1_12 = (r2_24 + tmpr);
              i1_12 = (i2_24 - tmpi);
              r1_28 = (r2_24 - tmpr);
              i1_28 = (i2_24 + tmpi);
              tmpr = ((0.382683432365 * i2_30) - (0.923879532511 * r2_30));
              tmpi = ((0.382683432365 * r2_30) + (0.923879532511 * i2_30));
              r1_14 = (r2_28 + tmpr);
              i1_14 = (i2_28 - tmpi);
              r1_30 = (r2_28 - tmpr);
              i1_30 = (i2_28 + tmpi);
            }
            {
              double r2_1;
              double i2_1;
              double r2_3;
              double i2_3;
              double r2_5;
              double i2_5;
              double r2_7;
              double i2_7;
              double r2_9;
              double i2_9;
              double r2_11;
              double i2_11;
              double r2_13;
              double i2_13;
              double r2_15;
              double i2_15;
              double r2_17;
              double i2_17;
              double r2_19;
              double i2_19;
              double r2_21;
              double i2_21;
              double r2_23;
              double i2_23;
              double r2_25;
              double i2_25;
              double r2_27;
              double i2_27;
              double r2_29;
              double i2_29;
              double r2_31;
              double i2_31;

              # 3205 "fft.c"
              {
                double r3_1;
                double i3_1;
                double r3_5;
                double i3_5;
                double r3_9;
                double i3_9;
                double r3_13;
                double i3_13;
                double r3_17;
                double i3_17;
                double r3_21;
                double i3_21;
                double r3_25;
                double i3_25;
                double r3_29;
                double i3_29;

                # 3214 "fft.c"
                {
                  double r4_1;
                  double i4_1;
                  double r4_9;
                  double i4_9;
                  double r4_17;
                  double i4_17;
                  double r4_25;
                  double i4_25;

                  # 3219 "fft.c"
                  {
                    double r5_1;
                    double i5_1;
                    double r5_17;
                    double i5_17;

                    # 3222 "fft.c"
                    wr = ((W[1 * l1]).re);
                    wi = ((W[1 * l1]).im);
                    tmpr = ((jp[1 * m]).re);
                    tmpi = ((jp[1 * m]).im);
                    r5_1 = ((wr * tmpr) - (wi * tmpi));
                    i5_1 = ((wi * tmpr) + (wr * tmpi));
                    wr = ((W[17 * l1]).re);
                    wi = ((W[17 * l1]).im);
                    tmpr = ((jp[17 * m]).re);
                    tmpi = ((jp[17 * m]).im);
                    r5_17 = ((wr * tmpr) - (wi * tmpi));
                    i5_17 = ((wi * tmpr) + (wr * tmpi));
                    r4_1 = (r5_1 + r5_17);
                    i4_1 = (i5_1 + i5_17);
                    r4_17 = (r5_1 - r5_17);
                    i4_17 = (i5_1 - i5_17);
                  }
                  {
                    double r5_9;
                    double i5_9;
                    double r5_25;
                    double i5_25;

                    # 3242 "fft.c"
                    wr = ((W[9 * l1]).re);
                    wi = ((W[9 * l1]).im);
                    tmpr = ((jp[9 * m]).re);
                    tmpi = ((jp[9 * m]).im);
                    r5_9 = ((wr * tmpr) - (wi * tmpi));
                    i5_9 = ((wi * tmpr) + (wr * tmpi));
                    wr = ((W[25 * l1]).re);
                    wi = ((W[25 * l1]).im);
                    tmpr = ((jp[25 * m]).re);
                    tmpi = ((jp[25 * m]).im);
                    r5_25 = ((wr * tmpr) - (wi * tmpi));
                    i5_25 = ((wi * tmpr) + (wr * tmpi));
                    r4_9 = (r5_9 + r5_25);
                    i4_9 = (i5_9 + i5_25);
                    r4_25 = (r5_9 - r5_25);
                    i4_25 = (i5_9 - i5_25);
                  }
                  r3_1 = (r4_1 + r4_9);
                  i3_1 = (i4_1 + i4_9);
                  r3_17 = (r4_1 - r4_9);
                  i3_17 = (i4_1 - i4_9);
                  r3_9 = (r4_17 + i4_25);
                  i3_9 = (i4_17 - r4_25);
                  r3_25 = (r4_17 - i4_25);
                  i3_25 = (i4_17 + r4_25);
                }
                {
                  double r4_5;
                  double i4_5;
                  double r4_13;
                  double i4_13;
                  double r4_21;
                  double i4_21;
                  double r4_29;
                  double i4_29;

                  # 3273 "fft.c"
                  {
                    double r5_5;
                    double i5_5;
                    double r5_21;
                    double i5_21;

                    # 3276 "fft.c"
                    wr = ((W[5 * l1]).re);
                    wi = ((W[5 * l1]).im);
                    tmpr = ((jp[5 * m]).re);
                    tmpi = ((jp[5 * m]).im);
                    r5_5 = ((wr * tmpr) - (wi * tmpi));
                    i5_5 = ((wi * tmpr) + (wr * tmpi));
                    wr = ((W[21 * l1]).re);
                    wi = ((W[21 * l1]).im);
                    tmpr = ((jp[21 * m]).re);
                    tmpi = ((jp[21 * m]).im);
                    r5_21 = ((wr * tmpr) - (wi * tmpi));
                    i5_21 = ((wi * tmpr) + (wr * tmpi));
                    r4_5 = (r5_5 + r5_21);
                    i4_5 = (i5_5 + i5_21);
                    r4_21 = (r5_5 - r5_21);
                    i4_21 = (i5_5 - i5_21);
                  }
                  {
                    double r5_13;
                    double i5_13;
                    double r5_29;
                    double i5_29;

                    # 3296 "fft.c"
                    wr = ((W[13 * l1]).re);
                    wi = ((W[13 * l1]).im);
                    tmpr = ((jp[13 * m]).re);
                    tmpi = ((jp[13 * m]).im);
                    r5_13 = ((wr * tmpr) - (wi * tmpi));
                    i5_13 = ((wi * tmpr) + (wr * tmpi));
                    wr = ((W[29 * l1]).re);
                    wi = ((W[29 * l1]).im);
                    tmpr = ((jp[29 * m]).re);
                    tmpi = ((jp[29 * m]).im);
                    r5_29 = ((wr * tmpr) - (wi * tmpi));
                    i5_29 = ((wi * tmpr) + (wr * tmpi));
                    r4_13 = (r5_13 + r5_29);
                    i4_13 = (i5_13 + i5_29);
                    r4_29 = (r5_13 - r5_29);
                    i4_29 = (i5_13 - i5_29);
                  }
                  r3_5 = (r4_5 + r4_13);
                  i3_5 = (i4_5 + i4_13);
                  r3_21 = (r4_5 - r4_13);
                  i3_21 = (i4_5 - i4_13);
                  r3_13 = (r4_21 + i4_29);
                  i3_13 = (i4_21 - r4_29);
                  r3_29 = (r4_21 - i4_29);
                  i3_29 = (i4_21 + r4_29);
                }
                r2_1 = (r3_1 + r3_5);
                i2_1 = (i3_1 + i3_5);
                r2_17 = (r3_1 - r3_5);
                i2_17 = (i3_1 - i3_5);
                tmpr = (0.707106781187 * (r3_13 + i3_13));
                tmpi = (0.707106781187 * (i3_13 - r3_13));
                r2_5 = (r3_9 + tmpr);
                i2_5 = (i3_9 + tmpi);
                r2_21 = (r3_9 - tmpr);
                i2_21 = (i3_9 - tmpi);
                r2_9 = (r3_17 + i3_21);
                i2_9 = (i3_17 - r3_21);
                r2_25 = (r3_17 - i3_21);
                i2_25 = (i3_17 + r3_21);
                tmpr = (0.707106781187 * (i3_29 - r3_29));
                tmpi = (0.707106781187 * (r3_29 + i3_29));
                r2_13 = (r3_25 + tmpr);
                i2_13 = (i3_25 - tmpi);
                r2_29 = (r3_25 - tmpr);
                i2_29 = (i3_25 + tmpi);
              }
              {
                double r3_3;
                double i3_3;
                double r3_7;
                double i3_7;
                double r3_11;
                double i3_11;
                double r3_15;
                double i3_15;
                double r3_19;
                double i3_19;
                double r3_23;
                double i3_23;
                double r3_27;
                double i3_27;
                double r3_31;
                double i3_31;

                # 3352 "fft.c"
                {
                  double r4_3;
                  double i4_3;
                  double r4_11;
                  double i4_11;
                  double r4_19;
                  double i4_19;
                  double r4_27;
                  double i4_27;

                  # 3357 "fft.c"
                  {
                    double r5_3;
                    double i5_3;
                    double r5_19;
                    double i5_19;

                    # 3360 "fft.c"
                    wr = ((W[3 * l1]).re);
                    wi = ((W[3 * l1]).im);
                    tmpr = ((jp[3 * m]).re);
                    tmpi = ((jp[3 * m]).im);
                    r5_3 = ((wr * tmpr) - (wi * tmpi));
                    i5_3 = ((wi * tmpr) + (wr * tmpi));
                    wr = ((W[19 * l1]).re);
                    wi = ((W[19 * l1]).im);
                    tmpr = ((jp[19 * m]).re);
                    tmpi = ((jp[19 * m]).im);
                    r5_19 = ((wr * tmpr) - (wi * tmpi));
                    i5_19 = ((wi * tmpr) + (wr * tmpi));
                    r4_3 = (r5_3 + r5_19);
                    i4_3 = (i5_3 + i5_19);
                    r4_19 = (r5_3 - r5_19);
                    i4_19 = (i5_3 - i5_19);
                  }
                  {
                    double r5_11;
                    double i5_11;
                    double r5_27;
                    double i5_27;

                    # 3380 "fft.c"
                    wr = ((W[11 * l1]).re);
                    wi = ((W[11 * l1]).im);
                    tmpr = ((jp[11 * m]).re);
                    tmpi = ((jp[11 * m]).im);
                    r5_11 = ((wr * tmpr) - (wi * tmpi));
                    i5_11 = ((wi * tmpr) + (wr * tmpi));
                    wr = ((W[27 * l1]).re);
                    wi = ((W[27 * l1]).im);
                    tmpr = ((jp[27 * m]).re);
                    tmpi = ((jp[27 * m]).im);
                    r5_27 = ((wr * tmpr) - (wi * tmpi));
                    i5_27 = ((wi * tmpr) + (wr * tmpi));
                    r4_11 = (r5_11 + r5_27);
                    i4_11 = (i5_11 + i5_27);
                    r4_27 = (r5_11 - r5_27);
                    i4_27 = (i5_11 - i5_27);
                  }
                  r3_3 = (r4_3 + r4_11);
                  i3_3 = (i4_3 + i4_11);
                  r3_19 = (r4_3 - r4_11);
                  i3_19 = (i4_3 - i4_11);
                  r3_11 = (r4_19 + i4_27);
                  i3_11 = (i4_19 - r4_27);
                  r3_27 = (r4_19 - i4_27);
                  i3_27 = (i4_19 + r4_27);
                }
                {
                  double r4_7;
                  double i4_7;
                  double r4_15;
                  double i4_15;
                  double r4_23;
                  double i4_23;
                  double r4_31;
                  double i4_31;

                  # 3411 "fft.c"
                  {
                    double r5_7;
                    double i5_7;
                    double r5_23;
                    double i5_23;

                    # 3414 "fft.c"
                    wr = ((W[7 * l1]).re);
                    wi = ((W[7 * l1]).im);
                    tmpr = ((jp[7 * m]).re);
                    tmpi = ((jp[7 * m]).im);
                    r5_7 = ((wr * tmpr) - (wi * tmpi));
                    i5_7 = ((wi * tmpr) + (wr * tmpi));
                    wr = ((W[23 * l1]).re);
                    wi = ((W[23 * l1]).im);
                    tmpr = ((jp[23 * m]).re);
                    tmpi = ((jp[23 * m]).im);
                    r5_23 = ((wr * tmpr) - (wi * tmpi));
                    i5_23 = ((wi * tmpr) + (wr * tmpi));
                    r4_7 = (r5_7 + r5_23);
                    i4_7 = (i5_7 + i5_23);
                    r4_23 = (r5_7 - r5_23);
                    i4_23 = (i5_7 - i5_23);
                  }
                  {
                    double r5_15;
                    double i5_15;
                    double r5_31;
                    double i5_31;

                    # 3434 "fft.c"
                    wr = ((W[15 * l1]).re);
                    wi = ((W[15 * l1]).im);
                    tmpr = ((jp[15 * m]).re);
                    tmpi = ((jp[15 * m]).im);
                    r5_15 = ((wr * tmpr) - (wi * tmpi));
                    i5_15 = ((wi * tmpr) + (wr * tmpi));
                    wr = ((W[31 * l1]).re);
                    wi = ((W[31 * l1]).im);
                    tmpr = ((jp[31 * m]).re);
                    tmpi = ((jp[31 * m]).im);
                    r5_31 = ((wr * tmpr) - (wi * tmpi));
                    i5_31 = ((wi * tmpr) + (wr * tmpi));
                    r4_15 = (r5_15 + r5_31);
                    i4_15 = (i5_15 + i5_31);
                    r4_31 = (r5_15 - r5_31);
                    i4_31 = (i5_15 - i5_31);
                  }
                  r3_7 = (r4_7 + r4_15);
                  i3_7 = (i4_7 + i4_15);
                  r3_23 = (r4_7 - r4_15);
                  i3_23 = (i4_7 - i4_15);
                  r3_15 = (r4_23 + i4_31);
                  i3_15 = (i4_23 - r4_31);
                  r3_31 = (r4_23 - i4_31);
                  i3_31 = (i4_23 + r4_31);
                }
                r2_3 = (r3_3 + r3_7);
                i2_3 = (i3_3 + i3_7);
                r2_19 = (r3_3 - r3_7);
                i2_19 = (i3_3 - i3_7);
                tmpr = (0.707106781187 * (r3_15 + i3_15));
                tmpi = (0.707106781187 * (i3_15 - r3_15));
                r2_7 = (r3_11 + tmpr);
                i2_7 = (i3_11 + tmpi);
                r2_23 = (r3_11 - tmpr);
                i2_23 = (i3_11 - tmpi);
                r2_11 = (r3_19 + i3_23);
                i2_11 = (i3_19 - r3_23);
                r2_27 = (r3_19 - i3_23);
                i2_27 = (i3_19 + r3_23);
                tmpr = (0.707106781187 * (i3_31 - r3_31));
                tmpi = (0.707106781187 * (r3_31 + i3_31));
                r2_15 = (r3_27 + tmpr);
                i2_15 = (i3_27 - tmpi);
                r2_31 = (r3_27 - tmpr);
                i2_31 = (i3_27 + tmpi);
              }
              r1_1 = (r2_1 + r2_3);
              i1_1 = (i2_1 + i2_3);
              r1_17 = (r2_1 - r2_3);
              i1_17 = (i2_1 - i2_3);
              tmpr = ((0.923879532511 * r2_7) + (0.382683432365 * i2_7));
              tmpi = ((0.923879532511 * i2_7) - (0.382683432365 * r2_7));
              r1_3 = (r2_5 + tmpr);
              i1_3 = (i2_5 + tmpi);
              r1_19 = (r2_5 - tmpr);
              i1_19 = (i2_5 - tmpi);
              tmpr = (0.707106781187 * (r2_11 + i2_11));
              tmpi = (0.707106781187 * (i2_11 - r2_11));
              r1_5 = (r2_9 + tmpr);
              i1_5 = (i2_9 + tmpi);
              r1_21 = (r2_9 - tmpr);
              i1_21 = (i2_9 - tmpi);
              tmpr = ((0.382683432365 * r2_15) + (0.923879532511 * i2_15));
              tmpi = ((0.382683432365 * i2_15) - (0.923879532511 * r2_15));
              r1_7 = (r2_13 + tmpr);
              i1_7 = (i2_13 + tmpi);
              r1_23 = (r2_13 - tmpr);
              i1_23 = (i2_13 - tmpi);
              r1_9 = (r2_17 + i2_19);
              i1_9 = (i2_17 - r2_19);
              r1_25 = (r2_17 - i2_19);
              i1_25 = (i2_17 + r2_19);
              tmpr = ((0.923879532511 * i2_23) - (0.382683432365 * r2_23));
              tmpi = ((0.923879532511 * r2_23) + (0.382683432365 * i2_23));
              r1_11 = (r2_21 + tmpr);
              i1_11 = (i2_21 - tmpi);
              r1_27 = (r2_21 - tmpr);
              i1_27 = (i2_21 + tmpi);
              tmpr = (0.707106781187 * (i2_27 - r2_27));
              tmpi = (0.707106781187 * (r2_27 + i2_27));
              r1_13 = (r2_25 + tmpr);
              i1_13 = (i2_25 - tmpi);
              r1_29 = (r2_25 - tmpr);
              i1_29 = (i2_25 + tmpi);
              tmpr = ((0.382683432365 * i2_31) - (0.923879532511 * r2_31));
              tmpi = ((0.382683432365 * r2_31) + (0.923879532511 * i2_31));
              r1_15 = (r2_29 + tmpr);
              i1_15 = (i2_29 - tmpi);
              r1_31 = (r2_29 - tmpr);
              i1_31 = (i2_29 + tmpi);
            }
            ((kp[0 * m]).re) = (r1_0 + r1_1);
            ((kp[0 * m]).im) = (i1_0 + i1_1);
            ((kp[16 * m]).re) = (r1_0 - r1_1);
            ((kp[16 * m]).im) = (i1_0 - i1_1);
            tmpr = ((0.980785280403 * r1_3) + (0.195090322016 * i1_3));
            tmpi = ((0.980785280403 * i1_3) - (0.195090322016 * r1_3));
            ((kp[1 * m]).re) = (r1_2 + tmpr);
            ((kp[1 * m]).im) = (i1_2 + tmpi);
            ((kp[17 * m]).re) = (r1_2 - tmpr);
            ((kp[17 * m]).im) = (i1_2 - tmpi);
            tmpr = ((0.923879532511 * r1_5) + (0.382683432365 * i1_5));
            tmpi = ((0.923879532511 * i1_5) - (0.382683432365 * r1_5));
            ((kp[2 * m]).re) = (r1_4 + tmpr);
            ((kp[2 * m]).im) = (i1_4 + tmpi);
            ((kp[18 * m]).re) = (r1_4 - tmpr);
            ((kp[18 * m]).im) = (i1_4 - tmpi);
            tmpr = ((0.831469612303 * r1_7) + (0.55557023302 * i1_7));
            tmpi = ((0.831469612303 * i1_7) - (0.55557023302 * r1_7));
            ((kp[3 * m]).re) = (r1_6 + tmpr);
            ((kp[3 * m]).im) = (i1_6 + tmpi);
            ((kp[19 * m]).re) = (r1_6 - tmpr);
            ((kp[19 * m]).im) = (i1_6 - tmpi);
            tmpr = (0.707106781187 * (r1_9 + i1_9));
            tmpi = (0.707106781187 * (i1_9 - r1_9));
            ((kp[4 * m]).re) = (r1_8 + tmpr);
            ((kp[4 * m]).im) = (i1_8 + tmpi);
            ((kp[20 * m]).re) = (r1_8 - tmpr);
            ((kp[20 * m]).im) = (i1_8 - tmpi);
            tmpr = ((0.55557023302 * r1_11) + (0.831469612303 * i1_11));
            tmpi = ((0.55557023302 * i1_11) - (0.831469612303 * r1_11));
            ((kp[5 * m]).re) = (r1_10 + tmpr);
            ((kp[5 * m]).im) = (i1_10 + tmpi);
            ((kp[21 * m]).re) = (r1_10 - tmpr);
            ((kp[21 * m]).im) = (i1_10 - tmpi);
            tmpr = ((0.382683432365 * r1_13) + (0.923879532511 * i1_13));
            tmpi = ((0.382683432365 * i1_13) - (0.923879532511 * r1_13));
            ((kp[6 * m]).re) = (r1_12 + tmpr);
            ((kp[6 * m]).im) = (i1_12 + tmpi);
            ((kp[22 * m]).re) = (r1_12 - tmpr);
            ((kp[22 * m]).im) = (i1_12 - tmpi);
            tmpr = ((0.195090322016 * r1_15) + (0.980785280403 * i1_15));
            tmpi = ((0.195090322016 * i1_15) - (0.980785280403 * r1_15));
            ((kp[7 * m]).re) = (r1_14 + tmpr);
            ((kp[7 * m]).im) = (i1_14 + tmpi);
            ((kp[23 * m]).re) = (r1_14 - tmpr);
            ((kp[23 * m]).im) = (i1_14 - tmpi);
            ((kp[8 * m]).re) = (r1_16 + i1_17);
            ((kp[8 * m]).im) = (i1_16 - r1_17);
            ((kp[24 * m]).re) = (r1_16 - i1_17);
            ((kp[24 * m]).im) = (i1_16 + r1_17);
            tmpr = ((0.980785280403 * i1_19) - (0.195090322016 * r1_19));
            tmpi = ((0.980785280403 * r1_19) + (0.195090322016 * i1_19));
            ((kp[9 * m]).re) = (r1_18 + tmpr);
            ((kp[9 * m]).im) = (i1_18 - tmpi);
            ((kp[25 * m]).re) = (r1_18 - tmpr);
            ((kp[25 * m]).im) = (i1_18 + tmpi);
            tmpr = ((0.923879532511 * i1_21) - (0.382683432365 * r1_21));
            tmpi = ((0.923879532511 * r1_21) + (0.382683432365 * i1_21));
            ((kp[10 * m]).re) = (r1_20 + tmpr);
            ((kp[10 * m]).im) = (i1_20 - tmpi);
            ((kp[26 * m]).re) = (r1_20 - tmpr);
            ((kp[26 * m]).im) = (i1_20 + tmpi);
            tmpr = ((0.831469612303 * i1_23) - (0.55557023302 * r1_23));
            tmpi = ((0.831469612303 * r1_23) + (0.55557023302 * i1_23));
            ((kp[11 * m]).re) = (r1_22 + tmpr);
            ((kp[11 * m]).im) = (i1_22 - tmpi);
            ((kp[27 * m]).re) = (r1_22 - tmpr);
            ((kp[27 * m]).im) = (i1_22 + tmpi);
            tmpr = (0.707106781187 * (i1_25 - r1_25));
            tmpi = (0.707106781187 * (r1_25 + i1_25));
            ((kp[12 * m]).re) = (r1_24 + tmpr);
            ((kp[12 * m]).im) = (i1_24 - tmpi);
            ((kp[28 * m]).re) = (r1_24 - tmpr);
            ((kp[28 * m]).im) = (i1_24 + tmpi);
            tmpr = ((0.55557023302 * i1_27) - (0.831469612303 * r1_27));
            tmpi = ((0.55557023302 * r1_27) + (0.831469612303 * i1_27));
            ((kp[13 * m]).re) = (r1_26 + tmpr);
            ((kp[13 * m]).im) = (i1_26 - tmpi);
            ((kp[29 * m]).re) = (r1_26 - tmpr);
            ((kp[29 * m]).im) = (i1_26 + tmpi);
            tmpr = ((0.382683432365 * i1_29) - (0.923879532511 * r1_29));
            tmpi = ((0.382683432365 * r1_29) + (0.923879532511 * i1_29));
            ((kp[14 * m]).re) = (r1_28 + tmpr);
            ((kp[14 * m]).im) = (i1_28 - tmpi);
            ((kp[30 * m]).re) = (r1_28 - tmpr);
            ((kp[30 * m]).im) = (i1_28 + tmpi);
            tmpr = ((0.195090322016 * i1_31) - (0.980785280403 * r1_31));
            tmpi = ((0.195090322016 * r1_31) + (0.980785280403 * i1_31));
            ((kp[15 * m]).re) = (r1_30 + tmpr);
            ((kp[15 * m]).im) = (i1_30 - tmpi);
            ((kp[31 * m]).re) = (r1_30 - tmpr);
            ((kp[31 * m]).im) = (i1_30 + tmpi);
          }
        }
    }
  else
    {
      int ab = (a + b) / 2;

      /* (l3622) #pragma omp task untied
 */
      # 3622 "fft.c"
      if (omp_in_final() || ort_task_throttling())
        {
          void * _itn;

          /* byvalue variables */
          int _fip_a = a, a = _fip_a;
          int _fip_ab = ab, ab = _fip_ab;
          struct _noname16_ (* _fip_in) = in, (* in) = _fip_in;
          struct _noname16_ (* _fip_out) = out, (* out) = _fip_out;
          struct _noname16_ (* _fip_W) = W, (* W) = _fip_W;
          int _fip_nW = nW, nW = _fip_nW;
          int _fip_nWdn = nWdn, nWdn = _fip_nWdn;
          int _fip_m = m, m = _fip_m;

          _itn = ort_task_immediate_start(0);
          {
            # 3623 "fft.c"
            fft_twiddle_32(a, ab, in, out, W, nW, nWdn, m);
            CANCEL_task_3622 :
              ;
          }
          ort_task_immediate_end(_itn);
        }
      else
        {
          struct __taskenv__ {
              int a;
              int ab;
              struct _noname16_ (* in);
              struct _noname16_ (* out);
              struct _noname16_ (* W);
              int nW;
              int nWdn;
              int m;
            } * _tenv;

          _tenv = (struct __taskenv__ *) ort_taskenv_alloc(sizeof(struct __taskenv__), _taskFunc23_);
          /* byvalue variables */
          _tenv->a = a;
          _tenv->ab = ab;
          _tenv->in = in;
          _tenv->out = out;
          _tenv->W = W;
          _tenv->nW = nW;
          _tenv->nWdn = nWdn;
          _tenv->m = m;
          ort_new_task(_taskFunc23_, (void *) _tenv, 0, 0, 1, 0, (void *) 0, 0, 0, 0);
          /* no other operations */
        }
      /* (l3624) #pragma omp task untied
 */
      # 3624 "fft.c"
      if (omp_in_final() || ort_task_throttling())
        {
          void * _itn;

          /* byvalue variables */
          int _fip_ab = ab, ab = _fip_ab;
          int _fip_b = b, b = _fip_b;
          struct _noname16_ (* _fip_in) = in, (* in) = _fip_in;
          struct _noname16_ (* _fip_out) = out, (* out) = _fip_out;
          struct _noname16_ (* _fip_W) = W, (* W) = _fip_W;
          int _fip_nW = nW, nW = _fip_nW;
          int _fip_nWdn = nWdn, nWdn = _fip_nWdn;
          int _fip_m = m, m = _fip_m;

          _itn = ort_task_immediate_start(0);
          {
            # 3625 "fft.c"
            fft_twiddle_32(ab, b, in, out, W, nW, nWdn, m);
            CANCEL_task_3624 :
              ;
          }
          ort_task_immediate_end(_itn);
        }
      else
        {
          struct __taskenv__ {
              int ab;
              int b;
              struct _noname16_ (* in);
              struct _noname16_ (* out);
              struct _noname16_ (* W);
              int nW;
              int nWdn;
              int m;
            } * _tenv;

          _tenv = (struct __taskenv__ *) ort_taskenv_alloc(sizeof(struct __taskenv__), _taskFunc24_);
          /* byvalue variables */
          _tenv->ab = ab;
          _tenv->b = b;
          _tenv->in = in;
          _tenv->out = out;
          _tenv->W = W;
          _tenv->nW = nW;
          _tenv->nWdn = nWdn;
          _tenv->m = m;
          ort_new_task(_taskFunc24_, (void *) _tenv, 0, 0, 1, 0, (void *) 0, 0, 0, 0);
          /* no other operations */
        }
      /* (l3626) #pragma omp taskwait 
 */
      # 3626 "fft.c"
      ort_taskwait(0);
    }
}


static void * _taskFunc23_(void * __arg)
{
  struct __taskenv__ {
      int a;
      int ab;
      struct _noname16_ (* in);
      struct _noname16_ (* out);
      struct _noname16_ (* W);
      int nW;
      int nWdn;
      int m;
    };
  struct __taskenv__ * _tenv = (struct __taskenv__ *) __arg;

  /* byvalue variables */
  int a = _tenv->a;
  int ab = _tenv->ab;
  struct _noname16_ (* in) = _tenv->in;
  struct _noname16_ (* out) = _tenv->out;
  struct _noname16_ (* W) = _tenv->W;
  int nW = _tenv->nW;
  int nWdn = _tenv->nWdn;
  int m = _tenv->m;

  /* no initializations */
  /* (l3622) #pragma omp task untied
 -- body moved below */
  # 3622 "fft.c"
  {
    # 3623 "fft.c"
    fft_twiddle_32(a, ab, in, out, W, nW, nWdn, m);
    CANCEL_task_3622 :
      ;
  }
  /* no other operations */
  ort_taskenv_free(_tenv, _taskFunc23_);
  return ((void *) 0);
}


static void * _taskFunc24_(void * __arg)
{
  struct __taskenv__ {
      int ab;
      int b;
      struct _noname16_ (* in);
      struct _noname16_ (* out);
      struct _noname16_ (* W);
      int nW;
      int nWdn;
      int m;
    };
  struct __taskenv__ * _tenv = (struct __taskenv__ *) __arg;

  /* byvalue variables */
  int ab = _tenv->ab;
  int b = _tenv->b;
  struct _noname16_ (* in) = _tenv->in;
  struct _noname16_ (* out) = _tenv->out;
  struct _noname16_ (* W) = _tenv->W;
  int nW = _tenv->nW;
  int nWdn = _tenv->nWdn;
  int m = _tenv->m;

  /* no initializations */
  /* (l3624) #pragma omp task untied
 -- body moved below */
  # 3624 "fft.c"
  {
    # 3625 "fft.c"
    fft_twiddle_32(ab, b, in, out, W, nW, nWdn, m);
    CANCEL_task_3624 :
      ;
  }
  /* no other operations */
  ort_taskenv_free(_tenv, _taskFunc24_);
  return ((void *) 0);
}


void fft_twiddle_32_seq(int a, int b, struct _noname16_ (* in), struct _noname16_ (* out), struct _noname16_ (* W), int nW, int nWdn, int m)
# 3630 "fft.c"
{
  int l1, i;
  struct _noname16_ (* jp);
  struct _noname16_ (* kp);
  double tmpr;
  double tmpi;
  double wr;
  double wi;

  # 4441 "fft.c"
  if ((b - a) < 128)
    {
      for (i = a, l1 = nWdn * i, kp = out + i; i < b; i++, l1 += nWdn, kp++)
        {
          jp = in + i;
          {
            double r1_0;
            double i1_0;
            double r1_1;
            double i1_1;
            double r1_2;
            double i1_2;
            double r1_3;
            double i1_3;
            double r1_4;
            double i1_4;
            double r1_5;
            double i1_5;
            double r1_6;
            double i1_6;
            double r1_7;
            double i1_7;
            double r1_8;
            double i1_8;
            double r1_9;
            double i1_9;
            double r1_10;
            double i1_10;
            double r1_11;
            double i1_11;
            double r1_12;
            double i1_12;
            double r1_13;
            double i1_13;
            double r1_14;
            double i1_14;
            double r1_15;
            double i1_15;
            double r1_16;
            double i1_16;
            double r1_17;
            double i1_17;
            double r1_18;
            double i1_18;
            double r1_19;
            double i1_19;
            double r1_20;
            double i1_20;
            double r1_21;
            double i1_21;
            double r1_22;
            double i1_22;
            double r1_23;
            double i1_23;
            double r1_24;
            double i1_24;
            double r1_25;
            double i1_25;
            double r1_26;
            double i1_26;
            double r1_27;
            double i1_27;
            double r1_28;
            double i1_28;
            double r1_29;
            double i1_29;
            double r1_30;
            double i1_30;
            double r1_31;
            double i1_31;

            # 3671 "fft.c"
            {
              double r2_0;
              double i2_0;
              double r2_2;
              double i2_2;
              double r2_4;
              double i2_4;
              double r2_6;
              double i2_6;
              double r2_8;
              double i2_8;
              double r2_10;
              double i2_10;
              double r2_12;
              double i2_12;
              double r2_14;
              double i2_14;
              double r2_16;
              double i2_16;
              double r2_18;
              double i2_18;
              double r2_20;
              double i2_20;
              double r2_22;
              double i2_22;
              double r2_24;
              double i2_24;
              double r2_26;
              double i2_26;
              double r2_28;
              double i2_28;
              double r2_30;
              double i2_30;

              # 3688 "fft.c"
              {
                double r3_0;
                double i3_0;
                double r3_4;
                double i3_4;
                double r3_8;
                double i3_8;
                double r3_12;
                double i3_12;
                double r3_16;
                double i3_16;
                double r3_20;
                double i3_20;
                double r3_24;
                double i3_24;
                double r3_28;
                double i3_28;

                # 3697 "fft.c"
                {
                  double r4_0;
                  double i4_0;
                  double r4_8;
                  double i4_8;
                  double r4_16;
                  double i4_16;
                  double r4_24;
                  double i4_24;

                  # 3702 "fft.c"
                  {
                    double r5_0;
                    double i5_0;
                    double r5_16;
                    double i5_16;

                    # 3705 "fft.c"
                    r5_0 = ((jp[0 * m]).re);
                    i5_0 = ((jp[0 * m]).im);
                    wr = ((W[16 * l1]).re);
                    wi = ((W[16 * l1]).im);
                    tmpr = ((jp[16 * m]).re);
                    tmpi = ((jp[16 * m]).im);
                    r5_16 = ((wr * tmpr) - (wi * tmpi));
                    i5_16 = ((wi * tmpr) + (wr * tmpi));
                    r4_0 = (r5_0 + r5_16);
                    i4_0 = (i5_0 + i5_16);
                    r4_16 = (r5_0 - r5_16);
                    i4_16 = (i5_0 - i5_16);
                  }
                  {
                    double r5_8;
                    double i5_8;
                    double r5_24;
                    double i5_24;

                    # 3721 "fft.c"
                    wr = ((W[8 * l1]).re);
                    wi = ((W[8 * l1]).im);
                    tmpr = ((jp[8 * m]).re);
                    tmpi = ((jp[8 * m]).im);
                    r5_8 = ((wr * tmpr) - (wi * tmpi));
                    i5_8 = ((wi * tmpr) + (wr * tmpi));
                    wr = ((W[24 * l1]).re);
                    wi = ((W[24 * l1]).im);
                    tmpr = ((jp[24 * m]).re);
                    tmpi = ((jp[24 * m]).im);
                    r5_24 = ((wr * tmpr) - (wi * tmpi));
                    i5_24 = ((wi * tmpr) + (wr * tmpi));
                    r4_8 = (r5_8 + r5_24);
                    i4_8 = (i5_8 + i5_24);
                    r4_24 = (r5_8 - r5_24);
                    i4_24 = (i5_8 - i5_24);
                  }
                  r3_0 = (r4_0 + r4_8);
                  i3_0 = (i4_0 + i4_8);
                  r3_16 = (r4_0 - r4_8);
                  i3_16 = (i4_0 - i4_8);
                  r3_8 = (r4_16 + i4_24);
                  i3_8 = (i4_16 - r4_24);
                  r3_24 = (r4_16 - i4_24);
                  i3_24 = (i4_16 + r4_24);
                }
                {
                  double r4_4;
                  double i4_4;
                  double r4_12;
                  double i4_12;
                  double r4_20;
                  double i4_20;
                  double r4_28;
                  double i4_28;

                  # 3752 "fft.c"
                  {
                    double r5_4;
                    double i5_4;
                    double r5_20;
                    double i5_20;

                    # 3755 "fft.c"
                    wr = ((W[4 * l1]).re);
                    wi = ((W[4 * l1]).im);
                    tmpr = ((jp[4 * m]).re);
                    tmpi = ((jp[4 * m]).im);
                    r5_4 = ((wr * tmpr) - (wi * tmpi));
                    i5_4 = ((wi * tmpr) + (wr * tmpi));
                    wr = ((W[20 * l1]).re);
                    wi = ((W[20 * l1]).im);
                    tmpr = ((jp[20 * m]).re);
                    tmpi = ((jp[20 * m]).im);
                    r5_20 = ((wr * tmpr) - (wi * tmpi));
                    i5_20 = ((wi * tmpr) + (wr * tmpi));
                    r4_4 = (r5_4 + r5_20);
                    i4_4 = (i5_4 + i5_20);
                    r4_20 = (r5_4 - r5_20);
                    i4_20 = (i5_4 - i5_20);
                  }
                  {
                    double r5_12;
                    double i5_12;
                    double r5_28;
                    double i5_28;

                    # 3775 "fft.c"
                    wr = ((W[12 * l1]).re);
                    wi = ((W[12 * l1]).im);
                    tmpr = ((jp[12 * m]).re);
                    tmpi = ((jp[12 * m]).im);
                    r5_12 = ((wr * tmpr) - (wi * tmpi));
                    i5_12 = ((wi * tmpr) + (wr * tmpi));
                    wr = ((W[28 * l1]).re);
                    wi = ((W[28 * l1]).im);
                    tmpr = ((jp[28 * m]).re);
                    tmpi = ((jp[28 * m]).im);
                    r5_28 = ((wr * tmpr) - (wi * tmpi));
                    i5_28 = ((wi * tmpr) + (wr * tmpi));
                    r4_12 = (r5_12 + r5_28);
                    i4_12 = (i5_12 + i5_28);
                    r4_28 = (r5_12 - r5_28);
                    i4_28 = (i5_12 - i5_28);
                  }
                  r3_4 = (r4_4 + r4_12);
                  i3_4 = (i4_4 + i4_12);
                  r3_20 = (r4_4 - r4_12);
                  i3_20 = (i4_4 - i4_12);
                  r3_12 = (r4_20 + i4_28);
                  i3_12 = (i4_20 - r4_28);
                  r3_28 = (r4_20 - i4_28);
                  i3_28 = (i4_20 + r4_28);
                }
                r2_0 = (r3_0 + r3_4);
                i2_0 = (i3_0 + i3_4);
                r2_16 = (r3_0 - r3_4);
                i2_16 = (i3_0 - i3_4);
                tmpr = (0.707106781187 * (r3_12 + i3_12));
                tmpi = (0.707106781187 * (i3_12 - r3_12));
                r2_4 = (r3_8 + tmpr);
                i2_4 = (i3_8 + tmpi);
                r2_20 = (r3_8 - tmpr);
                i2_20 = (i3_8 - tmpi);
                r2_8 = (r3_16 + i3_20);
                i2_8 = (i3_16 - r3_20);
                r2_24 = (r3_16 - i3_20);
                i2_24 = (i3_16 + r3_20);
                tmpr = (0.707106781187 * (i3_28 - r3_28));
                tmpi = (0.707106781187 * (r3_28 + i3_28));
                r2_12 = (r3_24 + tmpr);
                i2_12 = (i3_24 - tmpi);
                r2_28 = (r3_24 - tmpr);
                i2_28 = (i3_24 + tmpi);
              }
              {
                double r3_2;
                double i3_2;
                double r3_6;
                double i3_6;
                double r3_10;
                double i3_10;
                double r3_14;
                double i3_14;
                double r3_18;
                double i3_18;
                double r3_22;
                double i3_22;
                double r3_26;
                double i3_26;
                double r3_30;
                double i3_30;

                # 3831 "fft.c"
                {
                  double r4_2;
                  double i4_2;
                  double r4_10;
                  double i4_10;
                  double r4_18;
                  double i4_18;
                  double r4_26;
                  double i4_26;

                  # 3836 "fft.c"
                  {
                    double r5_2;
                    double i5_2;
                    double r5_18;
                    double i5_18;

                    # 3839 "fft.c"
                    wr = ((W[2 * l1]).re);
                    wi = ((W[2 * l1]).im);
                    tmpr = ((jp[2 * m]).re);
                    tmpi = ((jp[2 * m]).im);
                    r5_2 = ((wr * tmpr) - (wi * tmpi));
                    i5_2 = ((wi * tmpr) + (wr * tmpi));
                    wr = ((W[18 * l1]).re);
                    wi = ((W[18 * l1]).im);
                    tmpr = ((jp[18 * m]).re);
                    tmpi = ((jp[18 * m]).im);
                    r5_18 = ((wr * tmpr) - (wi * tmpi));
                    i5_18 = ((wi * tmpr) + (wr * tmpi));
                    r4_2 = (r5_2 + r5_18);
                    i4_2 = (i5_2 + i5_18);
                    r4_18 = (r5_2 - r5_18);
                    i4_18 = (i5_2 - i5_18);
                  }
                  {
                    double r5_10;
                    double i5_10;
                    double r5_26;
                    double i5_26;

                    # 3859 "fft.c"
                    wr = ((W[10 * l1]).re);
                    wi = ((W[10 * l1]).im);
                    tmpr = ((jp[10 * m]).re);
                    tmpi = ((jp[10 * m]).im);
                    r5_10 = ((wr * tmpr) - (wi * tmpi));
                    i5_10 = ((wi * tmpr) + (wr * tmpi));
                    wr = ((W[26 * l1]).re);
                    wi = ((W[26 * l1]).im);
                    tmpr = ((jp[26 * m]).re);
                    tmpi = ((jp[26 * m]).im);
                    r5_26 = ((wr * tmpr) - (wi * tmpi));
                    i5_26 = ((wi * tmpr) + (wr * tmpi));
                    r4_10 = (r5_10 + r5_26);
                    i4_10 = (i5_10 + i5_26);
                    r4_26 = (r5_10 - r5_26);
                    i4_26 = (i5_10 - i5_26);
                  }
                  r3_2 = (r4_2 + r4_10);
                  i3_2 = (i4_2 + i4_10);
                  r3_18 = (r4_2 - r4_10);
                  i3_18 = (i4_2 - i4_10);
                  r3_10 = (r4_18 + i4_26);
                  i3_10 = (i4_18 - r4_26);
                  r3_26 = (r4_18 - i4_26);
                  i3_26 = (i4_18 + r4_26);
                }
                {
                  double r4_6;
                  double i4_6;
                  double r4_14;
                  double i4_14;
                  double r4_22;
                  double i4_22;
                  double r4_30;
                  double i4_30;

                  # 3890 "fft.c"
                  {
                    double r5_6;
                    double i5_6;
                    double r5_22;
                    double i5_22;

                    # 3893 "fft.c"
                    wr = ((W[6 * l1]).re);
                    wi = ((W[6 * l1]).im);
                    tmpr = ((jp[6 * m]).re);
                    tmpi = ((jp[6 * m]).im);
                    r5_6 = ((wr * tmpr) - (wi * tmpi));
                    i5_6 = ((wi * tmpr) + (wr * tmpi));
                    wr = ((W[22 * l1]).re);
                    wi = ((W[22 * l1]).im);
                    tmpr = ((jp[22 * m]).re);
                    tmpi = ((jp[22 * m]).im);
                    r5_22 = ((wr * tmpr) - (wi * tmpi));
                    i5_22 = ((wi * tmpr) + (wr * tmpi));
                    r4_6 = (r5_6 + r5_22);
                    i4_6 = (i5_6 + i5_22);
                    r4_22 = (r5_6 - r5_22);
                    i4_22 = (i5_6 - i5_22);
                  }
                  {
                    double r5_14;
                    double i5_14;
                    double r5_30;
                    double i5_30;

                    # 3913 "fft.c"
                    wr = ((W[14 * l1]).re);
                    wi = ((W[14 * l1]).im);
                    tmpr = ((jp[14 * m]).re);
                    tmpi = ((jp[14 * m]).im);
                    r5_14 = ((wr * tmpr) - (wi * tmpi));
                    i5_14 = ((wi * tmpr) + (wr * tmpi));
                    wr = ((W[30 * l1]).re);
                    wi = ((W[30 * l1]).im);
                    tmpr = ((jp[30 * m]).re);
                    tmpi = ((jp[30 * m]).im);
                    r5_30 = ((wr * tmpr) - (wi * tmpi));
                    i5_30 = ((wi * tmpr) + (wr * tmpi));
                    r4_14 = (r5_14 + r5_30);
                    i4_14 = (i5_14 + i5_30);
                    r4_30 = (r5_14 - r5_30);
                    i4_30 = (i5_14 - i5_30);
                  }
                  r3_6 = (r4_6 + r4_14);
                  i3_6 = (i4_6 + i4_14);
                  r3_22 = (r4_6 - r4_14);
                  i3_22 = (i4_6 - i4_14);
                  r3_14 = (r4_22 + i4_30);
                  i3_14 = (i4_22 - r4_30);
                  r3_30 = (r4_22 - i4_30);
                  i3_30 = (i4_22 + r4_30);
                }
                r2_2 = (r3_2 + r3_6);
                i2_2 = (i3_2 + i3_6);
                r2_18 = (r3_2 - r3_6);
                i2_18 = (i3_2 - i3_6);
                tmpr = (0.707106781187 * (r3_14 + i3_14));
                tmpi = (0.707106781187 * (i3_14 - r3_14));
                r2_6 = (r3_10 + tmpr);
                i2_6 = (i3_10 + tmpi);
                r2_22 = (r3_10 - tmpr);
                i2_22 = (i3_10 - tmpi);
                r2_10 = (r3_18 + i3_22);
                i2_10 = (i3_18 - r3_22);
                r2_26 = (r3_18 - i3_22);
                i2_26 = (i3_18 + r3_22);
                tmpr = (0.707106781187 * (i3_30 - r3_30));
                tmpi = (0.707106781187 * (r3_30 + i3_30));
                r2_14 = (r3_26 + tmpr);
                i2_14 = (i3_26 - tmpi);
                r2_30 = (r3_26 - tmpr);
                i2_30 = (i3_26 + tmpi);
              }
              r1_0 = (r2_0 + r2_2);
              i1_0 = (i2_0 + i2_2);
              r1_16 = (r2_0 - r2_2);
              i1_16 = (i2_0 - i2_2);
              tmpr = ((0.923879532511 * r2_6) + (0.382683432365 * i2_6));
              tmpi = ((0.923879532511 * i2_6) - (0.382683432365 * r2_6));
              r1_2 = (r2_4 + tmpr);
              i1_2 = (i2_4 + tmpi);
              r1_18 = (r2_4 - tmpr);
              i1_18 = (i2_4 - tmpi);
              tmpr = (0.707106781187 * (r2_10 + i2_10));
              tmpi = (0.707106781187 * (i2_10 - r2_10));
              r1_4 = (r2_8 + tmpr);
              i1_4 = (i2_8 + tmpi);
              r1_20 = (r2_8 - tmpr);
              i1_20 = (i2_8 - tmpi);
              tmpr = ((0.382683432365 * r2_14) + (0.923879532511 * i2_14));
              tmpi = ((0.382683432365 * i2_14) - (0.923879532511 * r2_14));
              r1_6 = (r2_12 + tmpr);
              i1_6 = (i2_12 + tmpi);
              r1_22 = (r2_12 - tmpr);
              i1_22 = (i2_12 - tmpi);
              r1_8 = (r2_16 + i2_18);
              i1_8 = (i2_16 - r2_18);
              r1_24 = (r2_16 - i2_18);
              i1_24 = (i2_16 + r2_18);
              tmpr = ((0.923879532511 * i2_22) - (0.382683432365 * r2_22));
              tmpi = ((0.923879532511 * r2_22) + (0.382683432365 * i2_22));
              r1_10 = (r2_20 + tmpr);
              i1_10 = (i2_20 - tmpi);
              r1_26 = (r2_20 - tmpr);
              i1_26 = (i2_20 + tmpi);
              tmpr = (0.707106781187 * (i2_26 - r2_26));
              tmpi = (0.707106781187 * (r2_26 + i2_26));
              r1_12 = (r2_24 + tmpr);
              i1_12 = (i2_24 - tmpi);
              r1_28 = (r2_24 - tmpr);
              i1_28 = (i2_24 + tmpi);
              tmpr = ((0.382683432365 * i2_30) - (0.923879532511 * r2_30));
              tmpi = ((0.382683432365 * r2_30) + (0.923879532511 * i2_30));
              r1_14 = (r2_28 + tmpr);
              i1_14 = (i2_28 - tmpi);
              r1_30 = (r2_28 - tmpr);
              i1_30 = (i2_28 + tmpi);
            }
            {
              double r2_1;
              double i2_1;
              double r2_3;
              double i2_3;
              double r2_5;
              double i2_5;
              double r2_7;
              double i2_7;
              double r2_9;
              double i2_9;
              double r2_11;
              double i2_11;
              double r2_13;
              double i2_13;
              double r2_15;
              double i2_15;
              double r2_17;
              double i2_17;
              double r2_19;
              double i2_19;
              double r2_21;
              double i2_21;
              double r2_23;
              double i2_23;
              double r2_25;
              double i2_25;
              double r2_27;
              double i2_27;
              double r2_29;
              double i2_29;
              double r2_31;
              double i2_31;

              # 4022 "fft.c"
              {
                double r3_1;
                double i3_1;
                double r3_5;
                double i3_5;
                double r3_9;
                double i3_9;
                double r3_13;
                double i3_13;
                double r3_17;
                double i3_17;
                double r3_21;
                double i3_21;
                double r3_25;
                double i3_25;
                double r3_29;
                double i3_29;

                # 4031 "fft.c"
                {
                  double r4_1;
                  double i4_1;
                  double r4_9;
                  double i4_9;
                  double r4_17;
                  double i4_17;
                  double r4_25;
                  double i4_25;

                  # 4036 "fft.c"
                  {
                    double r5_1;
                    double i5_1;
                    double r5_17;
                    double i5_17;

                    # 4039 "fft.c"
                    wr = ((W[1 * l1]).re);
                    wi = ((W[1 * l1]).im);
                    tmpr = ((jp[1 * m]).re);
                    tmpi = ((jp[1 * m]).im);
                    r5_1 = ((wr * tmpr) - (wi * tmpi));
                    i5_1 = ((wi * tmpr) + (wr * tmpi));
                    wr = ((W[17 * l1]).re);
                    wi = ((W[17 * l1]).im);
                    tmpr = ((jp[17 * m]).re);
                    tmpi = ((jp[17 * m]).im);
                    r5_17 = ((wr * tmpr) - (wi * tmpi));
                    i5_17 = ((wi * tmpr) + (wr * tmpi));
                    r4_1 = (r5_1 + r5_17);
                    i4_1 = (i5_1 + i5_17);
                    r4_17 = (r5_1 - r5_17);
                    i4_17 = (i5_1 - i5_17);
                  }
                  {
                    double r5_9;
                    double i5_9;
                    double r5_25;
                    double i5_25;

                    # 4059 "fft.c"
                    wr = ((W[9 * l1]).re);
                    wi = ((W[9 * l1]).im);
                    tmpr = ((jp[9 * m]).re);
                    tmpi = ((jp[9 * m]).im);
                    r5_9 = ((wr * tmpr) - (wi * tmpi));
                    i5_9 = ((wi * tmpr) + (wr * tmpi));
                    wr = ((W[25 * l1]).re);
                    wi = ((W[25 * l1]).im);
                    tmpr = ((jp[25 * m]).re);
                    tmpi = ((jp[25 * m]).im);
                    r5_25 = ((wr * tmpr) - (wi * tmpi));
                    i5_25 = ((wi * tmpr) + (wr * tmpi));
                    r4_9 = (r5_9 + r5_25);
                    i4_9 = (i5_9 + i5_25);
                    r4_25 = (r5_9 - r5_25);
                    i4_25 = (i5_9 - i5_25);
                  }
                  r3_1 = (r4_1 + r4_9);
                  i3_1 = (i4_1 + i4_9);
                  r3_17 = (r4_1 - r4_9);
                  i3_17 = (i4_1 - i4_9);
                  r3_9 = (r4_17 + i4_25);
                  i3_9 = (i4_17 - r4_25);
                  r3_25 = (r4_17 - i4_25);
                  i3_25 = (i4_17 + r4_25);
                }
                {
                  double r4_5;
                  double i4_5;
                  double r4_13;
                  double i4_13;
                  double r4_21;
                  double i4_21;
                  double r4_29;
                  double i4_29;

                  # 4090 "fft.c"
                  {
                    double r5_5;
                    double i5_5;
                    double r5_21;
                    double i5_21;

                    # 4093 "fft.c"
                    wr = ((W[5 * l1]).re);
                    wi = ((W[5 * l1]).im);
                    tmpr = ((jp[5 * m]).re);
                    tmpi = ((jp[5 * m]).im);
                    r5_5 = ((wr * tmpr) - (wi * tmpi));
                    i5_5 = ((wi * tmpr) + (wr * tmpi));
                    wr = ((W[21 * l1]).re);
                    wi = ((W[21 * l1]).im);
                    tmpr = ((jp[21 * m]).re);
                    tmpi = ((jp[21 * m]).im);
                    r5_21 = ((wr * tmpr) - (wi * tmpi));
                    i5_21 = ((wi * tmpr) + (wr * tmpi));
                    r4_5 = (r5_5 + r5_21);
                    i4_5 = (i5_5 + i5_21);
                    r4_21 = (r5_5 - r5_21);
                    i4_21 = (i5_5 - i5_21);
                  }
                  {
                    double r5_13;
                    double i5_13;
                    double r5_29;
                    double i5_29;

                    # 4113 "fft.c"
                    wr = ((W[13 * l1]).re);
                    wi = ((W[13 * l1]).im);
                    tmpr = ((jp[13 * m]).re);
                    tmpi = ((jp[13 * m]).im);
                    r5_13 = ((wr * tmpr) - (wi * tmpi));
                    i5_13 = ((wi * tmpr) + (wr * tmpi));
                    wr = ((W[29 * l1]).re);
                    wi = ((W[29 * l1]).im);
                    tmpr = ((jp[29 * m]).re);
                    tmpi = ((jp[29 * m]).im);
                    r5_29 = ((wr * tmpr) - (wi * tmpi));
                    i5_29 = ((wi * tmpr) + (wr * tmpi));
                    r4_13 = (r5_13 + r5_29);
                    i4_13 = (i5_13 + i5_29);
                    r4_29 = (r5_13 - r5_29);
                    i4_29 = (i5_13 - i5_29);
                  }
                  r3_5 = (r4_5 + r4_13);
                  i3_5 = (i4_5 + i4_13);
                  r3_21 = (r4_5 - r4_13);
                  i3_21 = (i4_5 - i4_13);
                  r3_13 = (r4_21 + i4_29);
                  i3_13 = (i4_21 - r4_29);
                  r3_29 = (r4_21 - i4_29);
                  i3_29 = (i4_21 + r4_29);
                }
                r2_1 = (r3_1 + r3_5);
                i2_1 = (i3_1 + i3_5);
                r2_17 = (r3_1 - r3_5);
                i2_17 = (i3_1 - i3_5);
                tmpr = (0.707106781187 * (r3_13 + i3_13));
                tmpi = (0.707106781187 * (i3_13 - r3_13));
                r2_5 = (r3_9 + tmpr);
                i2_5 = (i3_9 + tmpi);
                r2_21 = (r3_9 - tmpr);
                i2_21 = (i3_9 - tmpi);
                r2_9 = (r3_17 + i3_21);
                i2_9 = (i3_17 - r3_21);
                r2_25 = (r3_17 - i3_21);
                i2_25 = (i3_17 + r3_21);
                tmpr = (0.707106781187 * (i3_29 - r3_29));
                tmpi = (0.707106781187 * (r3_29 + i3_29));
                r2_13 = (r3_25 + tmpr);
                i2_13 = (i3_25 - tmpi);
                r2_29 = (r3_25 - tmpr);
                i2_29 = (i3_25 + tmpi);
              }
              {
                double r3_3;
                double i3_3;
                double r3_7;
                double i3_7;
                double r3_11;
                double i3_11;
                double r3_15;
                double i3_15;
                double r3_19;
                double i3_19;
                double r3_23;
                double i3_23;
                double r3_27;
                double i3_27;
                double r3_31;
                double i3_31;

                # 4169 "fft.c"
                {
                  double r4_3;
                  double i4_3;
                  double r4_11;
                  double i4_11;
                  double r4_19;
                  double i4_19;
                  double r4_27;
                  double i4_27;

                  # 4174 "fft.c"
                  {
                    double r5_3;
                    double i5_3;
                    double r5_19;
                    double i5_19;

                    # 4177 "fft.c"
                    wr = ((W[3 * l1]).re);
                    wi = ((W[3 * l1]).im);
                    tmpr = ((jp[3 * m]).re);
                    tmpi = ((jp[3 * m]).im);
                    r5_3 = ((wr * tmpr) - (wi * tmpi));
                    i5_3 = ((wi * tmpr) + (wr * tmpi));
                    wr = ((W[19 * l1]).re);
                    wi = ((W[19 * l1]).im);
                    tmpr = ((jp[19 * m]).re);
                    tmpi = ((jp[19 * m]).im);
                    r5_19 = ((wr * tmpr) - (wi * tmpi));
                    i5_19 = ((wi * tmpr) + (wr * tmpi));
                    r4_3 = (r5_3 + r5_19);
                    i4_3 = (i5_3 + i5_19);
                    r4_19 = (r5_3 - r5_19);
                    i4_19 = (i5_3 - i5_19);
                  }
                  {
                    double r5_11;
                    double i5_11;
                    double r5_27;
                    double i5_27;

                    # 4197 "fft.c"
                    wr = ((W[11 * l1]).re);
                    wi = ((W[11 * l1]).im);
                    tmpr = ((jp[11 * m]).re);
                    tmpi = ((jp[11 * m]).im);
                    r5_11 = ((wr * tmpr) - (wi * tmpi));
                    i5_11 = ((wi * tmpr) + (wr * tmpi));
                    wr = ((W[27 * l1]).re);
                    wi = ((W[27 * l1]).im);
                    tmpr = ((jp[27 * m]).re);
                    tmpi = ((jp[27 * m]).im);
                    r5_27 = ((wr * tmpr) - (wi * tmpi));
                    i5_27 = ((wi * tmpr) + (wr * tmpi));
                    r4_11 = (r5_11 + r5_27);
                    i4_11 = (i5_11 + i5_27);
                    r4_27 = (r5_11 - r5_27);
                    i4_27 = (i5_11 - i5_27);
                  }
                  r3_3 = (r4_3 + r4_11);
                  i3_3 = (i4_3 + i4_11);
                  r3_19 = (r4_3 - r4_11);
                  i3_19 = (i4_3 - i4_11);
                  r3_11 = (r4_19 + i4_27);
                  i3_11 = (i4_19 - r4_27);
                  r3_27 = (r4_19 - i4_27);
                  i3_27 = (i4_19 + r4_27);
                }
                {
                  double r4_7;
                  double i4_7;
                  double r4_15;
                  double i4_15;
                  double r4_23;
                  double i4_23;
                  double r4_31;
                  double i4_31;

                  # 4228 "fft.c"
                  {
                    double r5_7;
                    double i5_7;
                    double r5_23;
                    double i5_23;

                    # 4231 "fft.c"
                    wr = ((W[7 * l1]).re);
                    wi = ((W[7 * l1]).im);
                    tmpr = ((jp[7 * m]).re);
                    tmpi = ((jp[7 * m]).im);
                    r5_7 = ((wr * tmpr) - (wi * tmpi));
                    i5_7 = ((wi * tmpr) + (wr * tmpi));
                    wr = ((W[23 * l1]).re);
                    wi = ((W[23 * l1]).im);
                    tmpr = ((jp[23 * m]).re);
                    tmpi = ((jp[23 * m]).im);
                    r5_23 = ((wr * tmpr) - (wi * tmpi));
                    i5_23 = ((wi * tmpr) + (wr * tmpi));
                    r4_7 = (r5_7 + r5_23);
                    i4_7 = (i5_7 + i5_23);
                    r4_23 = (r5_7 - r5_23);
                    i4_23 = (i5_7 - i5_23);
                  }
                  {
                    double r5_15;
                    double i5_15;
                    double r5_31;
                    double i5_31;

                    # 4251 "fft.c"
                    wr = ((W[15 * l1]).re);
                    wi = ((W[15 * l1]).im);
                    tmpr = ((jp[15 * m]).re);
                    tmpi = ((jp[15 * m]).im);
                    r5_15 = ((wr * tmpr) - (wi * tmpi));
                    i5_15 = ((wi * tmpr) + (wr * tmpi));
                    wr = ((W[31 * l1]).re);
                    wi = ((W[31 * l1]).im);
                    tmpr = ((jp[31 * m]).re);
                    tmpi = ((jp[31 * m]).im);
                    r5_31 = ((wr * tmpr) - (wi * tmpi));
                    i5_31 = ((wi * tmpr) + (wr * tmpi));
                    r4_15 = (r5_15 + r5_31);
                    i4_15 = (i5_15 + i5_31);
                    r4_31 = (r5_15 - r5_31);
                    i4_31 = (i5_15 - i5_31);
                  }
                  r3_7 = (r4_7 + r4_15);
                  i3_7 = (i4_7 + i4_15);
                  r3_23 = (r4_7 - r4_15);
                  i3_23 = (i4_7 - i4_15);
                  r3_15 = (r4_23 + i4_31);
                  i3_15 = (i4_23 - r4_31);
                  r3_31 = (r4_23 - i4_31);
                  i3_31 = (i4_23 + r4_31);
                }
                r2_3 = (r3_3 + r3_7);
                i2_3 = (i3_3 + i3_7);
                r2_19 = (r3_3 - r3_7);
                i2_19 = (i3_3 - i3_7);
                tmpr = (0.707106781187 * (r3_15 + i3_15));
                tmpi = (0.707106781187 * (i3_15 - r3_15));
                r2_7 = (r3_11 + tmpr);
                i2_7 = (i3_11 + tmpi);
                r2_23 = (r3_11 - tmpr);
                i2_23 = (i3_11 - tmpi);
                r2_11 = (r3_19 + i3_23);
                i2_11 = (i3_19 - r3_23);
                r2_27 = (r3_19 - i3_23);
                i2_27 = (i3_19 + r3_23);
                tmpr = (0.707106781187 * (i3_31 - r3_31));
                tmpi = (0.707106781187 * (r3_31 + i3_31));
                r2_15 = (r3_27 + tmpr);
                i2_15 = (i3_27 - tmpi);
                r2_31 = (r3_27 - tmpr);
                i2_31 = (i3_27 + tmpi);
              }
              r1_1 = (r2_1 + r2_3);
              i1_1 = (i2_1 + i2_3);
              r1_17 = (r2_1 - r2_3);
              i1_17 = (i2_1 - i2_3);
              tmpr = ((0.923879532511 * r2_7) + (0.382683432365 * i2_7));
              tmpi = ((0.923879532511 * i2_7) - (0.382683432365 * r2_7));
              r1_3 = (r2_5 + tmpr);
              i1_3 = (i2_5 + tmpi);
              r1_19 = (r2_5 - tmpr);
              i1_19 = (i2_5 - tmpi);
              tmpr = (0.707106781187 * (r2_11 + i2_11));
              tmpi = (0.707106781187 * (i2_11 - r2_11));
              r1_5 = (r2_9 + tmpr);
              i1_5 = (i2_9 + tmpi);
              r1_21 = (r2_9 - tmpr);
              i1_21 = (i2_9 - tmpi);
              tmpr = ((0.382683432365 * r2_15) + (0.923879532511 * i2_15));
              tmpi = ((0.382683432365 * i2_15) - (0.923879532511 * r2_15));
              r1_7 = (r2_13 + tmpr);
              i1_7 = (i2_13 + tmpi);
              r1_23 = (r2_13 - tmpr);
              i1_23 = (i2_13 - tmpi);
              r1_9 = (r2_17 + i2_19);
              i1_9 = (i2_17 - r2_19);
              r1_25 = (r2_17 - i2_19);
              i1_25 = (i2_17 + r2_19);
              tmpr = ((0.923879532511 * i2_23) - (0.382683432365 * r2_23));
              tmpi = ((0.923879532511 * r2_23) + (0.382683432365 * i2_23));
              r1_11 = (r2_21 + tmpr);
              i1_11 = (i2_21 - tmpi);
              r1_27 = (r2_21 - tmpr);
              i1_27 = (i2_21 + tmpi);
              tmpr = (0.707106781187 * (i2_27 - r2_27));
              tmpi = (0.707106781187 * (r2_27 + i2_27));
              r1_13 = (r2_25 + tmpr);
              i1_13 = (i2_25 - tmpi);
              r1_29 = (r2_25 - tmpr);
              i1_29 = (i2_25 + tmpi);
              tmpr = ((0.382683432365 * i2_31) - (0.923879532511 * r2_31));
              tmpi = ((0.382683432365 * r2_31) + (0.923879532511 * i2_31));
              r1_15 = (r2_29 + tmpr);
              i1_15 = (i2_29 - tmpi);
              r1_31 = (r2_29 - tmpr);
              i1_31 = (i2_29 + tmpi);
            }
            ((kp[0 * m]).re) = (r1_0 + r1_1);
            ((kp[0 * m]).im) = (i1_0 + i1_1);
            ((kp[16 * m]).re) = (r1_0 - r1_1);
            ((kp[16 * m]).im) = (i1_0 - i1_1);
            tmpr = ((0.980785280403 * r1_3) + (0.195090322016 * i1_3));
            tmpi = ((0.980785280403 * i1_3) - (0.195090322016 * r1_3));
            ((kp[1 * m]).re) = (r1_2 + tmpr);
            ((kp[1 * m]).im) = (i1_2 + tmpi);
            ((kp[17 * m]).re) = (r1_2 - tmpr);
            ((kp[17 * m]).im) = (i1_2 - tmpi);
            tmpr = ((0.923879532511 * r1_5) + (0.382683432365 * i1_5));
            tmpi = ((0.923879532511 * i1_5) - (0.382683432365 * r1_5));
            ((kp[2 * m]).re) = (r1_4 + tmpr);
            ((kp[2 * m]).im) = (i1_4 + tmpi);
            ((kp[18 * m]).re) = (r1_4 - tmpr);
            ((kp[18 * m]).im) = (i1_4 - tmpi);
            tmpr = ((0.831469612303 * r1_7) + (0.55557023302 * i1_7));
            tmpi = ((0.831469612303 * i1_7) - (0.55557023302 * r1_7));
            ((kp[3 * m]).re) = (r1_6 + tmpr);
            ((kp[3 * m]).im) = (i1_6 + tmpi);
            ((kp[19 * m]).re) = (r1_6 - tmpr);
            ((kp[19 * m]).im) = (i1_6 - tmpi);
            tmpr = (0.707106781187 * (r1_9 + i1_9));
            tmpi = (0.707106781187 * (i1_9 - r1_9));
            ((kp[4 * m]).re) = (r1_8 + tmpr);
            ((kp[4 * m]).im) = (i1_8 + tmpi);
            ((kp[20 * m]).re) = (r1_8 - tmpr);
            ((kp[20 * m]).im) = (i1_8 - tmpi);
            tmpr = ((0.55557023302 * r1_11) + (0.831469612303 * i1_11));
            tmpi = ((0.55557023302 * i1_11) - (0.831469612303 * r1_11));
            ((kp[5 * m]).re) = (r1_10 + tmpr);
            ((kp[5 * m]).im) = (i1_10 + tmpi);
            ((kp[21 * m]).re) = (r1_10 - tmpr);
            ((kp[21 * m]).im) = (i1_10 - tmpi);
            tmpr = ((0.382683432365 * r1_13) + (0.923879532511 * i1_13));
            tmpi = ((0.382683432365 * i1_13) - (0.923879532511 * r1_13));
            ((kp[6 * m]).re) = (r1_12 + tmpr);
            ((kp[6 * m]).im) = (i1_12 + tmpi);
            ((kp[22 * m]).re) = (r1_12 - tmpr);
            ((kp[22 * m]).im) = (i1_12 - tmpi);
            tmpr = ((0.195090322016 * r1_15) + (0.980785280403 * i1_15));
            tmpi = ((0.195090322016 * i1_15) - (0.980785280403 * r1_15));
            ((kp[7 * m]).re) = (r1_14 + tmpr);
            ((kp[7 * m]).im) = (i1_14 + tmpi);
            ((kp[23 * m]).re) = (r1_14 - tmpr);
            ((kp[23 * m]).im) = (i1_14 - tmpi);
            ((kp[8 * m]).re) = (r1_16 + i1_17);
            ((kp[8 * m]).im) = (i1_16 - r1_17);
            ((kp[24 * m]).re) = (r1_16 - i1_17);
            ((kp[24 * m]).im) = (i1_16 + r1_17);
            tmpr = ((0.980785280403 * i1_19) - (0.195090322016 * r1_19));
            tmpi = ((0.980785280403 * r1_19) + (0.195090322016 * i1_19));
            ((kp[9 * m]).re) = (r1_18 + tmpr);
            ((kp[9 * m]).im) = (i1_18 - tmpi);
            ((kp[25 * m]).re) = (r1_18 - tmpr);
            ((kp[25 * m]).im) = (i1_18 + tmpi);
            tmpr = ((0.923879532511 * i1_21) - (0.382683432365 * r1_21));
            tmpi = ((0.923879532511 * r1_21) + (0.382683432365 * i1_21));
            ((kp[10 * m]).re) = (r1_20 + tmpr);
            ((kp[10 * m]).im) = (i1_20 - tmpi);
            ((kp[26 * m]).re) = (r1_20 - tmpr);
            ((kp[26 * m]).im) = (i1_20 + tmpi);
            tmpr = ((0.831469612303 * i1_23) - (0.55557023302 * r1_23));
            tmpi = ((0.831469612303 * r1_23) + (0.55557023302 * i1_23));
            ((kp[11 * m]).re) = (r1_22 + tmpr);
            ((kp[11 * m]).im) = (i1_22 - tmpi);
            ((kp[27 * m]).re) = (r1_22 - tmpr);
            ((kp[27 * m]).im) = (i1_22 + tmpi);
            tmpr = (0.707106781187 * (i1_25 - r1_25));
            tmpi = (0.707106781187 * (r1_25 + i1_25));
            ((kp[12 * m]).re) = (r1_24 + tmpr);
            ((kp[12 * m]).im) = (i1_24 - tmpi);
            ((kp[28 * m]).re) = (r1_24 - tmpr);
            ((kp[28 * m]).im) = (i1_24 + tmpi);
            tmpr = ((0.55557023302 * i1_27) - (0.831469612303 * r1_27));
            tmpi = ((0.55557023302 * r1_27) + (0.831469612303 * i1_27));
            ((kp[13 * m]).re) = (r1_26 + tmpr);
            ((kp[13 * m]).im) = (i1_26 - tmpi);
            ((kp[29 * m]).re) = (r1_26 - tmpr);
            ((kp[29 * m]).im) = (i1_26 + tmpi);
            tmpr = ((0.382683432365 * i1_29) - (0.923879532511 * r1_29));
            tmpi = ((0.382683432365 * r1_29) + (0.923879532511 * i1_29));
            ((kp[14 * m]).re) = (r1_28 + tmpr);
            ((kp[14 * m]).im) = (i1_28 - tmpi);
            ((kp[30 * m]).re) = (r1_28 - tmpr);
            ((kp[30 * m]).im) = (i1_28 + tmpi);
            tmpr = ((0.195090322016 * i1_31) - (0.980785280403 * r1_31));
            tmpi = ((0.195090322016 * r1_31) + (0.980785280403 * i1_31));
            ((kp[15 * m]).re) = (r1_30 + tmpr);
            ((kp[15 * m]).im) = (i1_30 - tmpi);
            ((kp[31 * m]).re) = (r1_30 - tmpr);
            ((kp[31 * m]).im) = (i1_30 + tmpi);
          }
        }
    }
  else
    {
      int ab = (a + b) / 2;

      fft_twiddle_32_seq(a, ab, in, out, W, nW, nWdn, m);
      fft_twiddle_32_seq(ab, b, in, out, W, nW, nWdn, m);
    }
}

static void * _taskFunc26_(void *);
static void * _taskFunc25_(void *);


void fft_unshuffle_32(int a, int b, struct _noname16_ (* in), struct _noname16_ (* out), int m)
{
  int i;
  const struct _noname16_ (* ip);
  struct _noname16_ (* jp);

  if ((b - a) < 128)
    {
      ip = in + a * 32;
      for (i = a; i < b; ++i)
        {
          jp = out + i;
          jp[0] = ip[0];
          jp[m] = ip[1];
          ip += 2;
          jp += 2 * m;
          jp[0] = ip[0];
          jp[m] = ip[1];
          ip += 2;
          jp += 2 * m;
          jp[0] = ip[0];
          jp[m] = ip[1];
          ip += 2;
          jp += 2 * m;
          jp[0] = ip[0];
          jp[m] = ip[1];
          ip += 2;
          jp += 2 * m;
          jp[0] = ip[0];
          jp[m] = ip[1];
          ip += 2;
          jp += 2 * m;
          jp[0] = ip[0];
          jp[m] = ip[1];
          ip += 2;
          jp += 2 * m;
          jp[0] = ip[0];
          jp[m] = ip[1];
          ip += 2;
          jp += 2 * m;
          jp[0] = ip[0];
          jp[m] = ip[1];
          ip += 2;
          jp += 2 * m;
          jp[0] = ip[0];
          jp[m] = ip[1];
          ip += 2;
          jp += 2 * m;
          jp[0] = ip[0];
          jp[m] = ip[1];
          ip += 2;
          jp += 2 * m;
          jp[0] = ip[0];
          jp[m] = ip[1];
          ip += 2;
          jp += 2 * m;
          jp[0] = ip[0];
          jp[m] = ip[1];
          ip += 2;
          jp += 2 * m;
          jp[0] = ip[0];
          jp[m] = ip[1];
          ip += 2;
          jp += 2 * m;
          jp[0] = ip[0];
          jp[m] = ip[1];
          ip += 2;
          jp += 2 * m;
          jp[0] = ip[0];
          jp[m] = ip[1];
          ip += 2;
          jp += 2 * m;
          jp[0] = ip[0];
          jp[m] = ip[1];
          ip += 2;
        }
    }
  else
    {
      int ab = (a + b) / 2;

      /* (l4518) #pragma omp task untied
 */
      # 4518 "fft.c"
      if (omp_in_final() || ort_task_throttling())
        {
          void * _itn;

          /* byvalue variables */
          int _fip_a = a, a = _fip_a;
          int _fip_ab = ab, ab = _fip_ab;
          struct _noname16_ (* _fip_in) = in, (* in) = _fip_in;
          struct _noname16_ (* _fip_out) = out, (* out) = _fip_out;
          int _fip_m = m, m = _fip_m;

          _itn = ort_task_immediate_start(0);
          {
            # 4519 "fft.c"
            fft_unshuffle_32(a, ab, in, out, m);
            CANCEL_task_4518 :
              ;
          }
          ort_task_immediate_end(_itn);
        }
      else
        {
          struct __taskenv__ {
              int a;
              int ab;
              struct _noname16_ (* in);
              struct _noname16_ (* out);
              int m;
            } * _tenv;

          _tenv = (struct __taskenv__ *) ort_taskenv_alloc(sizeof(struct __taskenv__), _taskFunc25_);
          /* byvalue variables */
          _tenv->a = a;
          _tenv->ab = ab;
          _tenv->in = in;
          _tenv->out = out;
          _tenv->m = m;
          ort_new_task(_taskFunc25_, (void *) _tenv, 0, 0, 1, 0, (void *) 0, 0, 0, 0);
          /* no other operations */
        }
      /* (l4520) #pragma omp task untied
 */
      # 4520 "fft.c"
      if (omp_in_final() || ort_task_throttling())
        {
          void * _itn;

          /* byvalue variables */
          int _fip_ab = ab, ab = _fip_ab;
          int _fip_b = b, b = _fip_b;
          struct _noname16_ (* _fip_in) = in, (* in) = _fip_in;
          struct _noname16_ (* _fip_out) = out, (* out) = _fip_out;
          int _fip_m = m, m = _fip_m;

          _itn = ort_task_immediate_start(0);
          {
            # 4521 "fft.c"
            fft_unshuffle_32(ab, b, in, out, m);
            CANCEL_task_4520 :
              ;
          }
          ort_task_immediate_end(_itn);
        }
      else
        {
          struct __taskenv__ {
              int ab;
              int b;
              struct _noname16_ (* in);
              struct _noname16_ (* out);
              int m;
            } * _tenv;

          _tenv = (struct __taskenv__ *) ort_taskenv_alloc(sizeof(struct __taskenv__), _taskFunc26_);
          /* byvalue variables */
          _tenv->ab = ab;
          _tenv->b = b;
          _tenv->in = in;
          _tenv->out = out;
          _tenv->m = m;
          ort_new_task(_taskFunc26_, (void *) _tenv, 0, 0, 1, 0, (void *) 0, 0, 0, 0);
          /* no other operations */
        }
      /* (l4522) #pragma omp taskwait 
 */
      # 4522 "fft.c"
      ort_taskwait(0);
    }
}


static void * _taskFunc25_(void * __arg)
{
  struct __taskenv__ {
      int a;
      int ab;
      struct _noname16_ (* in);
      struct _noname16_ (* out);
      int m;
    };
  struct __taskenv__ * _tenv = (struct __taskenv__ *) __arg;

  /* byvalue variables */
  int a = _tenv->a;
  int ab = _tenv->ab;
  struct _noname16_ (* in) = _tenv->in;
  struct _noname16_ (* out) = _tenv->out;
  int m = _tenv->m;

  /* no initializations */
  /* (l4518) #pragma omp task untied
 -- body moved below */
  # 4518 "fft.c"
  {
    # 4519 "fft.c"
    fft_unshuffle_32(a, ab, in, out, m);
    CANCEL_task_4518 :
      ;
  }
  /* no other operations */
  ort_taskenv_free(_tenv, _taskFunc25_);
  return ((void *) 0);
}


static void * _taskFunc26_(void * __arg)
{
  struct __taskenv__ {
      int ab;
      int b;
      struct _noname16_ (* in);
      struct _noname16_ (* out);
      int m;
    };
  struct __taskenv__ * _tenv = (struct __taskenv__ *) __arg;

  /* byvalue variables */
  int ab = _tenv->ab;
  int b = _tenv->b;
  struct _noname16_ (* in) = _tenv->in;
  struct _noname16_ (* out) = _tenv->out;
  int m = _tenv->m;

  /* no initializations */
  /* (l4520) #pragma omp task untied
 -- body moved below */
  # 4520 "fft.c"
  {
    # 4521 "fft.c"
    fft_unshuffle_32(ab, b, in, out, m);
    CANCEL_task_4520 :
      ;
  }
  /* no other operations */
  ort_taskenv_free(_tenv, _taskFunc26_);
  return ((void *) 0);
}


void fft_unshuffle_32_seq(int a, int b, struct _noname16_ (* in), struct _noname16_ (* out), int m)
# 4526 "fft.c"
{
  int i;
  const struct _noname16_ (* ip);
  struct _noname16_ (* jp);

  if ((b - a) < 128)
    {
      ip = in + a * 32;
      for (i = a; i < b; ++i)
        {
          jp = out + i;
          jp[0] = ip[0];
          jp[m] = ip[1];
          ip += 2;
          jp += 2 * m;
          jp[0] = ip[0];
          jp[m] = ip[1];
          ip += 2;
          jp += 2 * m;
          jp[0] = ip[0];
          jp[m] = ip[1];
          ip += 2;
          jp += 2 * m;
          jp[0] = ip[0];
          jp[m] = ip[1];
          ip += 2;
          jp += 2 * m;
          jp[0] = ip[0];
          jp[m] = ip[1];
          ip += 2;
          jp += 2 * m;
          jp[0] = ip[0];
          jp[m] = ip[1];
          ip += 2;
          jp += 2 * m;
          jp[0] = ip[0];
          jp[m] = ip[1];
          ip += 2;
          jp += 2 * m;
          jp[0] = ip[0];
          jp[m] = ip[1];
          ip += 2;
          jp += 2 * m;
          jp[0] = ip[0];
          jp[m] = ip[1];
          ip += 2;
          jp += 2 * m;
          jp[0] = ip[0];
          jp[m] = ip[1];
          ip += 2;
          jp += 2 * m;
          jp[0] = ip[0];
          jp[m] = ip[1];
          ip += 2;
          jp += 2 * m;
          jp[0] = ip[0];
          jp[m] = ip[1];
          ip += 2;
          jp += 2 * m;
          jp[0] = ip[0];
          jp[m] = ip[1];
          ip += 2;
          jp += 2 * m;
          jp[0] = ip[0];
          jp[m] = ip[1];
          ip += 2;
          jp += 2 * m;
          jp[0] = ip[0];
          jp[m] = ip[1];
          ip += 2;
          jp += 2 * m;
          jp[0] = ip[0];
          jp[m] = ip[1];
          ip += 2;
        }
    }
  else
    {
      int ab = (a + b) / 2;

      fft_unshuffle_32_seq(a, ab, in, out, m);
      fft_unshuffle_32_seq(ab, b, in, out, m);
    }
}

static void * _taskFunc38_(void *);
static void * _taskFunc37_(void *);
static void * _taskFunc36_(void *);
static void * _taskFunc35_(void *);
static void * _taskFunc34_(void *);
static void * _taskFunc33_(void *);
static void * _taskFunc32_(void *);
static void * _taskFunc31_(void *);
static void * _taskFunc30_(void *);
static void * _taskFunc29_(void *);
static void * _taskFunc28_(void *);
static void * _taskFunc27_(void *);


void fft_aux(int n, struct _noname16_ (* in), struct _noname16_ (* out), int * factors, struct _noname16_ (* W), int nW)
{
  int r, m;
  int k;

  if (n == 32)
    {
      fft_base_32(in, out);
      return;
    }
  if (n == 16)
    {
      fft_base_16(in, out);
      return;
    }
  if (n == 8)
    {
      fft_base_8(in, out);
      return;
    }
  if (n == 4)
    {
      fft_base_4(in, out);
      return;
    }
  if (n == 2)
    {
      fft_base_2(in, out);
      return;
    }
  r = *factors;
  m = n / r;
  if (r < n)
    {
      if (r == 32)
        {
          /* (l4660) #pragma omp task untied
 */
          # 4660 "fft.c"
          if (omp_in_final() || ort_task_throttling())
            {
              void * _itn;

              /* byvalue variables */
              int _fip_m = m, m = _fip_m;
              struct _noname16_ (* _fip_in) = in, (* in) = _fip_in;
              struct _noname16_ (* _fip_out) = out, (* out) = _fip_out;

              _itn = ort_task_immediate_start(0);
              {
                # 4661 "fft.c"
                fft_unshuffle_32(0, m, in, out, m);
                CANCEL_task_4660 :
                  ;
              }
              ort_task_immediate_end(_itn);
            }
          else
            {
              struct __taskenv__ {
                  int m;
                  struct _noname16_ (* in);
                  struct _noname16_ (* out);
                } * _tenv;

              _tenv = (struct __taskenv__ *) ort_taskenv_alloc(sizeof(struct __taskenv__), _taskFunc27_);
              /* byvalue variables */
              _tenv->m = m;
              _tenv->in = in;
              _tenv->out = out;
              ort_new_task(_taskFunc27_, (void *) _tenv, 0, 0, 1, 0, (void *) 0, 0, 0, 0);
              /* no other operations */
            }
        }
      else
        # 4675 "fft.c"
        if (r == 16)
          {
            /* (l4663) #pragma omp task untied
 */
            # 4663 "fft.c"
            if (omp_in_final() || ort_task_throttling())
              {
                void * _itn;

                /* byvalue variables */
                int _fip_m = m, m = _fip_m;
                struct _noname16_ (* _fip_in) = in, (* in) = _fip_in;
                struct _noname16_ (* _fip_out) = out, (* out) = _fip_out;

                _itn = ort_task_immediate_start(0);
                {
                  # 4664 "fft.c"
                  fft_unshuffle_16(0, m, in, out, m);
                  CANCEL_task_4663 :
                    ;
                }
                ort_task_immediate_end(_itn);
              }
            else
              {
                struct __taskenv__ {
                    int m;
                    struct _noname16_ (* in);
                    struct _noname16_ (* out);
                  } * _tenv;

                _tenv = (struct __taskenv__ *) ort_taskenv_alloc(sizeof(struct __taskenv__), _taskFunc28_);
                /* byvalue variables */
                _tenv->m = m;
                _tenv->in = in;
                _tenv->out = out;
                ort_new_task(_taskFunc28_, (void *) _tenv, 0, 0, 1, 0, (void *) 0, 0, 0, 0);
                /* no other operations */
              }
          }
        else
          # 4675 "fft.c"
          if (r == 8)
            {
              /* (l4666) #pragma omp task untied
 */
              # 4666 "fft.c"
              if (omp_in_final() || ort_task_throttling())
                {
                  void * _itn;

                  /* byvalue variables */
                  int _fip_m = m, m = _fip_m;
                  struct _noname16_ (* _fip_in) = in, (* in) = _fip_in;
                  struct _noname16_ (* _fip_out) = out, (* out) = _fip_out;

                  _itn = ort_task_immediate_start(0);
                  {
                    # 4667 "fft.c"
                    fft_unshuffle_8(0, m, in, out, m);
                    CANCEL_task_4666 :
                      ;
                  }
                  ort_task_immediate_end(_itn);
                }
              else
                {
                  struct __taskenv__ {
                      int m;
                      struct _noname16_ (* in);
                      struct _noname16_ (* out);
                    } * _tenv;

                  _tenv = (struct __taskenv__ *) ort_taskenv_alloc(sizeof(struct __taskenv__), _taskFunc29_);
                  /* byvalue variables */
                  _tenv->m = m;
                  _tenv->in = in;
                  _tenv->out = out;
                  ort_new_task(_taskFunc29_, (void *) _tenv, 0, 0, 1, 0, (void *) 0, 0, 0, 0);
                  /* no other operations */
                }
            }
          else
            # 4675 "fft.c"
            if (r == 4)
              {
                /* (l4669) #pragma omp task untied
 */
                # 4669 "fft.c"
                if (omp_in_final() || ort_task_throttling())
                  {
                    void * _itn;

                    /* byvalue variables */
                    int _fip_m = m, m = _fip_m;
                    struct _noname16_ (* _fip_in) = in, (* in) = _fip_in;
                    struct _noname16_ (* _fip_out) = out, (* out) = _fip_out;

                    _itn = ort_task_immediate_start(0);
                    {
                      # 4670 "fft.c"
                      fft_unshuffle_4(0, m, in, out, m);
                      CANCEL_task_4669 :
                        ;
                    }
                    ort_task_immediate_end(_itn);
                  }
                else
                  {
                    struct __taskenv__ {
                        int m;
                        struct _noname16_ (* in);
                        struct _noname16_ (* out);
                      } * _tenv;

                    _tenv = (struct __taskenv__ *) ort_taskenv_alloc(sizeof(struct __taskenv__), _taskFunc30_);
                    /* byvalue variables */
                    _tenv->m = m;
                    _tenv->in = in;
                    _tenv->out = out;
                    ort_new_task(_taskFunc30_, (void *) _tenv, 0, 0, 1, 0, (void *) 0, 0, 0, 0);
                    /* no other operations */
                  }
              }
            else
              # 4675 "fft.c"
              if (r == 2)
                {
                  /* (l4672) #pragma omp task untied
 */
                  # 4672 "fft.c"
                  if (omp_in_final() || ort_task_throttling())
                    {
                      void * _itn;

                      /* byvalue variables */
                      int _fip_m = m, m = _fip_m;
                      struct _noname16_ (* _fip_in) = in, (* in) = _fip_in;
                      struct _noname16_ (* _fip_out) = out, (* out) = _fip_out;

                      _itn = ort_task_immediate_start(0);
                      {
                        # 4673 "fft.c"
                        fft_unshuffle_2(0, m, in, out, m);
                        CANCEL_task_4672 :
                          ;
                      }
                      ort_task_immediate_end(_itn);
                    }
                  else
                    {
                      struct __taskenv__ {
                          int m;
                          struct _noname16_ (* in);
                          struct _noname16_ (* out);
                        } * _tenv;

                      _tenv = (struct __taskenv__ *) ort_taskenv_alloc(sizeof(struct __taskenv__), _taskFunc31_);
                      /* byvalue variables */
                      _tenv->m = m;
                      _tenv->in = in;
                      _tenv->out = out;
                      ort_new_task(_taskFunc31_, (void *) _tenv, 0, 0, 1, 0, (void *) 0, 0, 0, 0);
                      /* no other operations */
                    }
                }
              else
                # 4675 "fft.c"
                unshuffle(0, m, in, out, r, m);
      /* (l4677) #pragma omp taskwait 
 */
      # 4677 "fft.c"
      ort_taskwait(0);
      # 4682 "fft.c"
      for (k = 0; k < n; k += m)
        {
          /* (l4680) #pragma omp task untied
 */
          # 4680 "fft.c"
          if (omp_in_final() || ort_task_throttling())
            {
              void * _itn;

              /* byvalue variables */
              int _fip_m = m, m = _fip_m;
              struct _noname16_ (* _fip_out) = out, (* out) = _fip_out;
              int _fip_k = k, k = _fip_k;
              struct _noname16_ (* _fip_in) = in, (* in) = _fip_in;
              int * _fip_factors = factors, * factors = _fip_factors;
              struct _noname16_ (* _fip_W) = W, (* W) = _fip_W;
              int _fip_nW = nW, nW = _fip_nW;

              _itn = ort_task_immediate_start(0);
              {
                # 4681 "fft.c"
                fft_aux(m, out + k, in + k, factors + 1, W, nW);
                CANCEL_task_4680 :
                  ;
              }
              ort_task_immediate_end(_itn);
            }
          else
            {
              struct __taskenv__ {
                  int m;
                  struct _noname16_ (* out);
                  int k;
                  struct _noname16_ (* in);
                  int * factors;
                  struct _noname16_ (* W);
                  int nW;
                } * _tenv;

              _tenv = (struct __taskenv__ *) ort_taskenv_alloc(sizeof(struct __taskenv__), _taskFunc32_);
              /* byvalue variables */
              _tenv->m = m;
              _tenv->out = out;
              _tenv->k = k;
              _tenv->in = in;
              _tenv->factors = factors;
              _tenv->W = W;
              _tenv->nW = nW;
              ort_new_task(_taskFunc32_, (void *) _tenv, 0, 0, 1, 0, (void *) 0, 0, 0, 0);
              /* no other operations */
            }
        }
      /* (l4683) #pragma omp taskwait 
 */
      # 4683 "fft.c"
      ort_taskwait(0);
    }
  # 4707 "fft.c"
  if (r == 2)
    {
      /* (l4690) #pragma omp task untied
 */
      # 4690 "fft.c"
      if (omp_in_final() || ort_task_throttling())
        {
          void * _itn;

          /* byvalue variables */
          int _fip_m = m, m = _fip_m;
          struct _noname16_ (* _fip_in) = in, (* in) = _fip_in;
          struct _noname16_ (* _fip_out) = out, (* out) = _fip_out;
          struct _noname16_ (* _fip_W) = W, (* W) = _fip_W;
          int _fip_nW = nW, nW = _fip_nW;
          int _fip_n = n, n = _fip_n;

          _itn = ort_task_immediate_start(0);
          {
            # 4691 "fft.c"
            fft_twiddle_2(0, m, in, out, W, nW, nW / n, m);
            CANCEL_task_4690 :
              ;
          }
          ort_task_immediate_end(_itn);
        }
      else
        {
          struct __taskenv__ {
              int m;
              struct _noname16_ (* in);
              struct _noname16_ (* out);
              struct _noname16_ (* W);
              int nW;
              int n;
            } * _tenv;

          _tenv = (struct __taskenv__ *) ort_taskenv_alloc(sizeof(struct __taskenv__), _taskFunc33_);
          /* byvalue variables */
          _tenv->m = m;
          _tenv->in = in;
          _tenv->out = out;
          _tenv->W = W;
          _tenv->nW = nW;
          _tenv->n = n;
          ort_new_task(_taskFunc33_, (void *) _tenv, 0, 0, 1, 0, (void *) 0, 0, 0, 0);
          /* no other operations */
        }
    }
  else
    # 4707 "fft.c"
    if (r == 4)
      {
        /* (l4693) #pragma omp task untied
 */
        # 4693 "fft.c"
        if (omp_in_final() || ort_task_throttling())
          {
            void * _itn;

            /* byvalue variables */
            int _fip_m = m, m = _fip_m;
            struct _noname16_ (* _fip_in) = in, (* in) = _fip_in;
            struct _noname16_ (* _fip_out) = out, (* out) = _fip_out;
            struct _noname16_ (* _fip_W) = W, (* W) = _fip_W;
            int _fip_nW = nW, nW = _fip_nW;
            int _fip_n = n, n = _fip_n;

            _itn = ort_task_immediate_start(0);
            {
              # 4694 "fft.c"
              fft_twiddle_4(0, m, in, out, W, nW, nW / n, m);
              CANCEL_task_4693 :
                ;
            }
            ort_task_immediate_end(_itn);
          }
        else
          {
            struct __taskenv__ {
                int m;
                struct _noname16_ (* in);
                struct _noname16_ (* out);
                struct _noname16_ (* W);
                int nW;
                int n;
              } * _tenv;

            _tenv = (struct __taskenv__ *) ort_taskenv_alloc(sizeof(struct __taskenv__), _taskFunc34_);
            /* byvalue variables */
            _tenv->m = m;
            _tenv->in = in;
            _tenv->out = out;
            _tenv->W = W;
            _tenv->nW = nW;
            _tenv->n = n;
            ort_new_task(_taskFunc34_, (void *) _tenv, 0, 0, 1, 0, (void *) 0, 0, 0, 0);
            /* no other operations */
          }
      }
    else
      # 4707 "fft.c"
      if (r == 8)
        {
          /* (l4696) #pragma omp task untied
 */
          # 4696 "fft.c"
          if (omp_in_final() || ort_task_throttling())
            {
              void * _itn;

              /* byvalue variables */
              int _fip_m = m, m = _fip_m;
              struct _noname16_ (* _fip_in) = in, (* in) = _fip_in;
              struct _noname16_ (* _fip_out) = out, (* out) = _fip_out;
              struct _noname16_ (* _fip_W) = W, (* W) = _fip_W;
              int _fip_nW = nW, nW = _fip_nW;
              int _fip_n = n, n = _fip_n;

              _itn = ort_task_immediate_start(0);
              {
                # 4697 "fft.c"
                fft_twiddle_8(0, m, in, out, W, nW, nW / n, m);
                CANCEL_task_4696 :
                  ;
              }
              ort_task_immediate_end(_itn);
            }
          else
            {
              struct __taskenv__ {
                  int m;
                  struct _noname16_ (* in);
                  struct _noname16_ (* out);
                  struct _noname16_ (* W);
                  int nW;
                  int n;
                } * _tenv;

              _tenv = (struct __taskenv__ *) ort_taskenv_alloc(sizeof(struct __taskenv__), _taskFunc35_);
              /* byvalue variables */
              _tenv->m = m;
              _tenv->in = in;
              _tenv->out = out;
              _tenv->W = W;
              _tenv->nW = nW;
              _tenv->n = n;
              ort_new_task(_taskFunc35_, (void *) _tenv, 0, 0, 1, 0, (void *) 0, 0, 0, 0);
              /* no other operations */
            }
        }
      else
        # 4707 "fft.c"
        if (r == 16)
          {
            /* (l4699) #pragma omp task untied
 */
            # 4699 "fft.c"
            if (omp_in_final() || ort_task_throttling())
              {
                void * _itn;

                /* byvalue variables */
                int _fip_m = m, m = _fip_m;
                struct _noname16_ (* _fip_in) = in, (* in) = _fip_in;
                struct _noname16_ (* _fip_out) = out, (* out) = _fip_out;
                struct _noname16_ (* _fip_W) = W, (* W) = _fip_W;
                int _fip_nW = nW, nW = _fip_nW;
                int _fip_n = n, n = _fip_n;

                _itn = ort_task_immediate_start(0);
                {
                  # 4700 "fft.c"
                  fft_twiddle_16(0, m, in, out, W, nW, nW / n, m);
                  CANCEL_task_4699 :
                    ;
                }
                ort_task_immediate_end(_itn);
              }
            else
              {
                struct __taskenv__ {
                    int m;
                    struct _noname16_ (* in);
                    struct _noname16_ (* out);
                    struct _noname16_ (* W);
                    int nW;
                    int n;
                  } * _tenv;

                _tenv = (struct __taskenv__ *) ort_taskenv_alloc(sizeof(struct __taskenv__), _taskFunc36_);
                /* byvalue variables */
                _tenv->m = m;
                _tenv->in = in;
                _tenv->out = out;
                _tenv->W = W;
                _tenv->nW = nW;
                _tenv->n = n;
                ort_new_task(_taskFunc36_, (void *) _tenv, 0, 0, 1, 0, (void *) 0, 0, 0, 0);
                /* no other operations */
              }
          }
        else
          # 4707 "fft.c"
          if (r == 32)
            {
              /* (l4702) #pragma omp task untied
 */
              # 4702 "fft.c"
              if (omp_in_final() || ort_task_throttling())
                {
                  void * _itn;

                  /* byvalue variables */
                  int _fip_m = m, m = _fip_m;
                  struct _noname16_ (* _fip_in) = in, (* in) = _fip_in;
                  struct _noname16_ (* _fip_out) = out, (* out) = _fip_out;
                  struct _noname16_ (* _fip_W) = W, (* W) = _fip_W;
                  int _fip_nW = nW, nW = _fip_nW;
                  int _fip_n = n, n = _fip_n;

                  _itn = ort_task_immediate_start(0);
                  {
                    # 4703 "fft.c"
                    fft_twiddle_32(0, m, in, out, W, nW, nW / n, m);
                    CANCEL_task_4702 :
                      ;
                  }
                  ort_task_immediate_end(_itn);
                }
              else
                {
                  struct __taskenv__ {
                      int m;
                      struct _noname16_ (* in);
                      struct _noname16_ (* out);
                      struct _noname16_ (* W);
                      int nW;
                      int n;
                    } * _tenv;

                  _tenv = (struct __taskenv__ *) ort_taskenv_alloc(sizeof(struct __taskenv__), _taskFunc37_);
                  /* byvalue variables */
                  _tenv->m = m;
                  _tenv->in = in;
                  _tenv->out = out;
                  _tenv->W = W;
                  _tenv->nW = nW;
                  _tenv->n = n;
                  ort_new_task(_taskFunc37_, (void *) _tenv, 0, 0, 1, 0, (void *) 0, 0, 0, 0);
                  /* no other operations */
                }
            }
          else
            # 4704 "fft.c"
            {
              /* (l4705) #pragma omp task untied
 */
              # 4705 "fft.c"
              if (omp_in_final() || ort_task_throttling())
                {
                  void * _itn;

                  /* byvalue variables */
                  int _fip_m = m, m = _fip_m;
                  struct _noname16_ (* _fip_in) = in, (* in) = _fip_in;
                  struct _noname16_ (* _fip_out) = out, (* out) = _fip_out;
                  struct _noname16_ (* _fip_W) = W, (* W) = _fip_W;
                  int _fip_nW = nW, nW = _fip_nW;
                  int _fip_n = n, n = _fip_n;
                  int _fip_r = r, r = _fip_r;

                  _itn = ort_task_immediate_start(0);
                  {
                    # 4706 "fft.c"
                    fft_twiddle_gen(0, m, in, out, W, nW, nW / n, r, m);
                    CANCEL_task_4705 :
                      ;
                  }
                  ort_task_immediate_end(_itn);
                }
              else
                {
                  struct __taskenv__ {
                      int m;
                      struct _noname16_ (* in);
                      struct _noname16_ (* out);
                      struct _noname16_ (* W);
                      int nW;
                      int n;
                      int r;
                    } * _tenv;

                  _tenv = (struct __taskenv__ *) ort_taskenv_alloc(sizeof(struct __taskenv__), _taskFunc38_);
                  /* byvalue variables */
                  _tenv->m = m;
                  _tenv->in = in;
                  _tenv->out = out;
                  _tenv->W = W;
                  _tenv->nW = nW;
                  _tenv->n = n;
                  _tenv->r = r;
                  ort_new_task(_taskFunc38_, (void *) _tenv, 0, 0, 1, 0, (void *) 0, 0, 0, 0);
                  /* no other operations */
                }
            }
  /* (l4709) #pragma omp taskwait 
 */
  # 4709 "fft.c"
  ort_taskwait(0);
  # 4711 "fft.c"
  return;
}


static void * _taskFunc27_(void * __arg)
{
  struct __taskenv__ {
      int m;
      struct _noname16_ (* in);
      struct _noname16_ (* out);
    };
  struct __taskenv__ * _tenv = (struct __taskenv__ *) __arg;

  /* byvalue variables */
  int m = _tenv->m;
  struct _noname16_ (* in) = _tenv->in;
  struct _noname16_ (* out) = _tenv->out;

  /* no initializations */
  /* (l4660) #pragma omp task untied
 -- body moved below */
  # 4660 "fft.c"
  {
    # 4661 "fft.c"
    fft_unshuffle_32(0, m, in, out, m);
    CANCEL_task_4660 :
      ;
  }
  /* no other operations */
  ort_taskenv_free(_tenv, _taskFunc27_);
  return ((void *) 0);
}


static void * _taskFunc28_(void * __arg)
{
  struct __taskenv__ {
      int m;
      struct _noname16_ (* in);
      struct _noname16_ (* out);
    };
  struct __taskenv__ * _tenv = (struct __taskenv__ *) __arg;

  /* byvalue variables */
  int m = _tenv->m;
  struct _noname16_ (* in) = _tenv->in;
  struct _noname16_ (* out) = _tenv->out;

  /* no initializations */
  /* (l4663) #pragma omp task untied
 -- body moved below */
  # 4663 "fft.c"
  {
    # 4664 "fft.c"
    fft_unshuffle_16(0, m, in, out, m);
    CANCEL_task_4663 :
      ;
  }
  /* no other operations */
  ort_taskenv_free(_tenv, _taskFunc28_);
  return ((void *) 0);
}


static void * _taskFunc29_(void * __arg)
{
  struct __taskenv__ {
      int m;
      struct _noname16_ (* in);
      struct _noname16_ (* out);
    };
  struct __taskenv__ * _tenv = (struct __taskenv__ *) __arg;

  /* byvalue variables */
  int m = _tenv->m;
  struct _noname16_ (* in) = _tenv->in;
  struct _noname16_ (* out) = _tenv->out;

  /* no initializations */
  /* (l4666) #pragma omp task untied
 -- body moved below */
  # 4666 "fft.c"
  {
    # 4667 "fft.c"
    fft_unshuffle_8(0, m, in, out, m);
    CANCEL_task_4666 :
      ;
  }
  /* no other operations */
  ort_taskenv_free(_tenv, _taskFunc29_);
  return ((void *) 0);
}


static void * _taskFunc30_(void * __arg)
{
  struct __taskenv__ {
      int m;
      struct _noname16_ (* in);
      struct _noname16_ (* out);
    };
  struct __taskenv__ * _tenv = (struct __taskenv__ *) __arg;

  /* byvalue variables */
  int m = _tenv->m;
  struct _noname16_ (* in) = _tenv->in;
  struct _noname16_ (* out) = _tenv->out;

  /* no initializations */
  /* (l4669) #pragma omp task untied
 -- body moved below */
  # 4669 "fft.c"
  {
    # 4670 "fft.c"
    fft_unshuffle_4(0, m, in, out, m);
    CANCEL_task_4669 :
      ;
  }
  /* no other operations */
  ort_taskenv_free(_tenv, _taskFunc30_);
  return ((void *) 0);
}


static void * _taskFunc31_(void * __arg)
{
  struct __taskenv__ {
      int m;
      struct _noname16_ (* in);
      struct _noname16_ (* out);
    };
  struct __taskenv__ * _tenv = (struct __taskenv__ *) __arg;

  /* byvalue variables */
  int m = _tenv->m;
  struct _noname16_ (* in) = _tenv->in;
  struct _noname16_ (* out) = _tenv->out;

  /* no initializations */
  /* (l4672) #pragma omp task untied
 -- body moved below */
  # 4672 "fft.c"
  {
    # 4673 "fft.c"
    fft_unshuffle_2(0, m, in, out, m);
    CANCEL_task_4672 :
      ;
  }
  /* no other operations */
  ort_taskenv_free(_tenv, _taskFunc31_);
  return ((void *) 0);
}


static void * _taskFunc32_(void * __arg)
{
  struct __taskenv__ {
      int m;
      struct _noname16_ (* out);
      int k;
      struct _noname16_ (* in);
      int * factors;
      struct _noname16_ (* W);
      int nW;
    };
  struct __taskenv__ * _tenv = (struct __taskenv__ *) __arg;

  /* byvalue variables */
  int m = _tenv->m;
  struct _noname16_ (* out) = _tenv->out;
  int k = _tenv->k;
  struct _noname16_ (* in) = _tenv->in;
  int * factors = _tenv->factors;
  struct _noname16_ (* W) = _tenv->W;
  int nW = _tenv->nW;

  /* no initializations */
  /* (l4680) #pragma omp task untied
 -- body moved below */
  # 4680 "fft.c"
  {
    # 4681 "fft.c"
    fft_aux(m, out + k, in + k, factors + 1, W, nW);
    CANCEL_task_4680 :
      ;
  }
  /* no other operations */
  ort_taskenv_free(_tenv, _taskFunc32_);
  return ((void *) 0);
}


static void * _taskFunc33_(void * __arg)
{
  struct __taskenv__ {
      int m;
      struct _noname16_ (* in);
      struct _noname16_ (* out);
      struct _noname16_ (* W);
      int nW;
      int n;
    };
  struct __taskenv__ * _tenv = (struct __taskenv__ *) __arg;

  /* byvalue variables */
  int m = _tenv->m;
  struct _noname16_ (* in) = _tenv->in;
  struct _noname16_ (* out) = _tenv->out;
  struct _noname16_ (* W) = _tenv->W;
  int nW = _tenv->nW;
  int n = _tenv->n;

  /* no initializations */
  /* (l4690) #pragma omp task untied
 -- body moved below */
  # 4690 "fft.c"
  {
    # 4691 "fft.c"
    fft_twiddle_2(0, m, in, out, W, nW, nW / n, m);
    CANCEL_task_4690 :
      ;
  }
  /* no other operations */
  ort_taskenv_free(_tenv, _taskFunc33_);
  return ((void *) 0);
}


static void * _taskFunc34_(void * __arg)
{
  struct __taskenv__ {
      int m;
      struct _noname16_ (* in);
      struct _noname16_ (* out);
      struct _noname16_ (* W);
      int nW;
      int n;
    };
  struct __taskenv__ * _tenv = (struct __taskenv__ *) __arg;

  /* byvalue variables */
  int m = _tenv->m;
  struct _noname16_ (* in) = _tenv->in;
  struct _noname16_ (* out) = _tenv->out;
  struct _noname16_ (* W) = _tenv->W;
  int nW = _tenv->nW;
  int n = _tenv->n;

  /* no initializations */
  /* (l4693) #pragma omp task untied
 -- body moved below */
  # 4693 "fft.c"
  {
    # 4694 "fft.c"
    fft_twiddle_4(0, m, in, out, W, nW, nW / n, m);
    CANCEL_task_4693 :
      ;
  }
  /* no other operations */
  ort_taskenv_free(_tenv, _taskFunc34_);
  return ((void *) 0);
}


static void * _taskFunc35_(void * __arg)
{
  struct __taskenv__ {
      int m;
      struct _noname16_ (* in);
      struct _noname16_ (* out);
      struct _noname16_ (* W);
      int nW;
      int n;
    };
  struct __taskenv__ * _tenv = (struct __taskenv__ *) __arg;

  /* byvalue variables */
  int m = _tenv->m;
  struct _noname16_ (* in) = _tenv->in;
  struct _noname16_ (* out) = _tenv->out;
  struct _noname16_ (* W) = _tenv->W;
  int nW = _tenv->nW;
  int n = _tenv->n;

  /* no initializations */
  /* (l4696) #pragma omp task untied
 -- body moved below */
  # 4696 "fft.c"
  {
    # 4697 "fft.c"
    fft_twiddle_8(0, m, in, out, W, nW, nW / n, m);
    CANCEL_task_4696 :
      ;
  }
  /* no other operations */
  ort_taskenv_free(_tenv, _taskFunc35_);
  return ((void *) 0);
}


static void * _taskFunc36_(void * __arg)
{
  struct __taskenv__ {
      int m;
      struct _noname16_ (* in);
      struct _noname16_ (* out);
      struct _noname16_ (* W);
      int nW;
      int n;
    };
  struct __taskenv__ * _tenv = (struct __taskenv__ *) __arg;

  /* byvalue variables */
  int m = _tenv->m;
  struct _noname16_ (* in) = _tenv->in;
  struct _noname16_ (* out) = _tenv->out;
  struct _noname16_ (* W) = _tenv->W;
  int nW = _tenv->nW;
  int n = _tenv->n;

  /* no initializations */
  /* (l4699) #pragma omp task untied
 -- body moved below */
  # 4699 "fft.c"
  {
    # 4700 "fft.c"
    fft_twiddle_16(0, m, in, out, W, nW, nW / n, m);
    CANCEL_task_4699 :
      ;
  }
  /* no other operations */
  ort_taskenv_free(_tenv, _taskFunc36_);
  return ((void *) 0);
}


static void * _taskFunc37_(void * __arg)
{
  struct __taskenv__ {
      int m;
      struct _noname16_ (* in);
      struct _noname16_ (* out);
      struct _noname16_ (* W);
      int nW;
      int n;
    };
  struct __taskenv__ * _tenv = (struct __taskenv__ *) __arg;

  /* byvalue variables */
  int m = _tenv->m;
  struct _noname16_ (* in) = _tenv->in;
  struct _noname16_ (* out) = _tenv->out;
  struct _noname16_ (* W) = _tenv->W;
  int nW = _tenv->nW;
  int n = _tenv->n;

  /* no initializations */
  /* (l4702) #pragma omp task untied
 -- body moved below */
  # 4702 "fft.c"
  {
    # 4703 "fft.c"
    fft_twiddle_32(0, m, in, out, W, nW, nW / n, m);
    CANCEL_task_4702 :
      ;
  }
  /* no other operations */
  ort_taskenv_free(_tenv, _taskFunc37_);
  return ((void *) 0);
}


static void * _taskFunc38_(void * __arg)
{
  struct __taskenv__ {
      int m;
      struct _noname16_ (* in);
      struct _noname16_ (* out);
      struct _noname16_ (* W);
      int nW;
      int n;
      int r;
    };
  struct __taskenv__ * _tenv = (struct __taskenv__ *) __arg;

  /* byvalue variables */
  int m = _tenv->m;
  struct _noname16_ (* in) = _tenv->in;
  struct _noname16_ (* out) = _tenv->out;
  struct _noname16_ (* W) = _tenv->W;
  int nW = _tenv->nW;
  int n = _tenv->n;
  int r = _tenv->r;

  /* no initializations */
  /* (l4705) #pragma omp task untied
 -- body moved below */
  # 4705 "fft.c"
  {
    # 4706 "fft.c"
    fft_twiddle_gen(0, m, in, out, W, nW, nW / n, r, m);
    CANCEL_task_4705 :
      ;
  }
  /* no other operations */
  ort_taskenv_free(_tenv, _taskFunc38_);
  return ((void *) 0);
}


void fft_aux_seq(int n, struct _noname16_ (* in), struct _noname16_ (* out), int * factors, struct _noname16_ (* W), int nW)
# 4715 "fft.c"
{
  int r, m;
  int k;

  if (n == 32)
    {
      fft_base_32(in, out);
      return;
    }
  if (n == 16)
    {
      fft_base_16(in, out);
      return;
    }
  if (n == 8)
    {
      fft_base_8(in, out);
      return;
    }
  if (n == 4)
    {
      fft_base_4(in, out);
      return;
    }
  if (n == 2)
    {
      fft_base_2(in, out);
      return;
    }
  r = *factors;
  m = n / r;
  if (r < n)
    {
      if (r == 32)
        fft_unshuffle_32_seq(0, m, in, out, m);
      else
        if (r == 16)
          fft_unshuffle_16_seq(0, m, in, out, m);
        else
          if (r == 8)
            fft_unshuffle_8_seq(0, m, in, out, m);
          else
            if (r == 4)
              fft_unshuffle_4_seq(0, m, in, out, m);
            else
              if (r == 2)
                fft_unshuffle_2_seq(0, m, in, out, m);
              else
                unshuffle_seq(0, m, in, out, r, m);
      for (k = 0; k < n; k += m)
        {
          fft_aux_seq(m, out + k, in + k, factors + 1, W, nW);
        }
    }
  if (r == 2)
    fft_twiddle_2_seq(0, m, in, out, W, nW, nW / n, m);
  else
    if (r == 4)
      fft_twiddle_4_seq(0, m, in, out, W, nW, nW / n, m);
    else
      if (r == 8)
        fft_twiddle_8_seq(0, m, in, out, W, nW, nW / n, m);
      else
        if (r == 16)
          fft_twiddle_16_seq(0, m, in, out, W, nW, nW / n, m);
        else
          if (r == 32)
            fft_twiddle_32_seq(0, m, in, out, W, nW, nW / n, m);
          else
            fft_twiddle_gen_seq(0, m, in, out, W, nW, nW / n, r, m);
  return;
}

static void * _thrFunc1_(void *);
static void * _taskFunc40_(void *);
static void * _thrFunc0_(void *);
static void * _taskFunc39_(void *);


void fft(int n, struct _noname16_ (* in), struct _noname16_ (* out))
{
  int factors[ 40];
  int * p = factors;
  int l = n;
  int r;
  struct _noname16_ (* W);

  {
    if (bots_verbose_mode >= BOTS_VERBOSE_DEFAULT)
      {
        fprintf(stdout, "Computing coefficients ");
      }
  }
  ;
  W = (struct _noname16_ (*)) malloc((n + 1) * sizeof(struct _noname16_));
  /* (l4789) #pragma omp parallel 
 */
  {
    struct __shvt__ {
        int (* n);
        struct _noname16_ (* (* W));
      } _shvars;

    /* byref variables */
    _shvars.n = &n;
    _shvars.W = &W;
    ort_execute_parallel(_thrFunc0_, (void *) &_shvars, -1, 0, 0);
    /* no other operations */
  }
  # 4792 "fft.c"
  {
    if (bots_verbose_mode >= BOTS_VERBOSE_DEFAULT)
      {
        fprintf(stdout, " completed!\n");
      }
  }
  ;
  do
    {
      r = factor(l);
      *p++ = r;
      l /= r;
    }
  while (l > 1);

  {
    if (bots_verbose_mode >= BOTS_VERBOSE_DEFAULT)
      {
        fprintf(stdout, "Computing FFT ");
      }
  }
  ;
  /* (l4806) #pragma omp parallel 
 */
  {
    struct __shvt__ {
        int (* n);
        struct _noname16_ (* (* in));
        struct _noname16_ (* (* out));
        int (* factors)[ 40];
        struct _noname16_ (* (* W));
      } _shvars;

    /* byref variables */
    _shvars.n = &n;
    _shvars.in = &in;
    _shvars.out = &out;
    _shvars.factors = &factors;
    _shvars.W = &W;
    ort_execute_parallel(_thrFunc1_, (void *) &_shvars, -1, 0, 0);
    /* no other operations */
  }
  # 4809 "fft.c"
  {
    if (bots_verbose_mode >= BOTS_VERBOSE_DEFAULT)
      {
        fprintf(stdout, " completed!\n");
      }
  }
  ;
  free(W);
  return;
}


static void * _taskFunc39_(void * __arg)
{
  struct __taskenv__ {
      int (* n);
      struct _noname16_ (* (* W));
    };
  struct __taskenv__ * _tenv = (struct __taskenv__ *) __arg;

  /* byref variables */
  int (* n) = _tenv->n;
  struct _noname16_ (* (* W)) = _tenv->W;

  /* no initializations */
  /* (l4791) #pragma omp task untied
 -- body moved below */
  # 4791 "fft.c"
  {
    # 4792 "fft.c"
    compute_w_coefficients((*n), 0, (*n) / 2, (*W));
    CANCEL_task_4791 :
      ;
  }
  /* no other operations */
  ort_taskenv_free(_tenv, _taskFunc39_);
  return ((void *) 0);
}


static void * _thrFunc0_(void * __arg)
{
  struct __shvt__ {
      int (* n);
      struct _noname16_ (* (* W));
    };
  struct __shvt__ * _shvars = (struct __shvt__ *) __arg;

  /* byref variables */
  int (* n) = _shvars->n;
  struct _noname16_ (* (* W)) = _shvars->W;

  /* no initializations */
  /* (l4789) #pragma omp parallel 
 -- body moved below */
  # 4789 "fft.c"
  {
    /* (l4790) #pragma omp single 
 */
    # 4790 "fft.c"
    if (ort_mysingle(1))
      /* (l4791) #pragma omp task untied
 */
      # 4791 "fft.c"
      if (omp_in_final() || ort_task_throttling())
        {
          void * _itn;

          _itn = ort_task_immediate_start(0);
          {
            # 4792 "fft.c"
            compute_w_coefficients((*n), 0, (*n) / 2, (*W));
            CANCEL_task_4791 :
              ;
          }
          ort_task_immediate_end(_itn);
        }
      else
        {
          struct __taskenv__ {
              int (* n);
              struct _noname16_ (* (* W));
            };
          struct __taskenv__ * _tenv;

          _tenv = (struct __taskenv__ *) ort_taskenv_alloc(sizeof(struct __taskenv__), _taskFunc39_);
          /* byref variables */
          _tenv->n = &(*n);
          _tenv->W = &(*W);
          ort_new_task(_taskFunc39_, (void *) _tenv, 0, 0, 1, 0, (void *) 0, 0, 0, 0);
          /* no other operations */
        }
    ort_leaving_single();
  }
  /* no other operations */
  CANCEL_parallel_4789 :
    ort_taskwait(2);
  return ((void *) 0);
}


static void * _taskFunc40_(void * __arg)
{
  struct __taskenv__ {
      int (* n);
      struct _noname16_ (* (* in));
      struct _noname16_ (* (* out));
      int (* factors)[ 40];
      struct _noname16_ (* (* W));
    };
  struct __taskenv__ * _tenv = (struct __taskenv__ *) __arg;

  /* byref variables */
  int (* n) = _tenv->n;
  struct _noname16_ (* (* in)) = _tenv->in;
  struct _noname16_ (* (* out)) = _tenv->out;
  int (* factors)[ 40] = _tenv->factors;
  struct _noname16_ (* (* W)) = _tenv->W;

  /* no initializations */
  /* (l4808) #pragma omp task untied
 -- body moved below */
  # 4808 "fft.c"
  {
    # 4809 "fft.c"
    fft_aux((*n), (*in), (*out), (*factors), (*W), (*n));
    CANCEL_task_4808 :
      ;
  }
  /* no other operations */
  ort_taskenv_free(_tenv, _taskFunc40_);
  return ((void *) 0);
}


static void * _thrFunc1_(void * __arg)
{
  struct __shvt__ {
      int (* n);
      struct _noname16_ (* (* in));
      struct _noname16_ (* (* out));
      int (* factors)[ 40];
      struct _noname16_ (* (* W));
    };
  struct __shvt__ * _shvars = (struct __shvt__ *) __arg;

  /* byref variables */
  int (* n) = _shvars->n;
  struct _noname16_ (* (* in)) = _shvars->in;
  struct _noname16_ (* (* out)) = _shvars->out;
  int (* factors)[ 40] = _shvars->factors;
  struct _noname16_ (* (* W)) = _shvars->W;

  /* no initializations */
  /* (l4806) #pragma omp parallel 
 -- body moved below */
  # 4806 "fft.c"
  {
    /* (l4807) #pragma omp single 
 */
    # 4807 "fft.c"
    if (ort_mysingle(1))
      /* (l4808) #pragma omp task untied
 */
      # 4808 "fft.c"
      if (omp_in_final() || ort_task_throttling())
        {
          void * _itn;

          _itn = ort_task_immediate_start(0);
          {
            # 4809 "fft.c"
            fft_aux((*n), (*in), (*out), (*factors), (*W), (*n));
            CANCEL_task_4808 :
              ;
          }
          ort_task_immediate_end(_itn);
        }
      else
        {
          struct __taskenv__ {
              int (* n);
              struct _noname16_ (* (* in));
              struct _noname16_ (* (* out));
              int (* factors)[ 40];
              struct _noname16_ (* (* W));
            };
          struct __taskenv__ * _tenv;

          _tenv = (struct __taskenv__ *) ort_taskenv_alloc(sizeof(struct __taskenv__), _taskFunc40_);
          /* byref variables */
          _tenv->n = &(*n);
          _tenv->in = &(*in);
          _tenv->out = &(*out);
          _tenv->factors = &(*factors);
          _tenv->W = &(*W);
          ort_new_task(_taskFunc40_, (void *) _tenv, 0, 0, 1, 0, (void *) 0, 0, 0, 0);
          /* no other operations */
        }
    ort_leaving_single();
  }
  /* no other operations */
  CANCEL_parallel_4806 :
    ort_taskwait(2);
  return ((void *) 0);
}


void fft_seq(int n, struct _noname16_ (* in), struct _noname16_ (* out))
# 4816 "fft.c"
{
  int factors[ 40];
  int * p = factors;
  int l = n;
  int r;
  struct _noname16_ (* W);

  W = (struct _noname16_ (*)) malloc((n + 1) * sizeof(struct _noname16_));
  compute_w_coefficients_seq(n, 0, n / 2, W);
  do
    {
      r = factor(l);
      *p++ = r;
      l /= r;
    }
  while (l > 1);

  fft_aux_seq(n, in, out, factors, W, n);
  free(W);
  return;
}


int test_correctness(int n, struct _noname16_ (* out1), struct _noname16_ (* out2))
{
  int i;
  double a, d, error = 0.0;

  for (i = 0; i < n; ++i)
    {
      a = sqrt((((out1[i]).re) - ((out2[i]).re)) * (((out1[i]).re) - ((out2[i]).re)) + (((out1[i]).im) - ((out2[i]).im)) * (((out1[i]).im) - ((out2[i]).im)));
      d = sqrt(((out2[i]).re) * ((out2[i]).re) + ((out2[i]).im) * ((out2[i]).im));
      if (d < -1.0e-10 || d > 1.0e-10)
        a /= d;
      if (a > error)
        error = a;
    }
  {
    if (bots_verbose_mode >= BOTS_VERBOSE_DEFAULT)
      {
        fprintf(stdout, "relative error=%e\n", error);
      }
  }
  ;
  if (error > 1e-3)
    return (2);
  else
    return (1);
}



