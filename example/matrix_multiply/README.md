# Matrix Multiplication Example

## Overview
Simple matrix multiplication program with OpenMP parallelization for testing the OmpTG pipeline.

## Files
- matrix_mult.c - Original C source code with OpenMP pragmas
- matrix_mult.ll - LLVM intermediate representation  
- matrix_mult.alf - ALF format for WCET analysis
- matrix_mult.asm - Assembly output (reference)
- matrix_mult.o - Object file (reference)

## Pipeline Status
- [x] Step 1: OMPI Processing (skipped - simple enough)
- [x] Step 2: C to ALF conversion (completed)
- [x] Step 3: WCET generation
- [ ] Step 4: Relation file generation
- [ ] Step 5: PCFG generation
- [ ] Step 6: EFG generation
