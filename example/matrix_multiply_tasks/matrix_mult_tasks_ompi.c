/* File generated from [matrix_mult_tasks.pc] by OMPi compiler with torc extensions 2.5.0, Thu Sep  4 02:19:22 2025
$OMPi__nfo:0
*/
# 1 "matrix_mult_tasks.pc"
# 1 "omp.mindefs"
/* (l2) typedef void * omp_nest_lock_t; */
# 2 "injected_code"
/* (l2) typedef void * omp_lock_t; */
# 2 "injected_code"
enum omp_sched_t {
    omp_sched_static = 1, omp_sched_dynamic = 2, omp_sched_guided = 3, omp_sched_auto = 4
  };

/* (l2) typedef enum omp_sched_t omp_sched_t; */
# 2 "injected_code"
int omp_in_parallel(void);
int omp_get_thread_num(void);
int omp_get_num_threads(void);
int omp_in_final(void);
void * ort_memalloc(int size);
void ort_memfree(void * ptr);

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

# 1 "matrix_mult_tasks.pc-newglobals"
#define __DEVSPEC
#define __DEVQLFR
#define __DEVKERN


# 1 "matrix_mult_tasks.pc"
# 1 "ort.onoff.defs"
int ort_initialize(int *, char ***, int, int, ...);
void ort_finalize(int);
# 3 "matrix_mult_tasks.c"
double A[ 100][ 100];
double B[ 100][ 100];
double C[ 100][ 100];


void compute_row(int i)
{
  for (int j = 0; j < 100; j++)
    {
      double sum = 0.0;

      for (int k = 0; k < 100; k++)
        {
          sum += A[i][k] * B[k][j];
        }
      C[i][j] = sum;
    }
}

static void * _thrFunc0_(void *);
static void * _taskFunc0_(void *);


void matrix_multiply_tasks()
{
  for (int i = 0; i < 100; i++)
    {
      for (int j = 0; j < 100; j++)
        {
          A[i][j] = i + j;
          B[i][j] = i - j;
          C[i][j] = 0.0;
        }
    }
  /* (l28) #pragma omp parallel 
 */
  {
    /* no declarations needed */
    /* no initializations */
    ort_execute_parallel(_thrFunc0_, (void *) 0, -1, 0, 0);
    /* no other operations */
  }
}


static void * _taskFunc0_(void * __arg)
{
  struct __taskenv__ {
      int i;
    };
  struct __taskenv__ * _tenv = (struct __taskenv__ *) __arg;

  /* byvalue variables */
  int i = _tenv->i;

  /* no initializations */
  /* (l33) #pragma omp task 
 -- body moved below */
  # 33 "matrix_mult_tasks.c"
  {
    # 34 "matrix_mult_tasks.c"
    compute_row(i);
    CANCEL_task_33 :
      ;
  }
  /* no other operations */
  ort_taskenv_free(_tenv, _taskFunc0_);
  return ((void *) 0);
}


static void * _thrFunc0_(void * __arg)
{
  /* no local declarations */
  /* no initializations */
  /* (l28) #pragma omp parallel 
 -- body moved below */
  # 28 "matrix_mult_tasks.c"
  # 29 "matrix_mult_tasks.c"
  {
    /* (l30) #pragma omp single 
 */
    # 30 "matrix_mult_tasks.c"
    if (ort_mysingle(1))
      # 31 "matrix_mult_tasks.c"
      {
        for (int i = 0; i < 100; i++)
          {
            /* (l33) #pragma omp task 
 */
            # 33 "matrix_mult_tasks.c"
            if (omp_in_final() || ort_task_throttling())
              {
                void * _itn;

                /* byvalue variables */
                int _fip_i = i, i = _fip_i;

                _itn = ort_task_immediate_start(0);
                {
                  # 34 "matrix_mult_tasks.c"
                  compute_row(i);
                  CANCEL_task_33 :
                    ;
                }
                ort_task_immediate_end(_itn);
              }
            else
              {
                struct __taskenv__ {
                    int i;
                  };
                struct __taskenv__ * _tenv;

                _tenv = (struct __taskenv__ *) ort_taskenv_alloc(sizeof(struct __taskenv__), _taskFunc0_);
                /* byvalue variables */
                _tenv->i = i;
                ort_new_task(_taskFunc0_, (void *) _tenv, 0, 0, 0, 0, (void *) 0, 0, 0, 0);
                /* no other operations */
              }
          }
        /* (l36) #pragma omp taskwait 
 */
        # 36 "matrix_mult_tasks.c"
        ort_taskwait(0);
      }
    ort_leaving_single();
  }
  /* no other operations */
  CANCEL_parallel_28 :
    ort_taskwait(2);
  return ((void *) 0);
}


int __original_main(int _argc_ignored, char ** _argv_ignored)
# 41 "matrix_mult_tasks.c"
{
  matrix_multiply_tasks();
  return (0);
}



/* OMPi-generated main() */
int main(int argc, char **argv)
{
  int _xval = 0;

  ort_initialize(&argc, &argv, 0, 0, "dummy");
  _xval = (int) __original_main(argc, argv);
  ort_finalize(_xval);
  return (_xval);
}

