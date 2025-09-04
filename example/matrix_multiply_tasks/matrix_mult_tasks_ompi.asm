	.file	"matrix_mult_tasks_ompi.ll"
	.text
	.globl	compute_row
	.align	16, 0x90
	.type	compute_row,@function
compute_row:                            # @compute_row
	.cfi_startproc
# BB#0:                                 # %bb
	pushq	%rbp
.Ltmp2:
	.cfi_def_cfa_offset 16
.Ltmp3:
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
.Ltmp4:
	.cfi_def_cfa_register %rbp
	movslq	%edi, %rax
	movl	$B, %ecx
	imulq	$800, %rax, %r8         # imm = 0x320
	leaq	A(%r8), %rdx
	xorl	%esi, %esi
	jmp	.LBB0_1
	.align	16, 0x90
.LBB0_4:                                # %bb25
                                        #   in Loop: Header=BB0_1 Depth=1
	movslq	%esi, %rax
	vmovsd	%xmm0, C(%r8,%rax,8)
	incl	%esi
	addq	$8, %rcx
.LBB0_1:                                # %bb1
                                        # =>This Loop Header: Depth=1
                                        #     Child Loop BB0_2 Depth 2
	vxorps	%xmm0, %xmm0, %xmm0
	movl	$0, %edi
	movq	%rcx, %rax
	cmpl	$99, %esi
	jle	.LBB0_2
	jmp	.LBB0_5
	.align	16, 0x90
.LBB0_3:                                # %bb18
                                        #   in Loop: Header=BB0_2 Depth=2
	vmovsd	(%rdx,%rdi,8), %xmm1
	vmulsd	(%rax), %xmm1, %xmm1
	vaddsd	%xmm1, %xmm0, %xmm0
	addq	$800, %rax              # imm = 0x320
	incq	%rdi
.LBB0_2:                                # %bb3
                                        #   Parent Loop BB0_1 Depth=1
                                        # =>  This Inner Loop Header: Depth=2
	cmpl	$99, %edi
	jle	.LBB0_3
	jmp	.LBB0_4
.LBB0_5:                                # %bb27
	popq	%rbp
	ret
.Ltmp5:
	.size	compute_row, .Ltmp5-compute_row
	.cfi_endproc

	.globl	matrix_multiply_tasks
	.align	16, 0x90
	.type	matrix_multiply_tasks,@function
matrix_multiply_tasks:                  # @matrix_multiply_tasks
	.cfi_startproc
# BB#0:                                 # %bb
	pushq	%rbp
.Ltmp8:
	.cfi_def_cfa_offset 16
.Ltmp9:
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
.Ltmp10:
	.cfi_def_cfa_register %rbp
	xorl	%r8d, %r8d
	xorl	%ecx, %ecx
	jmp	.LBB1_1
	.align	16, 0x90
.LBB1_4:                                # %bb25
                                        #   in Loop: Header=BB1_1 Depth=1
	incl	%ecx
	addq	$100, %r8
.LBB1_1:                                # %bb1
                                        # =>This Loop Header: Depth=1
                                        #     Child Loop BB1_2 Depth 2
	movl	%ecx, %edx
	movq	%r8, %rsi
	movl	$0, %edi
	cmpl	$99, %ecx
	jle	.LBB1_2
	jmp	.LBB1_5
	.align	16, 0x90
.LBB1_3:                                # %bb22
                                        #   in Loop: Header=BB1_2 Depth=2
	leal	(%rcx,%rdi), %eax
	vcvtsi2sdl	%eax, %xmm0, %xmm0
	vmovsd	%xmm0, A(,%rsi,8)
	vxorps	%xmm0, %xmm0, %xmm0
	vcvtsi2sdl	%edx, %xmm0, %xmm0
	vmovsd	%xmm0, B(,%rsi,8)
	movq	$0, C(,%rsi,8)
	incl	%edi
	incq	%rsi
	decl	%edx
.LBB1_2:                                # %bb3
                                        #   Parent Loop BB1_1 Depth=1
                                        # =>  This Inner Loop Header: Depth=2
	cmpl	$99, %edi
	jle	.LBB1_3
	jmp	.LBB1_4
.LBB1_5:                                # %bb27
	movl	$_thrFunc0_, %edi
	xorl	%esi, %esi
	movl	$-1, %edx
	xorl	%ecx, %ecx
	xorl	%r8d, %r8d
	callq	ort_execute_parallel
	popq	%rbp
	ret
.Ltmp11:
	.size	matrix_multiply_tasks, .Ltmp11-matrix_multiply_tasks
	.cfi_endproc

	.align	16, 0x90
	.type	_thrFunc0_,@function
_thrFunc0_:                             # @_thrFunc0_
	.cfi_startproc
# BB#0:                                 # %bb
	pushq	%rbp
.Ltmp15:
	.cfi_def_cfa_offset 16
.Ltmp16:
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
.Ltmp17:
	.cfi_def_cfa_register %rbp
	pushq	%r14
	pushq	%rbx
	subq	$32, %rsp
.Ltmp18:
	.cfi_offset %rbx, -32
.Ltmp19:
	.cfi_offset %r14, -24
	movl	$1, %edi
	callq	ort_mysingle
	testl	%eax, %eax
	je	.LBB2_8
# BB#1:
	xorl	%r14d, %r14d
	jmp	.LBB2_2
	.align	16, 0x90
.LBB2_5:                                # %bb13
                                        #   in Loop: Header=BB2_2 Depth=1
	xorl	%edi, %edi
	callq	ort_task_immediate_start
	movq	%rax, %rbx
	movl	%r14d, %edi
	callq	compute_row
	movq	%rbx, %rdi
	callq	ort_task_immediate_end
	incl	%r14d
.LBB2_2:                                # %bb3
                                        # =>This Inner Loop Header: Depth=1
	cmpl	$99, %r14d
	jg	.LBB2_7
# BB#3:                                 # %bb5
                                        #   in Loop: Header=BB2_2 Depth=1
	callq	omp_in_final
	testl	%eax, %eax
	jne	.LBB2_5
# BB#4:                                 # %bb8
                                        #   in Loop: Header=BB2_2 Depth=1
	callq	ort_task_throttling
	testl	%eax, %eax
	jne	.LBB2_5
# BB#6:                                 # %bb14
                                        #   in Loop: Header=BB2_2 Depth=1
	movl	$4, %edi
	movl	$_taskFunc0_, %esi
	callq	ort_taskenv_alloc
	movl	%r14d, (%rax)
	movl	$0, 24(%rsp)
	movl	$0, 16(%rsp)
	movl	$0, 8(%rsp)
	movq	$0, (%rsp)
	movl	$_taskFunc0_, %edi
	xorl	%edx, %edx
	xorl	%ecx, %ecx
	xorl	%r8d, %r8d
	xorl	%r9d, %r9d
	movq	%rax, %rsi
	callq	ort_new_task
	incl	%r14d
	jmp	.LBB2_2
.LBB2_7:                                # %bb22
	xorl	%edi, %edi
	callq	ort_taskwait
.LBB2_8:                                # %bb24
	xorl	%eax, %eax
	callq	ort_leaving_single
	movl	$2, %edi
	callq	ort_taskwait
	xorl	%eax, %eax
	addq	$32, %rsp
	popq	%rbx
	popq	%r14
	popq	%rbp
	ret
.Ltmp20:
	.size	_thrFunc0_, .Ltmp20-_thrFunc0_
	.cfi_endproc

	.globl	__original_main
	.align	16, 0x90
	.type	__original_main,@function
__original_main:                        # @__original_main
	.cfi_startproc
# BB#0:                                 # %bb
	pushq	%rbp
.Ltmp23:
	.cfi_def_cfa_offset 16
.Ltmp24:
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
.Ltmp25:
	.cfi_def_cfa_register %rbp
	callq	matrix_multiply_tasks
	xorl	%eax, %eax
	popq	%rbp
	ret
.Ltmp26:
	.size	__original_main, .Ltmp26-__original_main
	.cfi_endproc

	.globl	main
	.align	16, 0x90
	.type	main,@function
main:                                   # @main
	.cfi_startproc
# BB#0:                                 # %bb
	pushq	%rbp
.Ltmp30:
	.cfi_def_cfa_offset 16
.Ltmp31:
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
.Ltmp32:
	.cfi_def_cfa_register %rbp
	pushq	%rbx
	subq	$24, %rsp
.Ltmp33:
	.cfi_offset %rbx, -24
	movl	%edi, -12(%rbp)
	movq	%rsi, -24(%rbp)
	xorl	%edx, %edx
	xorl	%ecx, %ecx
	xorl	%eax, %eax
	leaq	-12(%rbp), %rdi
	leaq	-24(%rbp), %rsi
	movl	$.L.str, %r8d
	callq	ort_initialize
	movl	-12(%rbp), %edi
	movq	-24(%rbp), %rsi
	callq	__original_main
	movl	%eax, %ebx
	movl	%ebx, %edi
	callq	ort_finalize
	movl	%ebx, %eax
	addq	$24, %rsp
	popq	%rbx
	popq	%rbp
	ret
.Ltmp34:
	.size	main, .Ltmp34-main
	.cfi_endproc

	.align	16, 0x90
	.type	_taskFunc0_,@function
_taskFunc0_:                            # @_taskFunc0_
	.cfi_startproc
# BB#0:                                 # %bb3
	pushq	%rbp
.Ltmp38:
	.cfi_def_cfa_offset 16
.Ltmp39:
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
.Ltmp40:
	.cfi_def_cfa_register %rbp
	pushq	%rbx
	pushq	%rax
.Ltmp41:
	.cfi_offset %rbx, -24
	movq	%rdi, %rbx
	movl	(%rbx), %edi
	callq	compute_row
	movl	$_taskFunc0_, %esi
	movq	%rbx, %rdi
	callq	ort_taskenv_free
	xorl	%eax, %eax
	addq	$8, %rsp
	popq	%rbx
	popq	%rbp
	ret
.Ltmp42:
	.size	_taskFunc0_, .Ltmp42-_taskFunc0_
	.cfi_endproc

	.type	A,@object               # @A
	.comm	A,80000,16
	.type	B,@object               # @B
	.comm	B,80000,16
	.type	C,@object               # @C
	.comm	C,80000,16
	.type	.L.str,@object          # @.str
	.section	.rodata.str1.1,"aMS",@progbits,1
.L.str:
	.asciz	"dummy"
	.size	.L.str, 6

	.type	__ompi_defs__,@object   # @__ompi_defs__
	.comm	__ompi_defs__,8,8

	.ident	"clang version 3.4 (tags/RELEASE_34/final)"
	.section	".note.GNU-stack","",@progbits
