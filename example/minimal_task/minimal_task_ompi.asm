	.file	"minimal_task_ompi.ll"
	.text
	.globl	work
	.align	16, 0x90
	.type	work,@function
work:                                   # @work
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
	xorl	%eax, %eax
	jmp	.LBB0_1
	.align	16, 0x90
.LBB0_2:                                # %bb4
                                        #   in Loop: Header=BB0_1 Depth=1
	incl	%eax
.LBB0_1:                                # %bb1
                                        # =>This Inner Loop Header: Depth=1
	cmpl	%edi, %eax
	jl	.LBB0_2
# BB#3:                                 # %bb6
	popq	%rbp
	ret
.Ltmp5:
	.size	work, .Ltmp5-work
	.cfi_endproc

	.globl	__original_main
	.align	16, 0x90
	.type	__original_main,@function
__original_main:                        # @__original_main
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
	movl	$_thrFunc0_, %edi
	xorl	%esi, %esi
	movl	$-1, %edx
	xorl	%ecx, %ecx
	xorl	%r8d, %r8d
	callq	ort_execute_parallel
	xorl	%eax, %eax
	popq	%rbp
	ret
.Ltmp11:
	.size	__original_main, .Ltmp11-__original_main
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
	pushq	%rbx
	subq	$40, %rsp
.Ltmp18:
	.cfi_offset %rbx, -24
	callq	omp_in_final
	testl	%eax, %eax
	jne	.LBB2_2
# BB#1:                                 # %bb2
	callq	ort_task_throttling
	testl	%eax, %eax
	je	.LBB2_3
.LBB2_2:                                # %bb5
	xorl	%edi, %edi
	callq	ort_task_immediate_start
	movq	%rax, %rbx
	movl	$10, %edi
	callq	work
	movq	%rbx, %rdi
	callq	ort_task_immediate_end
.LBB2_4:                                # %bb9
	callq	omp_in_final
	testl	%eax, %eax
	jne	.LBB2_6
# BB#5:                                 # %bb12
	callq	ort_task_throttling
	testl	%eax, %eax
	je	.LBB2_7
.LBB2_6:                                # %bb15
	xorl	%edi, %edi
	callq	ort_task_immediate_start
	movq	%rax, %rbx
	movl	$20, %edi
	callq	work
	movq	%rbx, %rdi
	callq	ort_task_immediate_end
.LBB2_8:                                # %bb19
	xorl	%edi, %edi
	callq	ort_taskwait
	movl	$2, %edi
	callq	ort_taskwait
	xorl	%eax, %eax
	addq	$40, %rsp
	popq	%rbx
	popq	%rbp
	ret
.LBB2_3:                                # %bb8
	movl	$0, 24(%rsp)
	movl	$0, 16(%rsp)
	movl	$0, 8(%rsp)
	movq	$0, (%rsp)
	movl	$_taskFunc0_, %edi
	xorl	%esi, %esi
	xorl	%edx, %edx
	xorl	%ecx, %ecx
	xorl	%r8d, %r8d
	xorl	%r9d, %r9d
	callq	ort_new_task
	jmp	.LBB2_4
.LBB2_7:                                # %bb18
	movl	$0, 24(%rsp)
	movl	$0, 16(%rsp)
	movl	$0, 8(%rsp)
	movq	$0, (%rsp)
	movl	$_taskFunc1_, %edi
	xorl	%esi, %esi
	xorl	%edx, %edx
	xorl	%ecx, %ecx
	xorl	%r8d, %r8d
	xorl	%r9d, %r9d
	callq	ort_new_task
	jmp	.LBB2_8
.Ltmp19:
	.size	_thrFunc0_, .Ltmp19-_thrFunc0_
	.cfi_endproc

	.globl	main
	.align	16, 0x90
	.type	main,@function
main:                                   # @main
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
	pushq	%rbx
	subq	$24, %rsp
.Ltmp26:
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
.Ltmp27:
	.size	main, .Ltmp27-main
	.cfi_endproc

	.align	16, 0x90
	.type	_taskFunc0_,@function
_taskFunc0_:                            # @_taskFunc0_
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
	movl	$10, %edi
	callq	work
	xorl	%eax, %eax
	popq	%rbp
	ret
.Ltmp33:
	.size	_taskFunc0_, .Ltmp33-_taskFunc0_
	.cfi_endproc

	.align	16, 0x90
	.type	_taskFunc1_,@function
_taskFunc1_:                            # @_taskFunc1_
	.cfi_startproc
# BB#0:                                 # %bb
	pushq	%rbp
.Ltmp36:
	.cfi_def_cfa_offset 16
.Ltmp37:
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
.Ltmp38:
	.cfi_def_cfa_register %rbp
	movl	$20, %edi
	callq	work
	xorl	%eax, %eax
	popq	%rbp
	ret
.Ltmp39:
	.size	_taskFunc1_, .Ltmp39-_taskFunc1_
	.cfi_endproc

	.type	.L.str,@object          # @.str
	.section	.rodata.str1.1,"aMS",@progbits,1
.L.str:
	.asciz	"dummy"
	.size	.L.str, 6

	.type	__ompi_defs__,@object   # @__ompi_defs__
	.comm	__ompi_defs__,8,8

	.ident	"clang version 3.4 (tags/RELEASE_34/final)"
	.section	".note.GNU-stack","",@progbits
