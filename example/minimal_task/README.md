# Minimal Task Example

## Overview
A simple OpenMP program demonstrating task-based parallelism. The program creates two explicit OpenMP tasks that each call a `work()` function to perform basic computations. This example validates the complete OmpTG WCET analysis pipeline.

## Source Code Structure
- **Main function**: Initializes OpenMP parallel region
- **Task creation**: Two tasks (`_taskFunc0_` and `_taskFunc1_`) 
- **Work function**: Simple loop computation (sum of integers)
- **Synchronization**: `taskwait` pragma ensures task completion

## Pipeline Results

### Completed Steps
| Step | Description | Output |
|------|-------------|--------|
| 1 | OMPi Processing | `minimal_task_ompi.c` |
| 2 | ALF Conversion | `minimal_task_ompi.alf` (476 lines) |
| 3 | WCET Analysis | `minimal_task_ompi.wct` (44 timing entries) |
| 4 | Task Decomposition | 3 task functions with relation files |
| 5 | PCFG Generation | 5 CFG files with WCET annotations |
| 6 | EFG Generation | ❌ NetworkX 3.x compatibility issue |

### Key Generated Files
- **WCET Data**: `minimal_task_ompi.wct` - Timing for all basic blocks (33-46 cycles)
- **Task Functions**: `_taskFunc0_.alf`, `_taskFunc1_.alf`, `_thrFunc0_.alf`
- **Call Relations**: Function dependency graphs in `Generate_file/`
- **Annotated CFGs**: `*_wcet.pdf` files showing control flow with timing
