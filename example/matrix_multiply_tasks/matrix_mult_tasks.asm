	.file	"matrix_mult_tasks.ll"
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
.Ltmp9:
	.cfi_def_cfa_offset 16
.Ltmp10:
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
.Ltmp11:
	.cfi_def_cfa_register %rbp
	pushq	%rbx
	pushq	%rax
.Ltmp12:
	.cfi_offset %rbx, -24
	xorl	%ebx, %ebx
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
	.align	16, 0x90
.LBB1_6:                                # %bb31
                                        #   in Loop: Header=BB1_5 Depth=1
	movl	%ebx, %edi
	callq	compute_row
	incl	%ebx
.LBB1_5:                                # %bb28
                                        # =>This Inner Loop Header: Depth=1
	cmpl	$99, %ebx
	jle	.LBB1_6
# BB#7:                                 # %bb33
	addq	$8, %rsp
	popq	%rbx
	popq	%rbp
	ret
.Ltmp13:
	.size	matrix_multiply_tasks, .Ltmp13-matrix_multiply_tasks
	.cfi_endproc

	.globl	main
	.align	16, 0x90
	.type	main,@function
main:                                   # @main
	.cfi_startproc
# BB#0:                                 # %bb
	pushq	%rbp
.Ltmp16:
	.cfi_def_cfa_offset 16
.Ltmp17:
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
.Ltmp18:
	.cfi_def_cfa_register %rbp
	callq	matrix_multiply_tasks
	xorl	%eax, %eax
	popq	%rbp
	ret
.Ltmp19:
	.size	main, .Ltmp19-main
	.cfi_endproc

	.type	A,@object               # @A
	.comm	A,80000,16
	.type	B,@object               # @B
	.comm	B,80000,16
	.type	C,@object               # @C
	.comm	C,80000,16

	.ident	"clang version 3.4 (tags/RELEASE_34/final)"
	.section	".note.GNU-stack","",@progbits
